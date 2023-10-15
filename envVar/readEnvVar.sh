#!/bin/bash
#export $(shell sed 's/=.*//' .env)

if [ -f .env ]; then
  export $(echo $(cat .env | sed 's/#.*//g'))
  ./readEnvVars.out
fi