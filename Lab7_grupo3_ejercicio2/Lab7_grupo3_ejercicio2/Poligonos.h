#pragma once
#include "MyForm.h"
#include<iostream>
#include<string>
#include<sstream>

struct Poligonos
{
    int Perimetro, Id, Area;
    std::string Tipo, Color;
};

class Principal
{
    struct Node
    {
        //Estructuras para Fila
        Poligonos data;
        Node* next;
    };
private:
    //Apuntadores al inicio para Fila
    Node* Inicio = nullptr;

public:
    void agregar(int perimetro, int area, std::string color, std::string tipo)
    {
        Node* llenar = new Node();
        llenar->data.Perimetro = perimetro;
        llenar->data.Area = area;
        llenar->data.Id = 1 + rand() % (201 - 1);
        llenar->data.Color = color;
        llenar->data.Tipo = tipo;

        if (Inicio == nullptr)
        {
            llenar->next = nullptr;
            Inicio = llenar;
        }
        else
        {
            Node* Moment = Inicio;
            while (Moment->next)
            {
                Moment = Moment->next;
            }
            Moment->next = llenar;
        }
    }
    std::string mostrar()
    {
        std::string Mostrar = "";
        Node* mostrar = new Node();
        mostrar = Inicio;
        while (mostrar)
        {
            std::string IdPoligono = "";

            System::String^ Num = mostrar->data.Id.ToString();

            for (size_t i = 0; i < Num->Length; i++)
            {
                IdPoligono += Num[i];
            }

            Mostrar += IdPoligono + ", " + mostrar->data.Tipo + "\r\n";
            mostrar = mostrar->next;
        }
        return Mostrar;
    }
    std::string buscar(int codigo)
    {
        std::string buscado = "";
        Node* Buscar = new Node();
        Buscar = Inicio;

        while (Buscar)
        {
            if (Buscar->data.Id == codigo)
            {
                std::string IdPoligono = "";
                std::string Perimetro = "";
                std::string Area = "";

                System::String^ Num = Buscar->data.Id.ToString();
                System::String^ Num2 = Buscar->data.Perimetro.ToString();
                System::String^ Num3 = Buscar->data.Area.ToString();

                for (size_t i = 0; i < Num->Length; i++)
                {
                    IdPoligono += Num[i];
                }
                for (size_t i = 0; i < Num2->Length; i++)
                {
                    Perimetro += Num2[i];
                }
                for (size_t i = 0; i < Num3->Length; i++)
                {
                    Area += Num3[i];
                }

                buscado += IdPoligono + "," + Buscar->data.Tipo + "," + Perimetro + "," + Area + "," + Buscar->data.Color;
                return buscado;
            }
            Buscar = Buscar->next;
        }
        return "NO";
    }
};