#!/bin/bash

# Esteban Corrales Duarte - C02429

# ******Utilizar la variable de ambiente ----> MES <---- y escribir el mes a elección luego en minúsculas********
#Para el mes de setiembre, debe escribirlo sin la p, sino el programa no lo reconoce.

#Comando para cambiar a español el formato de la fehca
export LC_TIME=es_ES.UTF-8

#Cambiar al mes ingresado en un número
if test $MES = "enero"; then
    MES_ELECCION=1
fi

if test $MES = "febrero"; then
    MES_ELECCION=2
fi

if test $MES = "marzo"; then
    MES_ELECCION=3
fi

if test $MES = "abril"; then
    MES_ELECCION=4
fi

if test $MES = "mayo"; then
    MES_ELECCION=5
fi

if test $MES = "junio"; then
    MES_ELECCION=6
fi

if test $MES = "julio"; then
    MES_ELECCION=7
fi

if test $MES = "agosto"; then
    MES_ELECCION=8
fi

if test $MES = "setiembre"; then
    MES_ELECCION=9
fi

if test $MES = "octubre"; then
    MES_ELECCION=10
fi

if test $MES = "noviembre"; then
    MES_ELECCION=11
fi

if test $MES = "diciembre"; then
    MES_ELECCION=12
fi

# Validar que el mes elegido esté en el rango de 5 a 12
if ((MES_ELECCION < 5 || MES_ELECCION > 12)); then
    echo "Error: El mes debe estar entre mayo y diciembre, ya que solo calcula a los meses restantes del 2024"
    exit 1
fi

# Obtener la fecha actual en formato año-mes-día con el fin de contar los días.
FECHA_ACTUAL=$(date +"%Y-%m-%d")


# Obtener la fecha del primer día del mes elegido
PRIMER_DIA=$(date -d "$(date +%Y-$((MES_ELECCION))-01)" +"%Y-%m-%d")

# Obtener el nombre del mes
NOMBRE_MES=$(date -d "$PRIMER_DIA" +%B)

# Calcular los días restantes hasta el primer día del mes elegido
DIAS_RESTANTES=$(($(($(date -d "$PRIMER_DIA" +%s) - $(date -d "$FECHA_ACTUAL" +%s))) / 86400))

#Obtener las variables que representan el día y mes actual
DIA_ACTUAL=$(date +"%A")
MES_ACTUAL=$(date +"%B")
NUM_DIA=$(date +"%d")
YEAR_ACTUAL=$(date +%Y)

echo "Hoy es $DIA_ACTUAL, $NUM_DIA de $MES_ACTUAL, del año $YEAR_ACTUAL. Faltan $DIAS_RESTANTES días para el mes de $NOMBRE_MES."