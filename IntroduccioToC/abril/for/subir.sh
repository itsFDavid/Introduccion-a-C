#!/bin/bash

archivos=(
    "calificaciones.c"
	"calificaciones.txt"
	"inventario.c"
	"inventario.txt"
	"nombresEdades.c"
	"personas.txt"
	"subir.sh"
	"temperatuaSemana.c"
	"temperaturas.txt"
	"ventas.txt"
	"ventasDiarias.c"
	"../output/for/calif"
	"../output/for/inventario"
	"../output/for/nombresEdades"
	"../output/for/temperaturaS"
	"../output/for/ventasDiarias"
)
for archivo in "${archivos[@]}"; do
    git add "$archivo";
    git commit -m "Subiendo archivo $archivo";
    git push origin main;
done;
git status;