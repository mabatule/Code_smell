# Conceptos Sobre C#
***
# Generics 
Generics es una funcionalidad que nos da .NET la cual nos permite crear código reusable entre múltiples entidades. Esto es como las plantillas en el cual existe <T> para asi reutilizarse.
* Tiene constrains que son Where la condicion que quiero que acepte
* Se puede tener metodos con generics en el <T> va inferir sobre el valor que llega
***
# Delegates 
Un delegate en C# es un tipo de dato como lo es una estructura, o una clase, estos tipos definen propiedades, métodos y algunas veces eventos, por su parte los delegates se encargan de referenciar métodos que coincidan con una firma compatible determinada por los parámetros de entrada y tipo de retorno.

Las propiedades de los delegados son las siguientes:
* Los delegados son como los punteros de función de C++, pero tienen seguridad de tipos.
* Los delegados permiten pasar los métodos como parámetros.
* Los delegados pueden usarse para definir métodos callback.
* Los delegados pueden encadenarse entre sí; por ejemplo, se puede llamar a varios métodos en un solo evento.
* No es necesario que los métodos coincidan exactamente con el tipo de delegado.
Ejemplo: 
Basicamente es mandar un funcion pero OJO tiene que estar con la misma firma o sea el mismo input y output
!["efe"](https://lh3.google.com/u/0/d/1P099KGBkmC6pZXFYL1CVmfEGpdND6a0a=w1920-h931-iv1)
***
# Delegates Genericos
Son delegates que ya reciben directamente <T>. Existen 2 tipos
* **Action**: Son utilizados para **Void**
    * Action<int> printActionDel = ConsolePrint;
* **Func**: Son para todas funciones con cualquier retorno
    * public delegate TResult Func<in T, out TResult>(T arg);
***
# Lambda
Son funciones anonimas
![](https://1.bp.blogspot.com/_O9D62hXq-ng/SQww-8_vZJI/AAAAAAAAA68/qPY91CUBI8s/s400/lambda-anonimas.jpg)
***
# LINQ(Language Integrated Query)
Es un conjunto de extensiones integradas en el lenguaje C#, que nos permite trabajar de manera cómoda y rápida con colecciones de datos, como si de una base de datos se tratase. Es decir, podemos llevar a cabo inserciones, selecciones y borrados, así como operaciones sobre sus elementos.
***

# Serealizacion
La serialización es el proceso de convertir un objeto en una secuencia de bytes para almacenarlo o transmitirlo a la memoria, a una base de datos o a un archivo.

***

# Atributes
* [MaxLength(12)]
 
***
# STACK
* STACK: el ultimo en entrar es el primero en salir
* Variables primitivas 
# HEAP
* Memoria dinamica
* OutOfMemory Exception
* Objetos se almacenan
***
# Extension  Method
Es un metodo que nos permite extender la funcionalidad de un dato











