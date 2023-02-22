# Conceptos Generales
## Temas a tratar
* Monolitico Legacy: .NET 4 o 5 llega tiene conceptos especificos
* .Net Core Microservicios 
    - Inyeccion de dependencias
    - Formas de hacer inyeccion de dependencias
    - Librerias para hacer inyeccion de dependencias
    - Entity Framework
    - Interaccion con servicios con AWS
    - Interaccion con servicios con Docker
    - Interaccion con servicios con Cubernets
    - Como se compila C# en .NET todo el proceso de compilado ej: CLR, Common Language
* SOLID
* POO
* Patrones de Diseño
***
# Histroria .NET en general

## .NET Framework (2002)
Este se creo para la competencia de JAVA de aquellos tiempos
* Este estaba en la version 4.8
* Empeso con MSIL(Microsoft Intermediate Lenguage) pero se cambio a CIL (Common Intermediate Lenguage)
* CLR(Common Lenguage Runtime) convierte codigo intermedio a codigo maquina
* LINQ (Lenguaje de consultas)
* WinForms(API para interfaces) 
* Lenguajes que se corre en .NET son: C#, F# y VB.Net pero se usa mas C#
* ASP.NET (Framework de desarrollo Web que corre en .NET) solo microsoft
### Problemas
Lastimosamente tenia el problema esta tecnologia solo la podias ejecutar en entornos Windows

## .NET CORE (2016)
Este se creo porque se queria un .NET para que sea multiplataforma nacio .NET Core tambien el nombre es para diferenciar del anterior y con este empezo el enredo de nombres de .NET
* Este estaba en la version 3
* ASP.NET Core (Multiplataforma)
* Es para crear API, Servicios de aplicaciones de terminal

## .NET 
Da solucion al enredo de nombres y demas. 
* Este empieza en la version 5 y de ahi lanzar las siguientes versiones .NET 6 y demas.
* Hay que recalcar que este ya no es un framework sino una plataforma.
***
# ¿Que es .NET? (con esto al ultimo claro)
Es una plataforma de código abierto para crear aplicaciones de escritorio, web y móviles que se pueden ejecutar de forma nativa en cualquier sistema operativo. El sistema . NET incluye herramientas, bibliotecas y lenguajes que admiten el desarrollo de software moderno, escalable y de alto rendimiento.
***
# SQL
SQL es el lenguaje para administrar y consultar información de bases de datos relacionales. Sus siglas significan Structured Query Language (lenguaje de consulta estructurado) y entre sus funciones permite diseñar la estructura de la base de datos, poblar los datos hacer consultas y gestionar roles y permisos. 

## Se divide en tres tipos de lenguajes: DDL, DCL Y DML.

* ### DDL (Data Definition Language)
Con este lenguaje definimos la estructura de la base de datos: las tablas, atributos, índices y restricciones.

En este ejemplo agregamos la columna lastname a la tabla students para guardar texto con un límite de 50 caracteres:
```
ALTER TABLE students ADD COLUMN lastname VARCHAR(50);
```
* ### DCL (Data Control Language)
Con este lenguaje creamos usuarios y asignamos permisos.

Por ejemplo, aquí otorgamos permiso al rol edteam para poder agregar registros en la tabla students:
```
GRANT INSERT ON TABLE students TO edteam;
```
* ### DML (Data Manipulation Language)
Con este lenguaje manipulamos los datos: creamos nuevos registros, los consultamos, actualizamos y eliminamos. A este proceso se le conoce como CRUD (si aun no sabes qué es un CRUD, ingresa aquí).

En este ejemplos agregamos un registro en la tabla students indicando las columnas y luego el valor de cada una:
```
INSERT INTO students (firstname) VALUES ('Pepito');
```

***

# ORM 
Sus siglas significan Object Relational Mappig (mapeo relacional de objetos) y su función es abstraer la base de datos, de modo que tú como programador puedas hacer consultas sin conocer SQL, y en su lugar, seguir usando el lenguaje de programación que ya conoces.

Lo que hace un ORM es mapear las bases de datos a objetos (por eso su nombre) y estos objetos tendrán métodos para interactuar con ellos y hacer el CRUD sin comunicarte directamente a la base de datos.


## Principales ORM
| ORM | Lenguaje |
| ------ | ------ |
| Gorm | Go |
| SQLalchemist  | Python |
| Hibernate  | Java |
| TypeORM  | JavaScript |
| Entity framework | C# |
| GEloquentorm | PHP |
## Ventajas y Desventajas de ORM
* Ventajas
    *  Ya no necesitaras el conocimiento de SQL
* Desventajas
    * Cada ORM de un lenguaje es diferente por lo que tendras que aprenderlo

***
## Entity Framework

Entity Framework (EF) es la solución open-source que ofrece Microsoft para un ORM en las aplicaciones .NET. 

Este framework permite a los desarrolladores convertir sus estructuras de datos en clases para poder trabajar con esa información usando objetos de .NET, reduciendo considerablemente la cantidad de código que sería necesario para realizar las tareas de acceso y gestión de datos en nuestra aplicación. 

* **Cross-platform**: EF Core es un framework que funciona libremente en Windows, Linux y Mac.

* **Modelado**: EF genera un EDM (Entity Data Model o Modelo de Datos de Entidad) con entidades de distintos tipos de datos, los cuales podemos asignar o recuperar (get y set). Estos modelos son lo utilizados para realizar las consultas y persistencia en base de datos.

* **Transacciones:** EF usa transacciones por defecto al realizar consultas a la base de datos. Adicionalmente permite modificar la gestión de transacciones en caso de necesitar algo más específico.

* **Cache**: EF incluye una cache que previene sobrecargas de la base de datos en caso de recibir una misma consulta numerosas veces.

* **Configuración**: EF permite ajustar los modelos generados añadiendo Data Annotations para sobreescribir el comportamiento por defecto. 

* **Migraciones**: EF incluye comandos para generar y ejecutar migraciones, para modificar el esquema de la base de datos.

* **Consultas**: EF permite usar consultas LINQ como opción alternativa para consulta de datos. El gestor de la base de datos se encargará de traducir las consultas LINQ al lenguaje con que trabaje nuestra base de datos (SQL por ejemplo). Por último, EF también permite ejecutar consultas nativas o “raw” directamente.

***
# API
El término API es una abreviatura de Application Programming Interfaces.

Una API es el mecanismo más útil para conectar dos softwares entre sí para el intercambio de mensajes o datos en un formato estándar.
***
# SDK
Un software development kit (SDK) o kit de desarrollo de software es un conjunto de herramientas de software y programas utilizados por los desarrolladores para crear aplicaciones para plataformas específicas.
***
# Framework
El Framework es una especie de plantilla, un esquema conceptual, que simplifica la elaboración de una tarea, ya que solo es necesario complementarlo de acuerdo a lo que se quiere realizar.
***
# REST
Sus siglas vienen de Representational State Transfer, es un estilo de arquitectura de software para realizar una comunicación cliente-servidor. Se apoya en el protocolo HTTP para la comunicación al servidor y los mensajes que se envían y reciben pueden estar en XML o JSON.

## Principios de REST
* **Interfaz uniforme**: Esta basado en recursos y estos deben ser sustantivos en plural por ejemplo: libros, alumnos, peliculas, etc.

* **Stateless**: REST no tiene estados, esto quiere decir que una llamada al API es independiente de otra llamada y no depende de ella, sin embargo sí se puede usar caché para reducir el tiempo de espera en consultas GET.

* **Operaciones específicas**: Cada acción u operacion sobre un recurso está bien definido y tiene un claro propósito, no es "multifuncional" si un endpoint por ejemplo es para insertar nuevos clientes, no debería también insertar pedidos.

* **Sintaxis estandarizada**: Cada recurso es accesibe únicamente desde su URI.

* **Cliente-Servidor:** El servidor hace el procesamiento del API y expone los recursos a uno o muchos clientes, que pueden ser una aplicación de escritorio, una página web, etc. El cliente debe ser independiente del servidor y toda comunicación a él se debe dar mediante el API.


***
# RESTful | API RESTful
Así como REST es el estilo de Arquitectura, RESTful es la implementación de dicha arquitectura.

Entonces por simple sentido común un API RESTful es un API que fue diseñada usando la arquitectura REST. Así de sencillo estimados, no hay por qué complicarse más.
![](https://www.seobility.net/es/wiki/images/b/b3/API-Rest.png)

# POCO
Son las siglas de Plain Old C# Object, y se refieren a clases simples que no dependen de ninguna framework

# SOLID
!["efe"](https://yosoydani.com/wp-content/uploads/2017/11/unnamed-file-2.jpg)










