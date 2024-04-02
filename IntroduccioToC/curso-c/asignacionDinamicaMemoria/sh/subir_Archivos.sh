#!/bin/bash

# Lista de archivos a manejar
archivos=(
        "../gestionAlumnos.c"
	"../gestionClientes.c"
	"../gestionEmpleados.c"
	"../gestionLibros.c"
	"../gestionProductos.c"
	"../output/gestionAlumnos"
	"../output/gestionClientes"
	"../output/gestionEmpleados"
	"../output/gestionLibros"
	"../output/gestionProductos"
	"../output/registroEstudiante"
	"../registroEstudiantes.c"









)

# Iterar sobre la lista de archivos
for archivo in "${archivos[@]}"; do
    git add "$archivo"
    git commit -m "Update $archivo"
    git push origin main
done

# Mostrar estado final
git status

