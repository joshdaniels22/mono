#!/bin/bash

set -e

gcc main.c -o notegen

sudo mv notegen /usr/local/bin/notegen

