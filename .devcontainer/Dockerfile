FROM mcr.microsoft.com/devcontainers/base:jammy

RUN apt update -y
RUN apt install -y build-essential cmake wget curl libboost-all-dev
RUN wget "https://github.com/CrowCpp/Crow/releases/download/v1.0%2B5/crow-v1.0+5.deb"
RUN apt install -y ./crow-v1.0+5.deb
RUN rm crow-v1.0+5.deb
