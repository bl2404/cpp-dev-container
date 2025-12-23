FROM ubuntu:latest

RUN apt-get update
RUN apt-get install git build-essential cmake gdb -y

ENTRYPOINT ["/bin/bash"]

