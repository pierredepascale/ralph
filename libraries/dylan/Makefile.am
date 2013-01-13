nodist_pkgdata_DATA = dylan-lib.dbc

EXTRA_DIST = exports.ralph misc.ralph cmp.ralph coll.ralph array.ralph vec.ralph string.ralph list.ralph deque.ralph range.ralph stretchy.ralph ext.ralph table.ralph sort.ralph cond.ralph num.ralph ratio.ralph char.ralph func.ralph debug.ralph exit.ralph multilock.ralph semaphore.ralph extern.ralph system.ralph

DYLAN_OBJS = exports.dbc misc.dbc cmp.dbc coll.dbc array.dbc vec.dbc string.dbc list.dbc deque.dbc range.dbc stretchy.dbc ext.dbc table.dbc sort.dbc cond.dbc num.dbc ratio.dbc char.dbc func.dbc debug.dbc exit.dbc multilock.dbc semaphore.dbc extern.dbc system.dbc

MC = ../../src/compiler/mindyc

all: $(nodist_pkgdata_DATA)

.ralph.dbc:
	$(MC) -ldylan -o $@ $<

dylan-lib.dbc: $(DYLAN_OBJS)
	cat $(DYLAN_OBJS) > $@

CLEANFILES=$(nodist_pkgdata_DATA) $(DYLAN_OBJS)
