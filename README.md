Example demonstrating how websockify and nbind could be used to port a network application using tcp sockets into the web
=========================================================================================================================

###Running
Commands are assumed to be run from repo root
  1. initialize submodules: `git submodule update --init`
  2. build websockify: `cd websockify && make`
  3. build server with CMake (you need boost)

     You may use any program which does some network interaction, I use echo server as an example
  4. build client (optional, since the repo contains prebuilt js code)

     you need emsdk to do this

     `cd client && npm install && make`
  5. run server: `cd websockify && run 8080 -- ./path-to-server-executable 8080`
  6. run client:
    * `cd client && python3 -m http.server`
    * navigate to http://localhost:8000/index.html in a browser
    * open debug console
    * you should see output

      `string: foobar`

      `string size: 6`