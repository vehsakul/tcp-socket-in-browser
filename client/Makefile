install: src/client.cpp
	npm run -- node-gyp configure build --asmjs=1
	cp build/Release/nbind.js .
	cp build/Release/nbind.js.mem .
