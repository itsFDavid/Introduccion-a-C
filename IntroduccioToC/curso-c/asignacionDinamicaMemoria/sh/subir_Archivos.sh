#!/bin/bash

# Lista de archivos a manejar
archivos=(
    "../copiaCadenaCalloc.c"
    "../copiaCadenaMalloc.c"
    "../estructuraMalloc.c"
    "../listaEnladaMalloc.c"
    "../matrizDinamicaMalloc.c"
    "../output/copiaCadenaCalloc"
    "../output/copiaCadenaMalloc"
    "../output/estructuraMalloc"
    "../output/listaEnlazadaMalloc"
    "../output/matrizDinamicaMalloc"
)

# Iterar sobre la lista de archivos
for archivo in "${archivos[@]}"; do
    git add "$archivo"
    git commit -m "Update $archivo"
    git push origin main
done

# Mostrar estado final
git status

