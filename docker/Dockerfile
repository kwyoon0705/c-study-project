ARG ALPINE_VERSION=3.16

ARG WORKDIR=/usr/app

FROM alpine:${ALPINE_VERSION}

ARG WORKDIR

WORKDIR ${WORKDIR}

RUN apk add --no-cache \
    gcc \
    libc-dev \
    bash

COPY scripts/build_and_run_c /usr/app/build_and_run_c
COPY ./221002/main.c /usr/app

CMD ["bash", "build_and_run_c"]
