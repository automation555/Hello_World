
# C# Language Design Notes for 2019

Overview of meetings and agendas for 2019

## Dec 18, 2019

[C# Language Design Notes for Dec 18, 2019](LDM-2019-12-18.md)

1. Pure null checks
2. `var?`

## Dec 16, 2019

[C# Language Design Notes for Dec 16, 2019](LDM-2019-12-16.md)

1. Switch Expression as a Statement Expression (continued) (Neal, Fred)
2. Triage

## Dec 11, 2019

[C# Language Design Notes for Dec 11, 2019](LDM-2019-12-11.md)

1. Design review feedback

## Dec 9, 2019
(not yet transcribed)
- https://github.com/dotnet/csharplang/issues/2850 Proposed changes for pattern-matching (continued) (Neal)
- https://github.com/dotnet/csharplang/issues/2860 Switch Expression as a Statement Expression (Neal)

## Dec 4, 2019 (Design Review)
(not yet transcribed)

## Nov 25, 2019

[C# Language Design Notes for Nov 25, 2019](LDM-2019-11-25.md)

1. Revisit unconstrained `T?` (Mads, Jared)

## Nov 20, 2019
(not yet transcribed)
- https://github.com/dotnet/csharplang/issues/2911 Utf8 String Literals (Neal)
- https://github.com/dotnet/csharplang/issues/2850 Proposed changes for pattern-matching (continued) (Neal)

## Nov 18, 2019

[C# Language Design Notes for Nov. 18, 2019](LDM-2019-11-18.md)

1. Proposed changes for pattern-matching

## Nov 13, 2019

[C# Language Design Notes for Nov 13, 2019](LDM-2019-11-13.md)

1. Discriminated unions
2. Improve analysis of `[MaybeNull]T` values

## Nov 11, 2019

[C# Language Design Notes for Nov 11, 2019](LDM-2019-11-11.md)

1. Confirm removal of warning calling a method that returns `[MaybeNull]T`
2. Allow interpolated string constant
3. Enhancing the Common Type Specification
4. Type pattern
5. Simple name binding with target type

## Oct 30, 2019

[C# Language Design Notes for Oct 30, 2019](LDM-2019-10-30.md)

1. Function Pointer syntax
2. Enhancing the Common Type Specification

## Oct 28, 2019

[C# Language Design Notes for Oct 28, 2019](LDM-2019-10-28.md)

1. Discard parameters in lambdas and other methods
1. Enhancing the common type algorithm

## Oct 23, 2019

[C# Language Design Notes for Oct 23, 2019](LDM-2019-10-23.md)

1. New primitive types 

https://github.com/dotnet/csharplang/issues/435

## Oct 21, 2019

[C# Language Design Notes for Oct 21, 2019](LDM-2019-10-21.md)

1. Records
2. Init-only members
3. Static lambdas

## Sep 18, 2019

[C# Language Design Notes for Sep 18, 2019](LDM-2019-09-18.md)

Triage:

1. Proposals with complete designs:

    - https://github.com/dotnet/csharplang/issues/1888 Champion "Permit attributes on local functions"
    - https://github.com/dotnet/csharplang/issues/100 Champion "Target-typed new expression"

2. Target typing and best-common-type features: 

    - https://github.com/dotnet/csharplang/issues/2473 Proposal: Target typed null coalescing (??) expression
    - https://github.com/dotnet/csharplang/issues/2460 Champion: target-typed conditional expression
    - https://github.com/dotnet/csharplang/issues/881 Permit ternary operation with int? and double operands
    - https://github.com/dotnet/csharplang/issues/33 Champion "Nullable-enhanced common type"

## Sep 16, 2019

[C# Language Design Notes for Sep 16, 2019](LDM-2019-09-16.md)

- Support for Utf8 strings
- Triage remaining features out of the [8.X milestone](https://github.com/dotnet/csharplang/issues?q=is%3Aopen+is%3Aissue+milestone%3A%228.X+candidate%22)

## Sep 11, 2019

[C# Language Design Notes for Sep 11, 2019](LDM-2019-09-11.md)

1. Close https://github.com/dotnet/roslyn/issues/37313
2. Triage new proposed [9.0 features](https://github.com/dotnet/csharplang/issues?q=is%3Aopen+is%3Aissue+no%3Amilestone+label%3A%22Proposal+champion%22)
2. Finish triaging away [8.X milestone](https://github.com/dotnet/csharplang/issues?q=is%3Aopen+is%3Aissue+label%3A%22Proposal+champion%22+milestone%3A%228.X+candidate%22)

## Sep 4, 2019

[C# Language Design Notes for Sep 4, 2019](LDM-2019-09-04.md)

1. AllowNull on properties https://github.com/dotnet/roslyn/issues/37313

## Aug 28, 2019

[C# Language Design Notes for Aug 28, 2019](LDM-2019-08-28.md)

1. Triage language features

## Jul 22, 2019

[C# Language Design Notes for July 22, 2019](LDM-2019-07-22.md)

1. Discuss the [new records proposal](https://github.com/dotnet/csharplang/blob/856c335cc584eda2178f0604cc845ef200d89f97/proposals/recordsv2.md)

## Jul 17, 2019

[C# Language Design Notes for July 17, 2019](LDM-2019-07-17.md)

1. [Nullability of events](https://github.com/dotnet/roslyn/issues/34982)

1.  Triage, see https://github.com/dotnet/csharplang/projects/4
    - Triage championed features https://github.com/dotnet/csharplang/projects/4#column-4649189
    - Triage milestones

## Jul 10, 2019

[C# Language Design Notes for July 10, 2019](LDM-2019-07-10.md)

1. Empty switch statement
1. `[DoesNotReturn]` attribute
1. Revisiting the `param!` null-checking feature

## May 15, 2019
[C# Language Design Notes for May 15, 2019](LDM-2019-05-15.md)

- Close on nullable attributes (Mads and Steve)

## May 13, 2019
[C# Language Design Notes for May 13, 2019](LDM-2019-05-13.md)

- Close on desired rules for warning suppressions and `#nullable` interacting

## Apr 29, 2019

[C# Language Design Notes for Apr 29, 2019](LDM-2019-04-29.md)

1. Default interface implementations and `base()` calls
2. Async iterator cancellation
3. Attributes on local functions

## Apr 24, 2019

[C# Language Design Notes for Apr 24, 2019](LDM-2019-04-24.md)

MaybeNull and related nullable reference type attributes

## Apr 22, 2019

[C# Language Design Notes for Apr 22, 2019](LDM-2019-04-22.md)

1. Inferred nullable state from a finally block
2. Implied constraint for a type parameter of a partial?
3. Target-typed switch expression
4. DefaultCancellationAttribute and overriding/hiding/interface implementation

## Apr 15, 2019

[C# Language Design Notes for Apr 15, 2019](LDM-2019-04-15.md)

1. CancellationToken in iterators
2. Implied nullable constraints in nullable disabled code
3. Inheriting constraints in nullable disabled code
4. Declarations with constraints declared in #nullable disabled code
5. Result type of `??=` expression
6. Use annotation context to compute the annotations?
7. Follow-up decisions for pattern-based Index/Range

## Apr 3, 2019

[C# Language Design Notes for Apr 3, 2019](LDM-2019-04-03.md)

1. Ambiguous implementations/overrides with generic methods and NRTs
2. NRT and `dynamic`

## Apr 1, 2019

[C# Language Design Notes for Apr 1, 2019](LDM-2019-04-01.md)

1. Pattern-based Index/Range translation

2. Default interface implementations: Is object.MemberwiseClone() accessible in
an interface?


## Mar 27, 2019

[C# Language Design Notes for Mar 27, 2019](LDM-2019-03-27.md)

1. Switch expression syntax

1. Default interface implementations

    1. Reabstraction

    2. Explicit interface abstract overrides in classes

    3. `object.MemberwiseClone()`

    4. `static int P {get; set}` semantics

    5. `partial` on interface methods

2. `?` on unconstrained generic param `T`

## Mar 25, 2019

[C# Design Review Notes for Mar 25, 2019](LDM-2019-03-25.md)

We brought in the design review team to look at some of our recent and open decisions in C# LDM.

1. Nullable reference types: shipping annotations
2. Pattern-based indexing with `Index` and `Range`
3. Cancellation tokens in async streams

## Mar 19, 2019

[C# Language Design Notes for March 19, 2019](LDM-2019-03-19.md)

We held a live LDM during the MVP summit with some Q&A about C# 8 and the future

Topics:

1. Records
2. "Extension interfaces"/roles
3. Macros
4. IAsyncEnumerable
5. "Partially automatic" properties
6. More integration with reactive extensions

## Mar 13, 2019

[C# Language Design Notes for March 13, 2019](LDM-2019-03-13.md)

1. Interface "reabstraction" with default interface implementations
2. Precedence of the switch expression
3. `or` keyword in patterns
4. "Pure" null tests and the switch statement/expression

## Mar 6, 2019

[C# Language Design Notes for March 6th, 2019](LDM-2019-03-06.md)

1. Pure checks in the switch expression
2. Nullable analysis of unreachable code
3. Warnings about nullability on expressions with errors
4. Handling of type parameters that cannot be annotated
5. Should anonymous type fields have top-level nullability?
6. Element-wise analysis of tuple conversions

## Mar 4, 2019

[C# Language Design Notes for March 4, 2019](LDM-2019-03-04.md)

1. Nullable user studies
2. Interpolated string and string.Format optimizations

## Feb 27, 2019

[C# Language Design Notes for Feb 27, 2019](LDM-2019-02-27.md)

1. Allow ObsoleteAttribute on property accessors
2. More Default Interface Member questions

## Feb 25, 2019

[C# Language Design Notes for Feb 25, 2019](LDM-2019-02-25.md)

- Open issues in default interface methods (https://github.com/dotnet/csharplang/issues/406). 
    - Base calls
    - We currently have open issues around `protected`, `internal`, reabstraction, and `static` fields among others.

## Feb 20, 2019

[C# Language Design Notes for Feb 20, 2019](LDM-2019-02-20.md)

- Nullable Reference Types: Open LDM Issues https://github.com/dotnet/csharplang/issues/2201

## Feb 13, 2019

[C# Language Design Notes for Feb 13, 2019](LDM-2019-02-13.md)

- Nullable Reference Types: Open LDM Issues https://github.com/dotnet/csharplang/issues/2201

## Jan 23, 2019

[C# Language Design Notes for Jan 23, 2019](LDM-2019-01-23.md)

Function pointers ([Updated proposal](https://github.com/dotnet/csharplang/blob/master/proposals/function-pointers.md))

## Jan 16, 2019

[C# Language Design Notes for Jan 16, 2019](LDM-2019-01-16.md)

1. Shadowing in lambdas
2. Pattern-based disposal in `await foreach`

## Jan 14, 2019

[C# Language Design Notes for Jan 14, 2019](LDM-2019-01-14.md)

- Generating null-check for `parameter!`
https://github.com/dotnet/csharplang/pull/2144

## Jan 9, 2019

[C# Language Design Notes for Jan 9, 2019](LDM-2019-01-09.md)

1. GetAsyncEnumerator signature
2. Ambiguities in nullable array type syntax
2. Recursive Patterns Open Language Issues https://github.com/dotnet/csharplang/issues/2095

## Jan 7, 2019

[C# Language Design Notes for Jan 7, 2019](LDM-2019-01-07.md)

Nullable:

1. Variance in overriding/interface implementation
2. Breaking change in parsing array specifiers

