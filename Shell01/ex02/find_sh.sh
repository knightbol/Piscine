#!/bin/bash
find . -name "*.sh" -print | sed 's/.sh$//' | sed 's|^\./||'
