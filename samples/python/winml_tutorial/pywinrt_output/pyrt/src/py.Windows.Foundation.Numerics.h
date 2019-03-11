// WARNING: Please don't edit this file. It was generated by Python/WinRT

#pragma once

#include "pybase.h"

#include <winrt/Windows.Foundation.Numerics.h>

namespace py
{
    template<>
    struct winrt_type<winrt::Windows::Foundation::Numerics::float3x2>
    {
        static PyTypeObject* python_type;
    
        static PyTypeObject* get_python_type()
        {
            return python_type;
        }
    };
    
    template<>
    struct winrt_type<winrt::Windows::Foundation::Numerics::float4x4>
    {
        static PyTypeObject* python_type;
    
        static PyTypeObject* get_python_type()
        {
            return python_type;
        }
    };
    
    template<>
    struct winrt_type<winrt::Windows::Foundation::Numerics::plane>
    {
        static PyTypeObject* python_type;
    
        static PyTypeObject* get_python_type()
        {
            return python_type;
        }
    };
    
    template<>
    struct winrt_type<winrt::Windows::Foundation::Numerics::quaternion>
    {
        static PyTypeObject* python_type;
    
        static PyTypeObject* get_python_type()
        {
            return python_type;
        }
    };
    
    template<>
    struct winrt_type<winrt::Windows::Foundation::Numerics::Rational>
    {
        static PyTypeObject* python_type;
    
        static PyTypeObject* get_python_type()
        {
            return python_type;
        }
    };
    
    template<>
    struct winrt_type<winrt::Windows::Foundation::Numerics::float2>
    {
        static PyTypeObject* python_type;
    
        static PyTypeObject* get_python_type()
        {
            return python_type;
        }
    };
    
    template<>
    struct winrt_type<winrt::Windows::Foundation::Numerics::float3>
    {
        static PyTypeObject* python_type;
    
        static PyTypeObject* get_python_type()
        {
            return python_type;
        }
    };
    
    template<>
    struct winrt_type<winrt::Windows::Foundation::Numerics::float4>
    {
        static PyTypeObject* python_type;
    
        static PyTypeObject* get_python_type()
        {
            return python_type;
        }
    };
    
    template<>
    struct converter<winrt::Windows::Foundation::Numerics::float3x2>
    {
        static PyObject* convert(winrt::Windows::Foundation::Numerics::float3x2 instance) noexcept;
        static winrt::Windows::Foundation::Numerics::float3x2 convert_to(PyObject* obj);
    };
    
    template<>
    struct converter<winrt::Windows::Foundation::Numerics::float4x4>
    {
        static PyObject* convert(winrt::Windows::Foundation::Numerics::float4x4 instance) noexcept;
        static winrt::Windows::Foundation::Numerics::float4x4 convert_to(PyObject* obj);
    };
    
    template<>
    struct converter<winrt::Windows::Foundation::Numerics::plane>
    {
        static PyObject* convert(winrt::Windows::Foundation::Numerics::plane instance) noexcept;
        static winrt::Windows::Foundation::Numerics::plane convert_to(PyObject* obj);
    };
    
    template<>
    struct converter<winrt::Windows::Foundation::Numerics::quaternion>
    {
        static PyObject* convert(winrt::Windows::Foundation::Numerics::quaternion instance) noexcept;
        static winrt::Windows::Foundation::Numerics::quaternion convert_to(PyObject* obj);
    };
    
    template<>
    struct converter<winrt::Windows::Foundation::Numerics::Rational>
    {
        static PyObject* convert(winrt::Windows::Foundation::Numerics::Rational instance) noexcept;
        static winrt::Windows::Foundation::Numerics::Rational convert_to(PyObject* obj);
    };
    
    template<>
    struct converter<winrt::Windows::Foundation::Numerics::float2>
    {
        static PyObject* convert(winrt::Windows::Foundation::Numerics::float2 instance) noexcept;
        static winrt::Windows::Foundation::Numerics::float2 convert_to(PyObject* obj);
    };
    
    template<>
    struct converter<winrt::Windows::Foundation::Numerics::float3>
    {
        static PyObject* convert(winrt::Windows::Foundation::Numerics::float3 instance) noexcept;
        static winrt::Windows::Foundation::Numerics::float3 convert_to(PyObject* obj);
    };
    
    template<>
    struct converter<winrt::Windows::Foundation::Numerics::float4>
    {
        static PyObject* convert(winrt::Windows::Foundation::Numerics::float4 instance) noexcept;
        static winrt::Windows::Foundation::Numerics::float4 convert_to(PyObject* obj);
    };
    
}