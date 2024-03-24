
1. Modos de manejo de archivos 
- Modo ==> significa
    - -  r ==> Lectura. Para esto el archivo debe existir.
    - - w ==> Escritura. Si el archivo no existe se crea, si existe se sobreescribe
    - - a ==> Escritura al final del documento. Si no existe se crea
    - - rb ==> Binario. Para lectura
    - - wb ==> Crea un archivo binario para escritura.
    - - ab ==> Abre un archivo binario para añadir.
    - - r+ ==> Lectura y Escritura. El archivo debe existir
    - - w+ ==> Crear un archivo para escritura. Si existe se sobreescribe
    - - a+ ==> Añade o crea un archivo de texto para Lectura / Escritura.
    - - r+b ==> Binario. Para actualizacion (Lectura y escritura)
    - - w+b ==> Crea un archivo binario para Lectura / Escritura.
    - - a+b ==> Añade o crea un archivo binario para Lectura / Escritura.
    
    - - fputc(caracter, apuntadoArchivo) 
        - - ==> Es una funcion que nos permite escribir un caracter en el archivo, regresa caracter
        - - que se presiono en caso de que la operacion se realice con exito o EOF(End Of File)
        - - si fallo. El apuntador es el que nos brinda la opcion fopen().

    - - fclose(apuntadorArchivo)
        - - ==> Guarda los cambios en el archivo, cierra la conexion y libera los recursos usados 
        - - por el apuntador

2. Funciones de manejo de archivo 

-------------------
|Nombre     |Funcion       |
|----------:|--------------:|
|fopen()    |Abre un archivo.    |
|fclose()   |Cierra un archivo.  |
|fgets()    |Lee una cadena de un archivo.   |
|fputc()    |Escribe una cadena en un archivo.   |
|fseek()    |Busca un byte especifico en un archivo.     |
|fprintf()  |Escribe una salida con formato en el archivo.   |
|fscanf()   |Una entrada con formato desde el archivo.   |
|feof()     |Devuelve cierto si se llega al final del archivo.   |
|ferror()   |Devuelve cierto si se produce un error. |
|rewind()   |Coloca un localizador de posicion del archivo al principio del mismo.   |
|remove()   |Borra un archivo.  |
|fflush()   |Vacia un archivo.  |

- Hay 2 tipos de archivos
 - - Archivos de texto: 
    Es una secunecia de caracteres organizadas en lineas terminadas por un caracter de una nueva linea. En estos archivos se pueden almacenar canciones, fuentes de programas, bases de datos simples, etc...
    Los archivos de texto se caracterizan por ser planos, es decir, todas las letras tienen el mismo formato y no hay palabras subrayadas, en negrita o letras en distinto tamaño o ancho.
 - - Archivos Binarios:
    Es una secuencia de bytes que tienen una correspondencia uno a uno con un dispositivo externo.7
    Asi que no tendra lugar ninguna traduccion de caracteres.
    Ademas, el numero de bytes escritos (leidos) sera el mismo que los encontrados en el dispositivo externo.
    Ejemplos de estos son fotografias, imagenes, texto con formato, archivos ejecutables(aplicaciones), etc...