.PHONY: static dynamic

all:
	@echo Please specify target: clean, static, dynamic, or stat_enc, stat_dec, dyn_enc, dyn_dec

static: stat_dec stat_enc

dynamic: dynamic_dec dynamic_enc

stat_dec:
	make -f Makefile_Stat_Dec

stat_enc:
	make -f Makefile_Stat_Enc

dynamic_dec:
	make -f Makefile_Dynam_Dec

dynamic_enc:
	make -f Makefile_Dynam_Enc

clean:
	rm -f *.o
	rm -f *.a
	rm -f *.so
	rm -f decoder
	rm -f encoder