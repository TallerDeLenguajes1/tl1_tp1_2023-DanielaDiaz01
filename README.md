# tl1_tp1_2023-DanielaDiaz01

### Investigar el archivo .gitignore ¿Por qué es conveniente incluirlo? ¿Cuándo se debe hacer?¿Cómo configuraría el archivo .gitignore?

El archivo .gitignore es un archivo de texto que le dice a Git qué otros archivos y carpetas de un proyecto debe ignorar.
Un archivo .gitignore local se coloca normalmente en el directorio de origen de un proyecto. También se puede crear un archivo .gitignore global y cualquier entrada que contenga será ignorada en todos los repositorios Git por igual.

Para crear un archivo .gitignore local, debemos crear un archivo de texto y llamarlo .gitignore (recuerdar incluir el . al principio). Después editar el archivo como sea necesario. Cada línea nueva debería contener el archivo o carpeta que queremos que Git ignore.

Las entradas en este archivo también pueden seguir un modelo similar.

* se usa para encontrar coincidencias
/ se usa para ignorar nombres de ruta relacionados con el archivo .gitignore
# se usa para añadir comentarios al archivo .gitignore