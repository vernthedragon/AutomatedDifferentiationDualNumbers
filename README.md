# AutomatedDifferentiationDualNumbers

A C++ implementation of **automatic differentiation (AD)** using the **dual number** algebraic structure — enabling exact, efficient computation of derivatives without symbolic math or finite-difference approximation.

---

## What Is This?

This project demonstrates **forward-mode automatic differentiation** by augmenting real numbers with an infinitesimal component using dual numbers. Instead of numerically approximating derivatives, the derivative is computed exactly alongside the function value in a single pass.

A dual number takes the form:

```
a + bε    where ε² = 0, ε ≠ 0
```

When you evaluate a function `f` at a dual number input `x + ε`, the result is:

```
f(x + ε) = f(x) + f'(x)ε
```

This means: the **real part** gives the function value, and the **dual part** gives the exact derivative — all in one evaluation.

---

## Why Dual Numbers?

| Method | Accuracy | Cost |
|---|---|---|
| Finite differences | Approximate (floating-point error) | 2+ function evaluations |
| Symbolic differentiation | Exact | Expression explosion risk |
| **Dual number AD** | **Exact** | **1 function evaluation** |

Dual number AD is elegant, efficient, and requires no external libraries — just operator overloading in C++.

---

## Getting Started

### Prerequisites

- Visual Studio 2019+ (or any C++17-compatible compiler)
- Windows (for the `.sln` workflow) — the core C++ is portable


## Use Cases

- Gradient computation for optimization algorithms
- Sensitivity analysis in scientific computing
- Neural network training (forward-mode AD)
- Physics simulations requiring exact derivatives
- Learning resource for understanding automatic differentiation fundamentals

---

## License

This project is licensed under the **GNU General Public License v3.0**. See [LICENSE](LICENSE) for details.

---

## Author

**vernthedragon** — [GitHub](https://github.com/vernthedragon)

##

This uses the modular mathematics library I wrote

**Mathematics** - [Repo](https://github.com/vernthedragon/Mathematics)
