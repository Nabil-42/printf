# Usage — ft_printf

ft_printf is a library. Link it in your project with the compiled `libftprintf.a`.

## Integrate in Your Project

```c
#include "ft_printf.h"

int main(void)
{
    ft_printf("Hello %s! You are %d years old.\n", "world", 42);
    ft_printf("Hex: %x | Pointer: %p\n", 255, &main);
    return (0);
}
```

Compile with:

```bash
gcc main.c -L. -lftprintf -o myprogram
```

## Supported Specifiers

| Specifier | Output |
|-----------|--------|
| `%c` | Character |
| `%s` | String |
| `%d` / `%i` | Signed integer |
| `%u` | Unsigned integer |
| `%x` / `%X` | Hex lowercase / uppercase |
| `%p` | Pointer |
| `%%` | Literal % |