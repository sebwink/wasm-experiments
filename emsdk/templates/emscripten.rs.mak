RUSTC=rustc

JS=$(patsubst %.rs, %.js, $(wildcard *.rs))
HTML=$(patsubst %.rs, %.html, $(wildcard *.rs))
STUFF=$(patsubst %.rs, %, $(wildcard *.rs))

all: $(JS) $(HTML)

js: $(JS)

html: $(HTML)

%.js : %.rs
	$(RUSTC) --target=wasm32-unknown-emscripten $<

%.html : %.rs
	$(RUSTC) --target=wasm32-unknown-emscripten $< -o $@

clean:
	rm -f $(JS) $(HTML) *.wasm
