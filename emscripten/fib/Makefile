EMCC=emcc
EMCC_JS_FLAGS=-s EXTRA_EXPORTED_RUNTIME_METHODS='["cwrap"]'
EMCC_HTML_FLAGS=

JS=$(patsubst %.c, %.js, $(wildcard *.c))
HTML=$(patsubst %.c, %.html, $(wildcard *.c))

js: $(JS)

html: $(HTML)

%.js : %.c
	$(EMCC) $(EMCC_JS_FLAGS) -o $@ $<

%.html : %.c
	$(EMCC) $(EMCC_HTML_FLAGS) -o $@ $<

clean:
	rm -f *.wasm $(JS) $(HTML)
