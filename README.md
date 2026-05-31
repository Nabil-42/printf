# ft_printf

[![Language](https://img.shields.io/badge/Language-C-A8B9CC?style=flat&logo=c)](https://github.com/Nabil-42/printf)
[![School](https://img.shields.io/badge/%C3%89cole_42-Paris-00babc?style=flat)](https://42.fr)
[![Norminette](https://img.shields.io/badge/Norminette-compliant-brightgreen?style=flat)](https://github.com/42School/norminette)

Reimplementation of the C standard library `printf` function from scratch, as part of the 42 curriculum.

## Description

`ft_printf` replicates the behavior of `printf` with support for multiple format specifiers. The project focuses on variadic functions, format string parsing, and memory-efficient character output.

## Supported Format Specifiers

| Specifier | Description |
|-----------|-------------|
| `%c` | Single character |
| `%s` | String |
| `%d` / `%i` | Signed decimal integer |
| `%u` | Unsigned decimal integer |
| `%x` / `%X` | Hexadecimal (lower / upper) |
| `%p` | Pointer address |
| `%%` | Literal `%` |

## Stack

- **Language**: C
- **Key concepts**: variadic functions (`va_list`, `stdarg.h`), format string parsing, low-level output via `write(2)`

## How It Works

```
ft_printf(format, ...)
  → scan format string character by character
  → on '%': identify specifier → convert argument → write output
  → return total number of characters written
```

## 42 Project Info

| Field | Value |
|-------|-------|
| **Project** | ft_printf |
| **Circle** | 1 |
| **Norminette** | Compliant |

## What I Learned

- How variadic functions work in C (`stdarg.h`)
- Modular dispatch: one entry point routing to type-specific conversion functions
- Low-level output management with `write` and byte counting