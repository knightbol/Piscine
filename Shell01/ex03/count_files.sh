#!/bin/bash
ls -a | wc -l | sed 's/       //'
