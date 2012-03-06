TABLE_PREFIX = nvCtrlTable
MODULE = nvgpu-snmp.so

NETSNMP_CONFIG = net-snmp-config
NETSNMP_CFLAGS := $(shell $(NETSNMP_CONFIG) --base-cflags)
NETSNMP_LIBS := $(shell $(NETSNMP_CONFIG) --agent-libs)

NETSNMP_PREFIX = $(shell $(NETSNMP_CONFIG) --prefix)
NETSNMP_MIBS_DIR = $(NETSNMP_PREFIX)/share/snmp/mibs
NETSNMP_LIBS_DIR = $(NETSNMP_PREFIX)/lib/snmp/dlmod

CFLAGS += $(NETSNMP_CFLAGS) -fPIC -Wall -Wstrict-prototypes
LDFLAGS += $(NETSNMP_LIBS) -lXext -lX11

OBJS = nvCtrlTable.o nvCtrlTable_data_access.o nvCtrlTable_data_get.o nvCtrlTable_interface.o NVCtrl.o

all: $(MODULE)

$(MODULE): $(OBJS)
	$(CC) -shared -o $(MODULE) $(OBJS) $(LDFLAGS)

clean:
	rm -f $(OBJS) $(MODULE)

install: $(MODULE)
	install -d $(DESTDIR)$(NETSNMP_MIBS_DIR)
	install -m 644 NV-CTRL-MIB.txt $(DESTDIR)$(NETSNMP_MIBS_DIR)
	install -d $(DESTDIR)$(NETSNMP_LIBS_DIR)
	install -m 644 -s $(MODULE) $(DESTDIR)$(NETSNMP_LIBS_DIR)

