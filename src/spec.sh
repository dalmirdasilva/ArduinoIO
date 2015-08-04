#!/bin/bash

make clean
make && time ./spec_bin
make clean
