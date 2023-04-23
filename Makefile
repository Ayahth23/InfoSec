# Run attack
run:
	# Compile bugged compiler (A) with clean compiler (CC=gcc)
	@echo "[*] Compiling compiler A"
	( cd tinycc_A; ./configure; make; sudo make install; )
	# Compile fresh compiler (B) with bugged compiler (A) (CC=/usr/local/bin/tcc)
	@echo "[*] Compiling compiler B"
	( cd tinycc_B; ./configure; make CC="/usr/local/bin/tcc"; sudo make install; )
	# Compile login.c with Compiler B
	@echo "[*] Compiling login.c with compiler B"
	/usr/local/bin/tcc login.c -o login

# Clean caches from makes
clean:
	( cd tinycc_A; sudo make uninstall; make clean; )
	( cd tinycc_B; make clean; )
	( rm login )
