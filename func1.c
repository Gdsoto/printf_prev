#include "holberton.h"



int (*get_parametros(char))(int, int)
{
  optype_t ops[] = {
    {"c", op_char},
    {"d", op_int},
    {"e", op_int},
    {"f", op_float}.
    {"g", op_char},
    {"i", op_int},
    {"o", op_int},
    {"s", op_float}.
    {"u", op_char},
    {"x", op_int},
    {"%", op_perc}
    {NULL, NULL}
  };
}
