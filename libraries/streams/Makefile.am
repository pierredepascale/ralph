nodist_pkgdata_DATA = streams-lib.dbc

EXTRA_DIST = library.dylan internals.dylan streams.dylan stream-reading.dylan stream-writing.dylan stream-lines.dylan stream-buffers.dylan wrapper-streams.dylan file-streams.dylan bbso-stream.dylan stream-reading-buf.dylan piped-exec.dylan


DYLAN_OBJS = $(EXTRA_DIST:.dylan=.dbc)

MC = ../../src/compiler/mindyc

all: $(nodist_pkgdata_DATA)

.dylan.dbc:
	$(MC) -ldylan -o $@ $<

streams-lib.dbc: $(DYLAN_OBJS)
	cat $(DYLAN_OBJS) > $@

CLEANFILES=$(nodist_pkgdata_DATA) $(DYLAN_OBJS)
