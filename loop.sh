#!/bin/bash

  for((i=0; i<= 30; i++))
  do
    /usr/bin/time -f "\nResultado Time:\nTempo decorrido: %E \nMedia de memoria usada: %K \nPercentual de CPU: %P \nVarrido da Memoria Principal: %W \nTempo real decorrido: %e" -a -o ads_docker.log ./main
  done
