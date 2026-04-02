# ems_oop

A starter template for teaching C++ OOP through polygon modeling.

## Project Structure

- `foundations/`
	- Focus: first contact with classes and objects.
	- Main class: `Point`.
	- Students learn constructors, private data members, and simple accessor methods.

- `encapsulation/`
	- Focus: classes, objects, and encapsulation.
	- Main classes: `Point`, `Polygon`.
	- Students learn private data members, constructors, and public methods.

- `derived_shapes/`
	- Focus: inheritance and polymorphism.
	- Main classes: abstract `Polygon`, concrete `Rectangle`, `Triangle`.
	- Students learn virtual methods, overriding, and runtime polymorphism.

Both modules model polygons so concepts build on a shared domain.

Suggested teaching order:

1. `foundations`
2. `encapsulation`
3. `derived_shapes`

## Build and Run

- Build all modules:

```bash
make
```

- Run all demos:

```bash
make run
```

- Run only foundations demo:

```bash
make run-foundations
```

- Run only encapsulation demo:

```bash
make run-encapsulation
```

- Run only derived shapes demo:

```bash
make run-derived-shapes
```

- Clean generated binaries:

```bash
make clean
```