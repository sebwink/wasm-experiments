EMCC=em++
EMCC_JS_FLAGS=-O3 -s EXTRA_EXPORTED_RUNTIME_METHODS='["cwrap"]'
EMCC_HTML_FLAGS=

JS=$(patsubst %.cpp, %.js, $(wildcard *.cpp))
HTML=$(patsubst %.cpp, %.html, $(wildcard *.cpp))

js: $(JS)

html: $(HTML)

%.js : %.cpp
	$(EMCC) $(EMCC_JS_FLAGS) -o $@ $<

%.html : %.cpp
	$(EMCC) $(EMCC_HTML_FLAGS) -o $@ $<

clean:
	rm -f *.wasm $(JS) $(HTML)
