#!/bin/bash

# Lista de archivos a manejar
archivos=(
    "../buscarSumaElemetos.c"
	"../eliminarDuplicadosArrayPunteros.c"
	"../invertirArrayPunteros.c"
	"../numerosPares.c"
	"../ordenarAlfabeticamente.c"
	"../output/buscarSumaElementos"
	"../output/eliminarDuplicadosArrayPunteros"
	"../output/invertirArrayPunteros"
	"../output/numerosPares"
	"../output/ordenarAlfabeticamente"
)

# Iterar sobre la lista de archivos
for archivo in "${archivos[@]}"; do
    git add "$archivo"
    git commit -m "Update $archivo"
    git push origin main
done

# Mostrar estado final
git status