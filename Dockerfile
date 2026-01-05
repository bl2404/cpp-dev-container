FROM ubuntu:latest

RUN apt-get update
RUN apt-get install git build-essential cmake gdb ninja-build -y

ENTRYPOINT ["/bin/bash"]

