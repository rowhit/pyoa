
/********************************************************************
 *   Copyright 2002-2008  LSI Corporation
 *
 *   Licensed under the Apache License, Version 2.0 (the "License");
 *   you may not use this file except in compliance with the License.
 *   You may obtain a copy of the License at
 *
 *       http://www.apache.org/licenses/LICENSE-2.0
 *
 *   Unless required by applicable law or agreed to in writing, software
 *   distributed under the License is distributed on an "AS IS" BASIS,
 *   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *   See the License for the specific language governing permissions and
 *   limitations under the License.
 *
 *******************************************************************/

#include "pyoa_header.h"


// ==================================================================
// Wrapper Implementation for Class: oaDoubleAppDef_oaTech
// ==================================================================


// ==================================================================
// Alloc/Dealloc Routines
// ==================================================================

// ------------------------------------------------------------------
static PyObject*
oaDoubleAppDef_oaTech_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
  try {
    int is_raw=(type==&PyoaDoubleAppDef_oaTech_Type);
    PyObject* bself = type->tp_alloc(type,0);
    if (bself == NULL) return bself;
    PyoaDoubleAppDef_oaTechObject* self = (PyoaDoubleAppDef_oaTechObject*)bself;
    self->locks = NULL;
    self->borrow = 0;
    static char *kwlist [] = { NULL } ;
    // Case: (oaDoubleAppDef_oaTech)
    {
        PyParamoaDoubleAppDef_oaTech p1;
        if (PyArg_ParseTuple(args,(char*)"O&",
              &PyoaDoubleAppDef_oaTech_Convert,&p1)) {
            self->data=p1.Data();
            self->value=&(self->data);
            return bself;
        }
    }
    PyErr_Clear();
    // Case: ()
    {
        if (PyArg_ParseTuple(args,(char*)"")) {
          self->data=NULL;
          self->value=&(self->data);
          return bself;
        }
    }
    PyErr_Clear();
    PyErr_SetString(PyExc_TypeError,
        "No Arg-Matching Constructor found for class: oaDoubleAppDef_oaTech, Choices are:\n"
        "    (oaDoubleAppDef_oaTech)\n"
    );
    Py_DECREF(self);
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static void
oaDoubleAppDef_oaTech_tp_dealloc(PyoaDoubleAppDef_oaTechObject* self)
{
    self->ob_type->tp_free((PyObject*)self);
}

// ------------------------------------------------------------------
static PyObject*
oaDoubleAppDef_oaTech_tp_repr(PyObject *ob)
{
    PyParamoaDoubleAppDef_oaTech value;
    int convert_status=PyoaDoubleAppDef_oaTech_Convert(ob,&value);
    assert(convert_status!=0);
    PyObject* result;

    char buffer[43];
    sprintf(buffer,"<oaDoubleAppDef_oaTech::" DISPLAY_FORMAT ">",POINTER_AS_DISPLAY(value.DataCall()));
    result=PyString_FromString(buffer);
    return result;
}
        
// ------------------------------------------------------------------
static int
oaDoubleAppDef_oaTech_tp_compare(PyObject *ob1,PyObject* ob2)
{
    PyParamoaDoubleAppDef_oaTech v1;
    PyParamoaDoubleAppDef_oaTech v2;
    int convert_status1=PyoaDoubleAppDef_oaTech_Convert(ob1,&v1);
    int convert_status2=PyoaDoubleAppDef_oaTech_Convert(ob2,&v2);
    assert(convert_status1!=0);
    assert(convert_status2!=0);
    if (v1.DataCall()==v2.DataCall()) return 0;
    return 1;
}
        
// ------------------------------------------------------------------
int
PyoaDoubleAppDef_oaTech_Convert(PyObject* ob,PyParamoaDoubleAppDef_oaTech* result)
{
    if (ob == NULL) return 1;
    if (PyoaDoubleAppDef_oaTech_Check(ob)) {
        result->SetData( (oaDoubleAppDef_oaTech**) ((PyoaDoubleAppDef_oaTechObject*)ob)->value);
        return 1;
    }
    PyErr_SetString(PyExc_TypeError,
        "Convertion of parameter to class: oaDoubleAppDef_oaTech Failed");
    return 0;
}
// ------------------------------------------------------------------
PyObject* PyoaDoubleAppDef_oaTech_FromoaDoubleAppDef_oaTech(oaDoubleAppDef_oaTech** value,int borrow,PyObject* lock)
{
    if (value && *value) {
        oaDoubleAppDef_oaTech* data=*value;
        PyObject* bself = PyoaDoubleAppDef_oaTech_Type.tp_alloc(&PyoaDoubleAppDef_oaTech_Type,0);
        if (bself == NULL) return bself;
        PyoaDoubleAppDef_oaTechObject* self = (PyoaDoubleAppDef_oaTechObject*)bself;
        self->value = (oaObject**) value;
        self->data = NULL;
        self->locks = NULL;
        self->borrow = 0; // Ignore borrow flag, since we copied
       if (lock) PyoaLockObject(self->locks,lock);
        return bself;
    }
    Py_INCREF(Py_None);
    return Py_None;
}
// ------------------------------------------------------------------
PyObject* PyoaDoubleAppDef_oaTech_FromoaDoubleAppDef_oaTech(oaDoubleAppDef_oaTech* data)
{
    if (data) {
       PyObject* bself = PyoaDoubleAppDef_oaTech_Type.tp_alloc(&PyoaDoubleAppDef_oaTech_Type,0);
       if (bself == NULL) return bself;
       PyoaDoubleAppDef_oaTechObject* self = (PyoaDoubleAppDef_oaTechObject*)bself;
       self->data = (oaObject*) data;
       self->value = &(self->data);
       self->borrow = 0; 
       self->locks = NULL;
       return bself;
    }
    Py_INCREF(Py_None);
    return Py_None;
}

// ------------------------------------------------------------------
// FunctionMethods:
// ------------------------------------------------------------------

// ------------------------------------------------------------------
static char oaDoubleAppDef_oaTech_get_doc[] = 
"Class: oaDoubleAppDef_oaTech, Function: get\n"
"  Paramegers: (oaTech)\n"
"    Calls: oaDouble get(const oaTech* object)\n"
"    Signature: get|simple-oaDouble|cptr-oaTech,\n"
"    This function returns the value of this double extension.\n"
"    object\n"
"    The object for which to get the value\n"
;

static PyObject*
oaDoubleAppDef_oaTech_get(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaDoubleAppDef_oaTech data;
    int convert_status=PyoaDoubleAppDef_oaTech_Convert(ob,&data);
    assert(convert_status!=0);
    PyoaDoubleAppDef_oaTechObject* self=(PyoaDoubleAppDef_oaTechObject*)ob;
    if (!PyValidateDbObject(data.Data(),0)) return NULL;

    PyParamoaTech p1;
    if (PyArg_ParseTuple(args,"O&",
          &PyoaTech_Convert,&p1)) {
        if (!PyValidateDbObject(p1.Data(),1)) return NULL;
        oaDouble result= (data.DataCall()->get(p1.Data()));
        return PyoaDouble_FromoaDouble(result);
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaDoubleAppDef_oaTech_getDefault_doc[] = 
"Class: oaDoubleAppDef_oaTech, Function: getDefault\n"
"  Paramegers: ()\n"
"    Calls: oaDouble getDefault() const\n"
"    Signature: getDefault|simple-oaDouble|\n"
"    BrowseData: 1\n"
"    This function returns the default value of this double extension.\n"
;

static PyObject*
oaDoubleAppDef_oaTech_getDefault(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaDoubleAppDef_oaTech data;
    int convert_status=PyoaDoubleAppDef_oaTech_Convert(ob,&data);
    assert(convert_status!=0);
    PyoaDoubleAppDef_oaTechObject* self=(PyoaDoubleAppDef_oaTechObject*)ob;
    if (!PyValidateDbObject(data.Data(),0)) return NULL;

    if (PyArg_ParseTuple(args,"")) {
        oaDouble result= (data.DataCall()->getDefault());
        return PyoaDouble_FromoaDouble(result);
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaDoubleAppDef_oaTech_set_doc[] = 
"Class: oaDoubleAppDef_oaTech, Function: set\n"
"  Paramegers: (oaTech,oaDouble)\n"
"    Calls: void set(oaTech* object,oaDouble value)\n"
"    Signature: set|void-void|ptr-oaTech,simple-oaDouble,\n"
"    This function sets the value of this double extension.\n"
"    object\n"
"    The object on which to set the value\n"
"    value\n"
"    The value to set on the object\n"
;

static PyObject*
oaDoubleAppDef_oaTech_set(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaDoubleAppDef_oaTech data;
    int convert_status=PyoaDoubleAppDef_oaTech_Convert(ob,&data);
    assert(convert_status!=0);
    PyoaDoubleAppDef_oaTechObject* self=(PyoaDoubleAppDef_oaTechObject*)ob;
    if (!PyValidateDbObject(data.Data(),0)) return NULL;

    PyParamoaTech p1;
    PyParamoaDouble p2;
    if (PyArg_ParseTuple(args,"O&O&",
          &PyoaTech_Convert,&p1,
          &PyoaDouble_Convert,&p2)) {
        if (!PyValidateDbObject(p1.Data(),1)) return NULL;
        data.DataCall()->set(p1.Data(),p2.Data());
        Py_INCREF(Py_None);
        return Py_None;
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaDoubleAppDef_oaTech_isNull_doc[] =
"Class: oaDoubleAppDef_oaTech, Function: isNull\n"
"  Parameters: () \n"
"    This functions returns 1 if the DbPointer is NULL, and 0 otherwise.\n"
;

static PyObject*
oaDoubleAppDef_oaTech_tp_isNull(PyObject* ob, PyObject *args)
{
    PyParamoaDoubleAppDef_oaTech data;
    int convert_status=PyoaDoubleAppDef_oaTech_Convert(ob,&data);
    assert(convert_status!=0);
    if (data.DataCall()==NULL)
        return PyInt_FromLong(1);
    else
        return PyInt_FromLong(0);
}
static char oaDoubleAppDef_oaTech_assign_doc[] = 
"Class: oaDoubleAppDef_oaTech, Function: set\n"
"  Paramegers: (oaDouble)\n"
"    This function sets the current value.\n"
;

static PyObject*
oaDoubleAppDef_oaTech_tp_assign(PyObject* ob, PyObject *args)
{
  PyParamoaDoubleAppDef_oaTech data;
  int convert_status=PyoaDoubleAppDef_oaTech_Convert(ob,&data);
  assert(convert_status!=0);
  try {
    PyParamoaDoubleAppDef_oaTech p1;
    if (PyArg_ParseTuple(args,(char*)"O&",
          &PyoaDoubleAppDef_oaTech_Convert,&p1)) {
        data.Data()=p1.Data();
        Py_INCREF(ob);
        return ob;
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}


// ------------------------------------------------------------------
//  Function Methods Table:
// ------------------------------------------------------------------

static PyMethodDef oaDoubleAppDef_oaTech_methodlist[] = {
    {"get",(PyCFunction)oaDoubleAppDef_oaTech_get,METH_VARARGS,oaDoubleAppDef_oaTech_get_doc},
    {"getDefault",(PyCFunction)oaDoubleAppDef_oaTech_getDefault,METH_VARARGS,oaDoubleAppDef_oaTech_getDefault_doc},
    {"set",(PyCFunction)oaDoubleAppDef_oaTech_set,METH_VARARGS,oaDoubleAppDef_oaTech_set_doc},
    {"isNull",(PyCFunction)oaDoubleAppDef_oaTech_tp_isNull,METH_VARARGS,oaDoubleAppDef_oaTech_isNull_doc},
    {"assign",(PyCFunction)oaDoubleAppDef_oaTech_tp_assign,METH_VARARGS,oaDoubleAppDef_oaTech_assign_doc},
   {NULL,NULL,0,NULL}
};


// ------------------------------------------------------------------
//  Type Object:
// ------------------------------------------------------------------

// ------------------------------------------------------------------
static char oaDoubleAppDef_oaTech_doc[] = 
"Class: oaDoubleAppDef_oaTech\n"
"  The oaDoubleAppDef class implements an application-specific extension for a particular type of data in a database.\n"
"  Once created, a double field is added to each object of the specified dataType. The default value for this extension is DBL_MAX. Applications can use the new field for whatever purpose is necessary.\n"
"  For additional information on defining and using AppDefs, see oaAppDef and Extending the Database in the Programmer's Guide.\n"
"Constructors:\n"
"  Paramegers: (oaDoubleAppDef_oaTech)\n"
"    Calls: (const oaDoubleAppDef_oaTech&)\n"
"    Signature: oaDoubleAppDef_oaTech||cref-oaDoubleAppDef_oaTech,\n"
;

// ------------------------------------------------------------------
PyTypeObject PyoaDoubleAppDef_oaTech_Type = {
    PyObject_HEAD_INIT(&PyType_Type)
    0,
    "oaDoubleAppDef_oaTech",
    sizeof(PyoaDoubleAppDef_oaTechObject),
    0,
    (destructor)oaDoubleAppDef_oaTech_tp_dealloc,	/* tp_dealloc */
    0,	/* tp_print */
    0,					/* tp_getattr */
    0,					/* tp_setattr */
    (cmpfunc)oaDoubleAppDef_oaTech_tp_compare,	/* tp_compare */
    (reprfunc)oaDoubleAppDef_oaTech_tp_repr,	/* tp_repr */
    0,					/* tp_as_number */
    0,					/* tp_as_sequence */
    0,					/* tp_as_mapping */
    0,					/* tp_as_hash */
    0,					/* tp_as_call */
    0,					/* tp_str */
    0,					/* tp_getattro */
    0,					/* tp_setattro */
    0,					/* tp_as_buffer */
    Py_TPFLAGS_DEFAULT|Py_TPFLAGS_BASETYPE, /* tp_flags */
    oaDoubleAppDef_oaTech_doc,	/* tp_doc */
    0,					/* tp_traverse */
    0,					/* tp_clear */
    0,					/* tp_richcompre */
    0,					/* tp_weaklistoffset */
    0,					/* tp_iter */
    0,					/* tp_iternext */
    oaDoubleAppDef_oaTech_methodlist,	/* tp_methods */
    0,					/* tp_members */
    0,					/* tp_getset */
    &PyoaAppDef_Type,	/* tp_base */
    0,					/* tp_dict */
    0,					/* tp_descr_get */
    0,					/* tp_descr_set */
    0,					/* tp_dictoffset */
    0,					/* tp_init */
    PyType_GenericAlloc,	/* tp_alloc */
    oaDoubleAppDef_oaTech_new,	/* tp_new */
    _PyObject_Del,	/* tp_free */
};


// ------------------------------------------------------------------
// Static FunctionMethods:
// ------------------------------------------------------------------

// ------------------------------------------------------------------
static char oaDoubleAppDef_oaTech_static_find_doc[] = 
"Class: oaDoubleAppDef_oaTech, Function: find\n"
"  Paramegers: (oaString)\n"
"    Calls: oaDoubleAppDef_oaTech* find(const oaString& name)\n"
"    Signature: find|ptr-oaDoubleAppDef_oaTech|cref-oaString,\n"
"    This function returns an oaDoubleAppDef object with this dataType and the specified 'name' if it exists.\n"
"    name\n"
"    The name of the oaAppDef object to look for\n"
"  Paramegers: (oaString,oaAppObjectDef)\n"
"    Calls: oaDoubleAppDef_oaTech* find(const oaString& name,const oaAppObjectDef* objDef)\n"
"    Signature: find|ptr-oaDoubleAppDef_oaTech|cref-oaString,cptr-oaAppObjectDef,\n"
"    This function returns an oaDoubleAppDef object with this dataType and the specified 'name' that is associated with the specified object extension 'objDef'.\n"
"    name\n"
"    The name of the oaAppDef object to look for\n"
"    objDef\n"
"    A constant pointer to the object extension\n"
;

static PyObject*
oaDoubleAppDef_oaTech_static_find(PyObject* ob, PyObject *args)
{
  try {
    // Case: (oaString)
    {
        PyParamoaString p1;
        if (PyArg_ParseTuple(args,"O&",
              &PyoaString_Convert,&p1)) {
            oaDoubleAppDef_oaTechp result= (oaDoubleAppDef_oaTech::find(p1.Data()));
            return PyoaDoubleAppDef_oaTech_FromoaDoubleAppDef_oaTech(result);
        }
    }
    PyErr_Clear();
    // Case: (oaString,oaAppObjectDef)
    {
        PyParamoaString p1;
        PyParamoaAppObjectDef p2;
        if (PyArg_ParseTuple(args,"O&O&",
              &PyoaString_Convert,&p1,
              &PyoaAppObjectDef_Convert,&p2)) {
            if (!PyValidateDbObject(p2.Data(),2)) return NULL;
            oaDoubleAppDef_oaTechp result= (oaDoubleAppDef_oaTech::find(p1.Data(),p2.Data()));
            return PyoaDoubleAppDef_oaTech_FromoaDoubleAppDef_oaTech(result);
        }
    }
    PyErr_Clear();
    PyErr_SetString(PyExc_TypeError,
        "No Arg-Matching Function found for class: oaDoubleAppDef_oaTech, function: find, Choices are:\n"
        "    (oaString)\n"
        "    (oaString,oaAppObjectDef)\n"
    );
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaDoubleAppDef_oaTech_static_get_doc[] = 
"Class: oaDoubleAppDef_oaTech, Function: get\n"
"  Paramegers: (oaString)\n"
"    Calls: oaDoubleAppDef_oaTech* get(const oaString& name)\n"
"    Signature: get|ptr-oaDoubleAppDef_oaTech|cref-oaString,simple-oaDouble,simple-oaBoolean,\n"
"    This function constructs an oaDoubleAppDef object, creating a double extension with the specified name . You can create a double extension on any object except another extension.\n"
"    name\n"
"    The name given to the oaDoubleAppDef object\n"
"    defValue\n"
"    The default value for this extension\n"
"    persist\n"
"    Saves the oaDoubleAppDef data in the database\n"
"    oacAppDefExists\n"
"  Paramegers: (oaString,oaDouble)\n"
"    Calls: oaDoubleAppDef_oaTech* get(const oaString& name,oaDouble defValue)\n"
"    Signature: get|ptr-oaDoubleAppDef_oaTech|cref-oaString,simple-oaDouble,simple-oaBoolean,\n"
"    This function constructs an oaDoubleAppDef object, creating a double extension with the specified name . You can create a double extension on any object except another extension.\n"
"    name\n"
"    The name given to the oaDoubleAppDef object\n"
"    defValue\n"
"    The default value for this extension\n"
"    persist\n"
"    Saves the oaDoubleAppDef data in the database\n"
"    oacAppDefExists\n"
"  Paramegers: (oaString,oaDouble,oaBoolean)\n"
"    Calls: oaDoubleAppDef_oaTech* get(const oaString& name,oaDouble defValue,oaBoolean persist)\n"
"    Signature: get|ptr-oaDoubleAppDef_oaTech|cref-oaString,simple-oaDouble,simple-oaBoolean,\n"
"    This function constructs an oaDoubleAppDef object, creating a double extension with the specified name . You can create a double extension on any object except another extension.\n"
"    name\n"
"    The name given to the oaDoubleAppDef object\n"
"    defValue\n"
"    The default value for this extension\n"
"    persist\n"
"    Saves the oaDoubleAppDef data in the database\n"
"    oacAppDefExists\n"
"  Paramegers: (oaString,oaAppObjectDef)\n"
"    Calls: oaDoubleAppDef_oaTech* get(const oaString& name,const oaAppObjectDef* objDef)\n"
"    Signature: get|ptr-oaDoubleAppDef_oaTech|cref-oaString,cptr-oaAppObjectDef,simple-oaDouble,simple-oaBoolean,\n"
"    This function constructs an oaDoubleAppDef object, creating a double extension with the specified name for the specified object type.\n"
"    name\n"
"    The name given to the oaDoubleAppDef object\n"
"    objDef\n"
"    The object extension with which to associate the extension\n"
"    defValue\n"
"    An optional default value\n"
"    persist\n"
"    Saves the oaDoubleAppDef data in the database\n"
"    oacAppDefExists\n"
"  Paramegers: (oaString,oaAppObjectDef,oaDouble)\n"
"    Calls: oaDoubleAppDef_oaTech* get(const oaString& name,const oaAppObjectDef* objDef,oaDouble defValue)\n"
"    Signature: get|ptr-oaDoubleAppDef_oaTech|cref-oaString,cptr-oaAppObjectDef,simple-oaDouble,simple-oaBoolean,\n"
"    This function constructs an oaDoubleAppDef object, creating a double extension with the specified name for the specified object type.\n"
"    name\n"
"    The name given to the oaDoubleAppDef object\n"
"    objDef\n"
"    The object extension with which to associate the extension\n"
"    defValue\n"
"    An optional default value\n"
"    persist\n"
"    Saves the oaDoubleAppDef data in the database\n"
"    oacAppDefExists\n"
"  Paramegers: (oaString,oaAppObjectDef,oaDouble,oaBoolean)\n"
"    Calls: oaDoubleAppDef_oaTech* get(const oaString& name,const oaAppObjectDef* objDef,oaDouble defValue,oaBoolean persist)\n"
"    Signature: get|ptr-oaDoubleAppDef_oaTech|cref-oaString,cptr-oaAppObjectDef,simple-oaDouble,simple-oaBoolean,\n"
"    This function constructs an oaDoubleAppDef object, creating a double extension with the specified name for the specified object type.\n"
"    name\n"
"    The name given to the oaDoubleAppDef object\n"
"    objDef\n"
"    The object extension with which to associate the extension\n"
"    defValue\n"
"    An optional default value\n"
"    persist\n"
"    Saves the oaDoubleAppDef data in the database\n"
"    oacAppDefExists\n"
;

static PyObject*
oaDoubleAppDef_oaTech_static_get(PyObject* ob, PyObject *args)
{
  try {
    // Case: (oaString)
    {
        PyParamoaString p1;
        if (PyArg_ParseTuple(args,"O&",
              &PyoaString_Convert,&p1)) {
            oaDoubleAppDef_oaTechp result= (oaDoubleAppDef_oaTech::get(p1.Data()));
            return PyoaDoubleAppDef_oaTech_FromoaDoubleAppDef_oaTech(result);
        }
    }
    PyErr_Clear();
    // Case: (oaString,oaDouble)
    {
        PyParamoaString p1;
        PyParamoaDouble p2;
        if (PyArg_ParseTuple(args,"O&O&",
              &PyoaString_Convert,&p1,
              &PyoaDouble_Convert,&p2)) {
            oaDoubleAppDef_oaTechp result= (oaDoubleAppDef_oaTech::get(p1.Data(),p2.Data()));
            return PyoaDoubleAppDef_oaTech_FromoaDoubleAppDef_oaTech(result);
        }
    }
    PyErr_Clear();
    // Case: (oaString,oaDouble,oaBoolean)
    {
        PyParamoaString p1;
        PyParamoaDouble p2;
        PyParamoaBoolean p3;
        if (PyArg_ParseTuple(args,"O&O&O&",
              &PyoaString_Convert,&p1,
              &PyoaDouble_Convert,&p2,
              &PyoaBoolean_Convert,&p3)) {
            oaDoubleAppDef_oaTechp result= (oaDoubleAppDef_oaTech::get(p1.Data(),p2.Data(),p3.Data()));
            return PyoaDoubleAppDef_oaTech_FromoaDoubleAppDef_oaTech(result);
        }
    }
    PyErr_Clear();
    // Case: (oaString,oaAppObjectDef)
    {
        PyParamoaString p1;
        PyParamoaAppObjectDef p2;
        if (PyArg_ParseTuple(args,"O&O&",
              &PyoaString_Convert,&p1,
              &PyoaAppObjectDef_Convert,&p2)) {
            if (!PyValidateDbObject(p2.Data(),2)) return NULL;
            oaDoubleAppDef_oaTechp result= (oaDoubleAppDef_oaTech::get(p1.Data(),p2.Data()));
            return PyoaDoubleAppDef_oaTech_FromoaDoubleAppDef_oaTech(result);
        }
    }
    PyErr_Clear();
    // Case: (oaString,oaAppObjectDef,oaDouble)
    {
        PyParamoaString p1;
        PyParamoaAppObjectDef p2;
        PyParamoaDouble p3;
        if (PyArg_ParseTuple(args,"O&O&O&",
              &PyoaString_Convert,&p1,
              &PyoaAppObjectDef_Convert,&p2,
              &PyoaDouble_Convert,&p3)) {
            if (!PyValidateDbObject(p2.Data(),2)) return NULL;
            oaDoubleAppDef_oaTechp result= (oaDoubleAppDef_oaTech::get(p1.Data(),p2.Data(),p3.Data()));
            return PyoaDoubleAppDef_oaTech_FromoaDoubleAppDef_oaTech(result);
        }
    }
    PyErr_Clear();
    // Case: (oaString,oaAppObjectDef,oaDouble,oaBoolean)
    {
        PyParamoaString p1;
        PyParamoaAppObjectDef p2;
        PyParamoaDouble p3;
        PyParamoaBoolean p4;
        if (PyArg_ParseTuple(args,"O&O&O&O&",
              &PyoaString_Convert,&p1,
              &PyoaAppObjectDef_Convert,&p2,
              &PyoaDouble_Convert,&p3,
              &PyoaBoolean_Convert,&p4)) {
            if (!PyValidateDbObject(p2.Data(),2)) return NULL;
            oaDoubleAppDef_oaTechp result= (oaDoubleAppDef_oaTech::get(p1.Data(),p2.Data(),p3.Data(),p4.Data()));
            return PyoaDoubleAppDef_oaTech_FromoaDoubleAppDef_oaTech(result);
        }
    }
    PyErr_Clear();
    PyErr_SetString(PyExc_TypeError,
        "No Arg-Matching Function found for class: oaDoubleAppDef_oaTech, function: get, Choices are:\n"
        "    (oaString)\n"
        "    (oaString,oaDouble)\n"
        "    (oaString,oaDouble,oaBoolean)\n"
        "    (oaString,oaAppObjectDef)\n"
        "    (oaString,oaAppObjectDef,oaDouble)\n"
        "    (oaString,oaAppObjectDef,oaDouble,oaBoolean)\n"
    );
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static PyMethodDef oaDoubleAppDef_oaTech_staticmethodlist[] = {
    {"static_find",(PyCFunction)oaDoubleAppDef_oaTech_static_find,METH_VARARGS,oaDoubleAppDef_oaTech_static_find_doc},
    {"static_get",(PyCFunction)oaDoubleAppDef_oaTech_static_get,METH_VARARGS,oaDoubleAppDef_oaTech_static_get_doc},
   {NULL,NULL,0,NULL}
};


// ------------------------------------------------------------------
//  Type Init:
// ------------------------------------------------------------------

int
PyoaDoubleAppDef_oaTech_TypeInit(PyObject* mod_dict)
{
    if (PyType_Ready(&PyoaDoubleAppDef_oaTech_Type)<0) {
      printf("** PyType_Ready failed for: oaDoubleAppDef_oaTech\n");
      return -1;
    }

    if (PyDict_SetItemString(mod_dict,"oaDoubleAppDef_oaTech",
           (PyObject*)(&PyoaDoubleAppDef_oaTech_Type))<0) {
       printf("** Failed to add type name to module dictionary for: oaDoubleAppDef_oaTech\n");
       return -1;
    }

    PyObject *dict, *value;
    PyMethodDef *method;
    dict=PyoaDoubleAppDef_oaTech_Type.tp_dict;
    for(method=oaDoubleAppDef_oaTech_staticmethodlist;method->ml_name!=NULL;method++) {
        value=PyCFunction_New(method,NULL);
    if (value==NULL) return -1;
        if (PyDict_SetItemString(dict,method->ml_name,value)!=0) {
        Py_DECREF(value);
            printf("** Failed to add static function to module dictionary for: %s\n",
                method->ml_name);
            return -1;
        }
        Py_DECREF(value);
    }
    return 0;
}


/********************************************************************
 *   Copyright 2002-2008  LSI Corporation
 *
 *   Licensed under the Apache License, Version 2.0 (the "License");
 *   you may not use this file except in compliance with the License.
 *   You may obtain a copy of the License at
 *
 *       http://www.apache.org/licenses/LICENSE-2.0
 *
 *   Unless required by applicable law or agreed to in writing, software
 *   distributed under the License is distributed on an "AS IS" BASIS,
 *   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *   See the License for the specific language governing permissions and
 *   limitations under the License.
 *
 *******************************************************************/

#include "pyoa_header.h"


// ==================================================================
// Wrapper Implementation for Class: oaDoubleAppDef_oaTechHeader
// ==================================================================


// ==================================================================
// Alloc/Dealloc Routines
// ==================================================================

// ------------------------------------------------------------------
static PyObject*
oaDoubleAppDef_oaTechHeader_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
  try {
    int is_raw=(type==&PyoaDoubleAppDef_oaTechHeader_Type);
    PyObject* bself = type->tp_alloc(type,0);
    if (bself == NULL) return bself;
    PyoaDoubleAppDef_oaTechHeaderObject* self = (PyoaDoubleAppDef_oaTechHeaderObject*)bself;
    self->locks = NULL;
    self->borrow = 0;
    static char *kwlist [] = { NULL } ;
    // Case: (oaDoubleAppDef_oaTechHeader)
    {
        PyParamoaDoubleAppDef_oaTechHeader p1;
        if (PyArg_ParseTuple(args,(char*)"O&",
              &PyoaDoubleAppDef_oaTechHeader_Convert,&p1)) {
            self->data=p1.Data();
            self->value=&(self->data);
            return bself;
        }
    }
    PyErr_Clear();
    // Case: ()
    {
        if (PyArg_ParseTuple(args,(char*)"")) {
          self->data=NULL;
          self->value=&(self->data);
          return bself;
        }
    }
    PyErr_Clear();
    PyErr_SetString(PyExc_TypeError,
        "No Arg-Matching Constructor found for class: oaDoubleAppDef_oaTechHeader, Choices are:\n"
        "    (oaDoubleAppDef_oaTechHeader)\n"
    );
    Py_DECREF(self);
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static void
oaDoubleAppDef_oaTechHeader_tp_dealloc(PyoaDoubleAppDef_oaTechHeaderObject* self)
{
    self->ob_type->tp_free((PyObject*)self);
}

// ------------------------------------------------------------------
static PyObject*
oaDoubleAppDef_oaTechHeader_tp_repr(PyObject *ob)
{
    PyParamoaDoubleAppDef_oaTechHeader value;
    int convert_status=PyoaDoubleAppDef_oaTechHeader_Convert(ob,&value);
    assert(convert_status!=0);
    PyObject* result;

    char buffer[49];
    sprintf(buffer,"<oaDoubleAppDef_oaTechHeader::" DISPLAY_FORMAT ">",POINTER_AS_DISPLAY(value.DataCall()));
    result=PyString_FromString(buffer);
    return result;
}
        
// ------------------------------------------------------------------
static int
oaDoubleAppDef_oaTechHeader_tp_compare(PyObject *ob1,PyObject* ob2)
{
    PyParamoaDoubleAppDef_oaTechHeader v1;
    PyParamoaDoubleAppDef_oaTechHeader v2;
    int convert_status1=PyoaDoubleAppDef_oaTechHeader_Convert(ob1,&v1);
    int convert_status2=PyoaDoubleAppDef_oaTechHeader_Convert(ob2,&v2);
    assert(convert_status1!=0);
    assert(convert_status2!=0);
    if (v1.DataCall()==v2.DataCall()) return 0;
    return 1;
}
        
// ------------------------------------------------------------------
int
PyoaDoubleAppDef_oaTechHeader_Convert(PyObject* ob,PyParamoaDoubleAppDef_oaTechHeader* result)
{
    if (ob == NULL) return 1;
    if (PyoaDoubleAppDef_oaTechHeader_Check(ob)) {
        result->SetData( (oaDoubleAppDef_oaTechHeader**) ((PyoaDoubleAppDef_oaTechHeaderObject*)ob)->value);
        return 1;
    }
    PyErr_SetString(PyExc_TypeError,
        "Convertion of parameter to class: oaDoubleAppDef_oaTechHeader Failed");
    return 0;
}
// ------------------------------------------------------------------
PyObject* PyoaDoubleAppDef_oaTechHeader_FromoaDoubleAppDef_oaTechHeader(oaDoubleAppDef_oaTechHeader** value,int borrow,PyObject* lock)
{
    if (value && *value) {
        oaDoubleAppDef_oaTechHeader* data=*value;
        PyObject* bself = PyoaDoubleAppDef_oaTechHeader_Type.tp_alloc(&PyoaDoubleAppDef_oaTechHeader_Type,0);
        if (bself == NULL) return bself;
        PyoaDoubleAppDef_oaTechHeaderObject* self = (PyoaDoubleAppDef_oaTechHeaderObject*)bself;
        self->value = (oaObject**) value;
        self->data = NULL;
        self->locks = NULL;
        self->borrow = 0; // Ignore borrow flag, since we copied
       if (lock) PyoaLockObject(self->locks,lock);
        return bself;
    }
    Py_INCREF(Py_None);
    return Py_None;
}
// ------------------------------------------------------------------
PyObject* PyoaDoubleAppDef_oaTechHeader_FromoaDoubleAppDef_oaTechHeader(oaDoubleAppDef_oaTechHeader* data)
{
    if (data) {
       PyObject* bself = PyoaDoubleAppDef_oaTechHeader_Type.tp_alloc(&PyoaDoubleAppDef_oaTechHeader_Type,0);
       if (bself == NULL) return bself;
       PyoaDoubleAppDef_oaTechHeaderObject* self = (PyoaDoubleAppDef_oaTechHeaderObject*)bself;
       self->data = (oaObject*) data;
       self->value = &(self->data);
       self->borrow = 0; 
       self->locks = NULL;
       return bself;
    }
    Py_INCREF(Py_None);
    return Py_None;
}

// ------------------------------------------------------------------
// FunctionMethods:
// ------------------------------------------------------------------

// ------------------------------------------------------------------
static char oaDoubleAppDef_oaTechHeader_get_doc[] = 
"Class: oaDoubleAppDef_oaTechHeader, Function: get\n"
"  Paramegers: (oaTechHeader)\n"
"    Calls: oaDouble get(const oaTechHeader* object)\n"
"    Signature: get|simple-oaDouble|cptr-oaTechHeader,\n"
"    This function returns the value of this double extension.\n"
"    object\n"
"    The object for which to get the value\n"
;

static PyObject*
oaDoubleAppDef_oaTechHeader_get(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaDoubleAppDef_oaTechHeader data;
    int convert_status=PyoaDoubleAppDef_oaTechHeader_Convert(ob,&data);
    assert(convert_status!=0);
    PyoaDoubleAppDef_oaTechHeaderObject* self=(PyoaDoubleAppDef_oaTechHeaderObject*)ob;
    if (!PyValidateDbObject(data.Data(),0)) return NULL;

    PyParamoaTechHeader p1;
    if (PyArg_ParseTuple(args,"O&",
          &PyoaTechHeader_Convert,&p1)) {
        if (!PyValidateDbObject(p1.Data(),1)) return NULL;
        oaDouble result= (data.DataCall()->get(p1.Data()));
        return PyoaDouble_FromoaDouble(result);
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaDoubleAppDef_oaTechHeader_getDefault_doc[] = 
"Class: oaDoubleAppDef_oaTechHeader, Function: getDefault\n"
"  Paramegers: ()\n"
"    Calls: oaDouble getDefault() const\n"
"    Signature: getDefault|simple-oaDouble|\n"
"    BrowseData: 1\n"
"    This function returns the default value of this double extension.\n"
;

static PyObject*
oaDoubleAppDef_oaTechHeader_getDefault(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaDoubleAppDef_oaTechHeader data;
    int convert_status=PyoaDoubleAppDef_oaTechHeader_Convert(ob,&data);
    assert(convert_status!=0);
    PyoaDoubleAppDef_oaTechHeaderObject* self=(PyoaDoubleAppDef_oaTechHeaderObject*)ob;
    if (!PyValidateDbObject(data.Data(),0)) return NULL;

    if (PyArg_ParseTuple(args,"")) {
        oaDouble result= (data.DataCall()->getDefault());
        return PyoaDouble_FromoaDouble(result);
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaDoubleAppDef_oaTechHeader_set_doc[] = 
"Class: oaDoubleAppDef_oaTechHeader, Function: set\n"
"  Paramegers: (oaTechHeader,oaDouble)\n"
"    Calls: void set(oaTechHeader* object,oaDouble value)\n"
"    Signature: set|void-void|ptr-oaTechHeader,simple-oaDouble,\n"
"    This function sets the value of this double extension.\n"
"    object\n"
"    The object on which to set the value\n"
"    value\n"
"    The value to set on the object\n"
;

static PyObject*
oaDoubleAppDef_oaTechHeader_set(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaDoubleAppDef_oaTechHeader data;
    int convert_status=PyoaDoubleAppDef_oaTechHeader_Convert(ob,&data);
    assert(convert_status!=0);
    PyoaDoubleAppDef_oaTechHeaderObject* self=(PyoaDoubleAppDef_oaTechHeaderObject*)ob;
    if (!PyValidateDbObject(data.Data(),0)) return NULL;

    PyParamoaTechHeader p1;
    PyParamoaDouble p2;
    if (PyArg_ParseTuple(args,"O&O&",
          &PyoaTechHeader_Convert,&p1,
          &PyoaDouble_Convert,&p2)) {
        if (!PyValidateDbObject(p1.Data(),1)) return NULL;
        data.DataCall()->set(p1.Data(),p2.Data());
        Py_INCREF(Py_None);
        return Py_None;
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaDoubleAppDef_oaTechHeader_isNull_doc[] =
"Class: oaDoubleAppDef_oaTechHeader, Function: isNull\n"
"  Parameters: () \n"
"    This functions returns 1 if the DbPointer is NULL, and 0 otherwise.\n"
;

static PyObject*
oaDoubleAppDef_oaTechHeader_tp_isNull(PyObject* ob, PyObject *args)
{
    PyParamoaDoubleAppDef_oaTechHeader data;
    int convert_status=PyoaDoubleAppDef_oaTechHeader_Convert(ob,&data);
    assert(convert_status!=0);
    if (data.DataCall()==NULL)
        return PyInt_FromLong(1);
    else
        return PyInt_FromLong(0);
}
static char oaDoubleAppDef_oaTechHeader_assign_doc[] = 
"Class: oaDoubleAppDef_oaTechHeader, Function: set\n"
"  Paramegers: (oaDouble)\n"
"    This function sets the current value.\n"
;

static PyObject*
oaDoubleAppDef_oaTechHeader_tp_assign(PyObject* ob, PyObject *args)
{
  PyParamoaDoubleAppDef_oaTechHeader data;
  int convert_status=PyoaDoubleAppDef_oaTechHeader_Convert(ob,&data);
  assert(convert_status!=0);
  try {
    PyParamoaDoubleAppDef_oaTechHeader p1;
    if (PyArg_ParseTuple(args,(char*)"O&",
          &PyoaDoubleAppDef_oaTechHeader_Convert,&p1)) {
        data.Data()=p1.Data();
        Py_INCREF(ob);
        return ob;
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}


// ------------------------------------------------------------------
//  Function Methods Table:
// ------------------------------------------------------------------

static PyMethodDef oaDoubleAppDef_oaTechHeader_methodlist[] = {
    {"get",(PyCFunction)oaDoubleAppDef_oaTechHeader_get,METH_VARARGS,oaDoubleAppDef_oaTechHeader_get_doc},
    {"getDefault",(PyCFunction)oaDoubleAppDef_oaTechHeader_getDefault,METH_VARARGS,oaDoubleAppDef_oaTechHeader_getDefault_doc},
    {"set",(PyCFunction)oaDoubleAppDef_oaTechHeader_set,METH_VARARGS,oaDoubleAppDef_oaTechHeader_set_doc},
    {"isNull",(PyCFunction)oaDoubleAppDef_oaTechHeader_tp_isNull,METH_VARARGS,oaDoubleAppDef_oaTechHeader_isNull_doc},
    {"assign",(PyCFunction)oaDoubleAppDef_oaTechHeader_tp_assign,METH_VARARGS,oaDoubleAppDef_oaTechHeader_assign_doc},
   {NULL,NULL,0,NULL}
};


// ------------------------------------------------------------------
//  Type Object:
// ------------------------------------------------------------------

// ------------------------------------------------------------------
static char oaDoubleAppDef_oaTechHeader_doc[] = 
"Class: oaDoubleAppDef_oaTechHeader\n"
"  The oaDoubleAppDef class implements an application-specific extension for a particular type of data in a database.\n"
"  Once created, a double field is added to each object of the specified dataType. The default value for this extension is DBL_MAX. Applications can use the new field for whatever purpose is necessary.\n"
"  For additional information on defining and using AppDefs, see oaAppDef and Extending the Database in the Programmer's Guide.\n"
"Constructors:\n"
"  Paramegers: (oaDoubleAppDef_oaTechHeader)\n"
"    Calls: (const oaDoubleAppDef_oaTechHeader&)\n"
"    Signature: oaDoubleAppDef_oaTechHeader||cref-oaDoubleAppDef_oaTechHeader,\n"
;

// ------------------------------------------------------------------
PyTypeObject PyoaDoubleAppDef_oaTechHeader_Type = {
    PyObject_HEAD_INIT(&PyType_Type)
    0,
    "oaDoubleAppDef_oaTechHeader",
    sizeof(PyoaDoubleAppDef_oaTechHeaderObject),
    0,
    (destructor)oaDoubleAppDef_oaTechHeader_tp_dealloc,	/* tp_dealloc */
    0,	/* tp_print */
    0,					/* tp_getattr */
    0,					/* tp_setattr */
    (cmpfunc)oaDoubleAppDef_oaTechHeader_tp_compare,	/* tp_compare */
    (reprfunc)oaDoubleAppDef_oaTechHeader_tp_repr,	/* tp_repr */
    0,					/* tp_as_number */
    0,					/* tp_as_sequence */
    0,					/* tp_as_mapping */
    0,					/* tp_as_hash */
    0,					/* tp_as_call */
    0,					/* tp_str */
    0,					/* tp_getattro */
    0,					/* tp_setattro */
    0,					/* tp_as_buffer */
    Py_TPFLAGS_DEFAULT|Py_TPFLAGS_BASETYPE, /* tp_flags */
    oaDoubleAppDef_oaTechHeader_doc,	/* tp_doc */
    0,					/* tp_traverse */
    0,					/* tp_clear */
    0,					/* tp_richcompre */
    0,					/* tp_weaklistoffset */
    0,					/* tp_iter */
    0,					/* tp_iternext */
    oaDoubleAppDef_oaTechHeader_methodlist,	/* tp_methods */
    0,					/* tp_members */
    0,					/* tp_getset */
    &PyoaAppDef_Type,	/* tp_base */
    0,					/* tp_dict */
    0,					/* tp_descr_get */
    0,					/* tp_descr_set */
    0,					/* tp_dictoffset */
    0,					/* tp_init */
    PyType_GenericAlloc,	/* tp_alloc */
    oaDoubleAppDef_oaTechHeader_new,	/* tp_new */
    _PyObject_Del,	/* tp_free */
};


// ------------------------------------------------------------------
// Static FunctionMethods:
// ------------------------------------------------------------------

// ------------------------------------------------------------------
static char oaDoubleAppDef_oaTechHeader_static_find_doc[] = 
"Class: oaDoubleAppDef_oaTechHeader, Function: find\n"
"  Paramegers: (oaString)\n"
"    Calls: oaDoubleAppDef_oaTechHeader* find(const oaString& name)\n"
"    Signature: find|ptr-oaDoubleAppDef_oaTechHeader|cref-oaString,\n"
"    This function returns an oaDoubleAppDef object with this dataType and the specified 'name' if it exists.\n"
"    name\n"
"    The name of the oaAppDef object to look for\n"
"  Paramegers: (oaString,oaAppObjectDef)\n"
"    Calls: oaDoubleAppDef_oaTechHeader* find(const oaString& name,const oaAppObjectDef* objDef)\n"
"    Signature: find|ptr-oaDoubleAppDef_oaTechHeader|cref-oaString,cptr-oaAppObjectDef,\n"
"    This function returns an oaDoubleAppDef object with this dataType and the specified 'name' that is associated with the specified object extension 'objDef'.\n"
"    name\n"
"    The name of the oaAppDef object to look for\n"
"    objDef\n"
"    A constant pointer to the object extension\n"
;

static PyObject*
oaDoubleAppDef_oaTechHeader_static_find(PyObject* ob, PyObject *args)
{
  try {
    // Case: (oaString)
    {
        PyParamoaString p1;
        if (PyArg_ParseTuple(args,"O&",
              &PyoaString_Convert,&p1)) {
            oaDoubleAppDef_oaTechHeaderp result= (oaDoubleAppDef_oaTechHeader::find(p1.Data()));
            return PyoaDoubleAppDef_oaTechHeader_FromoaDoubleAppDef_oaTechHeader(result);
        }
    }
    PyErr_Clear();
    // Case: (oaString,oaAppObjectDef)
    {
        PyParamoaString p1;
        PyParamoaAppObjectDef p2;
        if (PyArg_ParseTuple(args,"O&O&",
              &PyoaString_Convert,&p1,
              &PyoaAppObjectDef_Convert,&p2)) {
            if (!PyValidateDbObject(p2.Data(),2)) return NULL;
            oaDoubleAppDef_oaTechHeaderp result= (oaDoubleAppDef_oaTechHeader::find(p1.Data(),p2.Data()));
            return PyoaDoubleAppDef_oaTechHeader_FromoaDoubleAppDef_oaTechHeader(result);
        }
    }
    PyErr_Clear();
    PyErr_SetString(PyExc_TypeError,
        "No Arg-Matching Function found for class: oaDoubleAppDef_oaTechHeader, function: find, Choices are:\n"
        "    (oaString)\n"
        "    (oaString,oaAppObjectDef)\n"
    );
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaDoubleAppDef_oaTechHeader_static_get_doc[] = 
"Class: oaDoubleAppDef_oaTechHeader, Function: get\n"
"  Paramegers: (oaString)\n"
"    Calls: oaDoubleAppDef_oaTechHeader* get(const oaString& name)\n"
"    Signature: get|ptr-oaDoubleAppDef_oaTechHeader|cref-oaString,simple-oaDouble,simple-oaBoolean,\n"
"    This function constructs an oaDoubleAppDef object, creating a double extension with the specified name . You can create a double extension on any object except another extension.\n"
"    name\n"
"    The name given to the oaDoubleAppDef object\n"
"    defValue\n"
"    The default value for this extension\n"
"    persist\n"
"    Saves the oaDoubleAppDef data in the database\n"
"    oacAppDefExists\n"
"  Paramegers: (oaString,oaDouble)\n"
"    Calls: oaDoubleAppDef_oaTechHeader* get(const oaString& name,oaDouble defValue)\n"
"    Signature: get|ptr-oaDoubleAppDef_oaTechHeader|cref-oaString,simple-oaDouble,simple-oaBoolean,\n"
"    This function constructs an oaDoubleAppDef object, creating a double extension with the specified name . You can create a double extension on any object except another extension.\n"
"    name\n"
"    The name given to the oaDoubleAppDef object\n"
"    defValue\n"
"    The default value for this extension\n"
"    persist\n"
"    Saves the oaDoubleAppDef data in the database\n"
"    oacAppDefExists\n"
"  Paramegers: (oaString,oaDouble,oaBoolean)\n"
"    Calls: oaDoubleAppDef_oaTechHeader* get(const oaString& name,oaDouble defValue,oaBoolean persist)\n"
"    Signature: get|ptr-oaDoubleAppDef_oaTechHeader|cref-oaString,simple-oaDouble,simple-oaBoolean,\n"
"    This function constructs an oaDoubleAppDef object, creating a double extension with the specified name . You can create a double extension on any object except another extension.\n"
"    name\n"
"    The name given to the oaDoubleAppDef object\n"
"    defValue\n"
"    The default value for this extension\n"
"    persist\n"
"    Saves the oaDoubleAppDef data in the database\n"
"    oacAppDefExists\n"
"  Paramegers: (oaString,oaAppObjectDef)\n"
"    Calls: oaDoubleAppDef_oaTechHeader* get(const oaString& name,const oaAppObjectDef* objDef)\n"
"    Signature: get|ptr-oaDoubleAppDef_oaTechHeader|cref-oaString,cptr-oaAppObjectDef,simple-oaDouble,simple-oaBoolean,\n"
"    This function constructs an oaDoubleAppDef object, creating a double extension with the specified name for the specified object type.\n"
"    name\n"
"    The name given to the oaDoubleAppDef object\n"
"    objDef\n"
"    The object extension with which to associate the extension\n"
"    defValue\n"
"    An optional default value\n"
"    persist\n"
"    Saves the oaDoubleAppDef data in the database\n"
"    oacAppDefExists\n"
"  Paramegers: (oaString,oaAppObjectDef,oaDouble)\n"
"    Calls: oaDoubleAppDef_oaTechHeader* get(const oaString& name,const oaAppObjectDef* objDef,oaDouble defValue)\n"
"    Signature: get|ptr-oaDoubleAppDef_oaTechHeader|cref-oaString,cptr-oaAppObjectDef,simple-oaDouble,simple-oaBoolean,\n"
"    This function constructs an oaDoubleAppDef object, creating a double extension with the specified name for the specified object type.\n"
"    name\n"
"    The name given to the oaDoubleAppDef object\n"
"    objDef\n"
"    The object extension with which to associate the extension\n"
"    defValue\n"
"    An optional default value\n"
"    persist\n"
"    Saves the oaDoubleAppDef data in the database\n"
"    oacAppDefExists\n"
"  Paramegers: (oaString,oaAppObjectDef,oaDouble,oaBoolean)\n"
"    Calls: oaDoubleAppDef_oaTechHeader* get(const oaString& name,const oaAppObjectDef* objDef,oaDouble defValue,oaBoolean persist)\n"
"    Signature: get|ptr-oaDoubleAppDef_oaTechHeader|cref-oaString,cptr-oaAppObjectDef,simple-oaDouble,simple-oaBoolean,\n"
"    This function constructs an oaDoubleAppDef object, creating a double extension with the specified name for the specified object type.\n"
"    name\n"
"    The name given to the oaDoubleAppDef object\n"
"    objDef\n"
"    The object extension with which to associate the extension\n"
"    defValue\n"
"    An optional default value\n"
"    persist\n"
"    Saves the oaDoubleAppDef data in the database\n"
"    oacAppDefExists\n"
;

static PyObject*
oaDoubleAppDef_oaTechHeader_static_get(PyObject* ob, PyObject *args)
{
  try {
    // Case: (oaString)
    {
        PyParamoaString p1;
        if (PyArg_ParseTuple(args,"O&",
              &PyoaString_Convert,&p1)) {
            oaDoubleAppDef_oaTechHeaderp result= (oaDoubleAppDef_oaTechHeader::get(p1.Data()));
            return PyoaDoubleAppDef_oaTechHeader_FromoaDoubleAppDef_oaTechHeader(result);
        }
    }
    PyErr_Clear();
    // Case: (oaString,oaDouble)
    {
        PyParamoaString p1;
        PyParamoaDouble p2;
        if (PyArg_ParseTuple(args,"O&O&",
              &PyoaString_Convert,&p1,
              &PyoaDouble_Convert,&p2)) {
            oaDoubleAppDef_oaTechHeaderp result= (oaDoubleAppDef_oaTechHeader::get(p1.Data(),p2.Data()));
            return PyoaDoubleAppDef_oaTechHeader_FromoaDoubleAppDef_oaTechHeader(result);
        }
    }
    PyErr_Clear();
    // Case: (oaString,oaDouble,oaBoolean)
    {
        PyParamoaString p1;
        PyParamoaDouble p2;
        PyParamoaBoolean p3;
        if (PyArg_ParseTuple(args,"O&O&O&",
              &PyoaString_Convert,&p1,
              &PyoaDouble_Convert,&p2,
              &PyoaBoolean_Convert,&p3)) {
            oaDoubleAppDef_oaTechHeaderp result= (oaDoubleAppDef_oaTechHeader::get(p1.Data(),p2.Data(),p3.Data()));
            return PyoaDoubleAppDef_oaTechHeader_FromoaDoubleAppDef_oaTechHeader(result);
        }
    }
    PyErr_Clear();
    // Case: (oaString,oaAppObjectDef)
    {
        PyParamoaString p1;
        PyParamoaAppObjectDef p2;
        if (PyArg_ParseTuple(args,"O&O&",
              &PyoaString_Convert,&p1,
              &PyoaAppObjectDef_Convert,&p2)) {
            if (!PyValidateDbObject(p2.Data(),2)) return NULL;
            oaDoubleAppDef_oaTechHeaderp result= (oaDoubleAppDef_oaTechHeader::get(p1.Data(),p2.Data()));
            return PyoaDoubleAppDef_oaTechHeader_FromoaDoubleAppDef_oaTechHeader(result);
        }
    }
    PyErr_Clear();
    // Case: (oaString,oaAppObjectDef,oaDouble)
    {
        PyParamoaString p1;
        PyParamoaAppObjectDef p2;
        PyParamoaDouble p3;
        if (PyArg_ParseTuple(args,"O&O&O&",
              &PyoaString_Convert,&p1,
              &PyoaAppObjectDef_Convert,&p2,
              &PyoaDouble_Convert,&p3)) {
            if (!PyValidateDbObject(p2.Data(),2)) return NULL;
            oaDoubleAppDef_oaTechHeaderp result= (oaDoubleAppDef_oaTechHeader::get(p1.Data(),p2.Data(),p3.Data()));
            return PyoaDoubleAppDef_oaTechHeader_FromoaDoubleAppDef_oaTechHeader(result);
        }
    }
    PyErr_Clear();
    // Case: (oaString,oaAppObjectDef,oaDouble,oaBoolean)
    {
        PyParamoaString p1;
        PyParamoaAppObjectDef p2;
        PyParamoaDouble p3;
        PyParamoaBoolean p4;
        if (PyArg_ParseTuple(args,"O&O&O&O&",
              &PyoaString_Convert,&p1,
              &PyoaAppObjectDef_Convert,&p2,
              &PyoaDouble_Convert,&p3,
              &PyoaBoolean_Convert,&p4)) {
            if (!PyValidateDbObject(p2.Data(),2)) return NULL;
            oaDoubleAppDef_oaTechHeaderp result= (oaDoubleAppDef_oaTechHeader::get(p1.Data(),p2.Data(),p3.Data(),p4.Data()));
            return PyoaDoubleAppDef_oaTechHeader_FromoaDoubleAppDef_oaTechHeader(result);
        }
    }
    PyErr_Clear();
    PyErr_SetString(PyExc_TypeError,
        "No Arg-Matching Function found for class: oaDoubleAppDef_oaTechHeader, function: get, Choices are:\n"
        "    (oaString)\n"
        "    (oaString,oaDouble)\n"
        "    (oaString,oaDouble,oaBoolean)\n"
        "    (oaString,oaAppObjectDef)\n"
        "    (oaString,oaAppObjectDef,oaDouble)\n"
        "    (oaString,oaAppObjectDef,oaDouble,oaBoolean)\n"
    );
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static PyMethodDef oaDoubleAppDef_oaTechHeader_staticmethodlist[] = {
    {"static_find",(PyCFunction)oaDoubleAppDef_oaTechHeader_static_find,METH_VARARGS,oaDoubleAppDef_oaTechHeader_static_find_doc},
    {"static_get",(PyCFunction)oaDoubleAppDef_oaTechHeader_static_get,METH_VARARGS,oaDoubleAppDef_oaTechHeader_static_get_doc},
   {NULL,NULL,0,NULL}
};


// ------------------------------------------------------------------
//  Type Init:
// ------------------------------------------------------------------

int
PyoaDoubleAppDef_oaTechHeader_TypeInit(PyObject* mod_dict)
{
    if (PyType_Ready(&PyoaDoubleAppDef_oaTechHeader_Type)<0) {
      printf("** PyType_Ready failed for: oaDoubleAppDef_oaTechHeader\n");
      return -1;
    }

    if (PyDict_SetItemString(mod_dict,"oaDoubleAppDef_oaTechHeader",
           (PyObject*)(&PyoaDoubleAppDef_oaTechHeader_Type))<0) {
       printf("** Failed to add type name to module dictionary for: oaDoubleAppDef_oaTechHeader\n");
       return -1;
    }

    PyObject *dict, *value;
    PyMethodDef *method;
    dict=PyoaDoubleAppDef_oaTechHeader_Type.tp_dict;
    for(method=oaDoubleAppDef_oaTechHeader_staticmethodlist;method->ml_name!=NULL;method++) {
        value=PyCFunction_New(method,NULL);
    if (value==NULL) return -1;
        if (PyDict_SetItemString(dict,method->ml_name,value)!=0) {
        Py_DECREF(value);
            printf("** Failed to add static function to module dictionary for: %s\n",
                method->ml_name);
            return -1;
        }
        Py_DECREF(value);
    }
    return 0;
}


/********************************************************************
 *   Copyright 2002-2008  LSI Corporation
 *
 *   Licensed under the Apache License, Version 2.0 (the "License");
 *   you may not use this file except in compliance with the License.
 *   You may obtain a copy of the License at
 *
 *       http://www.apache.org/licenses/LICENSE-2.0
 *
 *   Unless required by applicable law or agreed to in writing, software
 *   distributed under the License is distributed on an "AS IS" BASIS,
 *   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *   See the License for the specific language governing permissions and
 *   limitations under the License.
 *
 *******************************************************************/

#include "pyoa_header.h"


// ==================================================================
// Wrapper Implementation for Class: oaDoubleAppDef_oaTechLayerHeader
// ==================================================================


// ==================================================================
// Alloc/Dealloc Routines
// ==================================================================

// ------------------------------------------------------------------
static PyObject*
oaDoubleAppDef_oaTechLayerHeader_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
  try {
    int is_raw=(type==&PyoaDoubleAppDef_oaTechLayerHeader_Type);
    PyObject* bself = type->tp_alloc(type,0);
    if (bself == NULL) return bself;
    PyoaDoubleAppDef_oaTechLayerHeaderObject* self = (PyoaDoubleAppDef_oaTechLayerHeaderObject*)bself;
    self->locks = NULL;
    self->borrow = 0;
    static char *kwlist [] = { NULL } ;
    // Case: (oaDoubleAppDef_oaTechLayerHeader)
    {
        PyParamoaDoubleAppDef_oaTechLayerHeader p1;
        if (PyArg_ParseTuple(args,(char*)"O&",
              &PyoaDoubleAppDef_oaTechLayerHeader_Convert,&p1)) {
            self->data=p1.Data();
            self->value=&(self->data);
            return bself;
        }
    }
    PyErr_Clear();
    // Case: ()
    {
        if (PyArg_ParseTuple(args,(char*)"")) {
          self->data=NULL;
          self->value=&(self->data);
          return bself;
        }
    }
    PyErr_Clear();
    PyErr_SetString(PyExc_TypeError,
        "No Arg-Matching Constructor found for class: oaDoubleAppDef_oaTechLayerHeader, Choices are:\n"
        "    (oaDoubleAppDef_oaTechLayerHeader)\n"
    );
    Py_DECREF(self);
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static void
oaDoubleAppDef_oaTechLayerHeader_tp_dealloc(PyoaDoubleAppDef_oaTechLayerHeaderObject* self)
{
    self->ob_type->tp_free((PyObject*)self);
}

// ------------------------------------------------------------------
static PyObject*
oaDoubleAppDef_oaTechLayerHeader_tp_repr(PyObject *ob)
{
    PyParamoaDoubleAppDef_oaTechLayerHeader value;
    int convert_status=PyoaDoubleAppDef_oaTechLayerHeader_Convert(ob,&value);
    assert(convert_status!=0);
    PyObject* result;

    char buffer[54];
    sprintf(buffer,"<oaDoubleAppDef_oaTechLayerHeader::" DISPLAY_FORMAT ">",POINTER_AS_DISPLAY(value.DataCall()));
    result=PyString_FromString(buffer);
    return result;
}
        
// ------------------------------------------------------------------
static int
oaDoubleAppDef_oaTechLayerHeader_tp_compare(PyObject *ob1,PyObject* ob2)
{
    PyParamoaDoubleAppDef_oaTechLayerHeader v1;
    PyParamoaDoubleAppDef_oaTechLayerHeader v2;
    int convert_status1=PyoaDoubleAppDef_oaTechLayerHeader_Convert(ob1,&v1);
    int convert_status2=PyoaDoubleAppDef_oaTechLayerHeader_Convert(ob2,&v2);
    assert(convert_status1!=0);
    assert(convert_status2!=0);
    if (v1.DataCall()==v2.DataCall()) return 0;
    return 1;
}
        
// ------------------------------------------------------------------
int
PyoaDoubleAppDef_oaTechLayerHeader_Convert(PyObject* ob,PyParamoaDoubleAppDef_oaTechLayerHeader* result)
{
    if (ob == NULL) return 1;
    if (PyoaDoubleAppDef_oaTechLayerHeader_Check(ob)) {
        result->SetData( (oaDoubleAppDef_oaTechLayerHeader**) ((PyoaDoubleAppDef_oaTechLayerHeaderObject*)ob)->value);
        return 1;
    }
    PyErr_SetString(PyExc_TypeError,
        "Convertion of parameter to class: oaDoubleAppDef_oaTechLayerHeader Failed");
    return 0;
}
// ------------------------------------------------------------------
PyObject* PyoaDoubleAppDef_oaTechLayerHeader_FromoaDoubleAppDef_oaTechLayerHeader(oaDoubleAppDef_oaTechLayerHeader** value,int borrow,PyObject* lock)
{
    if (value && *value) {
        oaDoubleAppDef_oaTechLayerHeader* data=*value;
        PyObject* bself = PyoaDoubleAppDef_oaTechLayerHeader_Type.tp_alloc(&PyoaDoubleAppDef_oaTechLayerHeader_Type,0);
        if (bself == NULL) return bself;
        PyoaDoubleAppDef_oaTechLayerHeaderObject* self = (PyoaDoubleAppDef_oaTechLayerHeaderObject*)bself;
        self->value = (oaObject**) value;
        self->data = NULL;
        self->locks = NULL;
        self->borrow = 0; // Ignore borrow flag, since we copied
       if (lock) PyoaLockObject(self->locks,lock);
        return bself;
    }
    Py_INCREF(Py_None);
    return Py_None;
}
// ------------------------------------------------------------------
PyObject* PyoaDoubleAppDef_oaTechLayerHeader_FromoaDoubleAppDef_oaTechLayerHeader(oaDoubleAppDef_oaTechLayerHeader* data)
{
    if (data) {
       PyObject* bself = PyoaDoubleAppDef_oaTechLayerHeader_Type.tp_alloc(&PyoaDoubleAppDef_oaTechLayerHeader_Type,0);
       if (bself == NULL) return bself;
       PyoaDoubleAppDef_oaTechLayerHeaderObject* self = (PyoaDoubleAppDef_oaTechLayerHeaderObject*)bself;
       self->data = (oaObject*) data;
       self->value = &(self->data);
       self->borrow = 0; 
       self->locks = NULL;
       return bself;
    }
    Py_INCREF(Py_None);
    return Py_None;
}

// ------------------------------------------------------------------
// FunctionMethods:
// ------------------------------------------------------------------

// ------------------------------------------------------------------
static char oaDoubleAppDef_oaTechLayerHeader_get_doc[] = 
"Class: oaDoubleAppDef_oaTechLayerHeader, Function: get\n"
"  Paramegers: (oaTechLayerHeader)\n"
"    Calls: oaDouble get(const oaTechLayerHeader* object)\n"
"    Signature: get|simple-oaDouble|cptr-oaTechLayerHeader,\n"
"    This function returns the value of this double extension.\n"
"    object\n"
"    The object for which to get the value\n"
;

static PyObject*
oaDoubleAppDef_oaTechLayerHeader_get(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaDoubleAppDef_oaTechLayerHeader data;
    int convert_status=PyoaDoubleAppDef_oaTechLayerHeader_Convert(ob,&data);
    assert(convert_status!=0);
    PyoaDoubleAppDef_oaTechLayerHeaderObject* self=(PyoaDoubleAppDef_oaTechLayerHeaderObject*)ob;
    if (!PyValidateDbObject(data.Data(),0)) return NULL;

    PyParamoaTechLayerHeader p1;
    if (PyArg_ParseTuple(args,"O&",
          &PyoaTechLayerHeader_Convert,&p1)) {
        if (!PyValidateDbObject(p1.Data(),1)) return NULL;
        oaDouble result= (data.DataCall()->get(p1.Data()));
        return PyoaDouble_FromoaDouble(result);
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaDoubleAppDef_oaTechLayerHeader_getDefault_doc[] = 
"Class: oaDoubleAppDef_oaTechLayerHeader, Function: getDefault\n"
"  Paramegers: ()\n"
"    Calls: oaDouble getDefault() const\n"
"    Signature: getDefault|simple-oaDouble|\n"
"    BrowseData: 1\n"
"    This function returns the default value of this double extension.\n"
;

static PyObject*
oaDoubleAppDef_oaTechLayerHeader_getDefault(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaDoubleAppDef_oaTechLayerHeader data;
    int convert_status=PyoaDoubleAppDef_oaTechLayerHeader_Convert(ob,&data);
    assert(convert_status!=0);
    PyoaDoubleAppDef_oaTechLayerHeaderObject* self=(PyoaDoubleAppDef_oaTechLayerHeaderObject*)ob;
    if (!PyValidateDbObject(data.Data(),0)) return NULL;

    if (PyArg_ParseTuple(args,"")) {
        oaDouble result= (data.DataCall()->getDefault());
        return PyoaDouble_FromoaDouble(result);
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaDoubleAppDef_oaTechLayerHeader_set_doc[] = 
"Class: oaDoubleAppDef_oaTechLayerHeader, Function: set\n"
"  Paramegers: (oaTechLayerHeader,oaDouble)\n"
"    Calls: void set(oaTechLayerHeader* object,oaDouble value)\n"
"    Signature: set|void-void|ptr-oaTechLayerHeader,simple-oaDouble,\n"
"    This function sets the value of this double extension.\n"
"    object\n"
"    The object on which to set the value\n"
"    value\n"
"    The value to set on the object\n"
;

static PyObject*
oaDoubleAppDef_oaTechLayerHeader_set(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaDoubleAppDef_oaTechLayerHeader data;
    int convert_status=PyoaDoubleAppDef_oaTechLayerHeader_Convert(ob,&data);
    assert(convert_status!=0);
    PyoaDoubleAppDef_oaTechLayerHeaderObject* self=(PyoaDoubleAppDef_oaTechLayerHeaderObject*)ob;
    if (!PyValidateDbObject(data.Data(),0)) return NULL;

    PyParamoaTechLayerHeader p1;
    PyParamoaDouble p2;
    if (PyArg_ParseTuple(args,"O&O&",
          &PyoaTechLayerHeader_Convert,&p1,
          &PyoaDouble_Convert,&p2)) {
        if (!PyValidateDbObject(p1.Data(),1)) return NULL;
        data.DataCall()->set(p1.Data(),p2.Data());
        Py_INCREF(Py_None);
        return Py_None;
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaDoubleAppDef_oaTechLayerHeader_isNull_doc[] =
"Class: oaDoubleAppDef_oaTechLayerHeader, Function: isNull\n"
"  Parameters: () \n"
"    This functions returns 1 if the DbPointer is NULL, and 0 otherwise.\n"
;

static PyObject*
oaDoubleAppDef_oaTechLayerHeader_tp_isNull(PyObject* ob, PyObject *args)
{
    PyParamoaDoubleAppDef_oaTechLayerHeader data;
    int convert_status=PyoaDoubleAppDef_oaTechLayerHeader_Convert(ob,&data);
    assert(convert_status!=0);
    if (data.DataCall()==NULL)
        return PyInt_FromLong(1);
    else
        return PyInt_FromLong(0);
}
static char oaDoubleAppDef_oaTechLayerHeader_assign_doc[] = 
"Class: oaDoubleAppDef_oaTechLayerHeader, Function: set\n"
"  Paramegers: (oaDouble)\n"
"    This function sets the current value.\n"
;

static PyObject*
oaDoubleAppDef_oaTechLayerHeader_tp_assign(PyObject* ob, PyObject *args)
{
  PyParamoaDoubleAppDef_oaTechLayerHeader data;
  int convert_status=PyoaDoubleAppDef_oaTechLayerHeader_Convert(ob,&data);
  assert(convert_status!=0);
  try {
    PyParamoaDoubleAppDef_oaTechLayerHeader p1;
    if (PyArg_ParseTuple(args,(char*)"O&",
          &PyoaDoubleAppDef_oaTechLayerHeader_Convert,&p1)) {
        data.Data()=p1.Data();
        Py_INCREF(ob);
        return ob;
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}


// ------------------------------------------------------------------
//  Function Methods Table:
// ------------------------------------------------------------------

static PyMethodDef oaDoubleAppDef_oaTechLayerHeader_methodlist[] = {
    {"get",(PyCFunction)oaDoubleAppDef_oaTechLayerHeader_get,METH_VARARGS,oaDoubleAppDef_oaTechLayerHeader_get_doc},
    {"getDefault",(PyCFunction)oaDoubleAppDef_oaTechLayerHeader_getDefault,METH_VARARGS,oaDoubleAppDef_oaTechLayerHeader_getDefault_doc},
    {"set",(PyCFunction)oaDoubleAppDef_oaTechLayerHeader_set,METH_VARARGS,oaDoubleAppDef_oaTechLayerHeader_set_doc},
    {"isNull",(PyCFunction)oaDoubleAppDef_oaTechLayerHeader_tp_isNull,METH_VARARGS,oaDoubleAppDef_oaTechLayerHeader_isNull_doc},
    {"assign",(PyCFunction)oaDoubleAppDef_oaTechLayerHeader_tp_assign,METH_VARARGS,oaDoubleAppDef_oaTechLayerHeader_assign_doc},
   {NULL,NULL,0,NULL}
};


// ------------------------------------------------------------------
//  Type Object:
// ------------------------------------------------------------------

// ------------------------------------------------------------------
static char oaDoubleAppDef_oaTechLayerHeader_doc[] = 
"Class: oaDoubleAppDef_oaTechLayerHeader\n"
"  The oaDoubleAppDef class implements an application-specific extension for a particular type of data in a database.\n"
"  Once created, a double field is added to each object of the specified dataType. The default value for this extension is DBL_MAX. Applications can use the new field for whatever purpose is necessary.\n"
"  For additional information on defining and using AppDefs, see oaAppDef and Extending the Database in the Programmer's Guide.\n"
"Constructors:\n"
"  Paramegers: (oaDoubleAppDef_oaTechLayerHeader)\n"
"    Calls: (const oaDoubleAppDef_oaTechLayerHeader&)\n"
"    Signature: oaDoubleAppDef_oaTechLayerHeader||cref-oaDoubleAppDef_oaTechLayerHeader,\n"
;

// ------------------------------------------------------------------
PyTypeObject PyoaDoubleAppDef_oaTechLayerHeader_Type = {
    PyObject_HEAD_INIT(&PyType_Type)
    0,
    "oaDoubleAppDef_oaTechLayerHeader",
    sizeof(PyoaDoubleAppDef_oaTechLayerHeaderObject),
    0,
    (destructor)oaDoubleAppDef_oaTechLayerHeader_tp_dealloc,	/* tp_dealloc */
    0,	/* tp_print */
    0,					/* tp_getattr */
    0,					/* tp_setattr */
    (cmpfunc)oaDoubleAppDef_oaTechLayerHeader_tp_compare,	/* tp_compare */
    (reprfunc)oaDoubleAppDef_oaTechLayerHeader_tp_repr,	/* tp_repr */
    0,					/* tp_as_number */
    0,					/* tp_as_sequence */
    0,					/* tp_as_mapping */
    0,					/* tp_as_hash */
    0,					/* tp_as_call */
    0,					/* tp_str */
    0,					/* tp_getattro */
    0,					/* tp_setattro */
    0,					/* tp_as_buffer */
    Py_TPFLAGS_DEFAULT|Py_TPFLAGS_BASETYPE, /* tp_flags */
    oaDoubleAppDef_oaTechLayerHeader_doc,	/* tp_doc */
    0,					/* tp_traverse */
    0,					/* tp_clear */
    0,					/* tp_richcompre */
    0,					/* tp_weaklistoffset */
    0,					/* tp_iter */
    0,					/* tp_iternext */
    oaDoubleAppDef_oaTechLayerHeader_methodlist,	/* tp_methods */
    0,					/* tp_members */
    0,					/* tp_getset */
    &PyoaAppDef_Type,	/* tp_base */
    0,					/* tp_dict */
    0,					/* tp_descr_get */
    0,					/* tp_descr_set */
    0,					/* tp_dictoffset */
    0,					/* tp_init */
    PyType_GenericAlloc,	/* tp_alloc */
    oaDoubleAppDef_oaTechLayerHeader_new,	/* tp_new */
    _PyObject_Del,	/* tp_free */
};


// ------------------------------------------------------------------
// Static FunctionMethods:
// ------------------------------------------------------------------

// ------------------------------------------------------------------
static char oaDoubleAppDef_oaTechLayerHeader_static_find_doc[] = 
"Class: oaDoubleAppDef_oaTechLayerHeader, Function: find\n"
"  Paramegers: (oaString)\n"
"    Calls: oaDoubleAppDef_oaTechLayerHeader* find(const oaString& name)\n"
"    Signature: find|ptr-oaDoubleAppDef_oaTechLayerHeader|cref-oaString,\n"
"    This function returns an oaDoubleAppDef object with this dataType and the specified 'name' if it exists.\n"
"    name\n"
"    The name of the oaAppDef object to look for\n"
"  Paramegers: (oaString,oaAppObjectDef)\n"
"    Calls: oaDoubleAppDef_oaTechLayerHeader* find(const oaString& name,const oaAppObjectDef* objDef)\n"
"    Signature: find|ptr-oaDoubleAppDef_oaTechLayerHeader|cref-oaString,cptr-oaAppObjectDef,\n"
"    This function returns an oaDoubleAppDef object with this dataType and the specified 'name' that is associated with the specified object extension 'objDef'.\n"
"    name\n"
"    The name of the oaAppDef object to look for\n"
"    objDef\n"
"    A constant pointer to the object extension\n"
;

static PyObject*
oaDoubleAppDef_oaTechLayerHeader_static_find(PyObject* ob, PyObject *args)
{
  try {
    // Case: (oaString)
    {
        PyParamoaString p1;
        if (PyArg_ParseTuple(args,"O&",
              &PyoaString_Convert,&p1)) {
            oaDoubleAppDef_oaTechLayerHeaderp result= (oaDoubleAppDef_oaTechLayerHeader::find(p1.Data()));
            return PyoaDoubleAppDef_oaTechLayerHeader_FromoaDoubleAppDef_oaTechLayerHeader(result);
        }
    }
    PyErr_Clear();
    // Case: (oaString,oaAppObjectDef)
    {
        PyParamoaString p1;
        PyParamoaAppObjectDef p2;
        if (PyArg_ParseTuple(args,"O&O&",
              &PyoaString_Convert,&p1,
              &PyoaAppObjectDef_Convert,&p2)) {
            if (!PyValidateDbObject(p2.Data(),2)) return NULL;
            oaDoubleAppDef_oaTechLayerHeaderp result= (oaDoubleAppDef_oaTechLayerHeader::find(p1.Data(),p2.Data()));
            return PyoaDoubleAppDef_oaTechLayerHeader_FromoaDoubleAppDef_oaTechLayerHeader(result);
        }
    }
    PyErr_Clear();
    PyErr_SetString(PyExc_TypeError,
        "No Arg-Matching Function found for class: oaDoubleAppDef_oaTechLayerHeader, function: find, Choices are:\n"
        "    (oaString)\n"
        "    (oaString,oaAppObjectDef)\n"
    );
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaDoubleAppDef_oaTechLayerHeader_static_get_doc[] = 
"Class: oaDoubleAppDef_oaTechLayerHeader, Function: get\n"
"  Paramegers: (oaString)\n"
"    Calls: oaDoubleAppDef_oaTechLayerHeader* get(const oaString& name)\n"
"    Signature: get|ptr-oaDoubleAppDef_oaTechLayerHeader|cref-oaString,simple-oaDouble,simple-oaBoolean,\n"
"    This function constructs an oaDoubleAppDef object, creating a double extension with the specified name . You can create a double extension on any object except another extension.\n"
"    name\n"
"    The name given to the oaDoubleAppDef object\n"
"    defValue\n"
"    The default value for this extension\n"
"    persist\n"
"    Saves the oaDoubleAppDef data in the database\n"
"    oacAppDefExists\n"
"  Paramegers: (oaString,oaDouble)\n"
"    Calls: oaDoubleAppDef_oaTechLayerHeader* get(const oaString& name,oaDouble defValue)\n"
"    Signature: get|ptr-oaDoubleAppDef_oaTechLayerHeader|cref-oaString,simple-oaDouble,simple-oaBoolean,\n"
"    This function constructs an oaDoubleAppDef object, creating a double extension with the specified name . You can create a double extension on any object except another extension.\n"
"    name\n"
"    The name given to the oaDoubleAppDef object\n"
"    defValue\n"
"    The default value for this extension\n"
"    persist\n"
"    Saves the oaDoubleAppDef data in the database\n"
"    oacAppDefExists\n"
"  Paramegers: (oaString,oaDouble,oaBoolean)\n"
"    Calls: oaDoubleAppDef_oaTechLayerHeader* get(const oaString& name,oaDouble defValue,oaBoolean persist)\n"
"    Signature: get|ptr-oaDoubleAppDef_oaTechLayerHeader|cref-oaString,simple-oaDouble,simple-oaBoolean,\n"
"    This function constructs an oaDoubleAppDef object, creating a double extension with the specified name . You can create a double extension on any object except another extension.\n"
"    name\n"
"    The name given to the oaDoubleAppDef object\n"
"    defValue\n"
"    The default value for this extension\n"
"    persist\n"
"    Saves the oaDoubleAppDef data in the database\n"
"    oacAppDefExists\n"
"  Paramegers: (oaString,oaAppObjectDef)\n"
"    Calls: oaDoubleAppDef_oaTechLayerHeader* get(const oaString& name,const oaAppObjectDef* objDef)\n"
"    Signature: get|ptr-oaDoubleAppDef_oaTechLayerHeader|cref-oaString,cptr-oaAppObjectDef,simple-oaDouble,simple-oaBoolean,\n"
"    This function constructs an oaDoubleAppDef object, creating a double extension with the specified name for the specified object type.\n"
"    name\n"
"    The name given to the oaDoubleAppDef object\n"
"    objDef\n"
"    The object extension with which to associate the extension\n"
"    defValue\n"
"    An optional default value\n"
"    persist\n"
"    Saves the oaDoubleAppDef data in the database\n"
"    oacAppDefExists\n"
"  Paramegers: (oaString,oaAppObjectDef,oaDouble)\n"
"    Calls: oaDoubleAppDef_oaTechLayerHeader* get(const oaString& name,const oaAppObjectDef* objDef,oaDouble defValue)\n"
"    Signature: get|ptr-oaDoubleAppDef_oaTechLayerHeader|cref-oaString,cptr-oaAppObjectDef,simple-oaDouble,simple-oaBoolean,\n"
"    This function constructs an oaDoubleAppDef object, creating a double extension with the specified name for the specified object type.\n"
"    name\n"
"    The name given to the oaDoubleAppDef object\n"
"    objDef\n"
"    The object extension with which to associate the extension\n"
"    defValue\n"
"    An optional default value\n"
"    persist\n"
"    Saves the oaDoubleAppDef data in the database\n"
"    oacAppDefExists\n"
"  Paramegers: (oaString,oaAppObjectDef,oaDouble,oaBoolean)\n"
"    Calls: oaDoubleAppDef_oaTechLayerHeader* get(const oaString& name,const oaAppObjectDef* objDef,oaDouble defValue,oaBoolean persist)\n"
"    Signature: get|ptr-oaDoubleAppDef_oaTechLayerHeader|cref-oaString,cptr-oaAppObjectDef,simple-oaDouble,simple-oaBoolean,\n"
"    This function constructs an oaDoubleAppDef object, creating a double extension with the specified name for the specified object type.\n"
"    name\n"
"    The name given to the oaDoubleAppDef object\n"
"    objDef\n"
"    The object extension with which to associate the extension\n"
"    defValue\n"
"    An optional default value\n"
"    persist\n"
"    Saves the oaDoubleAppDef data in the database\n"
"    oacAppDefExists\n"
;

static PyObject*
oaDoubleAppDef_oaTechLayerHeader_static_get(PyObject* ob, PyObject *args)
{
  try {
    // Case: (oaString)
    {
        PyParamoaString p1;
        if (PyArg_ParseTuple(args,"O&",
              &PyoaString_Convert,&p1)) {
            oaDoubleAppDef_oaTechLayerHeaderp result= (oaDoubleAppDef_oaTechLayerHeader::get(p1.Data()));
            return PyoaDoubleAppDef_oaTechLayerHeader_FromoaDoubleAppDef_oaTechLayerHeader(result);
        }
    }
    PyErr_Clear();
    // Case: (oaString,oaDouble)
    {
        PyParamoaString p1;
        PyParamoaDouble p2;
        if (PyArg_ParseTuple(args,"O&O&",
              &PyoaString_Convert,&p1,
              &PyoaDouble_Convert,&p2)) {
            oaDoubleAppDef_oaTechLayerHeaderp result= (oaDoubleAppDef_oaTechLayerHeader::get(p1.Data(),p2.Data()));
            return PyoaDoubleAppDef_oaTechLayerHeader_FromoaDoubleAppDef_oaTechLayerHeader(result);
        }
    }
    PyErr_Clear();
    // Case: (oaString,oaDouble,oaBoolean)
    {
        PyParamoaString p1;
        PyParamoaDouble p2;
        PyParamoaBoolean p3;
        if (PyArg_ParseTuple(args,"O&O&O&",
              &PyoaString_Convert,&p1,
              &PyoaDouble_Convert,&p2,
              &PyoaBoolean_Convert,&p3)) {
            oaDoubleAppDef_oaTechLayerHeaderp result= (oaDoubleAppDef_oaTechLayerHeader::get(p1.Data(),p2.Data(),p3.Data()));
            return PyoaDoubleAppDef_oaTechLayerHeader_FromoaDoubleAppDef_oaTechLayerHeader(result);
        }
    }
    PyErr_Clear();
    // Case: (oaString,oaAppObjectDef)
    {
        PyParamoaString p1;
        PyParamoaAppObjectDef p2;
        if (PyArg_ParseTuple(args,"O&O&",
              &PyoaString_Convert,&p1,
              &PyoaAppObjectDef_Convert,&p2)) {
            if (!PyValidateDbObject(p2.Data(),2)) return NULL;
            oaDoubleAppDef_oaTechLayerHeaderp result= (oaDoubleAppDef_oaTechLayerHeader::get(p1.Data(),p2.Data()));
            return PyoaDoubleAppDef_oaTechLayerHeader_FromoaDoubleAppDef_oaTechLayerHeader(result);
        }
    }
    PyErr_Clear();
    // Case: (oaString,oaAppObjectDef,oaDouble)
    {
        PyParamoaString p1;
        PyParamoaAppObjectDef p2;
        PyParamoaDouble p3;
        if (PyArg_ParseTuple(args,"O&O&O&",
              &PyoaString_Convert,&p1,
              &PyoaAppObjectDef_Convert,&p2,
              &PyoaDouble_Convert,&p3)) {
            if (!PyValidateDbObject(p2.Data(),2)) return NULL;
            oaDoubleAppDef_oaTechLayerHeaderp result= (oaDoubleAppDef_oaTechLayerHeader::get(p1.Data(),p2.Data(),p3.Data()));
            return PyoaDoubleAppDef_oaTechLayerHeader_FromoaDoubleAppDef_oaTechLayerHeader(result);
        }
    }
    PyErr_Clear();
    // Case: (oaString,oaAppObjectDef,oaDouble,oaBoolean)
    {
        PyParamoaString p1;
        PyParamoaAppObjectDef p2;
        PyParamoaDouble p3;
        PyParamoaBoolean p4;
        if (PyArg_ParseTuple(args,"O&O&O&O&",
              &PyoaString_Convert,&p1,
              &PyoaAppObjectDef_Convert,&p2,
              &PyoaDouble_Convert,&p3,
              &PyoaBoolean_Convert,&p4)) {
            if (!PyValidateDbObject(p2.Data(),2)) return NULL;
            oaDoubleAppDef_oaTechLayerHeaderp result= (oaDoubleAppDef_oaTechLayerHeader::get(p1.Data(),p2.Data(),p3.Data(),p4.Data()));
            return PyoaDoubleAppDef_oaTechLayerHeader_FromoaDoubleAppDef_oaTechLayerHeader(result);
        }
    }
    PyErr_Clear();
    PyErr_SetString(PyExc_TypeError,
        "No Arg-Matching Function found for class: oaDoubleAppDef_oaTechLayerHeader, function: get, Choices are:\n"
        "    (oaString)\n"
        "    (oaString,oaDouble)\n"
        "    (oaString,oaDouble,oaBoolean)\n"
        "    (oaString,oaAppObjectDef)\n"
        "    (oaString,oaAppObjectDef,oaDouble)\n"
        "    (oaString,oaAppObjectDef,oaDouble,oaBoolean)\n"
    );
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static PyMethodDef oaDoubleAppDef_oaTechLayerHeader_staticmethodlist[] = {
    {"static_find",(PyCFunction)oaDoubleAppDef_oaTechLayerHeader_static_find,METH_VARARGS,oaDoubleAppDef_oaTechLayerHeader_static_find_doc},
    {"static_get",(PyCFunction)oaDoubleAppDef_oaTechLayerHeader_static_get,METH_VARARGS,oaDoubleAppDef_oaTechLayerHeader_static_get_doc},
   {NULL,NULL,0,NULL}
};


// ------------------------------------------------------------------
//  Type Init:
// ------------------------------------------------------------------

int
PyoaDoubleAppDef_oaTechLayerHeader_TypeInit(PyObject* mod_dict)
{
    if (PyType_Ready(&PyoaDoubleAppDef_oaTechLayerHeader_Type)<0) {
      printf("** PyType_Ready failed for: oaDoubleAppDef_oaTechLayerHeader\n");
      return -1;
    }

    if (PyDict_SetItemString(mod_dict,"oaDoubleAppDef_oaTechLayerHeader",
           (PyObject*)(&PyoaDoubleAppDef_oaTechLayerHeader_Type))<0) {
       printf("** Failed to add type name to module dictionary for: oaDoubleAppDef_oaTechLayerHeader\n");
       return -1;
    }

    PyObject *dict, *value;
    PyMethodDef *method;
    dict=PyoaDoubleAppDef_oaTechLayerHeader_Type.tp_dict;
    for(method=oaDoubleAppDef_oaTechLayerHeader_staticmethodlist;method->ml_name!=NULL;method++) {
        value=PyCFunction_New(method,NULL);
    if (value==NULL) return -1;
        if (PyDict_SetItemString(dict,method->ml_name,value)!=0) {
        Py_DECREF(value);
            printf("** Failed to add static function to module dictionary for: %s\n",
                method->ml_name);
            return -1;
        }
        Py_DECREF(value);
    }
    return 0;
}


/********************************************************************
 *   Copyright 2002-2008  LSI Corporation
 *
 *   Licensed under the Apache License, Version 2.0 (the "License");
 *   you may not use this file except in compliance with the License.
 *   You may obtain a copy of the License at
 *
 *       http://www.apache.org/licenses/LICENSE-2.0
 *
 *   Unless required by applicable law or agreed to in writing, software
 *   distributed under the License is distributed on an "AS IS" BASIS,
 *   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *   See the License for the specific language governing permissions and
 *   limitations under the License.
 *
 *******************************************************************/

#include "pyoa_header.h"


// ==================================================================
// Wrapper Implementation for Class: oaDoubleAppDef_oaTechViaDefHeader
// ==================================================================


// ==================================================================
// Alloc/Dealloc Routines
// ==================================================================

// ------------------------------------------------------------------
static PyObject*
oaDoubleAppDef_oaTechViaDefHeader_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
  try {
    int is_raw=(type==&PyoaDoubleAppDef_oaTechViaDefHeader_Type);
    PyObject* bself = type->tp_alloc(type,0);
    if (bself == NULL) return bself;
    PyoaDoubleAppDef_oaTechViaDefHeaderObject* self = (PyoaDoubleAppDef_oaTechViaDefHeaderObject*)bself;
    self->locks = NULL;
    self->borrow = 0;
    static char *kwlist [] = { NULL } ;
    // Case: (oaDoubleAppDef_oaTechViaDefHeader)
    {
        PyParamoaDoubleAppDef_oaTechViaDefHeader p1;
        if (PyArg_ParseTuple(args,(char*)"O&",
              &PyoaDoubleAppDef_oaTechViaDefHeader_Convert,&p1)) {
            self->data=p1.Data();
            self->value=&(self->data);
            return bself;
        }
    }
    PyErr_Clear();
    // Case: ()
    {
        if (PyArg_ParseTuple(args,(char*)"")) {
          self->data=NULL;
          self->value=&(self->data);
          return bself;
        }
    }
    PyErr_Clear();
    PyErr_SetString(PyExc_TypeError,
        "No Arg-Matching Constructor found for class: oaDoubleAppDef_oaTechViaDefHeader, Choices are:\n"
        "    (oaDoubleAppDef_oaTechViaDefHeader)\n"
    );
    Py_DECREF(self);
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static void
oaDoubleAppDef_oaTechViaDefHeader_tp_dealloc(PyoaDoubleAppDef_oaTechViaDefHeaderObject* self)
{
    self->ob_type->tp_free((PyObject*)self);
}

// ------------------------------------------------------------------
static PyObject*
oaDoubleAppDef_oaTechViaDefHeader_tp_repr(PyObject *ob)
{
    PyParamoaDoubleAppDef_oaTechViaDefHeader value;
    int convert_status=PyoaDoubleAppDef_oaTechViaDefHeader_Convert(ob,&value);
    assert(convert_status!=0);
    PyObject* result;

    char buffer[55];
    sprintf(buffer,"<oaDoubleAppDef_oaTechViaDefHeader::" DISPLAY_FORMAT ">",POINTER_AS_DISPLAY(value.DataCall()));
    result=PyString_FromString(buffer);
    return result;
}
        
// ------------------------------------------------------------------
static int
oaDoubleAppDef_oaTechViaDefHeader_tp_compare(PyObject *ob1,PyObject* ob2)
{
    PyParamoaDoubleAppDef_oaTechViaDefHeader v1;
    PyParamoaDoubleAppDef_oaTechViaDefHeader v2;
    int convert_status1=PyoaDoubleAppDef_oaTechViaDefHeader_Convert(ob1,&v1);
    int convert_status2=PyoaDoubleAppDef_oaTechViaDefHeader_Convert(ob2,&v2);
    assert(convert_status1!=0);
    assert(convert_status2!=0);
    if (v1.DataCall()==v2.DataCall()) return 0;
    return 1;
}
        
// ------------------------------------------------------------------
int
PyoaDoubleAppDef_oaTechViaDefHeader_Convert(PyObject* ob,PyParamoaDoubleAppDef_oaTechViaDefHeader* result)
{
    if (ob == NULL) return 1;
    if (PyoaDoubleAppDef_oaTechViaDefHeader_Check(ob)) {
        result->SetData( (oaDoubleAppDef_oaTechViaDefHeader**) ((PyoaDoubleAppDef_oaTechViaDefHeaderObject*)ob)->value);
        return 1;
    }
    PyErr_SetString(PyExc_TypeError,
        "Convertion of parameter to class: oaDoubleAppDef_oaTechViaDefHeader Failed");
    return 0;
}
// ------------------------------------------------------------------
PyObject* PyoaDoubleAppDef_oaTechViaDefHeader_FromoaDoubleAppDef_oaTechViaDefHeader(oaDoubleAppDef_oaTechViaDefHeader** value,int borrow,PyObject* lock)
{
    if (value && *value) {
        oaDoubleAppDef_oaTechViaDefHeader* data=*value;
        PyObject* bself = PyoaDoubleAppDef_oaTechViaDefHeader_Type.tp_alloc(&PyoaDoubleAppDef_oaTechViaDefHeader_Type,0);
        if (bself == NULL) return bself;
        PyoaDoubleAppDef_oaTechViaDefHeaderObject* self = (PyoaDoubleAppDef_oaTechViaDefHeaderObject*)bself;
        self->value = (oaObject**) value;
        self->data = NULL;
        self->locks = NULL;
        self->borrow = 0; // Ignore borrow flag, since we copied
       if (lock) PyoaLockObject(self->locks,lock);
        return bself;
    }
    Py_INCREF(Py_None);
    return Py_None;
}
// ------------------------------------------------------------------
PyObject* PyoaDoubleAppDef_oaTechViaDefHeader_FromoaDoubleAppDef_oaTechViaDefHeader(oaDoubleAppDef_oaTechViaDefHeader* data)
{
    if (data) {
       PyObject* bself = PyoaDoubleAppDef_oaTechViaDefHeader_Type.tp_alloc(&PyoaDoubleAppDef_oaTechViaDefHeader_Type,0);
       if (bself == NULL) return bself;
       PyoaDoubleAppDef_oaTechViaDefHeaderObject* self = (PyoaDoubleAppDef_oaTechViaDefHeaderObject*)bself;
       self->data = (oaObject*) data;
       self->value = &(self->data);
       self->borrow = 0; 
       self->locks = NULL;
       return bself;
    }
    Py_INCREF(Py_None);
    return Py_None;
}

// ------------------------------------------------------------------
// FunctionMethods:
// ------------------------------------------------------------------

// ------------------------------------------------------------------
static char oaDoubleAppDef_oaTechViaDefHeader_get_doc[] = 
"Class: oaDoubleAppDef_oaTechViaDefHeader, Function: get\n"
"  Paramegers: (oaTechViaDefHeader)\n"
"    Calls: oaDouble get(const oaTechViaDefHeader* object)\n"
"    Signature: get|simple-oaDouble|cptr-oaTechViaDefHeader,\n"
"    This function returns the value of this double extension.\n"
"    object\n"
"    The object for which to get the value\n"
;

static PyObject*
oaDoubleAppDef_oaTechViaDefHeader_get(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaDoubleAppDef_oaTechViaDefHeader data;
    int convert_status=PyoaDoubleAppDef_oaTechViaDefHeader_Convert(ob,&data);
    assert(convert_status!=0);
    PyoaDoubleAppDef_oaTechViaDefHeaderObject* self=(PyoaDoubleAppDef_oaTechViaDefHeaderObject*)ob;
    if (!PyValidateDbObject(data.Data(),0)) return NULL;

    PyParamoaTechViaDefHeader p1;
    if (PyArg_ParseTuple(args,"O&",
          &PyoaTechViaDefHeader_Convert,&p1)) {
        if (!PyValidateDbObject(p1.Data(),1)) return NULL;
        oaDouble result= (data.DataCall()->get(p1.Data()));
        return PyoaDouble_FromoaDouble(result);
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaDoubleAppDef_oaTechViaDefHeader_getDefault_doc[] = 
"Class: oaDoubleAppDef_oaTechViaDefHeader, Function: getDefault\n"
"  Paramegers: ()\n"
"    Calls: oaDouble getDefault() const\n"
"    Signature: getDefault|simple-oaDouble|\n"
"    BrowseData: 1\n"
"    This function returns the default value of this double extension.\n"
;

static PyObject*
oaDoubleAppDef_oaTechViaDefHeader_getDefault(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaDoubleAppDef_oaTechViaDefHeader data;
    int convert_status=PyoaDoubleAppDef_oaTechViaDefHeader_Convert(ob,&data);
    assert(convert_status!=0);
    PyoaDoubleAppDef_oaTechViaDefHeaderObject* self=(PyoaDoubleAppDef_oaTechViaDefHeaderObject*)ob;
    if (!PyValidateDbObject(data.Data(),0)) return NULL;

    if (PyArg_ParseTuple(args,"")) {
        oaDouble result= (data.DataCall()->getDefault());
        return PyoaDouble_FromoaDouble(result);
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaDoubleAppDef_oaTechViaDefHeader_set_doc[] = 
"Class: oaDoubleAppDef_oaTechViaDefHeader, Function: set\n"
"  Paramegers: (oaTechViaDefHeader,oaDouble)\n"
"    Calls: void set(oaTechViaDefHeader* object,oaDouble value)\n"
"    Signature: set|void-void|ptr-oaTechViaDefHeader,simple-oaDouble,\n"
"    This function sets the value of this double extension.\n"
"    object\n"
"    The object on which to set the value\n"
"    value\n"
"    The value to set on the object\n"
;

static PyObject*
oaDoubleAppDef_oaTechViaDefHeader_set(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaDoubleAppDef_oaTechViaDefHeader data;
    int convert_status=PyoaDoubleAppDef_oaTechViaDefHeader_Convert(ob,&data);
    assert(convert_status!=0);
    PyoaDoubleAppDef_oaTechViaDefHeaderObject* self=(PyoaDoubleAppDef_oaTechViaDefHeaderObject*)ob;
    if (!PyValidateDbObject(data.Data(),0)) return NULL;

    PyParamoaTechViaDefHeader p1;
    PyParamoaDouble p2;
    if (PyArg_ParseTuple(args,"O&O&",
          &PyoaTechViaDefHeader_Convert,&p1,
          &PyoaDouble_Convert,&p2)) {
        if (!PyValidateDbObject(p1.Data(),1)) return NULL;
        data.DataCall()->set(p1.Data(),p2.Data());
        Py_INCREF(Py_None);
        return Py_None;
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaDoubleAppDef_oaTechViaDefHeader_isNull_doc[] =
"Class: oaDoubleAppDef_oaTechViaDefHeader, Function: isNull\n"
"  Parameters: () \n"
"    This functions returns 1 if the DbPointer is NULL, and 0 otherwise.\n"
;

static PyObject*
oaDoubleAppDef_oaTechViaDefHeader_tp_isNull(PyObject* ob, PyObject *args)
{
    PyParamoaDoubleAppDef_oaTechViaDefHeader data;
    int convert_status=PyoaDoubleAppDef_oaTechViaDefHeader_Convert(ob,&data);
    assert(convert_status!=0);
    if (data.DataCall()==NULL)
        return PyInt_FromLong(1);
    else
        return PyInt_FromLong(0);
}
static char oaDoubleAppDef_oaTechViaDefHeader_assign_doc[] = 
"Class: oaDoubleAppDef_oaTechViaDefHeader, Function: set\n"
"  Paramegers: (oaDouble)\n"
"    This function sets the current value.\n"
;

static PyObject*
oaDoubleAppDef_oaTechViaDefHeader_tp_assign(PyObject* ob, PyObject *args)
{
  PyParamoaDoubleAppDef_oaTechViaDefHeader data;
  int convert_status=PyoaDoubleAppDef_oaTechViaDefHeader_Convert(ob,&data);
  assert(convert_status!=0);
  try {
    PyParamoaDoubleAppDef_oaTechViaDefHeader p1;
    if (PyArg_ParseTuple(args,(char*)"O&",
          &PyoaDoubleAppDef_oaTechViaDefHeader_Convert,&p1)) {
        data.Data()=p1.Data();
        Py_INCREF(ob);
        return ob;
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}


// ------------------------------------------------------------------
//  Function Methods Table:
// ------------------------------------------------------------------

static PyMethodDef oaDoubleAppDef_oaTechViaDefHeader_methodlist[] = {
    {"get",(PyCFunction)oaDoubleAppDef_oaTechViaDefHeader_get,METH_VARARGS,oaDoubleAppDef_oaTechViaDefHeader_get_doc},
    {"getDefault",(PyCFunction)oaDoubleAppDef_oaTechViaDefHeader_getDefault,METH_VARARGS,oaDoubleAppDef_oaTechViaDefHeader_getDefault_doc},
    {"set",(PyCFunction)oaDoubleAppDef_oaTechViaDefHeader_set,METH_VARARGS,oaDoubleAppDef_oaTechViaDefHeader_set_doc},
    {"isNull",(PyCFunction)oaDoubleAppDef_oaTechViaDefHeader_tp_isNull,METH_VARARGS,oaDoubleAppDef_oaTechViaDefHeader_isNull_doc},
    {"assign",(PyCFunction)oaDoubleAppDef_oaTechViaDefHeader_tp_assign,METH_VARARGS,oaDoubleAppDef_oaTechViaDefHeader_assign_doc},
   {NULL,NULL,0,NULL}
};


// ------------------------------------------------------------------
//  Type Object:
// ------------------------------------------------------------------

// ------------------------------------------------------------------
static char oaDoubleAppDef_oaTechViaDefHeader_doc[] = 
"Class: oaDoubleAppDef_oaTechViaDefHeader\n"
"  The oaDoubleAppDef class implements an application-specific extension for a particular type of data in a database.\n"
"  Once created, a double field is added to each object of the specified dataType. The default value for this extension is DBL_MAX. Applications can use the new field for whatever purpose is necessary.\n"
"  For additional information on defining and using AppDefs, see oaAppDef and Extending the Database in the Programmer's Guide.\n"
"Constructors:\n"
"  Paramegers: (oaDoubleAppDef_oaTechViaDefHeader)\n"
"    Calls: (const oaDoubleAppDef_oaTechViaDefHeader&)\n"
"    Signature: oaDoubleAppDef_oaTechViaDefHeader||cref-oaDoubleAppDef_oaTechViaDefHeader,\n"
;

// ------------------------------------------------------------------
PyTypeObject PyoaDoubleAppDef_oaTechViaDefHeader_Type = {
    PyObject_HEAD_INIT(&PyType_Type)
    0,
    "oaDoubleAppDef_oaTechViaDefHeader",
    sizeof(PyoaDoubleAppDef_oaTechViaDefHeaderObject),
    0,
    (destructor)oaDoubleAppDef_oaTechViaDefHeader_tp_dealloc,	/* tp_dealloc */
    0,	/* tp_print */
    0,					/* tp_getattr */
    0,					/* tp_setattr */
    (cmpfunc)oaDoubleAppDef_oaTechViaDefHeader_tp_compare,	/* tp_compare */
    (reprfunc)oaDoubleAppDef_oaTechViaDefHeader_tp_repr,	/* tp_repr */
    0,					/* tp_as_number */
    0,					/* tp_as_sequence */
    0,					/* tp_as_mapping */
    0,					/* tp_as_hash */
    0,					/* tp_as_call */
    0,					/* tp_str */
    0,					/* tp_getattro */
    0,					/* tp_setattro */
    0,					/* tp_as_buffer */
    Py_TPFLAGS_DEFAULT|Py_TPFLAGS_BASETYPE, /* tp_flags */
    oaDoubleAppDef_oaTechViaDefHeader_doc,	/* tp_doc */
    0,					/* tp_traverse */
    0,					/* tp_clear */
    0,					/* tp_richcompre */
    0,					/* tp_weaklistoffset */
    0,					/* tp_iter */
    0,					/* tp_iternext */
    oaDoubleAppDef_oaTechViaDefHeader_methodlist,	/* tp_methods */
    0,					/* tp_members */
    0,					/* tp_getset */
    &PyoaAppDef_Type,	/* tp_base */
    0,					/* tp_dict */
    0,					/* tp_descr_get */
    0,					/* tp_descr_set */
    0,					/* tp_dictoffset */
    0,					/* tp_init */
    PyType_GenericAlloc,	/* tp_alloc */
    oaDoubleAppDef_oaTechViaDefHeader_new,	/* tp_new */
    _PyObject_Del,	/* tp_free */
};


// ------------------------------------------------------------------
// Static FunctionMethods:
// ------------------------------------------------------------------

// ------------------------------------------------------------------
static char oaDoubleAppDef_oaTechViaDefHeader_static_find_doc[] = 
"Class: oaDoubleAppDef_oaTechViaDefHeader, Function: find\n"
"  Paramegers: (oaString)\n"
"    Calls: oaDoubleAppDef_oaTechViaDefHeader* find(const oaString& name)\n"
"    Signature: find|ptr-oaDoubleAppDef_oaTechViaDefHeader|cref-oaString,\n"
"    This function returns an oaDoubleAppDef object with this dataType and the specified 'name' if it exists.\n"
"    name\n"
"    The name of the oaAppDef object to look for\n"
"  Paramegers: (oaString,oaAppObjectDef)\n"
"    Calls: oaDoubleAppDef_oaTechViaDefHeader* find(const oaString& name,const oaAppObjectDef* objDef)\n"
"    Signature: find|ptr-oaDoubleAppDef_oaTechViaDefHeader|cref-oaString,cptr-oaAppObjectDef,\n"
"    This function returns an oaDoubleAppDef object with this dataType and the specified 'name' that is associated with the specified object extension 'objDef'.\n"
"    name\n"
"    The name of the oaAppDef object to look for\n"
"    objDef\n"
"    A constant pointer to the object extension\n"
;

static PyObject*
oaDoubleAppDef_oaTechViaDefHeader_static_find(PyObject* ob, PyObject *args)
{
  try {
    // Case: (oaString)
    {
        PyParamoaString p1;
        if (PyArg_ParseTuple(args,"O&",
              &PyoaString_Convert,&p1)) {
            oaDoubleAppDef_oaTechViaDefHeaderp result= (oaDoubleAppDef_oaTechViaDefHeader::find(p1.Data()));
            return PyoaDoubleAppDef_oaTechViaDefHeader_FromoaDoubleAppDef_oaTechViaDefHeader(result);
        }
    }
    PyErr_Clear();
    // Case: (oaString,oaAppObjectDef)
    {
        PyParamoaString p1;
        PyParamoaAppObjectDef p2;
        if (PyArg_ParseTuple(args,"O&O&",
              &PyoaString_Convert,&p1,
              &PyoaAppObjectDef_Convert,&p2)) {
            if (!PyValidateDbObject(p2.Data(),2)) return NULL;
            oaDoubleAppDef_oaTechViaDefHeaderp result= (oaDoubleAppDef_oaTechViaDefHeader::find(p1.Data(),p2.Data()));
            return PyoaDoubleAppDef_oaTechViaDefHeader_FromoaDoubleAppDef_oaTechViaDefHeader(result);
        }
    }
    PyErr_Clear();
    PyErr_SetString(PyExc_TypeError,
        "No Arg-Matching Function found for class: oaDoubleAppDef_oaTechViaDefHeader, function: find, Choices are:\n"
        "    (oaString)\n"
        "    (oaString,oaAppObjectDef)\n"
    );
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaDoubleAppDef_oaTechViaDefHeader_static_get_doc[] = 
"Class: oaDoubleAppDef_oaTechViaDefHeader, Function: get\n"
"  Paramegers: (oaString)\n"
"    Calls: oaDoubleAppDef_oaTechViaDefHeader* get(const oaString& name)\n"
"    Signature: get|ptr-oaDoubleAppDef_oaTechViaDefHeader|cref-oaString,simple-oaDouble,simple-oaBoolean,\n"
"    This function constructs an oaDoubleAppDef object, creating a double extension with the specified name . You can create a double extension on any object except another extension.\n"
"    name\n"
"    The name given to the oaDoubleAppDef object\n"
"    defValue\n"
"    The default value for this extension\n"
"    persist\n"
"    Saves the oaDoubleAppDef data in the database\n"
"    oacAppDefExists\n"
"  Paramegers: (oaString,oaDouble)\n"
"    Calls: oaDoubleAppDef_oaTechViaDefHeader* get(const oaString& name,oaDouble defValue)\n"
"    Signature: get|ptr-oaDoubleAppDef_oaTechViaDefHeader|cref-oaString,simple-oaDouble,simple-oaBoolean,\n"
"    This function constructs an oaDoubleAppDef object, creating a double extension with the specified name . You can create a double extension on any object except another extension.\n"
"    name\n"
"    The name given to the oaDoubleAppDef object\n"
"    defValue\n"
"    The default value for this extension\n"
"    persist\n"
"    Saves the oaDoubleAppDef data in the database\n"
"    oacAppDefExists\n"
"  Paramegers: (oaString,oaDouble,oaBoolean)\n"
"    Calls: oaDoubleAppDef_oaTechViaDefHeader* get(const oaString& name,oaDouble defValue,oaBoolean persist)\n"
"    Signature: get|ptr-oaDoubleAppDef_oaTechViaDefHeader|cref-oaString,simple-oaDouble,simple-oaBoolean,\n"
"    This function constructs an oaDoubleAppDef object, creating a double extension with the specified name . You can create a double extension on any object except another extension.\n"
"    name\n"
"    The name given to the oaDoubleAppDef object\n"
"    defValue\n"
"    The default value for this extension\n"
"    persist\n"
"    Saves the oaDoubleAppDef data in the database\n"
"    oacAppDefExists\n"
"  Paramegers: (oaString,oaAppObjectDef)\n"
"    Calls: oaDoubleAppDef_oaTechViaDefHeader* get(const oaString& name,const oaAppObjectDef* objDef)\n"
"    Signature: get|ptr-oaDoubleAppDef_oaTechViaDefHeader|cref-oaString,cptr-oaAppObjectDef,simple-oaDouble,simple-oaBoolean,\n"
"    This function constructs an oaDoubleAppDef object, creating a double extension with the specified name for the specified object type.\n"
"    name\n"
"    The name given to the oaDoubleAppDef object\n"
"    objDef\n"
"    The object extension with which to associate the extension\n"
"    defValue\n"
"    An optional default value\n"
"    persist\n"
"    Saves the oaDoubleAppDef data in the database\n"
"    oacAppDefExists\n"
"  Paramegers: (oaString,oaAppObjectDef,oaDouble)\n"
"    Calls: oaDoubleAppDef_oaTechViaDefHeader* get(const oaString& name,const oaAppObjectDef* objDef,oaDouble defValue)\n"
"    Signature: get|ptr-oaDoubleAppDef_oaTechViaDefHeader|cref-oaString,cptr-oaAppObjectDef,simple-oaDouble,simple-oaBoolean,\n"
"    This function constructs an oaDoubleAppDef object, creating a double extension with the specified name for the specified object type.\n"
"    name\n"
"    The name given to the oaDoubleAppDef object\n"
"    objDef\n"
"    The object extension with which to associate the extension\n"
"    defValue\n"
"    An optional default value\n"
"    persist\n"
"    Saves the oaDoubleAppDef data in the database\n"
"    oacAppDefExists\n"
"  Paramegers: (oaString,oaAppObjectDef,oaDouble,oaBoolean)\n"
"    Calls: oaDoubleAppDef_oaTechViaDefHeader* get(const oaString& name,const oaAppObjectDef* objDef,oaDouble defValue,oaBoolean persist)\n"
"    Signature: get|ptr-oaDoubleAppDef_oaTechViaDefHeader|cref-oaString,cptr-oaAppObjectDef,simple-oaDouble,simple-oaBoolean,\n"
"    This function constructs an oaDoubleAppDef object, creating a double extension with the specified name for the specified object type.\n"
"    name\n"
"    The name given to the oaDoubleAppDef object\n"
"    objDef\n"
"    The object extension with which to associate the extension\n"
"    defValue\n"
"    An optional default value\n"
"    persist\n"
"    Saves the oaDoubleAppDef data in the database\n"
"    oacAppDefExists\n"
;

static PyObject*
oaDoubleAppDef_oaTechViaDefHeader_static_get(PyObject* ob, PyObject *args)
{
  try {
    // Case: (oaString)
    {
        PyParamoaString p1;
        if (PyArg_ParseTuple(args,"O&",
              &PyoaString_Convert,&p1)) {
            oaDoubleAppDef_oaTechViaDefHeaderp result= (oaDoubleAppDef_oaTechViaDefHeader::get(p1.Data()));
            return PyoaDoubleAppDef_oaTechViaDefHeader_FromoaDoubleAppDef_oaTechViaDefHeader(result);
        }
    }
    PyErr_Clear();
    // Case: (oaString,oaDouble)
    {
        PyParamoaString p1;
        PyParamoaDouble p2;
        if (PyArg_ParseTuple(args,"O&O&",
              &PyoaString_Convert,&p1,
              &PyoaDouble_Convert,&p2)) {
            oaDoubleAppDef_oaTechViaDefHeaderp result= (oaDoubleAppDef_oaTechViaDefHeader::get(p1.Data(),p2.Data()));
            return PyoaDoubleAppDef_oaTechViaDefHeader_FromoaDoubleAppDef_oaTechViaDefHeader(result);
        }
    }
    PyErr_Clear();
    // Case: (oaString,oaDouble,oaBoolean)
    {
        PyParamoaString p1;
        PyParamoaDouble p2;
        PyParamoaBoolean p3;
        if (PyArg_ParseTuple(args,"O&O&O&",
              &PyoaString_Convert,&p1,
              &PyoaDouble_Convert,&p2,
              &PyoaBoolean_Convert,&p3)) {
            oaDoubleAppDef_oaTechViaDefHeaderp result= (oaDoubleAppDef_oaTechViaDefHeader::get(p1.Data(),p2.Data(),p3.Data()));
            return PyoaDoubleAppDef_oaTechViaDefHeader_FromoaDoubleAppDef_oaTechViaDefHeader(result);
        }
    }
    PyErr_Clear();
    // Case: (oaString,oaAppObjectDef)
    {
        PyParamoaString p1;
        PyParamoaAppObjectDef p2;
        if (PyArg_ParseTuple(args,"O&O&",
              &PyoaString_Convert,&p1,
              &PyoaAppObjectDef_Convert,&p2)) {
            if (!PyValidateDbObject(p2.Data(),2)) return NULL;
            oaDoubleAppDef_oaTechViaDefHeaderp result= (oaDoubleAppDef_oaTechViaDefHeader::get(p1.Data(),p2.Data()));
            return PyoaDoubleAppDef_oaTechViaDefHeader_FromoaDoubleAppDef_oaTechViaDefHeader(result);
        }
    }
    PyErr_Clear();
    // Case: (oaString,oaAppObjectDef,oaDouble)
    {
        PyParamoaString p1;
        PyParamoaAppObjectDef p2;
        PyParamoaDouble p3;
        if (PyArg_ParseTuple(args,"O&O&O&",
              &PyoaString_Convert,&p1,
              &PyoaAppObjectDef_Convert,&p2,
              &PyoaDouble_Convert,&p3)) {
            if (!PyValidateDbObject(p2.Data(),2)) return NULL;
            oaDoubleAppDef_oaTechViaDefHeaderp result= (oaDoubleAppDef_oaTechViaDefHeader::get(p1.Data(),p2.Data(),p3.Data()));
            return PyoaDoubleAppDef_oaTechViaDefHeader_FromoaDoubleAppDef_oaTechViaDefHeader(result);
        }
    }
    PyErr_Clear();
    // Case: (oaString,oaAppObjectDef,oaDouble,oaBoolean)
    {
        PyParamoaString p1;
        PyParamoaAppObjectDef p2;
        PyParamoaDouble p3;
        PyParamoaBoolean p4;
        if (PyArg_ParseTuple(args,"O&O&O&O&",
              &PyoaString_Convert,&p1,
              &PyoaAppObjectDef_Convert,&p2,
              &PyoaDouble_Convert,&p3,
              &PyoaBoolean_Convert,&p4)) {
            if (!PyValidateDbObject(p2.Data(),2)) return NULL;
            oaDoubleAppDef_oaTechViaDefHeaderp result= (oaDoubleAppDef_oaTechViaDefHeader::get(p1.Data(),p2.Data(),p3.Data(),p4.Data()));
            return PyoaDoubleAppDef_oaTechViaDefHeader_FromoaDoubleAppDef_oaTechViaDefHeader(result);
        }
    }
    PyErr_Clear();
    PyErr_SetString(PyExc_TypeError,
        "No Arg-Matching Function found for class: oaDoubleAppDef_oaTechViaDefHeader, function: get, Choices are:\n"
        "    (oaString)\n"
        "    (oaString,oaDouble)\n"
        "    (oaString,oaDouble,oaBoolean)\n"
        "    (oaString,oaAppObjectDef)\n"
        "    (oaString,oaAppObjectDef,oaDouble)\n"
        "    (oaString,oaAppObjectDef,oaDouble,oaBoolean)\n"
    );
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static PyMethodDef oaDoubleAppDef_oaTechViaDefHeader_staticmethodlist[] = {
    {"static_find",(PyCFunction)oaDoubleAppDef_oaTechViaDefHeader_static_find,METH_VARARGS,oaDoubleAppDef_oaTechViaDefHeader_static_find_doc},
    {"static_get",(PyCFunction)oaDoubleAppDef_oaTechViaDefHeader_static_get,METH_VARARGS,oaDoubleAppDef_oaTechViaDefHeader_static_get_doc},
   {NULL,NULL,0,NULL}
};


// ------------------------------------------------------------------
//  Type Init:
// ------------------------------------------------------------------

int
PyoaDoubleAppDef_oaTechViaDefHeader_TypeInit(PyObject* mod_dict)
{
    if (PyType_Ready(&PyoaDoubleAppDef_oaTechViaDefHeader_Type)<0) {
      printf("** PyType_Ready failed for: oaDoubleAppDef_oaTechViaDefHeader\n");
      return -1;
    }

    if (PyDict_SetItemString(mod_dict,"oaDoubleAppDef_oaTechViaDefHeader",
           (PyObject*)(&PyoaDoubleAppDef_oaTechViaDefHeader_Type))<0) {
       printf("** Failed to add type name to module dictionary for: oaDoubleAppDef_oaTechViaDefHeader\n");
       return -1;
    }

    PyObject *dict, *value;
    PyMethodDef *method;
    dict=PyoaDoubleAppDef_oaTechViaDefHeader_Type.tp_dict;
    for(method=oaDoubleAppDef_oaTechViaDefHeader_staticmethodlist;method->ml_name!=NULL;method++) {
        value=PyCFunction_New(method,NULL);
    if (value==NULL) return -1;
        if (PyDict_SetItemString(dict,method->ml_name,value)!=0) {
        Py_DECREF(value);
            printf("** Failed to add static function to module dictionary for: %s\n",
                method->ml_name);
            return -1;
        }
        Py_DECREF(value);
    }
    return 0;
}


/********************************************************************
 *   Copyright 2002-2008  LSI Corporation
 *
 *   Licensed under the Apache License, Version 2.0 (the "License");
 *   you may not use this file except in compliance with the License.
 *   You may obtain a copy of the License at
 *
 *       http://www.apache.org/licenses/LICENSE-2.0
 *
 *   Unless required by applicable law or agreed to in writing, software
 *   distributed under the License is distributed on an "AS IS" BASIS,
 *   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *   See the License for the specific language governing permissions and
 *   limitations under the License.
 *
 *******************************************************************/

#include "pyoa_header.h"


// ==================================================================
// Wrapper Implementation for Class: oaDoubleAppDef_oaTerm
// ==================================================================


// ==================================================================
// Alloc/Dealloc Routines
// ==================================================================

// ------------------------------------------------------------------
static PyObject*
oaDoubleAppDef_oaTerm_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
  try {
    int is_raw=(type==&PyoaDoubleAppDef_oaTerm_Type);
    PyObject* bself = type->tp_alloc(type,0);
    if (bself == NULL) return bself;
    PyoaDoubleAppDef_oaTermObject* self = (PyoaDoubleAppDef_oaTermObject*)bself;
    self->locks = NULL;
    self->borrow = 0;
    static char *kwlist [] = { NULL } ;
    // Case: (oaDoubleAppDef_oaTerm)
    {
        PyParamoaDoubleAppDef_oaTerm p1;
        if (PyArg_ParseTuple(args,(char*)"O&",
              &PyoaDoubleAppDef_oaTerm_Convert,&p1)) {
            self->data=p1.Data();
            self->value=&(self->data);
            return bself;
        }
    }
    PyErr_Clear();
    // Case: ()
    {
        if (PyArg_ParseTuple(args,(char*)"")) {
          self->data=NULL;
          self->value=&(self->data);
          return bself;
        }
    }
    PyErr_Clear();
    PyErr_SetString(PyExc_TypeError,
        "No Arg-Matching Constructor found for class: oaDoubleAppDef_oaTerm, Choices are:\n"
        "    (oaDoubleAppDef_oaTerm)\n"
    );
    Py_DECREF(self);
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static void
oaDoubleAppDef_oaTerm_tp_dealloc(PyoaDoubleAppDef_oaTermObject* self)
{
    self->ob_type->tp_free((PyObject*)self);
}

// ------------------------------------------------------------------
static PyObject*
oaDoubleAppDef_oaTerm_tp_repr(PyObject *ob)
{
    PyParamoaDoubleAppDef_oaTerm value;
    int convert_status=PyoaDoubleAppDef_oaTerm_Convert(ob,&value);
    assert(convert_status!=0);
    PyObject* result;

    char buffer[43];
    sprintf(buffer,"<oaDoubleAppDef_oaTerm::" DISPLAY_FORMAT ">",POINTER_AS_DISPLAY(value.DataCall()));
    result=PyString_FromString(buffer);
    return result;
}
        
// ------------------------------------------------------------------
static int
oaDoubleAppDef_oaTerm_tp_compare(PyObject *ob1,PyObject* ob2)
{
    PyParamoaDoubleAppDef_oaTerm v1;
    PyParamoaDoubleAppDef_oaTerm v2;
    int convert_status1=PyoaDoubleAppDef_oaTerm_Convert(ob1,&v1);
    int convert_status2=PyoaDoubleAppDef_oaTerm_Convert(ob2,&v2);
    assert(convert_status1!=0);
    assert(convert_status2!=0);
    if (v1.DataCall()==v2.DataCall()) return 0;
    return 1;
}
        
// ------------------------------------------------------------------
int
PyoaDoubleAppDef_oaTerm_Convert(PyObject* ob,PyParamoaDoubleAppDef_oaTerm* result)
{
    if (ob == NULL) return 1;
    if (PyoaDoubleAppDef_oaTerm_Check(ob)) {
        result->SetData( (oaDoubleAppDef_oaTerm**) ((PyoaDoubleAppDef_oaTermObject*)ob)->value);
        return 1;
    }
    PyErr_SetString(PyExc_TypeError,
        "Convertion of parameter to class: oaDoubleAppDef_oaTerm Failed");
    return 0;
}
// ------------------------------------------------------------------
PyObject* PyoaDoubleAppDef_oaTerm_FromoaDoubleAppDef_oaTerm(oaDoubleAppDef_oaTerm** value,int borrow,PyObject* lock)
{
    if (value && *value) {
        oaDoubleAppDef_oaTerm* data=*value;
        PyObject* bself = PyoaDoubleAppDef_oaTerm_Type.tp_alloc(&PyoaDoubleAppDef_oaTerm_Type,0);
        if (bself == NULL) return bself;
        PyoaDoubleAppDef_oaTermObject* self = (PyoaDoubleAppDef_oaTermObject*)bself;
        self->value = (oaObject**) value;
        self->data = NULL;
        self->locks = NULL;
        self->borrow = 0; // Ignore borrow flag, since we copied
       if (lock) PyoaLockObject(self->locks,lock);
        return bself;
    }
    Py_INCREF(Py_None);
    return Py_None;
}
// ------------------------------------------------------------------
PyObject* PyoaDoubleAppDef_oaTerm_FromoaDoubleAppDef_oaTerm(oaDoubleAppDef_oaTerm* data)
{
    if (data) {
       PyObject* bself = PyoaDoubleAppDef_oaTerm_Type.tp_alloc(&PyoaDoubleAppDef_oaTerm_Type,0);
       if (bself == NULL) return bself;
       PyoaDoubleAppDef_oaTermObject* self = (PyoaDoubleAppDef_oaTermObject*)bself;
       self->data = (oaObject*) data;
       self->value = &(self->data);
       self->borrow = 0; 
       self->locks = NULL;
       return bself;
    }
    Py_INCREF(Py_None);
    return Py_None;
}

// ------------------------------------------------------------------
// FunctionMethods:
// ------------------------------------------------------------------

// ------------------------------------------------------------------
static char oaDoubleAppDef_oaTerm_get_doc[] = 
"Class: oaDoubleAppDef_oaTerm, Function: get\n"
"  Paramegers: (oaTerm)\n"
"    Calls: oaDouble get(const oaTerm* object)\n"
"    Signature: get|simple-oaDouble|cptr-oaTerm,\n"
"    This function returns the value of this double extension.\n"
"    object\n"
"    The object for which to get the value\n"
;

static PyObject*
oaDoubleAppDef_oaTerm_get(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaDoubleAppDef_oaTerm data;
    int convert_status=PyoaDoubleAppDef_oaTerm_Convert(ob,&data);
    assert(convert_status!=0);
    PyoaDoubleAppDef_oaTermObject* self=(PyoaDoubleAppDef_oaTermObject*)ob;
    if (!PyValidateDbObject(data.Data(),0)) return NULL;

    PyParamoaTerm p1;
    if (PyArg_ParseTuple(args,"O&",
          &PyoaTerm_Convert,&p1)) {
        if (!PyValidateDbObject(p1.Data(),1)) return NULL;
        oaDouble result= (data.DataCall()->get(p1.Data()));
        return PyoaDouble_FromoaDouble(result);
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaDoubleAppDef_oaTerm_getDefault_doc[] = 
"Class: oaDoubleAppDef_oaTerm, Function: getDefault\n"
"  Paramegers: ()\n"
"    Calls: oaDouble getDefault() const\n"
"    Signature: getDefault|simple-oaDouble|\n"
"    BrowseData: 1\n"
"    This function returns the default value of this double extension.\n"
;

static PyObject*
oaDoubleAppDef_oaTerm_getDefault(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaDoubleAppDef_oaTerm data;
    int convert_status=PyoaDoubleAppDef_oaTerm_Convert(ob,&data);
    assert(convert_status!=0);
    PyoaDoubleAppDef_oaTermObject* self=(PyoaDoubleAppDef_oaTermObject*)ob;
    if (!PyValidateDbObject(data.Data(),0)) return NULL;

    if (PyArg_ParseTuple(args,"")) {
        oaDouble result= (data.DataCall()->getDefault());
        return PyoaDouble_FromoaDouble(result);
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaDoubleAppDef_oaTerm_set_doc[] = 
"Class: oaDoubleAppDef_oaTerm, Function: set\n"
"  Paramegers: (oaTerm,oaDouble)\n"
"    Calls: void set(oaTerm* object,oaDouble value)\n"
"    Signature: set|void-void|ptr-oaTerm,simple-oaDouble,\n"
"    This function sets the value of this double extension.\n"
"    object\n"
"    The object on which to set the value\n"
"    value\n"
"    The value to set on the object\n"
;

static PyObject*
oaDoubleAppDef_oaTerm_set(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaDoubleAppDef_oaTerm data;
    int convert_status=PyoaDoubleAppDef_oaTerm_Convert(ob,&data);
    assert(convert_status!=0);
    PyoaDoubleAppDef_oaTermObject* self=(PyoaDoubleAppDef_oaTermObject*)ob;
    if (!PyValidateDbObject(data.Data(),0)) return NULL;

    PyParamoaTerm p1;
    PyParamoaDouble p2;
    if (PyArg_ParseTuple(args,"O&O&",
          &PyoaTerm_Convert,&p1,
          &PyoaDouble_Convert,&p2)) {
        if (!PyValidateDbObject(p1.Data(),1)) return NULL;
        data.DataCall()->set(p1.Data(),p2.Data());
        Py_INCREF(Py_None);
        return Py_None;
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaDoubleAppDef_oaTerm_isNull_doc[] =
"Class: oaDoubleAppDef_oaTerm, Function: isNull\n"
"  Parameters: () \n"
"    This functions returns 1 if the DbPointer is NULL, and 0 otherwise.\n"
;

static PyObject*
oaDoubleAppDef_oaTerm_tp_isNull(PyObject* ob, PyObject *args)
{
    PyParamoaDoubleAppDef_oaTerm data;
    int convert_status=PyoaDoubleAppDef_oaTerm_Convert(ob,&data);
    assert(convert_status!=0);
    if (data.DataCall()==NULL)
        return PyInt_FromLong(1);
    else
        return PyInt_FromLong(0);
}
static char oaDoubleAppDef_oaTerm_assign_doc[] = 
"Class: oaDoubleAppDef_oaTerm, Function: set\n"
"  Paramegers: (oaDouble)\n"
"    This function sets the current value.\n"
;

static PyObject*
oaDoubleAppDef_oaTerm_tp_assign(PyObject* ob, PyObject *args)
{
  PyParamoaDoubleAppDef_oaTerm data;
  int convert_status=PyoaDoubleAppDef_oaTerm_Convert(ob,&data);
  assert(convert_status!=0);
  try {
    PyParamoaDoubleAppDef_oaTerm p1;
    if (PyArg_ParseTuple(args,(char*)"O&",
          &PyoaDoubleAppDef_oaTerm_Convert,&p1)) {
        data.Data()=p1.Data();
        Py_INCREF(ob);
        return ob;
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}


// ------------------------------------------------------------------
//  Function Methods Table:
// ------------------------------------------------------------------

static PyMethodDef oaDoubleAppDef_oaTerm_methodlist[] = {
    {"get",(PyCFunction)oaDoubleAppDef_oaTerm_get,METH_VARARGS,oaDoubleAppDef_oaTerm_get_doc},
    {"getDefault",(PyCFunction)oaDoubleAppDef_oaTerm_getDefault,METH_VARARGS,oaDoubleAppDef_oaTerm_getDefault_doc},
    {"set",(PyCFunction)oaDoubleAppDef_oaTerm_set,METH_VARARGS,oaDoubleAppDef_oaTerm_set_doc},
    {"isNull",(PyCFunction)oaDoubleAppDef_oaTerm_tp_isNull,METH_VARARGS,oaDoubleAppDef_oaTerm_isNull_doc},
    {"assign",(PyCFunction)oaDoubleAppDef_oaTerm_tp_assign,METH_VARARGS,oaDoubleAppDef_oaTerm_assign_doc},
   {NULL,NULL,0,NULL}
};


// ------------------------------------------------------------------
//  Type Object:
// ------------------------------------------------------------------

// ------------------------------------------------------------------
static char oaDoubleAppDef_oaTerm_doc[] = 
"Class: oaDoubleAppDef_oaTerm\n"
"  The oaDoubleAppDef class implements an application-specific extension for a particular type of data in a database.\n"
"  Once created, a double field is added to each object of the specified dataType. The default value for this extension is DBL_MAX. Applications can use the new field for whatever purpose is necessary.\n"
"  For additional information on defining and using AppDefs, see oaAppDef and Extending the Database in the Programmer's Guide.\n"
"Constructors:\n"
"  Paramegers: (oaDoubleAppDef_oaTerm)\n"
"    Calls: (const oaDoubleAppDef_oaTerm&)\n"
"    Signature: oaDoubleAppDef_oaTerm||cref-oaDoubleAppDef_oaTerm,\n"
;

// ------------------------------------------------------------------
PyTypeObject PyoaDoubleAppDef_oaTerm_Type = {
    PyObject_HEAD_INIT(&PyType_Type)
    0,
    "oaDoubleAppDef_oaTerm",
    sizeof(PyoaDoubleAppDef_oaTermObject),
    0,
    (destructor)oaDoubleAppDef_oaTerm_tp_dealloc,	/* tp_dealloc */
    0,	/* tp_print */
    0,					/* tp_getattr */
    0,					/* tp_setattr */
    (cmpfunc)oaDoubleAppDef_oaTerm_tp_compare,	/* tp_compare */
    (reprfunc)oaDoubleAppDef_oaTerm_tp_repr,	/* tp_repr */
    0,					/* tp_as_number */
    0,					/* tp_as_sequence */
    0,					/* tp_as_mapping */
    0,					/* tp_as_hash */
    0,					/* tp_as_call */
    0,					/* tp_str */
    0,					/* tp_getattro */
    0,					/* tp_setattro */
    0,					/* tp_as_buffer */
    Py_TPFLAGS_DEFAULT|Py_TPFLAGS_BASETYPE, /* tp_flags */
    oaDoubleAppDef_oaTerm_doc,	/* tp_doc */
    0,					/* tp_traverse */
    0,					/* tp_clear */
    0,					/* tp_richcompre */
    0,					/* tp_weaklistoffset */
    0,					/* tp_iter */
    0,					/* tp_iternext */
    oaDoubleAppDef_oaTerm_methodlist,	/* tp_methods */
    0,					/* tp_members */
    0,					/* tp_getset */
    &PyoaAppDef_Type,	/* tp_base */
    0,					/* tp_dict */
    0,					/* tp_descr_get */
    0,					/* tp_descr_set */
    0,					/* tp_dictoffset */
    0,					/* tp_init */
    PyType_GenericAlloc,	/* tp_alloc */
    oaDoubleAppDef_oaTerm_new,	/* tp_new */
    _PyObject_Del,	/* tp_free */
};


// ------------------------------------------------------------------
// Static FunctionMethods:
// ------------------------------------------------------------------

// ------------------------------------------------------------------
static char oaDoubleAppDef_oaTerm_static_find_doc[] = 
"Class: oaDoubleAppDef_oaTerm, Function: find\n"
"  Paramegers: (oaString)\n"
"    Calls: oaDoubleAppDef_oaTerm* find(const oaString& name)\n"
"    Signature: find|ptr-oaDoubleAppDef_oaTerm|cref-oaString,\n"
"    This function returns an oaDoubleAppDef object with this dataType and the specified 'name' if it exists.\n"
"    name\n"
"    The name of the oaAppDef object to look for\n"
"  Paramegers: (oaString,oaAppObjectDef)\n"
"    Calls: oaDoubleAppDef_oaTerm* find(const oaString& name,const oaAppObjectDef* objDef)\n"
"    Signature: find|ptr-oaDoubleAppDef_oaTerm|cref-oaString,cptr-oaAppObjectDef,\n"
"    This function returns an oaDoubleAppDef object with this dataType and the specified 'name' that is associated with the specified object extension 'objDef'.\n"
"    name\n"
"    The name of the oaAppDef object to look for\n"
"    objDef\n"
"    A constant pointer to the object extension\n"
;

static PyObject*
oaDoubleAppDef_oaTerm_static_find(PyObject* ob, PyObject *args)
{
  try {
    // Case: (oaString)
    {
        PyParamoaString p1;
        if (PyArg_ParseTuple(args,"O&",
              &PyoaString_Convert,&p1)) {
            oaDoubleAppDef_oaTermp result= (oaDoubleAppDef_oaTerm::find(p1.Data()));
            return PyoaDoubleAppDef_oaTerm_FromoaDoubleAppDef_oaTerm(result);
        }
    }
    PyErr_Clear();
    // Case: (oaString,oaAppObjectDef)
    {
        PyParamoaString p1;
        PyParamoaAppObjectDef p2;
        if (PyArg_ParseTuple(args,"O&O&",
              &PyoaString_Convert,&p1,
              &PyoaAppObjectDef_Convert,&p2)) {
            if (!PyValidateDbObject(p2.Data(),2)) return NULL;
            oaDoubleAppDef_oaTermp result= (oaDoubleAppDef_oaTerm::find(p1.Data(),p2.Data()));
            return PyoaDoubleAppDef_oaTerm_FromoaDoubleAppDef_oaTerm(result);
        }
    }
    PyErr_Clear();
    PyErr_SetString(PyExc_TypeError,
        "No Arg-Matching Function found for class: oaDoubleAppDef_oaTerm, function: find, Choices are:\n"
        "    (oaString)\n"
        "    (oaString,oaAppObjectDef)\n"
    );
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaDoubleAppDef_oaTerm_static_get_doc[] = 
"Class: oaDoubleAppDef_oaTerm, Function: get\n"
"  Paramegers: (oaString)\n"
"    Calls: oaDoubleAppDef_oaTerm* get(const oaString& name)\n"
"    Signature: get|ptr-oaDoubleAppDef_oaTerm|cref-oaString,simple-oaDouble,simple-oaBoolean,\n"
"    This function constructs an oaDoubleAppDef object, creating a double extension with the specified name . You can create a double extension on any object except another extension.\n"
"    name\n"
"    The name given to the oaDoubleAppDef object\n"
"    defValue\n"
"    The default value for this extension\n"
"    persist\n"
"    Saves the oaDoubleAppDef data in the database\n"
"    oacAppDefExists\n"
"  Paramegers: (oaString,oaDouble)\n"
"    Calls: oaDoubleAppDef_oaTerm* get(const oaString& name,oaDouble defValue)\n"
"    Signature: get|ptr-oaDoubleAppDef_oaTerm|cref-oaString,simple-oaDouble,simple-oaBoolean,\n"
"    This function constructs an oaDoubleAppDef object, creating a double extension with the specified name . You can create a double extension on any object except another extension.\n"
"    name\n"
"    The name given to the oaDoubleAppDef object\n"
"    defValue\n"
"    The default value for this extension\n"
"    persist\n"
"    Saves the oaDoubleAppDef data in the database\n"
"    oacAppDefExists\n"
"  Paramegers: (oaString,oaDouble,oaBoolean)\n"
"    Calls: oaDoubleAppDef_oaTerm* get(const oaString& name,oaDouble defValue,oaBoolean persist)\n"
"    Signature: get|ptr-oaDoubleAppDef_oaTerm|cref-oaString,simple-oaDouble,simple-oaBoolean,\n"
"    This function constructs an oaDoubleAppDef object, creating a double extension with the specified name . You can create a double extension on any object except another extension.\n"
"    name\n"
"    The name given to the oaDoubleAppDef object\n"
"    defValue\n"
"    The default value for this extension\n"
"    persist\n"
"    Saves the oaDoubleAppDef data in the database\n"
"    oacAppDefExists\n"
"  Paramegers: (oaString,oaAppObjectDef)\n"
"    Calls: oaDoubleAppDef_oaTerm* get(const oaString& name,const oaAppObjectDef* objDef)\n"
"    Signature: get|ptr-oaDoubleAppDef_oaTerm|cref-oaString,cptr-oaAppObjectDef,simple-oaDouble,simple-oaBoolean,\n"
"    This function constructs an oaDoubleAppDef object, creating a double extension with the specified name for the specified object type.\n"
"    name\n"
"    The name given to the oaDoubleAppDef object\n"
"    objDef\n"
"    The object extension with which to associate the extension\n"
"    defValue\n"
"    An optional default value\n"
"    persist\n"
"    Saves the oaDoubleAppDef data in the database\n"
"    oacAppDefExists\n"
"  Paramegers: (oaString,oaAppObjectDef,oaDouble)\n"
"    Calls: oaDoubleAppDef_oaTerm* get(const oaString& name,const oaAppObjectDef* objDef,oaDouble defValue)\n"
"    Signature: get|ptr-oaDoubleAppDef_oaTerm|cref-oaString,cptr-oaAppObjectDef,simple-oaDouble,simple-oaBoolean,\n"
"    This function constructs an oaDoubleAppDef object, creating a double extension with the specified name for the specified object type.\n"
"    name\n"
"    The name given to the oaDoubleAppDef object\n"
"    objDef\n"
"    The object extension with which to associate the extension\n"
"    defValue\n"
"    An optional default value\n"
"    persist\n"
"    Saves the oaDoubleAppDef data in the database\n"
"    oacAppDefExists\n"
"  Paramegers: (oaString,oaAppObjectDef,oaDouble,oaBoolean)\n"
"    Calls: oaDoubleAppDef_oaTerm* get(const oaString& name,const oaAppObjectDef* objDef,oaDouble defValue,oaBoolean persist)\n"
"    Signature: get|ptr-oaDoubleAppDef_oaTerm|cref-oaString,cptr-oaAppObjectDef,simple-oaDouble,simple-oaBoolean,\n"
"    This function constructs an oaDoubleAppDef object, creating a double extension with the specified name for the specified object type.\n"
"    name\n"
"    The name given to the oaDoubleAppDef object\n"
"    objDef\n"
"    The object extension with which to associate the extension\n"
"    defValue\n"
"    An optional default value\n"
"    persist\n"
"    Saves the oaDoubleAppDef data in the database\n"
"    oacAppDefExists\n"
;

static PyObject*
oaDoubleAppDef_oaTerm_static_get(PyObject* ob, PyObject *args)
{
  try {
    // Case: (oaString)
    {
        PyParamoaString p1;
        if (PyArg_ParseTuple(args,"O&",
              &PyoaString_Convert,&p1)) {
            oaDoubleAppDef_oaTermp result= (oaDoubleAppDef_oaTerm::get(p1.Data()));
            return PyoaDoubleAppDef_oaTerm_FromoaDoubleAppDef_oaTerm(result);
        }
    }
    PyErr_Clear();
    // Case: (oaString,oaDouble)
    {
        PyParamoaString p1;
        PyParamoaDouble p2;
        if (PyArg_ParseTuple(args,"O&O&",
              &PyoaString_Convert,&p1,
              &PyoaDouble_Convert,&p2)) {
            oaDoubleAppDef_oaTermp result= (oaDoubleAppDef_oaTerm::get(p1.Data(),p2.Data()));
            return PyoaDoubleAppDef_oaTerm_FromoaDoubleAppDef_oaTerm(result);
        }
    }
    PyErr_Clear();
    // Case: (oaString,oaDouble,oaBoolean)
    {
        PyParamoaString p1;
        PyParamoaDouble p2;
        PyParamoaBoolean p3;
        if (PyArg_ParseTuple(args,"O&O&O&",
              &PyoaString_Convert,&p1,
              &PyoaDouble_Convert,&p2,
              &PyoaBoolean_Convert,&p3)) {
            oaDoubleAppDef_oaTermp result= (oaDoubleAppDef_oaTerm::get(p1.Data(),p2.Data(),p3.Data()));
            return PyoaDoubleAppDef_oaTerm_FromoaDoubleAppDef_oaTerm(result);
        }
    }
    PyErr_Clear();
    // Case: (oaString,oaAppObjectDef)
    {
        PyParamoaString p1;
        PyParamoaAppObjectDef p2;
        if (PyArg_ParseTuple(args,"O&O&",
              &PyoaString_Convert,&p1,
              &PyoaAppObjectDef_Convert,&p2)) {
            if (!PyValidateDbObject(p2.Data(),2)) return NULL;
            oaDoubleAppDef_oaTermp result= (oaDoubleAppDef_oaTerm::get(p1.Data(),p2.Data()));
            return PyoaDoubleAppDef_oaTerm_FromoaDoubleAppDef_oaTerm(result);
        }
    }
    PyErr_Clear();
    // Case: (oaString,oaAppObjectDef,oaDouble)
    {
        PyParamoaString p1;
        PyParamoaAppObjectDef p2;
        PyParamoaDouble p3;
        if (PyArg_ParseTuple(args,"O&O&O&",
              &PyoaString_Convert,&p1,
              &PyoaAppObjectDef_Convert,&p2,
              &PyoaDouble_Convert,&p3)) {
            if (!PyValidateDbObject(p2.Data(),2)) return NULL;
            oaDoubleAppDef_oaTermp result= (oaDoubleAppDef_oaTerm::get(p1.Data(),p2.Data(),p3.Data()));
            return PyoaDoubleAppDef_oaTerm_FromoaDoubleAppDef_oaTerm(result);
        }
    }
    PyErr_Clear();
    // Case: (oaString,oaAppObjectDef,oaDouble,oaBoolean)
    {
        PyParamoaString p1;
        PyParamoaAppObjectDef p2;
        PyParamoaDouble p3;
        PyParamoaBoolean p4;
        if (PyArg_ParseTuple(args,"O&O&O&O&",
              &PyoaString_Convert,&p1,
              &PyoaAppObjectDef_Convert,&p2,
              &PyoaDouble_Convert,&p3,
              &PyoaBoolean_Convert,&p4)) {
            if (!PyValidateDbObject(p2.Data(),2)) return NULL;
            oaDoubleAppDef_oaTermp result= (oaDoubleAppDef_oaTerm::get(p1.Data(),p2.Data(),p3.Data(),p4.Data()));
            return PyoaDoubleAppDef_oaTerm_FromoaDoubleAppDef_oaTerm(result);
        }
    }
    PyErr_Clear();
    PyErr_SetString(PyExc_TypeError,
        "No Arg-Matching Function found for class: oaDoubleAppDef_oaTerm, function: get, Choices are:\n"
        "    (oaString)\n"
        "    (oaString,oaDouble)\n"
        "    (oaString,oaDouble,oaBoolean)\n"
        "    (oaString,oaAppObjectDef)\n"
        "    (oaString,oaAppObjectDef,oaDouble)\n"
        "    (oaString,oaAppObjectDef,oaDouble,oaBoolean)\n"
    );
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static PyMethodDef oaDoubleAppDef_oaTerm_staticmethodlist[] = {
    {"static_find",(PyCFunction)oaDoubleAppDef_oaTerm_static_find,METH_VARARGS,oaDoubleAppDef_oaTerm_static_find_doc},
    {"static_get",(PyCFunction)oaDoubleAppDef_oaTerm_static_get,METH_VARARGS,oaDoubleAppDef_oaTerm_static_get_doc},
   {NULL,NULL,0,NULL}
};


// ------------------------------------------------------------------
//  Type Init:
// ------------------------------------------------------------------

int
PyoaDoubleAppDef_oaTerm_TypeInit(PyObject* mod_dict)
{
    if (PyType_Ready(&PyoaDoubleAppDef_oaTerm_Type)<0) {
      printf("** PyType_Ready failed for: oaDoubleAppDef_oaTerm\n");
      return -1;
    }

    if (PyDict_SetItemString(mod_dict,"oaDoubleAppDef_oaTerm",
           (PyObject*)(&PyoaDoubleAppDef_oaTerm_Type))<0) {
       printf("** Failed to add type name to module dictionary for: oaDoubleAppDef_oaTerm\n");
       return -1;
    }

    PyObject *dict, *value;
    PyMethodDef *method;
    dict=PyoaDoubleAppDef_oaTerm_Type.tp_dict;
    for(method=oaDoubleAppDef_oaTerm_staticmethodlist;method->ml_name!=NULL;method++) {
        value=PyCFunction_New(method,NULL);
    if (value==NULL) return -1;
        if (PyDict_SetItemString(dict,method->ml_name,value)!=0) {
        Py_DECREF(value);
            printf("** Failed to add static function to module dictionary for: %s\n",
                method->ml_name);
            return -1;
        }
        Py_DECREF(value);
    }
    return 0;
}


/********************************************************************
 *   Copyright 2002-2008  LSI Corporation
 *
 *   Licensed under the Apache License, Version 2.0 (the "License");
 *   you may not use this file except in compliance with the License.
 *   You may obtain a copy of the License at
 *
 *       http://www.apache.org/licenses/LICENSE-2.0
 *
 *   Unless required by applicable law or agreed to in writing, software
 *   distributed under the License is distributed on an "AS IS" BASIS,
 *   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *   See the License for the specific language governing permissions and
 *   limitations under the License.
 *
 *******************************************************************/

#include "pyoa_header.h"


// ==================================================================
// Wrapper Implementation for Class: oaDoubleAppDef_oaTrackPattern
// ==================================================================


// ==================================================================
// Alloc/Dealloc Routines
// ==================================================================

// ------------------------------------------------------------------
static PyObject*
oaDoubleAppDef_oaTrackPattern_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
  try {
    int is_raw=(type==&PyoaDoubleAppDef_oaTrackPattern_Type);
    PyObject* bself = type->tp_alloc(type,0);
    if (bself == NULL) return bself;
    PyoaDoubleAppDef_oaTrackPatternObject* self = (PyoaDoubleAppDef_oaTrackPatternObject*)bself;
    self->locks = NULL;
    self->borrow = 0;
    static char *kwlist [] = { NULL } ;
    // Case: (oaDoubleAppDef_oaTrackPattern)
    {
        PyParamoaDoubleAppDef_oaTrackPattern p1;
        if (PyArg_ParseTuple(args,(char*)"O&",
              &PyoaDoubleAppDef_oaTrackPattern_Convert,&p1)) {
            self->data=p1.Data();
            self->value=&(self->data);
            return bself;
        }
    }
    PyErr_Clear();
    // Case: ()
    {
        if (PyArg_ParseTuple(args,(char*)"")) {
          self->data=NULL;
          self->value=&(self->data);
          return bself;
        }
    }
    PyErr_Clear();
    PyErr_SetString(PyExc_TypeError,
        "No Arg-Matching Constructor found for class: oaDoubleAppDef_oaTrackPattern, Choices are:\n"
        "    (oaDoubleAppDef_oaTrackPattern)\n"
    );
    Py_DECREF(self);
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static void
oaDoubleAppDef_oaTrackPattern_tp_dealloc(PyoaDoubleAppDef_oaTrackPatternObject* self)
{
    self->ob_type->tp_free((PyObject*)self);
}

// ------------------------------------------------------------------
static PyObject*
oaDoubleAppDef_oaTrackPattern_tp_repr(PyObject *ob)
{
    PyParamoaDoubleAppDef_oaTrackPattern value;
    int convert_status=PyoaDoubleAppDef_oaTrackPattern_Convert(ob,&value);
    assert(convert_status!=0);
    PyObject* result;

    char buffer[51];
    sprintf(buffer,"<oaDoubleAppDef_oaTrackPattern::" DISPLAY_FORMAT ">",POINTER_AS_DISPLAY(value.DataCall()));
    result=PyString_FromString(buffer);
    return result;
}
        
// ------------------------------------------------------------------
static int
oaDoubleAppDef_oaTrackPattern_tp_compare(PyObject *ob1,PyObject* ob2)
{
    PyParamoaDoubleAppDef_oaTrackPattern v1;
    PyParamoaDoubleAppDef_oaTrackPattern v2;
    int convert_status1=PyoaDoubleAppDef_oaTrackPattern_Convert(ob1,&v1);
    int convert_status2=PyoaDoubleAppDef_oaTrackPattern_Convert(ob2,&v2);
    assert(convert_status1!=0);
    assert(convert_status2!=0);
    if (v1.DataCall()==v2.DataCall()) return 0;
    return 1;
}
        
// ------------------------------------------------------------------
int
PyoaDoubleAppDef_oaTrackPattern_Convert(PyObject* ob,PyParamoaDoubleAppDef_oaTrackPattern* result)
{
    if (ob == NULL) return 1;
    if (PyoaDoubleAppDef_oaTrackPattern_Check(ob)) {
        result->SetData( (oaDoubleAppDef_oaTrackPattern**) ((PyoaDoubleAppDef_oaTrackPatternObject*)ob)->value);
        return 1;
    }
    PyErr_SetString(PyExc_TypeError,
        "Convertion of parameter to class: oaDoubleAppDef_oaTrackPattern Failed");
    return 0;
}
// ------------------------------------------------------------------
PyObject* PyoaDoubleAppDef_oaTrackPattern_FromoaDoubleAppDef_oaTrackPattern(oaDoubleAppDef_oaTrackPattern** value,int borrow,PyObject* lock)
{
    if (value && *value) {
        oaDoubleAppDef_oaTrackPattern* data=*value;
        PyObject* bself = PyoaDoubleAppDef_oaTrackPattern_Type.tp_alloc(&PyoaDoubleAppDef_oaTrackPattern_Type,0);
        if (bself == NULL) return bself;
        PyoaDoubleAppDef_oaTrackPatternObject* self = (PyoaDoubleAppDef_oaTrackPatternObject*)bself;
        self->value = (oaObject**) value;
        self->data = NULL;
        self->locks = NULL;
        self->borrow = 0; // Ignore borrow flag, since we copied
       if (lock) PyoaLockObject(self->locks,lock);
        return bself;
    }
    Py_INCREF(Py_None);
    return Py_None;
}
// ------------------------------------------------------------------
PyObject* PyoaDoubleAppDef_oaTrackPattern_FromoaDoubleAppDef_oaTrackPattern(oaDoubleAppDef_oaTrackPattern* data)
{
    if (data) {
       PyObject* bself = PyoaDoubleAppDef_oaTrackPattern_Type.tp_alloc(&PyoaDoubleAppDef_oaTrackPattern_Type,0);
       if (bself == NULL) return bself;
       PyoaDoubleAppDef_oaTrackPatternObject* self = (PyoaDoubleAppDef_oaTrackPatternObject*)bself;
       self->data = (oaObject*) data;
       self->value = &(self->data);
       self->borrow = 0; 
       self->locks = NULL;
       return bself;
    }
    Py_INCREF(Py_None);
    return Py_None;
}

// ------------------------------------------------------------------
// FunctionMethods:
// ------------------------------------------------------------------

// ------------------------------------------------------------------
static char oaDoubleAppDef_oaTrackPattern_get_doc[] = 
"Class: oaDoubleAppDef_oaTrackPattern, Function: get\n"
"  Paramegers: (oaTrackPattern)\n"
"    Calls: oaDouble get(const oaTrackPattern* object)\n"
"    Signature: get|simple-oaDouble|cptr-oaTrackPattern,\n"
"    This function returns the value of this double extension.\n"
"    object\n"
"    The object for which to get the value\n"
;

static PyObject*
oaDoubleAppDef_oaTrackPattern_get(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaDoubleAppDef_oaTrackPattern data;
    int convert_status=PyoaDoubleAppDef_oaTrackPattern_Convert(ob,&data);
    assert(convert_status!=0);
    PyoaDoubleAppDef_oaTrackPatternObject* self=(PyoaDoubleAppDef_oaTrackPatternObject*)ob;
    if (!PyValidateDbObject(data.Data(),0)) return NULL;

    PyParamoaTrackPattern p1;
    if (PyArg_ParseTuple(args,"O&",
          &PyoaTrackPattern_Convert,&p1)) {
        if (!PyValidateDbObject(p1.Data(),1)) return NULL;
        oaDouble result= (data.DataCall()->get(p1.Data()));
        return PyoaDouble_FromoaDouble(result);
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaDoubleAppDef_oaTrackPattern_getDefault_doc[] = 
"Class: oaDoubleAppDef_oaTrackPattern, Function: getDefault\n"
"  Paramegers: ()\n"
"    Calls: oaDouble getDefault() const\n"
"    Signature: getDefault|simple-oaDouble|\n"
"    BrowseData: 1\n"
"    This function returns the default value of this double extension.\n"
;

static PyObject*
oaDoubleAppDef_oaTrackPattern_getDefault(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaDoubleAppDef_oaTrackPattern data;
    int convert_status=PyoaDoubleAppDef_oaTrackPattern_Convert(ob,&data);
    assert(convert_status!=0);
    PyoaDoubleAppDef_oaTrackPatternObject* self=(PyoaDoubleAppDef_oaTrackPatternObject*)ob;
    if (!PyValidateDbObject(data.Data(),0)) return NULL;

    if (PyArg_ParseTuple(args,"")) {
        oaDouble result= (data.DataCall()->getDefault());
        return PyoaDouble_FromoaDouble(result);
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaDoubleAppDef_oaTrackPattern_set_doc[] = 
"Class: oaDoubleAppDef_oaTrackPattern, Function: set\n"
"  Paramegers: (oaTrackPattern,oaDouble)\n"
"    Calls: void set(oaTrackPattern* object,oaDouble value)\n"
"    Signature: set|void-void|ptr-oaTrackPattern,simple-oaDouble,\n"
"    This function sets the value of this double extension.\n"
"    object\n"
"    The object on which to set the value\n"
"    value\n"
"    The value to set on the object\n"
;

static PyObject*
oaDoubleAppDef_oaTrackPattern_set(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaDoubleAppDef_oaTrackPattern data;
    int convert_status=PyoaDoubleAppDef_oaTrackPattern_Convert(ob,&data);
    assert(convert_status!=0);
    PyoaDoubleAppDef_oaTrackPatternObject* self=(PyoaDoubleAppDef_oaTrackPatternObject*)ob;
    if (!PyValidateDbObject(data.Data(),0)) return NULL;

    PyParamoaTrackPattern p1;
    PyParamoaDouble p2;
    if (PyArg_ParseTuple(args,"O&O&",
          &PyoaTrackPattern_Convert,&p1,
          &PyoaDouble_Convert,&p2)) {
        if (!PyValidateDbObject(p1.Data(),1)) return NULL;
        data.DataCall()->set(p1.Data(),p2.Data());
        Py_INCREF(Py_None);
        return Py_None;
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaDoubleAppDef_oaTrackPattern_isNull_doc[] =
"Class: oaDoubleAppDef_oaTrackPattern, Function: isNull\n"
"  Parameters: () \n"
"    This functions returns 1 if the DbPointer is NULL, and 0 otherwise.\n"
;

static PyObject*
oaDoubleAppDef_oaTrackPattern_tp_isNull(PyObject* ob, PyObject *args)
{
    PyParamoaDoubleAppDef_oaTrackPattern data;
    int convert_status=PyoaDoubleAppDef_oaTrackPattern_Convert(ob,&data);
    assert(convert_status!=0);
    if (data.DataCall()==NULL)
        return PyInt_FromLong(1);
    else
        return PyInt_FromLong(0);
}
static char oaDoubleAppDef_oaTrackPattern_assign_doc[] = 
"Class: oaDoubleAppDef_oaTrackPattern, Function: set\n"
"  Paramegers: (oaDouble)\n"
"    This function sets the current value.\n"
;

static PyObject*
oaDoubleAppDef_oaTrackPattern_tp_assign(PyObject* ob, PyObject *args)
{
  PyParamoaDoubleAppDef_oaTrackPattern data;
  int convert_status=PyoaDoubleAppDef_oaTrackPattern_Convert(ob,&data);
  assert(convert_status!=0);
  try {
    PyParamoaDoubleAppDef_oaTrackPattern p1;
    if (PyArg_ParseTuple(args,(char*)"O&",
          &PyoaDoubleAppDef_oaTrackPattern_Convert,&p1)) {
        data.Data()=p1.Data();
        Py_INCREF(ob);
        return ob;
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}


// ------------------------------------------------------------------
//  Function Methods Table:
// ------------------------------------------------------------------

static PyMethodDef oaDoubleAppDef_oaTrackPattern_methodlist[] = {
    {"get",(PyCFunction)oaDoubleAppDef_oaTrackPattern_get,METH_VARARGS,oaDoubleAppDef_oaTrackPattern_get_doc},
    {"getDefault",(PyCFunction)oaDoubleAppDef_oaTrackPattern_getDefault,METH_VARARGS,oaDoubleAppDef_oaTrackPattern_getDefault_doc},
    {"set",(PyCFunction)oaDoubleAppDef_oaTrackPattern_set,METH_VARARGS,oaDoubleAppDef_oaTrackPattern_set_doc},
    {"isNull",(PyCFunction)oaDoubleAppDef_oaTrackPattern_tp_isNull,METH_VARARGS,oaDoubleAppDef_oaTrackPattern_isNull_doc},
    {"assign",(PyCFunction)oaDoubleAppDef_oaTrackPattern_tp_assign,METH_VARARGS,oaDoubleAppDef_oaTrackPattern_assign_doc},
   {NULL,NULL,0,NULL}
};


// ------------------------------------------------------------------
//  Type Object:
// ------------------------------------------------------------------

// ------------------------------------------------------------------
static char oaDoubleAppDef_oaTrackPattern_doc[] = 
"Class: oaDoubleAppDef_oaTrackPattern\n"
"  The oaDoubleAppDef class implements an application-specific extension for a particular type of data in a database.\n"
"  Once created, a double field is added to each object of the specified dataType. The default value for this extension is DBL_MAX. Applications can use the new field for whatever purpose is necessary.\n"
"  For additional information on defining and using AppDefs, see oaAppDef and Extending the Database in the Programmer's Guide.\n"
"Constructors:\n"
"  Paramegers: (oaDoubleAppDef_oaTrackPattern)\n"
"    Calls: (const oaDoubleAppDef_oaTrackPattern&)\n"
"    Signature: oaDoubleAppDef_oaTrackPattern||cref-oaDoubleAppDef_oaTrackPattern,\n"
;

// ------------------------------------------------------------------
PyTypeObject PyoaDoubleAppDef_oaTrackPattern_Type = {
    PyObject_HEAD_INIT(&PyType_Type)
    0,
    "oaDoubleAppDef_oaTrackPattern",
    sizeof(PyoaDoubleAppDef_oaTrackPatternObject),
    0,
    (destructor)oaDoubleAppDef_oaTrackPattern_tp_dealloc,	/* tp_dealloc */
    0,	/* tp_print */
    0,					/* tp_getattr */
    0,					/* tp_setattr */
    (cmpfunc)oaDoubleAppDef_oaTrackPattern_tp_compare,	/* tp_compare */
    (reprfunc)oaDoubleAppDef_oaTrackPattern_tp_repr,	/* tp_repr */
    0,					/* tp_as_number */
    0,					/* tp_as_sequence */
    0,					/* tp_as_mapping */
    0,					/* tp_as_hash */
    0,					/* tp_as_call */
    0,					/* tp_str */
    0,					/* tp_getattro */
    0,					/* tp_setattro */
    0,					/* tp_as_buffer */
    Py_TPFLAGS_DEFAULT|Py_TPFLAGS_BASETYPE, /* tp_flags */
    oaDoubleAppDef_oaTrackPattern_doc,	/* tp_doc */
    0,					/* tp_traverse */
    0,					/* tp_clear */
    0,					/* tp_richcompre */
    0,					/* tp_weaklistoffset */
    0,					/* tp_iter */
    0,					/* tp_iternext */
    oaDoubleAppDef_oaTrackPattern_methodlist,	/* tp_methods */
    0,					/* tp_members */
    0,					/* tp_getset */
    &PyoaAppDef_Type,	/* tp_base */
    0,					/* tp_dict */
    0,					/* tp_descr_get */
    0,					/* tp_descr_set */
    0,					/* tp_dictoffset */
    0,					/* tp_init */
    PyType_GenericAlloc,	/* tp_alloc */
    oaDoubleAppDef_oaTrackPattern_new,	/* tp_new */
    _PyObject_Del,	/* tp_free */
};


// ------------------------------------------------------------------
// Static FunctionMethods:
// ------------------------------------------------------------------

// ------------------------------------------------------------------
static char oaDoubleAppDef_oaTrackPattern_static_find_doc[] = 
"Class: oaDoubleAppDef_oaTrackPattern, Function: find\n"
"  Paramegers: (oaString)\n"
"    Calls: oaDoubleAppDef_oaTrackPattern* find(const oaString& name)\n"
"    Signature: find|ptr-oaDoubleAppDef_oaTrackPattern|cref-oaString,\n"
"    This function returns an oaDoubleAppDef object with this dataType and the specified 'name' if it exists.\n"
"    name\n"
"    The name of the oaAppDef object to look for\n"
"  Paramegers: (oaString,oaAppObjectDef)\n"
"    Calls: oaDoubleAppDef_oaTrackPattern* find(const oaString& name,const oaAppObjectDef* objDef)\n"
"    Signature: find|ptr-oaDoubleAppDef_oaTrackPattern|cref-oaString,cptr-oaAppObjectDef,\n"
"    This function returns an oaDoubleAppDef object with this dataType and the specified 'name' that is associated with the specified object extension 'objDef'.\n"
"    name\n"
"    The name of the oaAppDef object to look for\n"
"    objDef\n"
"    A constant pointer to the object extension\n"
;

static PyObject*
oaDoubleAppDef_oaTrackPattern_static_find(PyObject* ob, PyObject *args)
{
  try {
    // Case: (oaString)
    {
        PyParamoaString p1;
        if (PyArg_ParseTuple(args,"O&",
              &PyoaString_Convert,&p1)) {
            oaDoubleAppDef_oaTrackPatternp result= (oaDoubleAppDef_oaTrackPattern::find(p1.Data()));
            return PyoaDoubleAppDef_oaTrackPattern_FromoaDoubleAppDef_oaTrackPattern(result);
        }
    }
    PyErr_Clear();
    // Case: (oaString,oaAppObjectDef)
    {
        PyParamoaString p1;
        PyParamoaAppObjectDef p2;
        if (PyArg_ParseTuple(args,"O&O&",
              &PyoaString_Convert,&p1,
              &PyoaAppObjectDef_Convert,&p2)) {
            if (!PyValidateDbObject(p2.Data(),2)) return NULL;
            oaDoubleAppDef_oaTrackPatternp result= (oaDoubleAppDef_oaTrackPattern::find(p1.Data(),p2.Data()));
            return PyoaDoubleAppDef_oaTrackPattern_FromoaDoubleAppDef_oaTrackPattern(result);
        }
    }
    PyErr_Clear();
    PyErr_SetString(PyExc_TypeError,
        "No Arg-Matching Function found for class: oaDoubleAppDef_oaTrackPattern, function: find, Choices are:\n"
        "    (oaString)\n"
        "    (oaString,oaAppObjectDef)\n"
    );
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaDoubleAppDef_oaTrackPattern_static_get_doc[] = 
"Class: oaDoubleAppDef_oaTrackPattern, Function: get\n"
"  Paramegers: (oaString)\n"
"    Calls: oaDoubleAppDef_oaTrackPattern* get(const oaString& name)\n"
"    Signature: get|ptr-oaDoubleAppDef_oaTrackPattern|cref-oaString,simple-oaDouble,simple-oaBoolean,\n"
"    This function constructs an oaDoubleAppDef object, creating a double extension with the specified name . You can create a double extension on any object except another extension.\n"
"    name\n"
"    The name given to the oaDoubleAppDef object\n"
"    defValue\n"
"    The default value for this extension\n"
"    persist\n"
"    Saves the oaDoubleAppDef data in the database\n"
"    oacAppDefExists\n"
"  Paramegers: (oaString,oaDouble)\n"
"    Calls: oaDoubleAppDef_oaTrackPattern* get(const oaString& name,oaDouble defValue)\n"
"    Signature: get|ptr-oaDoubleAppDef_oaTrackPattern|cref-oaString,simple-oaDouble,simple-oaBoolean,\n"
"    This function constructs an oaDoubleAppDef object, creating a double extension with the specified name . You can create a double extension on any object except another extension.\n"
"    name\n"
"    The name given to the oaDoubleAppDef object\n"
"    defValue\n"
"    The default value for this extension\n"
"    persist\n"
"    Saves the oaDoubleAppDef data in the database\n"
"    oacAppDefExists\n"
"  Paramegers: (oaString,oaDouble,oaBoolean)\n"
"    Calls: oaDoubleAppDef_oaTrackPattern* get(const oaString& name,oaDouble defValue,oaBoolean persist)\n"
"    Signature: get|ptr-oaDoubleAppDef_oaTrackPattern|cref-oaString,simple-oaDouble,simple-oaBoolean,\n"
"    This function constructs an oaDoubleAppDef object, creating a double extension with the specified name . You can create a double extension on any object except another extension.\n"
"    name\n"
"    The name given to the oaDoubleAppDef object\n"
"    defValue\n"
"    The default value for this extension\n"
"    persist\n"
"    Saves the oaDoubleAppDef data in the database\n"
"    oacAppDefExists\n"
"  Paramegers: (oaString,oaAppObjectDef)\n"
"    Calls: oaDoubleAppDef_oaTrackPattern* get(const oaString& name,const oaAppObjectDef* objDef)\n"
"    Signature: get|ptr-oaDoubleAppDef_oaTrackPattern|cref-oaString,cptr-oaAppObjectDef,simple-oaDouble,simple-oaBoolean,\n"
"    This function constructs an oaDoubleAppDef object, creating a double extension with the specified name for the specified object type.\n"
"    name\n"
"    The name given to the oaDoubleAppDef object\n"
"    objDef\n"
"    The object extension with which to associate the extension\n"
"    defValue\n"
"    An optional default value\n"
"    persist\n"
"    Saves the oaDoubleAppDef data in the database\n"
"    oacAppDefExists\n"
"  Paramegers: (oaString,oaAppObjectDef,oaDouble)\n"
"    Calls: oaDoubleAppDef_oaTrackPattern* get(const oaString& name,const oaAppObjectDef* objDef,oaDouble defValue)\n"
"    Signature: get|ptr-oaDoubleAppDef_oaTrackPattern|cref-oaString,cptr-oaAppObjectDef,simple-oaDouble,simple-oaBoolean,\n"
"    This function constructs an oaDoubleAppDef object, creating a double extension with the specified name for the specified object type.\n"
"    name\n"
"    The name given to the oaDoubleAppDef object\n"
"    objDef\n"
"    The object extension with which to associate the extension\n"
"    defValue\n"
"    An optional default value\n"
"    persist\n"
"    Saves the oaDoubleAppDef data in the database\n"
"    oacAppDefExists\n"
"  Paramegers: (oaString,oaAppObjectDef,oaDouble,oaBoolean)\n"
"    Calls: oaDoubleAppDef_oaTrackPattern* get(const oaString& name,const oaAppObjectDef* objDef,oaDouble defValue,oaBoolean persist)\n"
"    Signature: get|ptr-oaDoubleAppDef_oaTrackPattern|cref-oaString,cptr-oaAppObjectDef,simple-oaDouble,simple-oaBoolean,\n"
"    This function constructs an oaDoubleAppDef object, creating a double extension with the specified name for the specified object type.\n"
"    name\n"
"    The name given to the oaDoubleAppDef object\n"
"    objDef\n"
"    The object extension with which to associate the extension\n"
"    defValue\n"
"    An optional default value\n"
"    persist\n"
"    Saves the oaDoubleAppDef data in the database\n"
"    oacAppDefExists\n"
;

static PyObject*
oaDoubleAppDef_oaTrackPattern_static_get(PyObject* ob, PyObject *args)
{
  try {
    // Case: (oaString)
    {
        PyParamoaString p1;
        if (PyArg_ParseTuple(args,"O&",
              &PyoaString_Convert,&p1)) {
            oaDoubleAppDef_oaTrackPatternp result= (oaDoubleAppDef_oaTrackPattern::get(p1.Data()));
            return PyoaDoubleAppDef_oaTrackPattern_FromoaDoubleAppDef_oaTrackPattern(result);
        }
    }
    PyErr_Clear();
    // Case: (oaString,oaDouble)
    {
        PyParamoaString p1;
        PyParamoaDouble p2;
        if (PyArg_ParseTuple(args,"O&O&",
              &PyoaString_Convert,&p1,
              &PyoaDouble_Convert,&p2)) {
            oaDoubleAppDef_oaTrackPatternp result= (oaDoubleAppDef_oaTrackPattern::get(p1.Data(),p2.Data()));
            return PyoaDoubleAppDef_oaTrackPattern_FromoaDoubleAppDef_oaTrackPattern(result);
        }
    }
    PyErr_Clear();
    // Case: (oaString,oaDouble,oaBoolean)
    {
        PyParamoaString p1;
        PyParamoaDouble p2;
        PyParamoaBoolean p3;
        if (PyArg_ParseTuple(args,"O&O&O&",
              &PyoaString_Convert,&p1,
              &PyoaDouble_Convert,&p2,
              &PyoaBoolean_Convert,&p3)) {
            oaDoubleAppDef_oaTrackPatternp result= (oaDoubleAppDef_oaTrackPattern::get(p1.Data(),p2.Data(),p3.Data()));
            return PyoaDoubleAppDef_oaTrackPattern_FromoaDoubleAppDef_oaTrackPattern(result);
        }
    }
    PyErr_Clear();
    // Case: (oaString,oaAppObjectDef)
    {
        PyParamoaString p1;
        PyParamoaAppObjectDef p2;
        if (PyArg_ParseTuple(args,"O&O&",
              &PyoaString_Convert,&p1,
              &PyoaAppObjectDef_Convert,&p2)) {
            if (!PyValidateDbObject(p2.Data(),2)) return NULL;
            oaDoubleAppDef_oaTrackPatternp result= (oaDoubleAppDef_oaTrackPattern::get(p1.Data(),p2.Data()));
            return PyoaDoubleAppDef_oaTrackPattern_FromoaDoubleAppDef_oaTrackPattern(result);
        }
    }
    PyErr_Clear();
    // Case: (oaString,oaAppObjectDef,oaDouble)
    {
        PyParamoaString p1;
        PyParamoaAppObjectDef p2;
        PyParamoaDouble p3;
        if (PyArg_ParseTuple(args,"O&O&O&",
              &PyoaString_Convert,&p1,
              &PyoaAppObjectDef_Convert,&p2,
              &PyoaDouble_Convert,&p3)) {
            if (!PyValidateDbObject(p2.Data(),2)) return NULL;
            oaDoubleAppDef_oaTrackPatternp result= (oaDoubleAppDef_oaTrackPattern::get(p1.Data(),p2.Data(),p3.Data()));
            return PyoaDoubleAppDef_oaTrackPattern_FromoaDoubleAppDef_oaTrackPattern(result);
        }
    }
    PyErr_Clear();
    // Case: (oaString,oaAppObjectDef,oaDouble,oaBoolean)
    {
        PyParamoaString p1;
        PyParamoaAppObjectDef p2;
        PyParamoaDouble p3;
        PyParamoaBoolean p4;
        if (PyArg_ParseTuple(args,"O&O&O&O&",
              &PyoaString_Convert,&p1,
              &PyoaAppObjectDef_Convert,&p2,
              &PyoaDouble_Convert,&p3,
              &PyoaBoolean_Convert,&p4)) {
            if (!PyValidateDbObject(p2.Data(),2)) return NULL;
            oaDoubleAppDef_oaTrackPatternp result= (oaDoubleAppDef_oaTrackPattern::get(p1.Data(),p2.Data(),p3.Data(),p4.Data()));
            return PyoaDoubleAppDef_oaTrackPattern_FromoaDoubleAppDef_oaTrackPattern(result);
        }
    }
    PyErr_Clear();
    PyErr_SetString(PyExc_TypeError,
        "No Arg-Matching Function found for class: oaDoubleAppDef_oaTrackPattern, function: get, Choices are:\n"
        "    (oaString)\n"
        "    (oaString,oaDouble)\n"
        "    (oaString,oaDouble,oaBoolean)\n"
        "    (oaString,oaAppObjectDef)\n"
        "    (oaString,oaAppObjectDef,oaDouble)\n"
        "    (oaString,oaAppObjectDef,oaDouble,oaBoolean)\n"
    );
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static PyMethodDef oaDoubleAppDef_oaTrackPattern_staticmethodlist[] = {
    {"static_find",(PyCFunction)oaDoubleAppDef_oaTrackPattern_static_find,METH_VARARGS,oaDoubleAppDef_oaTrackPattern_static_find_doc},
    {"static_get",(PyCFunction)oaDoubleAppDef_oaTrackPattern_static_get,METH_VARARGS,oaDoubleAppDef_oaTrackPattern_static_get_doc},
   {NULL,NULL,0,NULL}
};


// ------------------------------------------------------------------
//  Type Init:
// ------------------------------------------------------------------

int
PyoaDoubleAppDef_oaTrackPattern_TypeInit(PyObject* mod_dict)
{
    if (PyType_Ready(&PyoaDoubleAppDef_oaTrackPattern_Type)<0) {
      printf("** PyType_Ready failed for: oaDoubleAppDef_oaTrackPattern\n");
      return -1;
    }

    if (PyDict_SetItemString(mod_dict,"oaDoubleAppDef_oaTrackPattern",
           (PyObject*)(&PyoaDoubleAppDef_oaTrackPattern_Type))<0) {
       printf("** Failed to add type name to module dictionary for: oaDoubleAppDef_oaTrackPattern\n");
       return -1;
    }

    PyObject *dict, *value;
    PyMethodDef *method;
    dict=PyoaDoubleAppDef_oaTrackPattern_Type.tp_dict;
    for(method=oaDoubleAppDef_oaTrackPattern_staticmethodlist;method->ml_name!=NULL;method++) {
        value=PyCFunction_New(method,NULL);
    if (value==NULL) return -1;
        if (PyDict_SetItemString(dict,method->ml_name,value)!=0) {
        Py_DECREF(value);
            printf("** Failed to add static function to module dictionary for: %s\n",
                method->ml_name);
            return -1;
        }
        Py_DECREF(value);
    }
    return 0;
}


/********************************************************************
 *   Copyright 2002-2008  LSI Corporation
 *
 *   Licensed under the Apache License, Version 2.0 (the "License");
 *   you may not use this file except in compliance with the License.
 *   You may obtain a copy of the License at
 *
 *       http://www.apache.org/licenses/LICENSE-2.0
 *
 *   Unless required by applicable law or agreed to in writing, software
 *   distributed under the License is distributed on an "AS IS" BASIS,
 *   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *   See the License for the specific language governing permissions and
 *   limitations under the License.
 *
 *******************************************************************/

#include "pyoa_header.h"


// ==================================================================
// Wrapper Implementation for Class: oaDoubleAppDef_oaValue
// ==================================================================


// ==================================================================
// Alloc/Dealloc Routines
// ==================================================================

// ------------------------------------------------------------------
static PyObject*
oaDoubleAppDef_oaValue_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
  try {
    int is_raw=(type==&PyoaDoubleAppDef_oaValue_Type);
    PyObject* bself = type->tp_alloc(type,0);
    if (bself == NULL) return bself;
    PyoaDoubleAppDef_oaValueObject* self = (PyoaDoubleAppDef_oaValueObject*)bself;
    self->locks = NULL;
    self->borrow = 0;
    static char *kwlist [] = { NULL } ;
    // Case: (oaDoubleAppDef_oaValue)
    {
        PyParamoaDoubleAppDef_oaValue p1;
        if (PyArg_ParseTuple(args,(char*)"O&",
              &PyoaDoubleAppDef_oaValue_Convert,&p1)) {
            self->data=p1.Data();
            self->value=&(self->data);
            return bself;
        }
    }
    PyErr_Clear();
    // Case: ()
    {
        if (PyArg_ParseTuple(args,(char*)"")) {
          self->data=NULL;
          self->value=&(self->data);
          return bself;
        }
    }
    PyErr_Clear();
    PyErr_SetString(PyExc_TypeError,
        "No Arg-Matching Constructor found for class: oaDoubleAppDef_oaValue, Choices are:\n"
        "    (oaDoubleAppDef_oaValue)\n"
    );
    Py_DECREF(self);
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static void
oaDoubleAppDef_oaValue_tp_dealloc(PyoaDoubleAppDef_oaValueObject* self)
{
    self->ob_type->tp_free((PyObject*)self);
}

// ------------------------------------------------------------------
static PyObject*
oaDoubleAppDef_oaValue_tp_repr(PyObject *ob)
{
    PyParamoaDoubleAppDef_oaValue value;
    int convert_status=PyoaDoubleAppDef_oaValue_Convert(ob,&value);
    assert(convert_status!=0);
    PyObject* result;

    char buffer[44];
    sprintf(buffer,"<oaDoubleAppDef_oaValue::" DISPLAY_FORMAT ">",POINTER_AS_DISPLAY(value.DataCall()));
    result=PyString_FromString(buffer);
    return result;
}
        
// ------------------------------------------------------------------
static int
oaDoubleAppDef_oaValue_tp_compare(PyObject *ob1,PyObject* ob2)
{
    PyParamoaDoubleAppDef_oaValue v1;
    PyParamoaDoubleAppDef_oaValue v2;
    int convert_status1=PyoaDoubleAppDef_oaValue_Convert(ob1,&v1);
    int convert_status2=PyoaDoubleAppDef_oaValue_Convert(ob2,&v2);
    assert(convert_status1!=0);
    assert(convert_status2!=0);
    if (v1.DataCall()==v2.DataCall()) return 0;
    return 1;
}
        
// ------------------------------------------------------------------
int
PyoaDoubleAppDef_oaValue_Convert(PyObject* ob,PyParamoaDoubleAppDef_oaValue* result)
{
    if (ob == NULL) return 1;
    if (PyoaDoubleAppDef_oaValue_Check(ob)) {
        result->SetData( (oaDoubleAppDef_oaValue**) ((PyoaDoubleAppDef_oaValueObject*)ob)->value);
        return 1;
    }
    PyErr_SetString(PyExc_TypeError,
        "Convertion of parameter to class: oaDoubleAppDef_oaValue Failed");
    return 0;
}
// ------------------------------------------------------------------
PyObject* PyoaDoubleAppDef_oaValue_FromoaDoubleAppDef_oaValue(oaDoubleAppDef_oaValue** value,int borrow,PyObject* lock)
{
    if (value && *value) {
        oaDoubleAppDef_oaValue* data=*value;
        PyObject* bself = PyoaDoubleAppDef_oaValue_Type.tp_alloc(&PyoaDoubleAppDef_oaValue_Type,0);
        if (bself == NULL) return bself;
        PyoaDoubleAppDef_oaValueObject* self = (PyoaDoubleAppDef_oaValueObject*)bself;
        self->value = (oaObject**) value;
        self->data = NULL;
        self->locks = NULL;
        self->borrow = 0; // Ignore borrow flag, since we copied
       if (lock) PyoaLockObject(self->locks,lock);
        return bself;
    }
    Py_INCREF(Py_None);
    return Py_None;
}
// ------------------------------------------------------------------
PyObject* PyoaDoubleAppDef_oaValue_FromoaDoubleAppDef_oaValue(oaDoubleAppDef_oaValue* data)
{
    if (data) {
       PyObject* bself = PyoaDoubleAppDef_oaValue_Type.tp_alloc(&PyoaDoubleAppDef_oaValue_Type,0);
       if (bself == NULL) return bself;
       PyoaDoubleAppDef_oaValueObject* self = (PyoaDoubleAppDef_oaValueObject*)bself;
       self->data = (oaObject*) data;
       self->value = &(self->data);
       self->borrow = 0; 
       self->locks = NULL;
       return bself;
    }
    Py_INCREF(Py_None);
    return Py_None;
}

// ------------------------------------------------------------------
// FunctionMethods:
// ------------------------------------------------------------------

// ------------------------------------------------------------------
static char oaDoubleAppDef_oaValue_get_doc[] = 
"Class: oaDoubleAppDef_oaValue, Function: get\n"
"  Paramegers: (oaValue)\n"
"    Calls: oaDouble get(const oaValue* object)\n"
"    Signature: get|simple-oaDouble|cptr-oaValue,\n"
"    This function returns the value of this double extension.\n"
"    object\n"
"    The object for which to get the value\n"
;

static PyObject*
oaDoubleAppDef_oaValue_get(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaDoubleAppDef_oaValue data;
    int convert_status=PyoaDoubleAppDef_oaValue_Convert(ob,&data);
    assert(convert_status!=0);
    PyoaDoubleAppDef_oaValueObject* self=(PyoaDoubleAppDef_oaValueObject*)ob;
    if (!PyValidateDbObject(data.Data(),0)) return NULL;

    PyParamoaValue p1;
    if (PyArg_ParseTuple(args,"O&",
          &PyoaValue_Convert,&p1)) {
        if (!PyValidateDbObject(p1.Data(),1)) return NULL;
        oaDouble result= (data.DataCall()->get(p1.Data()));
        return PyoaDouble_FromoaDouble(result);
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaDoubleAppDef_oaValue_getDefault_doc[] = 
"Class: oaDoubleAppDef_oaValue, Function: getDefault\n"
"  Paramegers: ()\n"
"    Calls: oaDouble getDefault() const\n"
"    Signature: getDefault|simple-oaDouble|\n"
"    BrowseData: 1\n"
"    This function returns the default value of this double extension.\n"
;

static PyObject*
oaDoubleAppDef_oaValue_getDefault(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaDoubleAppDef_oaValue data;
    int convert_status=PyoaDoubleAppDef_oaValue_Convert(ob,&data);
    assert(convert_status!=0);
    PyoaDoubleAppDef_oaValueObject* self=(PyoaDoubleAppDef_oaValueObject*)ob;
    if (!PyValidateDbObject(data.Data(),0)) return NULL;

    if (PyArg_ParseTuple(args,"")) {
        oaDouble result= (data.DataCall()->getDefault());
        return PyoaDouble_FromoaDouble(result);
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaDoubleAppDef_oaValue_set_doc[] = 
"Class: oaDoubleAppDef_oaValue, Function: set\n"
"  Paramegers: (oaValue,oaDouble)\n"
"    Calls: void set(oaValue* object,oaDouble value)\n"
"    Signature: set|void-void|ptr-oaValue,simple-oaDouble,\n"
"    This function sets the value of this double extension.\n"
"    object\n"
"    The object on which to set the value\n"
"    value\n"
"    The value to set on the object\n"
;

static PyObject*
oaDoubleAppDef_oaValue_set(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaDoubleAppDef_oaValue data;
    int convert_status=PyoaDoubleAppDef_oaValue_Convert(ob,&data);
    assert(convert_status!=0);
    PyoaDoubleAppDef_oaValueObject* self=(PyoaDoubleAppDef_oaValueObject*)ob;
    if (!PyValidateDbObject(data.Data(),0)) return NULL;

    PyParamoaValue p1;
    PyParamoaDouble p2;
    if (PyArg_ParseTuple(args,"O&O&",
          &PyoaValue_Convert,&p1,
          &PyoaDouble_Convert,&p2)) {
        if (!PyValidateDbObject(p1.Data(),1)) return NULL;
        data.DataCall()->set(p1.Data(),p2.Data());
        Py_INCREF(Py_None);
        return Py_None;
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaDoubleAppDef_oaValue_isNull_doc[] =
"Class: oaDoubleAppDef_oaValue, Function: isNull\n"
"  Parameters: () \n"
"    This functions returns 1 if the DbPointer is NULL, and 0 otherwise.\n"
;

static PyObject*
oaDoubleAppDef_oaValue_tp_isNull(PyObject* ob, PyObject *args)
{
    PyParamoaDoubleAppDef_oaValue data;
    int convert_status=PyoaDoubleAppDef_oaValue_Convert(ob,&data);
    assert(convert_status!=0);
    if (data.DataCall()==NULL)
        return PyInt_FromLong(1);
    else
        return PyInt_FromLong(0);
}
static char oaDoubleAppDef_oaValue_assign_doc[] = 
"Class: oaDoubleAppDef_oaValue, Function: set\n"
"  Paramegers: (oaDouble)\n"
"    This function sets the current value.\n"
;

static PyObject*
oaDoubleAppDef_oaValue_tp_assign(PyObject* ob, PyObject *args)
{
  PyParamoaDoubleAppDef_oaValue data;
  int convert_status=PyoaDoubleAppDef_oaValue_Convert(ob,&data);
  assert(convert_status!=0);
  try {
    PyParamoaDoubleAppDef_oaValue p1;
    if (PyArg_ParseTuple(args,(char*)"O&",
          &PyoaDoubleAppDef_oaValue_Convert,&p1)) {
        data.Data()=p1.Data();
        Py_INCREF(ob);
        return ob;
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}


// ------------------------------------------------------------------
//  Function Methods Table:
// ------------------------------------------------------------------

static PyMethodDef oaDoubleAppDef_oaValue_methodlist[] = {
    {"get",(PyCFunction)oaDoubleAppDef_oaValue_get,METH_VARARGS,oaDoubleAppDef_oaValue_get_doc},
    {"getDefault",(PyCFunction)oaDoubleAppDef_oaValue_getDefault,METH_VARARGS,oaDoubleAppDef_oaValue_getDefault_doc},
    {"set",(PyCFunction)oaDoubleAppDef_oaValue_set,METH_VARARGS,oaDoubleAppDef_oaValue_set_doc},
    {"isNull",(PyCFunction)oaDoubleAppDef_oaValue_tp_isNull,METH_VARARGS,oaDoubleAppDef_oaValue_isNull_doc},
    {"assign",(PyCFunction)oaDoubleAppDef_oaValue_tp_assign,METH_VARARGS,oaDoubleAppDef_oaValue_assign_doc},
   {NULL,NULL,0,NULL}
};


// ------------------------------------------------------------------
//  Type Object:
// ------------------------------------------------------------------

// ------------------------------------------------------------------
static char oaDoubleAppDef_oaValue_doc[] = 
"Class: oaDoubleAppDef_oaValue\n"
"  The oaDoubleAppDef class implements an application-specific extension for a particular type of data in a database.\n"
"  Once created, a double field is added to each object of the specified dataType. The default value for this extension is DBL_MAX. Applications can use the new field for whatever purpose is necessary.\n"
"  For additional information on defining and using AppDefs, see oaAppDef and Extending the Database in the Programmer's Guide.\n"
"Constructors:\n"
"  Paramegers: (oaDoubleAppDef_oaValue)\n"
"    Calls: (const oaDoubleAppDef_oaValue&)\n"
"    Signature: oaDoubleAppDef_oaValue||cref-oaDoubleAppDef_oaValue,\n"
;

// ------------------------------------------------------------------
PyTypeObject PyoaDoubleAppDef_oaValue_Type = {
    PyObject_HEAD_INIT(&PyType_Type)
    0,
    "oaDoubleAppDef_oaValue",
    sizeof(PyoaDoubleAppDef_oaValueObject),
    0,
    (destructor)oaDoubleAppDef_oaValue_tp_dealloc,	/* tp_dealloc */
    0,	/* tp_print */
    0,					/* tp_getattr */
    0,					/* tp_setattr */
    (cmpfunc)oaDoubleAppDef_oaValue_tp_compare,	/* tp_compare */
    (reprfunc)oaDoubleAppDef_oaValue_tp_repr,	/* tp_repr */
    0,					/* tp_as_number */
    0,					/* tp_as_sequence */
    0,					/* tp_as_mapping */
    0,					/* tp_as_hash */
    0,					/* tp_as_call */
    0,					/* tp_str */
    0,					/* tp_getattro */
    0,					/* tp_setattro */
    0,					/* tp_as_buffer */
    Py_TPFLAGS_DEFAULT|Py_TPFLAGS_BASETYPE, /* tp_flags */
    oaDoubleAppDef_oaValue_doc,	/* tp_doc */
    0,					/* tp_traverse */
    0,					/* tp_clear */
    0,					/* tp_richcompre */
    0,					/* tp_weaklistoffset */
    0,					/* tp_iter */
    0,					/* tp_iternext */
    oaDoubleAppDef_oaValue_methodlist,	/* tp_methods */
    0,					/* tp_members */
    0,					/* tp_getset */
    &PyoaAppDef_Type,	/* tp_base */
    0,					/* tp_dict */
    0,					/* tp_descr_get */
    0,					/* tp_descr_set */
    0,					/* tp_dictoffset */
    0,					/* tp_init */
    PyType_GenericAlloc,	/* tp_alloc */
    oaDoubleAppDef_oaValue_new,	/* tp_new */
    _PyObject_Del,	/* tp_free */
};


// ------------------------------------------------------------------
// Static FunctionMethods:
// ------------------------------------------------------------------

// ------------------------------------------------------------------
static char oaDoubleAppDef_oaValue_static_find_doc[] = 
"Class: oaDoubleAppDef_oaValue, Function: find\n"
"  Paramegers: (oaString)\n"
"    Calls: oaDoubleAppDef_oaValue* find(const oaString& name)\n"
"    Signature: find|ptr-oaDoubleAppDef_oaValue|cref-oaString,\n"
"    This function returns an oaDoubleAppDef object with this dataType and the specified 'name' if it exists.\n"
"    name\n"
"    The name of the oaAppDef object to look for\n"
"  Paramegers: (oaString,oaAppObjectDef)\n"
"    Calls: oaDoubleAppDef_oaValue* find(const oaString& name,const oaAppObjectDef* objDef)\n"
"    Signature: find|ptr-oaDoubleAppDef_oaValue|cref-oaString,cptr-oaAppObjectDef,\n"
"    This function returns an oaDoubleAppDef object with this dataType and the specified 'name' that is associated with the specified object extension 'objDef'.\n"
"    name\n"
"    The name of the oaAppDef object to look for\n"
"    objDef\n"
"    A constant pointer to the object extension\n"
;

static PyObject*
oaDoubleAppDef_oaValue_static_find(PyObject* ob, PyObject *args)
{
  try {
    // Case: (oaString)
    {
        PyParamoaString p1;
        if (PyArg_ParseTuple(args,"O&",
              &PyoaString_Convert,&p1)) {
            oaDoubleAppDef_oaValuep result= (oaDoubleAppDef_oaValue::find(p1.Data()));
            return PyoaDoubleAppDef_oaValue_FromoaDoubleAppDef_oaValue(result);
        }
    }
    PyErr_Clear();
    // Case: (oaString,oaAppObjectDef)
    {
        PyParamoaString p1;
        PyParamoaAppObjectDef p2;
        if (PyArg_ParseTuple(args,"O&O&",
              &PyoaString_Convert,&p1,
              &PyoaAppObjectDef_Convert,&p2)) {
            if (!PyValidateDbObject(p2.Data(),2)) return NULL;
            oaDoubleAppDef_oaValuep result= (oaDoubleAppDef_oaValue::find(p1.Data(),p2.Data()));
            return PyoaDoubleAppDef_oaValue_FromoaDoubleAppDef_oaValue(result);
        }
    }
    PyErr_Clear();
    PyErr_SetString(PyExc_TypeError,
        "No Arg-Matching Function found for class: oaDoubleAppDef_oaValue, function: find, Choices are:\n"
        "    (oaString)\n"
        "    (oaString,oaAppObjectDef)\n"
    );
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaDoubleAppDef_oaValue_static_get_doc[] = 
"Class: oaDoubleAppDef_oaValue, Function: get\n"
"  Paramegers: (oaString)\n"
"    Calls: oaDoubleAppDef_oaValue* get(const oaString& name)\n"
"    Signature: get|ptr-oaDoubleAppDef_oaValue|cref-oaString,simple-oaDouble,simple-oaBoolean,\n"
"    This function constructs an oaDoubleAppDef object, creating a double extension with the specified name . You can create a double extension on any object except another extension.\n"
"    name\n"
"    The name given to the oaDoubleAppDef object\n"
"    defValue\n"
"    The default value for this extension\n"
"    persist\n"
"    Saves the oaDoubleAppDef data in the database\n"
"    oacAppDefExists\n"
"  Paramegers: (oaString,oaDouble)\n"
"    Calls: oaDoubleAppDef_oaValue* get(const oaString& name,oaDouble defValue)\n"
"    Signature: get|ptr-oaDoubleAppDef_oaValue|cref-oaString,simple-oaDouble,simple-oaBoolean,\n"
"    This function constructs an oaDoubleAppDef object, creating a double extension with the specified name . You can create a double extension on any object except another extension.\n"
"    name\n"
"    The name given to the oaDoubleAppDef object\n"
"    defValue\n"
"    The default value for this extension\n"
"    persist\n"
"    Saves the oaDoubleAppDef data in the database\n"
"    oacAppDefExists\n"
"  Paramegers: (oaString,oaDouble,oaBoolean)\n"
"    Calls: oaDoubleAppDef_oaValue* get(const oaString& name,oaDouble defValue,oaBoolean persist)\n"
"    Signature: get|ptr-oaDoubleAppDef_oaValue|cref-oaString,simple-oaDouble,simple-oaBoolean,\n"
"    This function constructs an oaDoubleAppDef object, creating a double extension with the specified name . You can create a double extension on any object except another extension.\n"
"    name\n"
"    The name given to the oaDoubleAppDef object\n"
"    defValue\n"
"    The default value for this extension\n"
"    persist\n"
"    Saves the oaDoubleAppDef data in the database\n"
"    oacAppDefExists\n"
"  Paramegers: (oaString,oaAppObjectDef)\n"
"    Calls: oaDoubleAppDef_oaValue* get(const oaString& name,const oaAppObjectDef* objDef)\n"
"    Signature: get|ptr-oaDoubleAppDef_oaValue|cref-oaString,cptr-oaAppObjectDef,simple-oaDouble,simple-oaBoolean,\n"
"    This function constructs an oaDoubleAppDef object, creating a double extension with the specified name for the specified object type.\n"
"    name\n"
"    The name given to the oaDoubleAppDef object\n"
"    objDef\n"
"    The object extension with which to associate the extension\n"
"    defValue\n"
"    An optional default value\n"
"    persist\n"
"    Saves the oaDoubleAppDef data in the database\n"
"    oacAppDefExists\n"
"  Paramegers: (oaString,oaAppObjectDef,oaDouble)\n"
"    Calls: oaDoubleAppDef_oaValue* get(const oaString& name,const oaAppObjectDef* objDef,oaDouble defValue)\n"
"    Signature: get|ptr-oaDoubleAppDef_oaValue|cref-oaString,cptr-oaAppObjectDef,simple-oaDouble,simple-oaBoolean,\n"
"    This function constructs an oaDoubleAppDef object, creating a double extension with the specified name for the specified object type.\n"
"    name\n"
"    The name given to the oaDoubleAppDef object\n"
"    objDef\n"
"    The object extension with which to associate the extension\n"
"    defValue\n"
"    An optional default value\n"
"    persist\n"
"    Saves the oaDoubleAppDef data in the database\n"
"    oacAppDefExists\n"
"  Paramegers: (oaString,oaAppObjectDef,oaDouble,oaBoolean)\n"
"    Calls: oaDoubleAppDef_oaValue* get(const oaString& name,const oaAppObjectDef* objDef,oaDouble defValue,oaBoolean persist)\n"
"    Signature: get|ptr-oaDoubleAppDef_oaValue|cref-oaString,cptr-oaAppObjectDef,simple-oaDouble,simple-oaBoolean,\n"
"    This function constructs an oaDoubleAppDef object, creating a double extension with the specified name for the specified object type.\n"
"    name\n"
"    The name given to the oaDoubleAppDef object\n"
"    objDef\n"
"    The object extension with which to associate the extension\n"
"    defValue\n"
"    An optional default value\n"
"    persist\n"
"    Saves the oaDoubleAppDef data in the database\n"
"    oacAppDefExists\n"
;

static PyObject*
oaDoubleAppDef_oaValue_static_get(PyObject* ob, PyObject *args)
{
  try {
    // Case: (oaString)
    {
        PyParamoaString p1;
        if (PyArg_ParseTuple(args,"O&",
              &PyoaString_Convert,&p1)) {
            oaDoubleAppDef_oaValuep result= (oaDoubleAppDef_oaValue::get(p1.Data()));
            return PyoaDoubleAppDef_oaValue_FromoaDoubleAppDef_oaValue(result);
        }
    }
    PyErr_Clear();
    // Case: (oaString,oaDouble)
    {
        PyParamoaString p1;
        PyParamoaDouble p2;
        if (PyArg_ParseTuple(args,"O&O&",
              &PyoaString_Convert,&p1,
              &PyoaDouble_Convert,&p2)) {
            oaDoubleAppDef_oaValuep result= (oaDoubleAppDef_oaValue::get(p1.Data(),p2.Data()));
            return PyoaDoubleAppDef_oaValue_FromoaDoubleAppDef_oaValue(result);
        }
    }
    PyErr_Clear();
    // Case: (oaString,oaDouble,oaBoolean)
    {
        PyParamoaString p1;
        PyParamoaDouble p2;
        PyParamoaBoolean p3;
        if (PyArg_ParseTuple(args,"O&O&O&",
              &PyoaString_Convert,&p1,
              &PyoaDouble_Convert,&p2,
              &PyoaBoolean_Convert,&p3)) {
            oaDoubleAppDef_oaValuep result= (oaDoubleAppDef_oaValue::get(p1.Data(),p2.Data(),p3.Data()));
            return PyoaDoubleAppDef_oaValue_FromoaDoubleAppDef_oaValue(result);
        }
    }
    PyErr_Clear();
    // Case: (oaString,oaAppObjectDef)
    {
        PyParamoaString p1;
        PyParamoaAppObjectDef p2;
        if (PyArg_ParseTuple(args,"O&O&",
              &PyoaString_Convert,&p1,
              &PyoaAppObjectDef_Convert,&p2)) {
            if (!PyValidateDbObject(p2.Data(),2)) return NULL;
            oaDoubleAppDef_oaValuep result= (oaDoubleAppDef_oaValue::get(p1.Data(),p2.Data()));
            return PyoaDoubleAppDef_oaValue_FromoaDoubleAppDef_oaValue(result);
        }
    }
    PyErr_Clear();
    // Case: (oaString,oaAppObjectDef,oaDouble)
    {
        PyParamoaString p1;
        PyParamoaAppObjectDef p2;
        PyParamoaDouble p3;
        if (PyArg_ParseTuple(args,"O&O&O&",
              &PyoaString_Convert,&p1,
              &PyoaAppObjectDef_Convert,&p2,
              &PyoaDouble_Convert,&p3)) {
            if (!PyValidateDbObject(p2.Data(),2)) return NULL;
            oaDoubleAppDef_oaValuep result= (oaDoubleAppDef_oaValue::get(p1.Data(),p2.Data(),p3.Data()));
            return PyoaDoubleAppDef_oaValue_FromoaDoubleAppDef_oaValue(result);
        }
    }
    PyErr_Clear();
    // Case: (oaString,oaAppObjectDef,oaDouble,oaBoolean)
    {
        PyParamoaString p1;
        PyParamoaAppObjectDef p2;
        PyParamoaDouble p3;
        PyParamoaBoolean p4;
        if (PyArg_ParseTuple(args,"O&O&O&O&",
              &PyoaString_Convert,&p1,
              &PyoaAppObjectDef_Convert,&p2,
              &PyoaDouble_Convert,&p3,
              &PyoaBoolean_Convert,&p4)) {
            if (!PyValidateDbObject(p2.Data(),2)) return NULL;
            oaDoubleAppDef_oaValuep result= (oaDoubleAppDef_oaValue::get(p1.Data(),p2.Data(),p3.Data(),p4.Data()));
            return PyoaDoubleAppDef_oaValue_FromoaDoubleAppDef_oaValue(result);
        }
    }
    PyErr_Clear();
    PyErr_SetString(PyExc_TypeError,
        "No Arg-Matching Function found for class: oaDoubleAppDef_oaValue, function: get, Choices are:\n"
        "    (oaString)\n"
        "    (oaString,oaDouble)\n"
        "    (oaString,oaDouble,oaBoolean)\n"
        "    (oaString,oaAppObjectDef)\n"
        "    (oaString,oaAppObjectDef,oaDouble)\n"
        "    (oaString,oaAppObjectDef,oaDouble,oaBoolean)\n"
    );
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static PyMethodDef oaDoubleAppDef_oaValue_staticmethodlist[] = {
    {"static_find",(PyCFunction)oaDoubleAppDef_oaValue_static_find,METH_VARARGS,oaDoubleAppDef_oaValue_static_find_doc},
    {"static_get",(PyCFunction)oaDoubleAppDef_oaValue_static_get,METH_VARARGS,oaDoubleAppDef_oaValue_static_get_doc},
   {NULL,NULL,0,NULL}
};


// ------------------------------------------------------------------
//  Type Init:
// ------------------------------------------------------------------

int
PyoaDoubleAppDef_oaValue_TypeInit(PyObject* mod_dict)
{
    if (PyType_Ready(&PyoaDoubleAppDef_oaValue_Type)<0) {
      printf("** PyType_Ready failed for: oaDoubleAppDef_oaValue\n");
      return -1;
    }

    if (PyDict_SetItemString(mod_dict,"oaDoubleAppDef_oaValue",
           (PyObject*)(&PyoaDoubleAppDef_oaValue_Type))<0) {
       printf("** Failed to add type name to module dictionary for: oaDoubleAppDef_oaValue\n");
       return -1;
    }

    PyObject *dict, *value;
    PyMethodDef *method;
    dict=PyoaDoubleAppDef_oaValue_Type.tp_dict;
    for(method=oaDoubleAppDef_oaValue_staticmethodlist;method->ml_name!=NULL;method++) {
        value=PyCFunction_New(method,NULL);
    if (value==NULL) return -1;
        if (PyDict_SetItemString(dict,method->ml_name,value)!=0) {
        Py_DECREF(value);
            printf("** Failed to add static function to module dictionary for: %s\n",
                method->ml_name);
            return -1;
        }
        Py_DECREF(value);
    }
    return 0;
}


/********************************************************************
 *   Copyright 2002-2008  LSI Corporation
 *
 *   Licensed under the Apache License, Version 2.0 (the "License");
 *   you may not use this file except in compliance with the License.
 *   You may obtain a copy of the License at
 *
 *       http://www.apache.org/licenses/LICENSE-2.0
 *
 *   Unless required by applicable law or agreed to in writing, software
 *   distributed under the License is distributed on an "AS IS" BASIS,
 *   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *   See the License for the specific language governing permissions and
 *   limitations under the License.
 *
 *******************************************************************/

#include "pyoa_header.h"


// ==================================================================
// Wrapper Implementation for Class: oaDoubleAppDef_oaVectorInstDef
// ==================================================================


// ==================================================================
// Alloc/Dealloc Routines
// ==================================================================

// ------------------------------------------------------------------
static PyObject*
oaDoubleAppDef_oaVectorInstDef_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
  try {
    int is_raw=(type==&PyoaDoubleAppDef_oaVectorInstDef_Type);
    PyObject* bself = type->tp_alloc(type,0);
    if (bself == NULL) return bself;
    PyoaDoubleAppDef_oaVectorInstDefObject* self = (PyoaDoubleAppDef_oaVectorInstDefObject*)bself;
    self->locks = NULL;
    self->borrow = 0;
    static char *kwlist [] = { NULL } ;
    // Case: (oaDoubleAppDef_oaVectorInstDef)
    {
        PyParamoaDoubleAppDef_oaVectorInstDef p1;
        if (PyArg_ParseTuple(args,(char*)"O&",
              &PyoaDoubleAppDef_oaVectorInstDef_Convert,&p1)) {
            self->data=p1.Data();
            self->value=&(self->data);
            return bself;
        }
    }
    PyErr_Clear();
    // Case: ()
    {
        if (PyArg_ParseTuple(args,(char*)"")) {
          self->data=NULL;
          self->value=&(self->data);
          return bself;
        }
    }
    PyErr_Clear();
    PyErr_SetString(PyExc_TypeError,
        "No Arg-Matching Constructor found for class: oaDoubleAppDef_oaVectorInstDef, Choices are:\n"
        "    (oaDoubleAppDef_oaVectorInstDef)\n"
    );
    Py_DECREF(self);
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static void
oaDoubleAppDef_oaVectorInstDef_tp_dealloc(PyoaDoubleAppDef_oaVectorInstDefObject* self)
{
    self->ob_type->tp_free((PyObject*)self);
}

// ------------------------------------------------------------------
static PyObject*
oaDoubleAppDef_oaVectorInstDef_tp_repr(PyObject *ob)
{
    PyParamoaDoubleAppDef_oaVectorInstDef value;
    int convert_status=PyoaDoubleAppDef_oaVectorInstDef_Convert(ob,&value);
    assert(convert_status!=0);
    PyObject* result;

    char buffer[52];
    sprintf(buffer,"<oaDoubleAppDef_oaVectorInstDef::" DISPLAY_FORMAT ">",POINTER_AS_DISPLAY(value.DataCall()));
    result=PyString_FromString(buffer);
    return result;
}
        
// ------------------------------------------------------------------
static int
oaDoubleAppDef_oaVectorInstDef_tp_compare(PyObject *ob1,PyObject* ob2)
{
    PyParamoaDoubleAppDef_oaVectorInstDef v1;
    PyParamoaDoubleAppDef_oaVectorInstDef v2;
    int convert_status1=PyoaDoubleAppDef_oaVectorInstDef_Convert(ob1,&v1);
    int convert_status2=PyoaDoubleAppDef_oaVectorInstDef_Convert(ob2,&v2);
    assert(convert_status1!=0);
    assert(convert_status2!=0);
    if (v1.DataCall()==v2.DataCall()) return 0;
    return 1;
}
        
// ------------------------------------------------------------------
int
PyoaDoubleAppDef_oaVectorInstDef_Convert(PyObject* ob,PyParamoaDoubleAppDef_oaVectorInstDef* result)
{
    if (ob == NULL) return 1;
    if (PyoaDoubleAppDef_oaVectorInstDef_Check(ob)) {
        result->SetData( (oaDoubleAppDef_oaVectorInstDef**) ((PyoaDoubleAppDef_oaVectorInstDefObject*)ob)->value);
        return 1;
    }
    PyErr_SetString(PyExc_TypeError,
        "Convertion of parameter to class: oaDoubleAppDef_oaVectorInstDef Failed");
    return 0;
}
// ------------------------------------------------------------------
PyObject* PyoaDoubleAppDef_oaVectorInstDef_FromoaDoubleAppDef_oaVectorInstDef(oaDoubleAppDef_oaVectorInstDef** value,int borrow,PyObject* lock)
{
    if (value && *value) {
        oaDoubleAppDef_oaVectorInstDef* data=*value;
        PyObject* bself = PyoaDoubleAppDef_oaVectorInstDef_Type.tp_alloc(&PyoaDoubleAppDef_oaVectorInstDef_Type,0);
        if (bself == NULL) return bself;
        PyoaDoubleAppDef_oaVectorInstDefObject* self = (PyoaDoubleAppDef_oaVectorInstDefObject*)bself;
        self->value = (oaObject**) value;
        self->data = NULL;
        self->locks = NULL;
        self->borrow = 0; // Ignore borrow flag, since we copied
       if (lock) PyoaLockObject(self->locks,lock);
        return bself;
    }
    Py_INCREF(Py_None);
    return Py_None;
}
// ------------------------------------------------------------------
PyObject* PyoaDoubleAppDef_oaVectorInstDef_FromoaDoubleAppDef_oaVectorInstDef(oaDoubleAppDef_oaVectorInstDef* data)
{
    if (data) {
       PyObject* bself = PyoaDoubleAppDef_oaVectorInstDef_Type.tp_alloc(&PyoaDoubleAppDef_oaVectorInstDef_Type,0);
       if (bself == NULL) return bself;
       PyoaDoubleAppDef_oaVectorInstDefObject* self = (PyoaDoubleAppDef_oaVectorInstDefObject*)bself;
       self->data = (oaObject*) data;
       self->value = &(self->data);
       self->borrow = 0; 
       self->locks = NULL;
       return bself;
    }
    Py_INCREF(Py_None);
    return Py_None;
}

// ------------------------------------------------------------------
// FunctionMethods:
// ------------------------------------------------------------------

// ------------------------------------------------------------------
static char oaDoubleAppDef_oaVectorInstDef_get_doc[] = 
"Class: oaDoubleAppDef_oaVectorInstDef, Function: get\n"
"  Paramegers: (oaVectorInstDef)\n"
"    Calls: oaDouble get(const oaVectorInstDef* object)\n"
"    Signature: get|simple-oaDouble|cptr-oaVectorInstDef,\n"
"    This function returns the value of this double extension.\n"
"    object\n"
"    The object for which to get the value\n"
;

static PyObject*
oaDoubleAppDef_oaVectorInstDef_get(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaDoubleAppDef_oaVectorInstDef data;
    int convert_status=PyoaDoubleAppDef_oaVectorInstDef_Convert(ob,&data);
    assert(convert_status!=0);
    PyoaDoubleAppDef_oaVectorInstDefObject* self=(PyoaDoubleAppDef_oaVectorInstDefObject*)ob;
    if (!PyValidateDbObject(data.Data(),0)) return NULL;

    PyParamoaVectorInstDef p1;
    if (PyArg_ParseTuple(args,"O&",
          &PyoaVectorInstDef_Convert,&p1)) {
        if (!PyValidateDbObject(p1.Data(),1)) return NULL;
        oaDouble result= (data.DataCall()->get(p1.Data()));
        return PyoaDouble_FromoaDouble(result);
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaDoubleAppDef_oaVectorInstDef_getDefault_doc[] = 
"Class: oaDoubleAppDef_oaVectorInstDef, Function: getDefault\n"
"  Paramegers: ()\n"
"    Calls: oaDouble getDefault() const\n"
"    Signature: getDefault|simple-oaDouble|\n"
"    BrowseData: 1\n"
"    This function returns the default value of this double extension.\n"
;

static PyObject*
oaDoubleAppDef_oaVectorInstDef_getDefault(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaDoubleAppDef_oaVectorInstDef data;
    int convert_status=PyoaDoubleAppDef_oaVectorInstDef_Convert(ob,&data);
    assert(convert_status!=0);
    PyoaDoubleAppDef_oaVectorInstDefObject* self=(PyoaDoubleAppDef_oaVectorInstDefObject*)ob;
    if (!PyValidateDbObject(data.Data(),0)) return NULL;

    if (PyArg_ParseTuple(args,"")) {
        oaDouble result= (data.DataCall()->getDefault());
        return PyoaDouble_FromoaDouble(result);
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaDoubleAppDef_oaVectorInstDef_set_doc[] = 
"Class: oaDoubleAppDef_oaVectorInstDef, Function: set\n"
"  Paramegers: (oaVectorInstDef,oaDouble)\n"
"    Calls: void set(oaVectorInstDef* object,oaDouble value)\n"
"    Signature: set|void-void|ptr-oaVectorInstDef,simple-oaDouble,\n"
"    This function sets the value of this double extension.\n"
"    object\n"
"    The object on which to set the value\n"
"    value\n"
"    The value to set on the object\n"
;

static PyObject*
oaDoubleAppDef_oaVectorInstDef_set(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaDoubleAppDef_oaVectorInstDef data;
    int convert_status=PyoaDoubleAppDef_oaVectorInstDef_Convert(ob,&data);
    assert(convert_status!=0);
    PyoaDoubleAppDef_oaVectorInstDefObject* self=(PyoaDoubleAppDef_oaVectorInstDefObject*)ob;
    if (!PyValidateDbObject(data.Data(),0)) return NULL;

    PyParamoaVectorInstDef p1;
    PyParamoaDouble p2;
    if (PyArg_ParseTuple(args,"O&O&",
          &PyoaVectorInstDef_Convert,&p1,
          &PyoaDouble_Convert,&p2)) {
        if (!PyValidateDbObject(p1.Data(),1)) return NULL;
        data.DataCall()->set(p1.Data(),p2.Data());
        Py_INCREF(Py_None);
        return Py_None;
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaDoubleAppDef_oaVectorInstDef_isNull_doc[] =
"Class: oaDoubleAppDef_oaVectorInstDef, Function: isNull\n"
"  Parameters: () \n"
"    This functions returns 1 if the DbPointer is NULL, and 0 otherwise.\n"
;

static PyObject*
oaDoubleAppDef_oaVectorInstDef_tp_isNull(PyObject* ob, PyObject *args)
{
    PyParamoaDoubleAppDef_oaVectorInstDef data;
    int convert_status=PyoaDoubleAppDef_oaVectorInstDef_Convert(ob,&data);
    assert(convert_status!=0);
    if (data.DataCall()==NULL)
        return PyInt_FromLong(1);
    else
        return PyInt_FromLong(0);
}
static char oaDoubleAppDef_oaVectorInstDef_assign_doc[] = 
"Class: oaDoubleAppDef_oaVectorInstDef, Function: set\n"
"  Paramegers: (oaDouble)\n"
"    This function sets the current value.\n"
;

static PyObject*
oaDoubleAppDef_oaVectorInstDef_tp_assign(PyObject* ob, PyObject *args)
{
  PyParamoaDoubleAppDef_oaVectorInstDef data;
  int convert_status=PyoaDoubleAppDef_oaVectorInstDef_Convert(ob,&data);
  assert(convert_status!=0);
  try {
    PyParamoaDoubleAppDef_oaVectorInstDef p1;
    if (PyArg_ParseTuple(args,(char*)"O&",
          &PyoaDoubleAppDef_oaVectorInstDef_Convert,&p1)) {
        data.Data()=p1.Data();
        Py_INCREF(ob);
        return ob;
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}


// ------------------------------------------------------------------
//  Function Methods Table:
// ------------------------------------------------------------------

static PyMethodDef oaDoubleAppDef_oaVectorInstDef_methodlist[] = {
    {"get",(PyCFunction)oaDoubleAppDef_oaVectorInstDef_get,METH_VARARGS,oaDoubleAppDef_oaVectorInstDef_get_doc},
    {"getDefault",(PyCFunction)oaDoubleAppDef_oaVectorInstDef_getDefault,METH_VARARGS,oaDoubleAppDef_oaVectorInstDef_getDefault_doc},
    {"set",(PyCFunction)oaDoubleAppDef_oaVectorInstDef_set,METH_VARARGS,oaDoubleAppDef_oaVectorInstDef_set_doc},
    {"isNull",(PyCFunction)oaDoubleAppDef_oaVectorInstDef_tp_isNull,METH_VARARGS,oaDoubleAppDef_oaVectorInstDef_isNull_doc},
    {"assign",(PyCFunction)oaDoubleAppDef_oaVectorInstDef_tp_assign,METH_VARARGS,oaDoubleAppDef_oaVectorInstDef_assign_doc},
   {NULL,NULL,0,NULL}
};


// ------------------------------------------------------------------
//  Type Object:
// ------------------------------------------------------------------

// ------------------------------------------------------------------
static char oaDoubleAppDef_oaVectorInstDef_doc[] = 
"Class: oaDoubleAppDef_oaVectorInstDef\n"
"  The oaDoubleAppDef class implements an application-specific extension for a particular type of data in a database.\n"
"  Once created, a double field is added to each object of the specified dataType. The default value for this extension is DBL_MAX. Applications can use the new field for whatever purpose is necessary.\n"
"  For additional information on defining and using AppDefs, see oaAppDef and Extending the Database in the Programmer's Guide.\n"
"Constructors:\n"
"  Paramegers: (oaDoubleAppDef_oaVectorInstDef)\n"
"    Calls: (const oaDoubleAppDef_oaVectorInstDef&)\n"
"    Signature: oaDoubleAppDef_oaVectorInstDef||cref-oaDoubleAppDef_oaVectorInstDef,\n"
;

// ------------------------------------------------------------------
PyTypeObject PyoaDoubleAppDef_oaVectorInstDef_Type = {
    PyObject_HEAD_INIT(&PyType_Type)
    0,
    "oaDoubleAppDef_oaVectorInstDef",
    sizeof(PyoaDoubleAppDef_oaVectorInstDefObject),
    0,
    (destructor)oaDoubleAppDef_oaVectorInstDef_tp_dealloc,	/* tp_dealloc */
    0,	/* tp_print */
    0,					/* tp_getattr */
    0,					/* tp_setattr */
    (cmpfunc)oaDoubleAppDef_oaVectorInstDef_tp_compare,	/* tp_compare */
    (reprfunc)oaDoubleAppDef_oaVectorInstDef_tp_repr,	/* tp_repr */
    0,					/* tp_as_number */
    0,					/* tp_as_sequence */
    0,					/* tp_as_mapping */
    0,					/* tp_as_hash */
    0,					/* tp_as_call */
    0,					/* tp_str */
    0,					/* tp_getattro */
    0,					/* tp_setattro */
    0,					/* tp_as_buffer */
    Py_TPFLAGS_DEFAULT|Py_TPFLAGS_BASETYPE, /* tp_flags */
    oaDoubleAppDef_oaVectorInstDef_doc,	/* tp_doc */
    0,					/* tp_traverse */
    0,					/* tp_clear */
    0,					/* tp_richcompre */
    0,					/* tp_weaklistoffset */
    0,					/* tp_iter */
    0,					/* tp_iternext */
    oaDoubleAppDef_oaVectorInstDef_methodlist,	/* tp_methods */
    0,					/* tp_members */
    0,					/* tp_getset */
    &PyoaAppDef_Type,	/* tp_base */
    0,					/* tp_dict */
    0,					/* tp_descr_get */
    0,					/* tp_descr_set */
    0,					/* tp_dictoffset */
    0,					/* tp_init */
    PyType_GenericAlloc,	/* tp_alloc */
    oaDoubleAppDef_oaVectorInstDef_new,	/* tp_new */
    _PyObject_Del,	/* tp_free */
};


// ------------------------------------------------------------------
// Static FunctionMethods:
// ------------------------------------------------------------------

// ------------------------------------------------------------------
static char oaDoubleAppDef_oaVectorInstDef_static_find_doc[] = 
"Class: oaDoubleAppDef_oaVectorInstDef, Function: find\n"
"  Paramegers: (oaString)\n"
"    Calls: oaDoubleAppDef_oaVectorInstDef* find(const oaString& name)\n"
"    Signature: find|ptr-oaDoubleAppDef_oaVectorInstDef|cref-oaString,\n"
"    This function returns an oaDoubleAppDef object with this dataType and the specified 'name' if it exists.\n"
"    name\n"
"    The name of the oaAppDef object to look for\n"
"  Paramegers: (oaString,oaAppObjectDef)\n"
"    Calls: oaDoubleAppDef_oaVectorInstDef* find(const oaString& name,const oaAppObjectDef* objDef)\n"
"    Signature: find|ptr-oaDoubleAppDef_oaVectorInstDef|cref-oaString,cptr-oaAppObjectDef,\n"
"    This function returns an oaDoubleAppDef object with this dataType and the specified 'name' that is associated with the specified object extension 'objDef'.\n"
"    name\n"
"    The name of the oaAppDef object to look for\n"
"    objDef\n"
"    A constant pointer to the object extension\n"
;

static PyObject*
oaDoubleAppDef_oaVectorInstDef_static_find(PyObject* ob, PyObject *args)
{
  try {
    // Case: (oaString)
    {
        PyParamoaString p1;
        if (PyArg_ParseTuple(args,"O&",
              &PyoaString_Convert,&p1)) {
            oaDoubleAppDef_oaVectorInstDefp result= (oaDoubleAppDef_oaVectorInstDef::find(p1.Data()));
            return PyoaDoubleAppDef_oaVectorInstDef_FromoaDoubleAppDef_oaVectorInstDef(result);
        }
    }
    PyErr_Clear();
    // Case: (oaString,oaAppObjectDef)
    {
        PyParamoaString p1;
        PyParamoaAppObjectDef p2;
        if (PyArg_ParseTuple(args,"O&O&",
              &PyoaString_Convert,&p1,
              &PyoaAppObjectDef_Convert,&p2)) {
            if (!PyValidateDbObject(p2.Data(),2)) return NULL;
            oaDoubleAppDef_oaVectorInstDefp result= (oaDoubleAppDef_oaVectorInstDef::find(p1.Data(),p2.Data()));
            return PyoaDoubleAppDef_oaVectorInstDef_FromoaDoubleAppDef_oaVectorInstDef(result);
        }
    }
    PyErr_Clear();
    PyErr_SetString(PyExc_TypeError,
        "No Arg-Matching Function found for class: oaDoubleAppDef_oaVectorInstDef, function: find, Choices are:\n"
        "    (oaString)\n"
        "    (oaString,oaAppObjectDef)\n"
    );
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaDoubleAppDef_oaVectorInstDef_static_get_doc[] = 
"Class: oaDoubleAppDef_oaVectorInstDef, Function: get\n"
"  Paramegers: (oaString)\n"
"    Calls: oaDoubleAppDef_oaVectorInstDef* get(const oaString& name)\n"
"    Signature: get|ptr-oaDoubleAppDef_oaVectorInstDef|cref-oaString,simple-oaDouble,simple-oaBoolean,\n"
"    This function constructs an oaDoubleAppDef object, creating a double extension with the specified name . You can create a double extension on any object except another extension.\n"
"    name\n"
"    The name given to the oaDoubleAppDef object\n"
"    defValue\n"
"    The default value for this extension\n"
"    persist\n"
"    Saves the oaDoubleAppDef data in the database\n"
"    oacAppDefExists\n"
"  Paramegers: (oaString,oaDouble)\n"
"    Calls: oaDoubleAppDef_oaVectorInstDef* get(const oaString& name,oaDouble defValue)\n"
"    Signature: get|ptr-oaDoubleAppDef_oaVectorInstDef|cref-oaString,simple-oaDouble,simple-oaBoolean,\n"
"    This function constructs an oaDoubleAppDef object, creating a double extension with the specified name . You can create a double extension on any object except another extension.\n"
"    name\n"
"    The name given to the oaDoubleAppDef object\n"
"    defValue\n"
"    The default value for this extension\n"
"    persist\n"
"    Saves the oaDoubleAppDef data in the database\n"
"    oacAppDefExists\n"
"  Paramegers: (oaString,oaDouble,oaBoolean)\n"
"    Calls: oaDoubleAppDef_oaVectorInstDef* get(const oaString& name,oaDouble defValue,oaBoolean persist)\n"
"    Signature: get|ptr-oaDoubleAppDef_oaVectorInstDef|cref-oaString,simple-oaDouble,simple-oaBoolean,\n"
"    This function constructs an oaDoubleAppDef object, creating a double extension with the specified name . You can create a double extension on any object except another extension.\n"
"    name\n"
"    The name given to the oaDoubleAppDef object\n"
"    defValue\n"
"    The default value for this extension\n"
"    persist\n"
"    Saves the oaDoubleAppDef data in the database\n"
"    oacAppDefExists\n"
"  Paramegers: (oaString,oaAppObjectDef)\n"
"    Calls: oaDoubleAppDef_oaVectorInstDef* get(const oaString& name,const oaAppObjectDef* objDef)\n"
"    Signature: get|ptr-oaDoubleAppDef_oaVectorInstDef|cref-oaString,cptr-oaAppObjectDef,simple-oaDouble,simple-oaBoolean,\n"
"    This function constructs an oaDoubleAppDef object, creating a double extension with the specified name for the specified object type.\n"
"    name\n"
"    The name given to the oaDoubleAppDef object\n"
"    objDef\n"
"    The object extension with which to associate the extension\n"
"    defValue\n"
"    An optional default value\n"
"    persist\n"
"    Saves the oaDoubleAppDef data in the database\n"
"    oacAppDefExists\n"
"  Paramegers: (oaString,oaAppObjectDef,oaDouble)\n"
"    Calls: oaDoubleAppDef_oaVectorInstDef* get(const oaString& name,const oaAppObjectDef* objDef,oaDouble defValue)\n"
"    Signature: get|ptr-oaDoubleAppDef_oaVectorInstDef|cref-oaString,cptr-oaAppObjectDef,simple-oaDouble,simple-oaBoolean,\n"
"    This function constructs an oaDoubleAppDef object, creating a double extension with the specified name for the specified object type.\n"
"    name\n"
"    The name given to the oaDoubleAppDef object\n"
"    objDef\n"
"    The object extension with which to associate the extension\n"
"    defValue\n"
"    An optional default value\n"
"    persist\n"
"    Saves the oaDoubleAppDef data in the database\n"
"    oacAppDefExists\n"
"  Paramegers: (oaString,oaAppObjectDef,oaDouble,oaBoolean)\n"
"    Calls: oaDoubleAppDef_oaVectorInstDef* get(const oaString& name,const oaAppObjectDef* objDef,oaDouble defValue,oaBoolean persist)\n"
"    Signature: get|ptr-oaDoubleAppDef_oaVectorInstDef|cref-oaString,cptr-oaAppObjectDef,simple-oaDouble,simple-oaBoolean,\n"
"    This function constructs an oaDoubleAppDef object, creating a double extension with the specified name for the specified object type.\n"
"    name\n"
"    The name given to the oaDoubleAppDef object\n"
"    objDef\n"
"    The object extension with which to associate the extension\n"
"    defValue\n"
"    An optional default value\n"
"    persist\n"
"    Saves the oaDoubleAppDef data in the database\n"
"    oacAppDefExists\n"
;

static PyObject*
oaDoubleAppDef_oaVectorInstDef_static_get(PyObject* ob, PyObject *args)
{
  try {
    // Case: (oaString)
    {
        PyParamoaString p1;
        if (PyArg_ParseTuple(args,"O&",
              &PyoaString_Convert,&p1)) {
            oaDoubleAppDef_oaVectorInstDefp result= (oaDoubleAppDef_oaVectorInstDef::get(p1.Data()));
            return PyoaDoubleAppDef_oaVectorInstDef_FromoaDoubleAppDef_oaVectorInstDef(result);
        }
    }
    PyErr_Clear();
    // Case: (oaString,oaDouble)
    {
        PyParamoaString p1;
        PyParamoaDouble p2;
        if (PyArg_ParseTuple(args,"O&O&",
              &PyoaString_Convert,&p1,
              &PyoaDouble_Convert,&p2)) {
            oaDoubleAppDef_oaVectorInstDefp result= (oaDoubleAppDef_oaVectorInstDef::get(p1.Data(),p2.Data()));
            return PyoaDoubleAppDef_oaVectorInstDef_FromoaDoubleAppDef_oaVectorInstDef(result);
        }
    }
    PyErr_Clear();
    // Case: (oaString,oaDouble,oaBoolean)
    {
        PyParamoaString p1;
        PyParamoaDouble p2;
        PyParamoaBoolean p3;
        if (PyArg_ParseTuple(args,"O&O&O&",
              &PyoaString_Convert,&p1,
              &PyoaDouble_Convert,&p2,
              &PyoaBoolean_Convert,&p3)) {
            oaDoubleAppDef_oaVectorInstDefp result= (oaDoubleAppDef_oaVectorInstDef::get(p1.Data(),p2.Data(),p3.Data()));
            return PyoaDoubleAppDef_oaVectorInstDef_FromoaDoubleAppDef_oaVectorInstDef(result);
        }
    }
    PyErr_Clear();
    // Case: (oaString,oaAppObjectDef)
    {
        PyParamoaString p1;
        PyParamoaAppObjectDef p2;
        if (PyArg_ParseTuple(args,"O&O&",
              &PyoaString_Convert,&p1,
              &PyoaAppObjectDef_Convert,&p2)) {
            if (!PyValidateDbObject(p2.Data(),2)) return NULL;
            oaDoubleAppDef_oaVectorInstDefp result= (oaDoubleAppDef_oaVectorInstDef::get(p1.Data(),p2.Data()));
            return PyoaDoubleAppDef_oaVectorInstDef_FromoaDoubleAppDef_oaVectorInstDef(result);
        }
    }
    PyErr_Clear();
    // Case: (oaString,oaAppObjectDef,oaDouble)
    {
        PyParamoaString p1;
        PyParamoaAppObjectDef p2;
        PyParamoaDouble p3;
        if (PyArg_ParseTuple(args,"O&O&O&",
              &PyoaString_Convert,&p1,
              &PyoaAppObjectDef_Convert,&p2,
              &PyoaDouble_Convert,&p3)) {
            if (!PyValidateDbObject(p2.Data(),2)) return NULL;
            oaDoubleAppDef_oaVectorInstDefp result= (oaDoubleAppDef_oaVectorInstDef::get(p1.Data(),p2.Data(),p3.Data()));
            return PyoaDoubleAppDef_oaVectorInstDef_FromoaDoubleAppDef_oaVectorInstDef(result);
        }
    }
    PyErr_Clear();
    // Case: (oaString,oaAppObjectDef,oaDouble,oaBoolean)
    {
        PyParamoaString p1;
        PyParamoaAppObjectDef p2;
        PyParamoaDouble p3;
        PyParamoaBoolean p4;
        if (PyArg_ParseTuple(args,"O&O&O&O&",
              &PyoaString_Convert,&p1,
              &PyoaAppObjectDef_Convert,&p2,
              &PyoaDouble_Convert,&p3,
              &PyoaBoolean_Convert,&p4)) {
            if (!PyValidateDbObject(p2.Data(),2)) return NULL;
            oaDoubleAppDef_oaVectorInstDefp result= (oaDoubleAppDef_oaVectorInstDef::get(p1.Data(),p2.Data(),p3.Data(),p4.Data()));
            return PyoaDoubleAppDef_oaVectorInstDef_FromoaDoubleAppDef_oaVectorInstDef(result);
        }
    }
    PyErr_Clear();
    PyErr_SetString(PyExc_TypeError,
        "No Arg-Matching Function found for class: oaDoubleAppDef_oaVectorInstDef, function: get, Choices are:\n"
        "    (oaString)\n"
        "    (oaString,oaDouble)\n"
        "    (oaString,oaDouble,oaBoolean)\n"
        "    (oaString,oaAppObjectDef)\n"
        "    (oaString,oaAppObjectDef,oaDouble)\n"
        "    (oaString,oaAppObjectDef,oaDouble,oaBoolean)\n"
    );
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static PyMethodDef oaDoubleAppDef_oaVectorInstDef_staticmethodlist[] = {
    {"static_find",(PyCFunction)oaDoubleAppDef_oaVectorInstDef_static_find,METH_VARARGS,oaDoubleAppDef_oaVectorInstDef_static_find_doc},
    {"static_get",(PyCFunction)oaDoubleAppDef_oaVectorInstDef_static_get,METH_VARARGS,oaDoubleAppDef_oaVectorInstDef_static_get_doc},
   {NULL,NULL,0,NULL}
};


// ------------------------------------------------------------------
//  Type Init:
// ------------------------------------------------------------------

int
PyoaDoubleAppDef_oaVectorInstDef_TypeInit(PyObject* mod_dict)
{
    if (PyType_Ready(&PyoaDoubleAppDef_oaVectorInstDef_Type)<0) {
      printf("** PyType_Ready failed for: oaDoubleAppDef_oaVectorInstDef\n");
      return -1;
    }

    if (PyDict_SetItemString(mod_dict,"oaDoubleAppDef_oaVectorInstDef",
           (PyObject*)(&PyoaDoubleAppDef_oaVectorInstDef_Type))<0) {
       printf("** Failed to add type name to module dictionary for: oaDoubleAppDef_oaVectorInstDef\n");
       return -1;
    }

    PyObject *dict, *value;
    PyMethodDef *method;
    dict=PyoaDoubleAppDef_oaVectorInstDef_Type.tp_dict;
    for(method=oaDoubleAppDef_oaVectorInstDef_staticmethodlist;method->ml_name!=NULL;method++) {
        value=PyCFunction_New(method,NULL);
    if (value==NULL) return -1;
        if (PyDict_SetItemString(dict,method->ml_name,value)!=0) {
        Py_DECREF(value);
            printf("** Failed to add static function to module dictionary for: %s\n",
                method->ml_name);
            return -1;
        }
        Py_DECREF(value);
    }
    return 0;
}


/********************************************************************
 *   Copyright 2002-2008  LSI Corporation
 *
 *   Licensed under the Apache License, Version 2.0 (the "License");
 *   you may not use this file except in compliance with the License.
 *   You may obtain a copy of the License at
 *
 *       http://www.apache.org/licenses/LICENSE-2.0
 *
 *   Unless required by applicable law or agreed to in writing, software
 *   distributed under the License is distributed on an "AS IS" BASIS,
 *   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *   See the License for the specific language governing permissions and
 *   limitations under the License.
 *
 *******************************************************************/

#include "pyoa_header.h"


// ==================================================================
// Wrapper Implementation for Class: oaDoubleAppDef_oaVia
// ==================================================================


// ==================================================================
// Alloc/Dealloc Routines
// ==================================================================

// ------------------------------------------------------------------
static PyObject*
oaDoubleAppDef_oaVia_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
  try {
    int is_raw=(type==&PyoaDoubleAppDef_oaVia_Type);
    PyObject* bself = type->tp_alloc(type,0);
    if (bself == NULL) return bself;
    PyoaDoubleAppDef_oaViaObject* self = (PyoaDoubleAppDef_oaViaObject*)bself;
    self->locks = NULL;
    self->borrow = 0;
    static char *kwlist [] = { NULL } ;
    // Case: (oaDoubleAppDef_oaVia)
    {
        PyParamoaDoubleAppDef_oaVia p1;
        if (PyArg_ParseTuple(args,(char*)"O&",
              &PyoaDoubleAppDef_oaVia_Convert,&p1)) {
            self->data=p1.Data();
            self->value=&(self->data);
            return bself;
        }
    }
    PyErr_Clear();
    // Case: ()
    {
        if (PyArg_ParseTuple(args,(char*)"")) {
          self->data=NULL;
          self->value=&(self->data);
          return bself;
        }
    }
    PyErr_Clear();
    PyErr_SetString(PyExc_TypeError,
        "No Arg-Matching Constructor found for class: oaDoubleAppDef_oaVia, Choices are:\n"
        "    (oaDoubleAppDef_oaVia)\n"
    );
    Py_DECREF(self);
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static void
oaDoubleAppDef_oaVia_tp_dealloc(PyoaDoubleAppDef_oaViaObject* self)
{
    self->ob_type->tp_free((PyObject*)self);
}

// ------------------------------------------------------------------
static PyObject*
oaDoubleAppDef_oaVia_tp_repr(PyObject *ob)
{
    PyParamoaDoubleAppDef_oaVia value;
    int convert_status=PyoaDoubleAppDef_oaVia_Convert(ob,&value);
    assert(convert_status!=0);
    PyObject* result;

    char buffer[42];
    sprintf(buffer,"<oaDoubleAppDef_oaVia::" DISPLAY_FORMAT ">",POINTER_AS_DISPLAY(value.DataCall()));
    result=PyString_FromString(buffer);
    return result;
}
        
// ------------------------------------------------------------------
static int
oaDoubleAppDef_oaVia_tp_compare(PyObject *ob1,PyObject* ob2)
{
    PyParamoaDoubleAppDef_oaVia v1;
    PyParamoaDoubleAppDef_oaVia v2;
    int convert_status1=PyoaDoubleAppDef_oaVia_Convert(ob1,&v1);
    int convert_status2=PyoaDoubleAppDef_oaVia_Convert(ob2,&v2);
    assert(convert_status1!=0);
    assert(convert_status2!=0);
    if (v1.DataCall()==v2.DataCall()) return 0;
    return 1;
}
        
// ------------------------------------------------------------------
int
PyoaDoubleAppDef_oaVia_Convert(PyObject* ob,PyParamoaDoubleAppDef_oaVia* result)
{
    if (ob == NULL) return 1;
    if (PyoaDoubleAppDef_oaVia_Check(ob)) {
        result->SetData( (oaDoubleAppDef_oaVia**) ((PyoaDoubleAppDef_oaViaObject*)ob)->value);
        return 1;
    }
    PyErr_SetString(PyExc_TypeError,
        "Convertion of parameter to class: oaDoubleAppDef_oaVia Failed");
    return 0;
}
// ------------------------------------------------------------------
PyObject* PyoaDoubleAppDef_oaVia_FromoaDoubleAppDef_oaVia(oaDoubleAppDef_oaVia** value,int borrow,PyObject* lock)
{
    if (value && *value) {
        oaDoubleAppDef_oaVia* data=*value;
        PyObject* bself = PyoaDoubleAppDef_oaVia_Type.tp_alloc(&PyoaDoubleAppDef_oaVia_Type,0);
        if (bself == NULL) return bself;
        PyoaDoubleAppDef_oaViaObject* self = (PyoaDoubleAppDef_oaViaObject*)bself;
        self->value = (oaObject**) value;
        self->data = NULL;
        self->locks = NULL;
        self->borrow = 0; // Ignore borrow flag, since we copied
       if (lock) PyoaLockObject(self->locks,lock);
        return bself;
    }
    Py_INCREF(Py_None);
    return Py_None;
}
// ------------------------------------------------------------------
PyObject* PyoaDoubleAppDef_oaVia_FromoaDoubleAppDef_oaVia(oaDoubleAppDef_oaVia* data)
{
    if (data) {
       PyObject* bself = PyoaDoubleAppDef_oaVia_Type.tp_alloc(&PyoaDoubleAppDef_oaVia_Type,0);
       if (bself == NULL) return bself;
       PyoaDoubleAppDef_oaViaObject* self = (PyoaDoubleAppDef_oaViaObject*)bself;
       self->data = (oaObject*) data;
       self->value = &(self->data);
       self->borrow = 0; 
       self->locks = NULL;
       return bself;
    }
    Py_INCREF(Py_None);
    return Py_None;
}

// ------------------------------------------------------------------
// FunctionMethods:
// ------------------------------------------------------------------

// ------------------------------------------------------------------
static char oaDoubleAppDef_oaVia_get_doc[] = 
"Class: oaDoubleAppDef_oaVia, Function: get\n"
"  Paramegers: (oaVia)\n"
"    Calls: oaDouble get(const oaVia* object)\n"
"    Signature: get|simple-oaDouble|cptr-oaVia,\n"
"    This function returns the value of this double extension.\n"
"    object\n"
"    The object for which to get the value\n"
;

static PyObject*
oaDoubleAppDef_oaVia_get(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaDoubleAppDef_oaVia data;
    int convert_status=PyoaDoubleAppDef_oaVia_Convert(ob,&data);
    assert(convert_status!=0);
    PyoaDoubleAppDef_oaViaObject* self=(PyoaDoubleAppDef_oaViaObject*)ob;
    if (!PyValidateDbObject(data.Data(),0)) return NULL;

    PyParamoaVia p1;
    if (PyArg_ParseTuple(args,"O&",
          &PyoaVia_Convert,&p1)) {
        if (!PyValidateDbObject(p1.Data(),1)) return NULL;
        oaDouble result= (data.DataCall()->get(p1.Data()));
        return PyoaDouble_FromoaDouble(result);
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaDoubleAppDef_oaVia_getDefault_doc[] = 
"Class: oaDoubleAppDef_oaVia, Function: getDefault\n"
"  Paramegers: ()\n"
"    Calls: oaDouble getDefault() const\n"
"    Signature: getDefault|simple-oaDouble|\n"
"    BrowseData: 1\n"
"    This function returns the default value of this double extension.\n"
;

static PyObject*
oaDoubleAppDef_oaVia_getDefault(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaDoubleAppDef_oaVia data;
    int convert_status=PyoaDoubleAppDef_oaVia_Convert(ob,&data);
    assert(convert_status!=0);
    PyoaDoubleAppDef_oaViaObject* self=(PyoaDoubleAppDef_oaViaObject*)ob;
    if (!PyValidateDbObject(data.Data(),0)) return NULL;

    if (PyArg_ParseTuple(args,"")) {
        oaDouble result= (data.DataCall()->getDefault());
        return PyoaDouble_FromoaDouble(result);
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaDoubleAppDef_oaVia_set_doc[] = 
"Class: oaDoubleAppDef_oaVia, Function: set\n"
"  Paramegers: (oaVia,oaDouble)\n"
"    Calls: void set(oaVia* object,oaDouble value)\n"
"    Signature: set|void-void|ptr-oaVia,simple-oaDouble,\n"
"    This function sets the value of this double extension.\n"
"    object\n"
"    The object on which to set the value\n"
"    value\n"
"    The value to set on the object\n"
;

static PyObject*
oaDoubleAppDef_oaVia_set(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaDoubleAppDef_oaVia data;
    int convert_status=PyoaDoubleAppDef_oaVia_Convert(ob,&data);
    assert(convert_status!=0);
    PyoaDoubleAppDef_oaViaObject* self=(PyoaDoubleAppDef_oaViaObject*)ob;
    if (!PyValidateDbObject(data.Data(),0)) return NULL;

    PyParamoaVia p1;
    PyParamoaDouble p2;
    if (PyArg_ParseTuple(args,"O&O&",
          &PyoaVia_Convert,&p1,
          &PyoaDouble_Convert,&p2)) {
        if (!PyValidateDbObject(p1.Data(),1)) return NULL;
        data.DataCall()->set(p1.Data(),p2.Data());
        Py_INCREF(Py_None);
        return Py_None;
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaDoubleAppDef_oaVia_isNull_doc[] =
"Class: oaDoubleAppDef_oaVia, Function: isNull\n"
"  Parameters: () \n"
"    This functions returns 1 if the DbPointer is NULL, and 0 otherwise.\n"
;

static PyObject*
oaDoubleAppDef_oaVia_tp_isNull(PyObject* ob, PyObject *args)
{
    PyParamoaDoubleAppDef_oaVia data;
    int convert_status=PyoaDoubleAppDef_oaVia_Convert(ob,&data);
    assert(convert_status!=0);
    if (data.DataCall()==NULL)
        return PyInt_FromLong(1);
    else
        return PyInt_FromLong(0);
}
static char oaDoubleAppDef_oaVia_assign_doc[] = 
"Class: oaDoubleAppDef_oaVia, Function: set\n"
"  Paramegers: (oaDouble)\n"
"    This function sets the current value.\n"
;

static PyObject*
oaDoubleAppDef_oaVia_tp_assign(PyObject* ob, PyObject *args)
{
  PyParamoaDoubleAppDef_oaVia data;
  int convert_status=PyoaDoubleAppDef_oaVia_Convert(ob,&data);
  assert(convert_status!=0);
  try {
    PyParamoaDoubleAppDef_oaVia p1;
    if (PyArg_ParseTuple(args,(char*)"O&",
          &PyoaDoubleAppDef_oaVia_Convert,&p1)) {
        data.Data()=p1.Data();
        Py_INCREF(ob);
        return ob;
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}


// ------------------------------------------------------------------
//  Function Methods Table:
// ------------------------------------------------------------------

static PyMethodDef oaDoubleAppDef_oaVia_methodlist[] = {
    {"get",(PyCFunction)oaDoubleAppDef_oaVia_get,METH_VARARGS,oaDoubleAppDef_oaVia_get_doc},
    {"getDefault",(PyCFunction)oaDoubleAppDef_oaVia_getDefault,METH_VARARGS,oaDoubleAppDef_oaVia_getDefault_doc},
    {"set",(PyCFunction)oaDoubleAppDef_oaVia_set,METH_VARARGS,oaDoubleAppDef_oaVia_set_doc},
    {"isNull",(PyCFunction)oaDoubleAppDef_oaVia_tp_isNull,METH_VARARGS,oaDoubleAppDef_oaVia_isNull_doc},
    {"assign",(PyCFunction)oaDoubleAppDef_oaVia_tp_assign,METH_VARARGS,oaDoubleAppDef_oaVia_assign_doc},
   {NULL,NULL,0,NULL}
};


// ------------------------------------------------------------------
//  Type Object:
// ------------------------------------------------------------------

// ------------------------------------------------------------------
static char oaDoubleAppDef_oaVia_doc[] = 
"Class: oaDoubleAppDef_oaVia\n"
"  The oaDoubleAppDef class implements an application-specific extension for a particular type of data in a database.\n"
"  Once created, a double field is added to each object of the specified dataType. The default value for this extension is DBL_MAX. Applications can use the new field for whatever purpose is necessary.\n"
"  For additional information on defining and using AppDefs, see oaAppDef and Extending the Database in the Programmer's Guide.\n"
"Constructors:\n"
"  Paramegers: (oaDoubleAppDef_oaVia)\n"
"    Calls: (const oaDoubleAppDef_oaVia&)\n"
"    Signature: oaDoubleAppDef_oaVia||cref-oaDoubleAppDef_oaVia,\n"
;

// ------------------------------------------------------------------
PyTypeObject PyoaDoubleAppDef_oaVia_Type = {
    PyObject_HEAD_INIT(&PyType_Type)
    0,
    "oaDoubleAppDef_oaVia",
    sizeof(PyoaDoubleAppDef_oaViaObject),
    0,
    (destructor)oaDoubleAppDef_oaVia_tp_dealloc,	/* tp_dealloc */
    0,	/* tp_print */
    0,					/* tp_getattr */
    0,					/* tp_setattr */
    (cmpfunc)oaDoubleAppDef_oaVia_tp_compare,	/* tp_compare */
    (reprfunc)oaDoubleAppDef_oaVia_tp_repr,	/* tp_repr */
    0,					/* tp_as_number */
    0,					/* tp_as_sequence */
    0,					/* tp_as_mapping */
    0,					/* tp_as_hash */
    0,					/* tp_as_call */
    0,					/* tp_str */
    0,					/* tp_getattro */
    0,					/* tp_setattro */
    0,					/* tp_as_buffer */
    Py_TPFLAGS_DEFAULT|Py_TPFLAGS_BASETYPE, /* tp_flags */
    oaDoubleAppDef_oaVia_doc,	/* tp_doc */
    0,					/* tp_traverse */
    0,					/* tp_clear */
    0,					/* tp_richcompre */
    0,					/* tp_weaklistoffset */
    0,					/* tp_iter */
    0,					/* tp_iternext */
    oaDoubleAppDef_oaVia_methodlist,	/* tp_methods */
    0,					/* tp_members */
    0,					/* tp_getset */
    &PyoaAppDef_Type,	/* tp_base */
    0,					/* tp_dict */
    0,					/* tp_descr_get */
    0,					/* tp_descr_set */
    0,					/* tp_dictoffset */
    0,					/* tp_init */
    PyType_GenericAlloc,	/* tp_alloc */
    oaDoubleAppDef_oaVia_new,	/* tp_new */
    _PyObject_Del,	/* tp_free */
};


// ------------------------------------------------------------------
// Static FunctionMethods:
// ------------------------------------------------------------------

// ------------------------------------------------------------------
static char oaDoubleAppDef_oaVia_static_find_doc[] = 
"Class: oaDoubleAppDef_oaVia, Function: find\n"
"  Paramegers: (oaString)\n"
"    Calls: oaDoubleAppDef_oaVia* find(const oaString& name)\n"
"    Signature: find|ptr-oaDoubleAppDef_oaVia|cref-oaString,\n"
"    This function returns an oaDoubleAppDef object with this dataType and the specified 'name' if it exists.\n"
"    name\n"
"    The name of the oaAppDef object to look for\n"
"  Paramegers: (oaString,oaAppObjectDef)\n"
"    Calls: oaDoubleAppDef_oaVia* find(const oaString& name,const oaAppObjectDef* objDef)\n"
"    Signature: find|ptr-oaDoubleAppDef_oaVia|cref-oaString,cptr-oaAppObjectDef,\n"
"    This function returns an oaDoubleAppDef object with this dataType and the specified 'name' that is associated with the specified object extension 'objDef'.\n"
"    name\n"
"    The name of the oaAppDef object to look for\n"
"    objDef\n"
"    A constant pointer to the object extension\n"
;

static PyObject*
oaDoubleAppDef_oaVia_static_find(PyObject* ob, PyObject *args)
{
  try {
    // Case: (oaString)
    {
        PyParamoaString p1;
        if (PyArg_ParseTuple(args,"O&",
              &PyoaString_Convert,&p1)) {
            oaDoubleAppDef_oaViap result= (oaDoubleAppDef_oaVia::find(p1.Data()));
            return PyoaDoubleAppDef_oaVia_FromoaDoubleAppDef_oaVia(result);
        }
    }
    PyErr_Clear();
    // Case: (oaString,oaAppObjectDef)
    {
        PyParamoaString p1;
        PyParamoaAppObjectDef p2;
        if (PyArg_ParseTuple(args,"O&O&",
              &PyoaString_Convert,&p1,
              &PyoaAppObjectDef_Convert,&p2)) {
            if (!PyValidateDbObject(p2.Data(),2)) return NULL;
            oaDoubleAppDef_oaViap result= (oaDoubleAppDef_oaVia::find(p1.Data(),p2.Data()));
            return PyoaDoubleAppDef_oaVia_FromoaDoubleAppDef_oaVia(result);
        }
    }
    PyErr_Clear();
    PyErr_SetString(PyExc_TypeError,
        "No Arg-Matching Function found for class: oaDoubleAppDef_oaVia, function: find, Choices are:\n"
        "    (oaString)\n"
        "    (oaString,oaAppObjectDef)\n"
    );
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaDoubleAppDef_oaVia_static_get_doc[] = 
"Class: oaDoubleAppDef_oaVia, Function: get\n"
"  Paramegers: (oaString)\n"
"    Calls: oaDoubleAppDef_oaVia* get(const oaString& name)\n"
"    Signature: get|ptr-oaDoubleAppDef_oaVia|cref-oaString,simple-oaDouble,simple-oaBoolean,\n"
"    This function constructs an oaDoubleAppDef object, creating a double extension with the specified name . You can create a double extension on any object except another extension.\n"
"    name\n"
"    The name given to the oaDoubleAppDef object\n"
"    defValue\n"
"    The default value for this extension\n"
"    persist\n"
"    Saves the oaDoubleAppDef data in the database\n"
"    oacAppDefExists\n"
"  Paramegers: (oaString,oaDouble)\n"
"    Calls: oaDoubleAppDef_oaVia* get(const oaString& name,oaDouble defValue)\n"
"    Signature: get|ptr-oaDoubleAppDef_oaVia|cref-oaString,simple-oaDouble,simple-oaBoolean,\n"
"    This function constructs an oaDoubleAppDef object, creating a double extension with the specified name . You can create a double extension on any object except another extension.\n"
"    name\n"
"    The name given to the oaDoubleAppDef object\n"
"    defValue\n"
"    The default value for this extension\n"
"    persist\n"
"    Saves the oaDoubleAppDef data in the database\n"
"    oacAppDefExists\n"
"  Paramegers: (oaString,oaDouble,oaBoolean)\n"
"    Calls: oaDoubleAppDef_oaVia* get(const oaString& name,oaDouble defValue,oaBoolean persist)\n"
"    Signature: get|ptr-oaDoubleAppDef_oaVia|cref-oaString,simple-oaDouble,simple-oaBoolean,\n"
"    This function constructs an oaDoubleAppDef object, creating a double extension with the specified name . You can create a double extension on any object except another extension.\n"
"    name\n"
"    The name given to the oaDoubleAppDef object\n"
"    defValue\n"
"    The default value for this extension\n"
"    persist\n"
"    Saves the oaDoubleAppDef data in the database\n"
"    oacAppDefExists\n"
"  Paramegers: (oaString,oaAppObjectDef)\n"
"    Calls: oaDoubleAppDef_oaVia* get(const oaString& name,const oaAppObjectDef* objDef)\n"
"    Signature: get|ptr-oaDoubleAppDef_oaVia|cref-oaString,cptr-oaAppObjectDef,simple-oaDouble,simple-oaBoolean,\n"
"    This function constructs an oaDoubleAppDef object, creating a double extension with the specified name for the specified object type.\n"
"    name\n"
"    The name given to the oaDoubleAppDef object\n"
"    objDef\n"
"    The object extension with which to associate the extension\n"
"    defValue\n"
"    An optional default value\n"
"    persist\n"
"    Saves the oaDoubleAppDef data in the database\n"
"    oacAppDefExists\n"
"  Paramegers: (oaString,oaAppObjectDef,oaDouble)\n"
"    Calls: oaDoubleAppDef_oaVia* get(const oaString& name,const oaAppObjectDef* objDef,oaDouble defValue)\n"
"    Signature: get|ptr-oaDoubleAppDef_oaVia|cref-oaString,cptr-oaAppObjectDef,simple-oaDouble,simple-oaBoolean,\n"
"    This function constructs an oaDoubleAppDef object, creating a double extension with the specified name for the specified object type.\n"
"    name\n"
"    The name given to the oaDoubleAppDef object\n"
"    objDef\n"
"    The object extension with which to associate the extension\n"
"    defValue\n"
"    An optional default value\n"
"    persist\n"
"    Saves the oaDoubleAppDef data in the database\n"
"    oacAppDefExists\n"
"  Paramegers: (oaString,oaAppObjectDef,oaDouble,oaBoolean)\n"
"    Calls: oaDoubleAppDef_oaVia* get(const oaString& name,const oaAppObjectDef* objDef,oaDouble defValue,oaBoolean persist)\n"
"    Signature: get|ptr-oaDoubleAppDef_oaVia|cref-oaString,cptr-oaAppObjectDef,simple-oaDouble,simple-oaBoolean,\n"
"    This function constructs an oaDoubleAppDef object, creating a double extension with the specified name for the specified object type.\n"
"    name\n"
"    The name given to the oaDoubleAppDef object\n"
"    objDef\n"
"    The object extension with which to associate the extension\n"
"    defValue\n"
"    An optional default value\n"
"    persist\n"
"    Saves the oaDoubleAppDef data in the database\n"
"    oacAppDefExists\n"
;

static PyObject*
oaDoubleAppDef_oaVia_static_get(PyObject* ob, PyObject *args)
{
  try {
    // Case: (oaString)
    {
        PyParamoaString p1;
        if (PyArg_ParseTuple(args,"O&",
              &PyoaString_Convert,&p1)) {
            oaDoubleAppDef_oaViap result= (oaDoubleAppDef_oaVia::get(p1.Data()));
            return PyoaDoubleAppDef_oaVia_FromoaDoubleAppDef_oaVia(result);
        }
    }
    PyErr_Clear();
    // Case: (oaString,oaDouble)
    {
        PyParamoaString p1;
        PyParamoaDouble p2;
        if (PyArg_ParseTuple(args,"O&O&",
              &PyoaString_Convert,&p1,
              &PyoaDouble_Convert,&p2)) {
            oaDoubleAppDef_oaViap result= (oaDoubleAppDef_oaVia::get(p1.Data(),p2.Data()));
            return PyoaDoubleAppDef_oaVia_FromoaDoubleAppDef_oaVia(result);
        }
    }
    PyErr_Clear();
    // Case: (oaString,oaDouble,oaBoolean)
    {
        PyParamoaString p1;
        PyParamoaDouble p2;
        PyParamoaBoolean p3;
        if (PyArg_ParseTuple(args,"O&O&O&",
              &PyoaString_Convert,&p1,
              &PyoaDouble_Convert,&p2,
              &PyoaBoolean_Convert,&p3)) {
            oaDoubleAppDef_oaViap result= (oaDoubleAppDef_oaVia::get(p1.Data(),p2.Data(),p3.Data()));
            return PyoaDoubleAppDef_oaVia_FromoaDoubleAppDef_oaVia(result);
        }
    }
    PyErr_Clear();
    // Case: (oaString,oaAppObjectDef)
    {
        PyParamoaString p1;
        PyParamoaAppObjectDef p2;
        if (PyArg_ParseTuple(args,"O&O&",
              &PyoaString_Convert,&p1,
              &PyoaAppObjectDef_Convert,&p2)) {
            if (!PyValidateDbObject(p2.Data(),2)) return NULL;
            oaDoubleAppDef_oaViap result= (oaDoubleAppDef_oaVia::get(p1.Data(),p2.Data()));
            return PyoaDoubleAppDef_oaVia_FromoaDoubleAppDef_oaVia(result);
        }
    }
    PyErr_Clear();
    // Case: (oaString,oaAppObjectDef,oaDouble)
    {
        PyParamoaString p1;
        PyParamoaAppObjectDef p2;
        PyParamoaDouble p3;
        if (PyArg_ParseTuple(args,"O&O&O&",
              &PyoaString_Convert,&p1,
              &PyoaAppObjectDef_Convert,&p2,
              &PyoaDouble_Convert,&p3)) {
            if (!PyValidateDbObject(p2.Data(),2)) return NULL;
            oaDoubleAppDef_oaViap result= (oaDoubleAppDef_oaVia::get(p1.Data(),p2.Data(),p3.Data()));
            return PyoaDoubleAppDef_oaVia_FromoaDoubleAppDef_oaVia(result);
        }
    }
    PyErr_Clear();
    // Case: (oaString,oaAppObjectDef,oaDouble,oaBoolean)
    {
        PyParamoaString p1;
        PyParamoaAppObjectDef p2;
        PyParamoaDouble p3;
        PyParamoaBoolean p4;
        if (PyArg_ParseTuple(args,"O&O&O&O&",
              &PyoaString_Convert,&p1,
              &PyoaAppObjectDef_Convert,&p2,
              &PyoaDouble_Convert,&p3,
              &PyoaBoolean_Convert,&p4)) {
            if (!PyValidateDbObject(p2.Data(),2)) return NULL;
            oaDoubleAppDef_oaViap result= (oaDoubleAppDef_oaVia::get(p1.Data(),p2.Data(),p3.Data(),p4.Data()));
            return PyoaDoubleAppDef_oaVia_FromoaDoubleAppDef_oaVia(result);
        }
    }
    PyErr_Clear();
    PyErr_SetString(PyExc_TypeError,
        "No Arg-Matching Function found for class: oaDoubleAppDef_oaVia, function: get, Choices are:\n"
        "    (oaString)\n"
        "    (oaString,oaDouble)\n"
        "    (oaString,oaDouble,oaBoolean)\n"
        "    (oaString,oaAppObjectDef)\n"
        "    (oaString,oaAppObjectDef,oaDouble)\n"
        "    (oaString,oaAppObjectDef,oaDouble,oaBoolean)\n"
    );
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static PyMethodDef oaDoubleAppDef_oaVia_staticmethodlist[] = {
    {"static_find",(PyCFunction)oaDoubleAppDef_oaVia_static_find,METH_VARARGS,oaDoubleAppDef_oaVia_static_find_doc},
    {"static_get",(PyCFunction)oaDoubleAppDef_oaVia_static_get,METH_VARARGS,oaDoubleAppDef_oaVia_static_get_doc},
   {NULL,NULL,0,NULL}
};


// ------------------------------------------------------------------
//  Type Init:
// ------------------------------------------------------------------

int
PyoaDoubleAppDef_oaVia_TypeInit(PyObject* mod_dict)
{
    if (PyType_Ready(&PyoaDoubleAppDef_oaVia_Type)<0) {
      printf("** PyType_Ready failed for: oaDoubleAppDef_oaVia\n");
      return -1;
    }

    if (PyDict_SetItemString(mod_dict,"oaDoubleAppDef_oaVia",
           (PyObject*)(&PyoaDoubleAppDef_oaVia_Type))<0) {
       printf("** Failed to add type name to module dictionary for: oaDoubleAppDef_oaVia\n");
       return -1;
    }

    PyObject *dict, *value;
    PyMethodDef *method;
    dict=PyoaDoubleAppDef_oaVia_Type.tp_dict;
    for(method=oaDoubleAppDef_oaVia_staticmethodlist;method->ml_name!=NULL;method++) {
        value=PyCFunction_New(method,NULL);
    if (value==NULL) return -1;
        if (PyDict_SetItemString(dict,method->ml_name,value)!=0) {
        Py_DECREF(value);
            printf("** Failed to add static function to module dictionary for: %s\n",
                method->ml_name);
            return -1;
        }
        Py_DECREF(value);
    }
    return 0;
}


/********************************************************************
 *   Copyright 2002-2008  LSI Corporation
 *
 *   Licensed under the Apache License, Version 2.0 (the "License");
 *   you may not use this file except in compliance with the License.
 *   You may obtain a copy of the License at
 *
 *       http://www.apache.org/licenses/LICENSE-2.0
 *
 *   Unless required by applicable law or agreed to in writing, software
 *   distributed under the License is distributed on an "AS IS" BASIS,
 *   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *   See the License for the specific language governing permissions and
 *   limitations under the License.
 *
 *******************************************************************/

#include "pyoa_header.h"


// ==================================================================
// Wrapper Implementation for Class: oaDoubleAppDef_oaViaDef
// ==================================================================


// ==================================================================
// Alloc/Dealloc Routines
// ==================================================================

// ------------------------------------------------------------------
static PyObject*
oaDoubleAppDef_oaViaDef_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
  try {
    int is_raw=(type==&PyoaDoubleAppDef_oaViaDef_Type);
    PyObject* bself = type->tp_alloc(type,0);
    if (bself == NULL) return bself;
    PyoaDoubleAppDef_oaViaDefObject* self = (PyoaDoubleAppDef_oaViaDefObject*)bself;
    self->locks = NULL;
    self->borrow = 0;
    static char *kwlist [] = { NULL } ;
    // Case: (oaDoubleAppDef_oaViaDef)
    {
        PyParamoaDoubleAppDef_oaViaDef p1;
        if (PyArg_ParseTuple(args,(char*)"O&",
              &PyoaDoubleAppDef_oaViaDef_Convert,&p1)) {
            self->data=p1.Data();
            self->value=&(self->data);
            return bself;
        }
    }
    PyErr_Clear();
    // Case: ()
    {
        if (PyArg_ParseTuple(args,(char*)"")) {
          self->data=NULL;
          self->value=&(self->data);
          return bself;
        }
    }
    PyErr_Clear();
    PyErr_SetString(PyExc_TypeError,
        "No Arg-Matching Constructor found for class: oaDoubleAppDef_oaViaDef, Choices are:\n"
        "    (oaDoubleAppDef_oaViaDef)\n"
    );
    Py_DECREF(self);
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static void
oaDoubleAppDef_oaViaDef_tp_dealloc(PyoaDoubleAppDef_oaViaDefObject* self)
{
    self->ob_type->tp_free((PyObject*)self);
}

// ------------------------------------------------------------------
static PyObject*
oaDoubleAppDef_oaViaDef_tp_repr(PyObject *ob)
{
    PyParamoaDoubleAppDef_oaViaDef value;
    int convert_status=PyoaDoubleAppDef_oaViaDef_Convert(ob,&value);
    assert(convert_status!=0);
    PyObject* result;

    char buffer[45];
    sprintf(buffer,"<oaDoubleAppDef_oaViaDef::" DISPLAY_FORMAT ">",POINTER_AS_DISPLAY(value.DataCall()));
    result=PyString_FromString(buffer);
    return result;
}
        
// ------------------------------------------------------------------
static int
oaDoubleAppDef_oaViaDef_tp_compare(PyObject *ob1,PyObject* ob2)
{
    PyParamoaDoubleAppDef_oaViaDef v1;
    PyParamoaDoubleAppDef_oaViaDef v2;
    int convert_status1=PyoaDoubleAppDef_oaViaDef_Convert(ob1,&v1);
    int convert_status2=PyoaDoubleAppDef_oaViaDef_Convert(ob2,&v2);
    assert(convert_status1!=0);
    assert(convert_status2!=0);
    if (v1.DataCall()==v2.DataCall()) return 0;
    return 1;
}
        
// ------------------------------------------------------------------
int
PyoaDoubleAppDef_oaViaDef_Convert(PyObject* ob,PyParamoaDoubleAppDef_oaViaDef* result)
{
    if (ob == NULL) return 1;
    if (PyoaDoubleAppDef_oaViaDef_Check(ob)) {
        result->SetData( (oaDoubleAppDef_oaViaDef**) ((PyoaDoubleAppDef_oaViaDefObject*)ob)->value);
        return 1;
    }
    PyErr_SetString(PyExc_TypeError,
        "Convertion of parameter to class: oaDoubleAppDef_oaViaDef Failed");
    return 0;
}
// ------------------------------------------------------------------
PyObject* PyoaDoubleAppDef_oaViaDef_FromoaDoubleAppDef_oaViaDef(oaDoubleAppDef_oaViaDef** value,int borrow,PyObject* lock)
{
    if (value && *value) {
        oaDoubleAppDef_oaViaDef* data=*value;
        PyObject* bself = PyoaDoubleAppDef_oaViaDef_Type.tp_alloc(&PyoaDoubleAppDef_oaViaDef_Type,0);
        if (bself == NULL) return bself;
        PyoaDoubleAppDef_oaViaDefObject* self = (PyoaDoubleAppDef_oaViaDefObject*)bself;
        self->value = (oaObject**) value;
        self->data = NULL;
        self->locks = NULL;
        self->borrow = 0; // Ignore borrow flag, since we copied
       if (lock) PyoaLockObject(self->locks,lock);
        return bself;
    }
    Py_INCREF(Py_None);
    return Py_None;
}
// ------------------------------------------------------------------
PyObject* PyoaDoubleAppDef_oaViaDef_FromoaDoubleAppDef_oaViaDef(oaDoubleAppDef_oaViaDef* data)
{
    if (data) {
       PyObject* bself = PyoaDoubleAppDef_oaViaDef_Type.tp_alloc(&PyoaDoubleAppDef_oaViaDef_Type,0);
       if (bself == NULL) return bself;
       PyoaDoubleAppDef_oaViaDefObject* self = (PyoaDoubleAppDef_oaViaDefObject*)bself;
       self->data = (oaObject*) data;
       self->value = &(self->data);
       self->borrow = 0; 
       self->locks = NULL;
       return bself;
    }
    Py_INCREF(Py_None);
    return Py_None;
}

// ------------------------------------------------------------------
// FunctionMethods:
// ------------------------------------------------------------------

// ------------------------------------------------------------------
static char oaDoubleAppDef_oaViaDef_get_doc[] = 
"Class: oaDoubleAppDef_oaViaDef, Function: get\n"
"  Paramegers: (oaViaDef)\n"
"    Calls: oaDouble get(const oaViaDef* object)\n"
"    Signature: get|simple-oaDouble|cptr-oaViaDef,\n"
"    This function returns the value of this double extension.\n"
"    object\n"
"    The object for which to get the value\n"
;

static PyObject*
oaDoubleAppDef_oaViaDef_get(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaDoubleAppDef_oaViaDef data;
    int convert_status=PyoaDoubleAppDef_oaViaDef_Convert(ob,&data);
    assert(convert_status!=0);
    PyoaDoubleAppDef_oaViaDefObject* self=(PyoaDoubleAppDef_oaViaDefObject*)ob;
    if (!PyValidateDbObject(data.Data(),0)) return NULL;

    PyParamoaViaDef p1;
    if (PyArg_ParseTuple(args,"O&",
          &PyoaViaDef_Convert,&p1)) {
        if (!PyValidateDbObject(p1.Data(),1)) return NULL;
        oaDouble result= (data.DataCall()->get(p1.Data()));
        return PyoaDouble_FromoaDouble(result);
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaDoubleAppDef_oaViaDef_getDefault_doc[] = 
"Class: oaDoubleAppDef_oaViaDef, Function: getDefault\n"
"  Paramegers: ()\n"
"    Calls: oaDouble getDefault() const\n"
"    Signature: getDefault|simple-oaDouble|\n"
"    BrowseData: 1\n"
"    This function returns the default value of this double extension.\n"
;

static PyObject*
oaDoubleAppDef_oaViaDef_getDefault(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaDoubleAppDef_oaViaDef data;
    int convert_status=PyoaDoubleAppDef_oaViaDef_Convert(ob,&data);
    assert(convert_status!=0);
    PyoaDoubleAppDef_oaViaDefObject* self=(PyoaDoubleAppDef_oaViaDefObject*)ob;
    if (!PyValidateDbObject(data.Data(),0)) return NULL;

    if (PyArg_ParseTuple(args,"")) {
        oaDouble result= (data.DataCall()->getDefault());
        return PyoaDouble_FromoaDouble(result);
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaDoubleAppDef_oaViaDef_set_doc[] = 
"Class: oaDoubleAppDef_oaViaDef, Function: set\n"
"  Paramegers: (oaViaDef,oaDouble)\n"
"    Calls: void set(oaViaDef* object,oaDouble value)\n"
"    Signature: set|void-void|ptr-oaViaDef,simple-oaDouble,\n"
"    This function sets the value of this double extension.\n"
"    object\n"
"    The object on which to set the value\n"
"    value\n"
"    The value to set on the object\n"
;

static PyObject*
oaDoubleAppDef_oaViaDef_set(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaDoubleAppDef_oaViaDef data;
    int convert_status=PyoaDoubleAppDef_oaViaDef_Convert(ob,&data);
    assert(convert_status!=0);
    PyoaDoubleAppDef_oaViaDefObject* self=(PyoaDoubleAppDef_oaViaDefObject*)ob;
    if (!PyValidateDbObject(data.Data(),0)) return NULL;

    PyParamoaViaDef p1;
    PyParamoaDouble p2;
    if (PyArg_ParseTuple(args,"O&O&",
          &PyoaViaDef_Convert,&p1,
          &PyoaDouble_Convert,&p2)) {
        if (!PyValidateDbObject(p1.Data(),1)) return NULL;
        data.DataCall()->set(p1.Data(),p2.Data());
        Py_INCREF(Py_None);
        return Py_None;
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaDoubleAppDef_oaViaDef_isNull_doc[] =
"Class: oaDoubleAppDef_oaViaDef, Function: isNull\n"
"  Parameters: () \n"
"    This functions returns 1 if the DbPointer is NULL, and 0 otherwise.\n"
;

static PyObject*
oaDoubleAppDef_oaViaDef_tp_isNull(PyObject* ob, PyObject *args)
{
    PyParamoaDoubleAppDef_oaViaDef data;
    int convert_status=PyoaDoubleAppDef_oaViaDef_Convert(ob,&data);
    assert(convert_status!=0);
    if (data.DataCall()==NULL)
        return PyInt_FromLong(1);
    else
        return PyInt_FromLong(0);
}
static char oaDoubleAppDef_oaViaDef_assign_doc[] = 
"Class: oaDoubleAppDef_oaViaDef, Function: set\n"
"  Paramegers: (oaDouble)\n"
"    This function sets the current value.\n"
;

static PyObject*
oaDoubleAppDef_oaViaDef_tp_assign(PyObject* ob, PyObject *args)
{
  PyParamoaDoubleAppDef_oaViaDef data;
  int convert_status=PyoaDoubleAppDef_oaViaDef_Convert(ob,&data);
  assert(convert_status!=0);
  try {
    PyParamoaDoubleAppDef_oaViaDef p1;
    if (PyArg_ParseTuple(args,(char*)"O&",
          &PyoaDoubleAppDef_oaViaDef_Convert,&p1)) {
        data.Data()=p1.Data();
        Py_INCREF(ob);
        return ob;
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}


// ------------------------------------------------------------------
//  Function Methods Table:
// ------------------------------------------------------------------

static PyMethodDef oaDoubleAppDef_oaViaDef_methodlist[] = {
    {"get",(PyCFunction)oaDoubleAppDef_oaViaDef_get,METH_VARARGS,oaDoubleAppDef_oaViaDef_get_doc},
    {"getDefault",(PyCFunction)oaDoubleAppDef_oaViaDef_getDefault,METH_VARARGS,oaDoubleAppDef_oaViaDef_getDefault_doc},
    {"set",(PyCFunction)oaDoubleAppDef_oaViaDef_set,METH_VARARGS,oaDoubleAppDef_oaViaDef_set_doc},
    {"isNull",(PyCFunction)oaDoubleAppDef_oaViaDef_tp_isNull,METH_VARARGS,oaDoubleAppDef_oaViaDef_isNull_doc},
    {"assign",(PyCFunction)oaDoubleAppDef_oaViaDef_tp_assign,METH_VARARGS,oaDoubleAppDef_oaViaDef_assign_doc},
   {NULL,NULL,0,NULL}
};


// ------------------------------------------------------------------
//  Type Object:
// ------------------------------------------------------------------

// ------------------------------------------------------------------
static char oaDoubleAppDef_oaViaDef_doc[] = 
"Class: oaDoubleAppDef_oaViaDef\n"
"  The oaDoubleAppDef class implements an application-specific extension for a particular type of data in a database.\n"
"  Once created, a double field is added to each object of the specified dataType. The default value for this extension is DBL_MAX. Applications can use the new field for whatever purpose is necessary.\n"
"  For additional information on defining and using AppDefs, see oaAppDef and Extending the Database in the Programmer's Guide.\n"
"Constructors:\n"
"  Paramegers: (oaDoubleAppDef_oaViaDef)\n"
"    Calls: (const oaDoubleAppDef_oaViaDef&)\n"
"    Signature: oaDoubleAppDef_oaViaDef||cref-oaDoubleAppDef_oaViaDef,\n"
;

// ------------------------------------------------------------------
PyTypeObject PyoaDoubleAppDef_oaViaDef_Type = {
    PyObject_HEAD_INIT(&PyType_Type)
    0,
    "oaDoubleAppDef_oaViaDef",
    sizeof(PyoaDoubleAppDef_oaViaDefObject),
    0,
    (destructor)oaDoubleAppDef_oaViaDef_tp_dealloc,	/* tp_dealloc */
    0,	/* tp_print */
    0,					/* tp_getattr */
    0,					/* tp_setattr */
    (cmpfunc)oaDoubleAppDef_oaViaDef_tp_compare,	/* tp_compare */
    (reprfunc)oaDoubleAppDef_oaViaDef_tp_repr,	/* tp_repr */
    0,					/* tp_as_number */
    0,					/* tp_as_sequence */
    0,					/* tp_as_mapping */
    0,					/* tp_as_hash */
    0,					/* tp_as_call */
    0,					/* tp_str */
    0,					/* tp_getattro */
    0,					/* tp_setattro */
    0,					/* tp_as_buffer */
    Py_TPFLAGS_DEFAULT|Py_TPFLAGS_BASETYPE, /* tp_flags */
    oaDoubleAppDef_oaViaDef_doc,	/* tp_doc */
    0,					/* tp_traverse */
    0,					/* tp_clear */
    0,					/* tp_richcompre */
    0,					/* tp_weaklistoffset */
    0,					/* tp_iter */
    0,					/* tp_iternext */
    oaDoubleAppDef_oaViaDef_methodlist,	/* tp_methods */
    0,					/* tp_members */
    0,					/* tp_getset */
    &PyoaAppDef_Type,	/* tp_base */
    0,					/* tp_dict */
    0,					/* tp_descr_get */
    0,					/* tp_descr_set */
    0,					/* tp_dictoffset */
    0,					/* tp_init */
    PyType_GenericAlloc,	/* tp_alloc */
    oaDoubleAppDef_oaViaDef_new,	/* tp_new */
    _PyObject_Del,	/* tp_free */
};


// ------------------------------------------------------------------
// Static FunctionMethods:
// ------------------------------------------------------------------

// ------------------------------------------------------------------
static char oaDoubleAppDef_oaViaDef_static_find_doc[] = 
"Class: oaDoubleAppDef_oaViaDef, Function: find\n"
"  Paramegers: (oaString)\n"
"    Calls: oaDoubleAppDef_oaViaDef* find(const oaString& name)\n"
"    Signature: find|ptr-oaDoubleAppDef_oaViaDef|cref-oaString,\n"
"    This function returns an oaDoubleAppDef object with this dataType and the specified 'name' if it exists.\n"
"    name\n"
"    The name of the oaAppDef object to look for\n"
"  Paramegers: (oaString,oaAppObjectDef)\n"
"    Calls: oaDoubleAppDef_oaViaDef* find(const oaString& name,const oaAppObjectDef* objDef)\n"
"    Signature: find|ptr-oaDoubleAppDef_oaViaDef|cref-oaString,cptr-oaAppObjectDef,\n"
"    This function returns an oaDoubleAppDef object with this dataType and the specified 'name' that is associated with the specified object extension 'objDef'.\n"
"    name\n"
"    The name of the oaAppDef object to look for\n"
"    objDef\n"
"    A constant pointer to the object extension\n"
;

static PyObject*
oaDoubleAppDef_oaViaDef_static_find(PyObject* ob, PyObject *args)
{
  try {
    // Case: (oaString)
    {
        PyParamoaString p1;
        if (PyArg_ParseTuple(args,"O&",
              &PyoaString_Convert,&p1)) {
            oaDoubleAppDef_oaViaDefp result= (oaDoubleAppDef_oaViaDef::find(p1.Data()));
            return PyoaDoubleAppDef_oaViaDef_FromoaDoubleAppDef_oaViaDef(result);
        }
    }
    PyErr_Clear();
    // Case: (oaString,oaAppObjectDef)
    {
        PyParamoaString p1;
        PyParamoaAppObjectDef p2;
        if (PyArg_ParseTuple(args,"O&O&",
              &PyoaString_Convert,&p1,
              &PyoaAppObjectDef_Convert,&p2)) {
            if (!PyValidateDbObject(p2.Data(),2)) return NULL;
            oaDoubleAppDef_oaViaDefp result= (oaDoubleAppDef_oaViaDef::find(p1.Data(),p2.Data()));
            return PyoaDoubleAppDef_oaViaDef_FromoaDoubleAppDef_oaViaDef(result);
        }
    }
    PyErr_Clear();
    PyErr_SetString(PyExc_TypeError,
        "No Arg-Matching Function found for class: oaDoubleAppDef_oaViaDef, function: find, Choices are:\n"
        "    (oaString)\n"
        "    (oaString,oaAppObjectDef)\n"
    );
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaDoubleAppDef_oaViaDef_static_get_doc[] = 
"Class: oaDoubleAppDef_oaViaDef, Function: get\n"
"  Paramegers: (oaString)\n"
"    Calls: oaDoubleAppDef_oaViaDef* get(const oaString& name)\n"
"    Signature: get|ptr-oaDoubleAppDef_oaViaDef|cref-oaString,simple-oaDouble,simple-oaBoolean,\n"
"    This function constructs an oaDoubleAppDef object, creating a double extension with the specified name . You can create a double extension on any object except another extension.\n"
"    name\n"
"    The name given to the oaDoubleAppDef object\n"
"    defValue\n"
"    The default value for this extension\n"
"    persist\n"
"    Saves the oaDoubleAppDef data in the database\n"
"    oacAppDefExists\n"
"  Paramegers: (oaString,oaDouble)\n"
"    Calls: oaDoubleAppDef_oaViaDef* get(const oaString& name,oaDouble defValue)\n"
"    Signature: get|ptr-oaDoubleAppDef_oaViaDef|cref-oaString,simple-oaDouble,simple-oaBoolean,\n"
"    This function constructs an oaDoubleAppDef object, creating a double extension with the specified name . You can create a double extension on any object except another extension.\n"
"    name\n"
"    The name given to the oaDoubleAppDef object\n"
"    defValue\n"
"    The default value for this extension\n"
"    persist\n"
"    Saves the oaDoubleAppDef data in the database\n"
"    oacAppDefExists\n"
"  Paramegers: (oaString,oaDouble,oaBoolean)\n"
"    Calls: oaDoubleAppDef_oaViaDef* get(const oaString& name,oaDouble defValue,oaBoolean persist)\n"
"    Signature: get|ptr-oaDoubleAppDef_oaViaDef|cref-oaString,simple-oaDouble,simple-oaBoolean,\n"
"    This function constructs an oaDoubleAppDef object, creating a double extension with the specified name . You can create a double extension on any object except another extension.\n"
"    name\n"
"    The name given to the oaDoubleAppDef object\n"
"    defValue\n"
"    The default value for this extension\n"
"    persist\n"
"    Saves the oaDoubleAppDef data in the database\n"
"    oacAppDefExists\n"
"  Paramegers: (oaString,oaAppObjectDef)\n"
"    Calls: oaDoubleAppDef_oaViaDef* get(const oaString& name,const oaAppObjectDef* objDef)\n"
"    Signature: get|ptr-oaDoubleAppDef_oaViaDef|cref-oaString,cptr-oaAppObjectDef,simple-oaDouble,simple-oaBoolean,\n"
"    This function constructs an oaDoubleAppDef object, creating a double extension with the specified name for the specified object type.\n"
"    name\n"
"    The name given to the oaDoubleAppDef object\n"
"    objDef\n"
"    The object extension with which to associate the extension\n"
"    defValue\n"
"    An optional default value\n"
"    persist\n"
"    Saves the oaDoubleAppDef data in the database\n"
"    oacAppDefExists\n"
"  Paramegers: (oaString,oaAppObjectDef,oaDouble)\n"
"    Calls: oaDoubleAppDef_oaViaDef* get(const oaString& name,const oaAppObjectDef* objDef,oaDouble defValue)\n"
"    Signature: get|ptr-oaDoubleAppDef_oaViaDef|cref-oaString,cptr-oaAppObjectDef,simple-oaDouble,simple-oaBoolean,\n"
"    This function constructs an oaDoubleAppDef object, creating a double extension with the specified name for the specified object type.\n"
"    name\n"
"    The name given to the oaDoubleAppDef object\n"
"    objDef\n"
"    The object extension with which to associate the extension\n"
"    defValue\n"
"    An optional default value\n"
"    persist\n"
"    Saves the oaDoubleAppDef data in the database\n"
"    oacAppDefExists\n"
"  Paramegers: (oaString,oaAppObjectDef,oaDouble,oaBoolean)\n"
"    Calls: oaDoubleAppDef_oaViaDef* get(const oaString& name,const oaAppObjectDef* objDef,oaDouble defValue,oaBoolean persist)\n"
"    Signature: get|ptr-oaDoubleAppDef_oaViaDef|cref-oaString,cptr-oaAppObjectDef,simple-oaDouble,simple-oaBoolean,\n"
"    This function constructs an oaDoubleAppDef object, creating a double extension with the specified name for the specified object type.\n"
"    name\n"
"    The name given to the oaDoubleAppDef object\n"
"    objDef\n"
"    The object extension with which to associate the extension\n"
"    defValue\n"
"    An optional default value\n"
"    persist\n"
"    Saves the oaDoubleAppDef data in the database\n"
"    oacAppDefExists\n"
;

static PyObject*
oaDoubleAppDef_oaViaDef_static_get(PyObject* ob, PyObject *args)
{
  try {
    // Case: (oaString)
    {
        PyParamoaString p1;
        if (PyArg_ParseTuple(args,"O&",
              &PyoaString_Convert,&p1)) {
            oaDoubleAppDef_oaViaDefp result= (oaDoubleAppDef_oaViaDef::get(p1.Data()));
            return PyoaDoubleAppDef_oaViaDef_FromoaDoubleAppDef_oaViaDef(result);
        }
    }
    PyErr_Clear();
    // Case: (oaString,oaDouble)
    {
        PyParamoaString p1;
        PyParamoaDouble p2;
        if (PyArg_ParseTuple(args,"O&O&",
              &PyoaString_Convert,&p1,
              &PyoaDouble_Convert,&p2)) {
            oaDoubleAppDef_oaViaDefp result= (oaDoubleAppDef_oaViaDef::get(p1.Data(),p2.Data()));
            return PyoaDoubleAppDef_oaViaDef_FromoaDoubleAppDef_oaViaDef(result);
        }
    }
    PyErr_Clear();
    // Case: (oaString,oaDouble,oaBoolean)
    {
        PyParamoaString p1;
        PyParamoaDouble p2;
        PyParamoaBoolean p3;
        if (PyArg_ParseTuple(args,"O&O&O&",
              &PyoaString_Convert,&p1,
              &PyoaDouble_Convert,&p2,
              &PyoaBoolean_Convert,&p3)) {
            oaDoubleAppDef_oaViaDefp result= (oaDoubleAppDef_oaViaDef::get(p1.Data(),p2.Data(),p3.Data()));
            return PyoaDoubleAppDef_oaViaDef_FromoaDoubleAppDef_oaViaDef(result);
        }
    }
    PyErr_Clear();
    // Case: (oaString,oaAppObjectDef)
    {
        PyParamoaString p1;
        PyParamoaAppObjectDef p2;
        if (PyArg_ParseTuple(args,"O&O&",
              &PyoaString_Convert,&p1,
              &PyoaAppObjectDef_Convert,&p2)) {
            if (!PyValidateDbObject(p2.Data(),2)) return NULL;
            oaDoubleAppDef_oaViaDefp result= (oaDoubleAppDef_oaViaDef::get(p1.Data(),p2.Data()));
            return PyoaDoubleAppDef_oaViaDef_FromoaDoubleAppDef_oaViaDef(result);
        }
    }
    PyErr_Clear();
    // Case: (oaString,oaAppObjectDef,oaDouble)
    {
        PyParamoaString p1;
        PyParamoaAppObjectDef p2;
        PyParamoaDouble p3;
        if (PyArg_ParseTuple(args,"O&O&O&",
              &PyoaString_Convert,&p1,
              &PyoaAppObjectDef_Convert,&p2,
              &PyoaDouble_Convert,&p3)) {
            if (!PyValidateDbObject(p2.Data(),2)) return NULL;
            oaDoubleAppDef_oaViaDefp result= (oaDoubleAppDef_oaViaDef::get(p1.Data(),p2.Data(),p3.Data()));
            return PyoaDoubleAppDef_oaViaDef_FromoaDoubleAppDef_oaViaDef(result);
        }
    }
    PyErr_Clear();
    // Case: (oaString,oaAppObjectDef,oaDouble,oaBoolean)
    {
        PyParamoaString p1;
        PyParamoaAppObjectDef p2;
        PyParamoaDouble p3;
        PyParamoaBoolean p4;
        if (PyArg_ParseTuple(args,"O&O&O&O&",
              &PyoaString_Convert,&p1,
              &PyoaAppObjectDef_Convert,&p2,
              &PyoaDouble_Convert,&p3,
              &PyoaBoolean_Convert,&p4)) {
            if (!PyValidateDbObject(p2.Data(),2)) return NULL;
            oaDoubleAppDef_oaViaDefp result= (oaDoubleAppDef_oaViaDef::get(p1.Data(),p2.Data(),p3.Data(),p4.Data()));
            return PyoaDoubleAppDef_oaViaDef_FromoaDoubleAppDef_oaViaDef(result);
        }
    }
    PyErr_Clear();
    PyErr_SetString(PyExc_TypeError,
        "No Arg-Matching Function found for class: oaDoubleAppDef_oaViaDef, function: get, Choices are:\n"
        "    (oaString)\n"
        "    (oaString,oaDouble)\n"
        "    (oaString,oaDouble,oaBoolean)\n"
        "    (oaString,oaAppObjectDef)\n"
        "    (oaString,oaAppObjectDef,oaDouble)\n"
        "    (oaString,oaAppObjectDef,oaDouble,oaBoolean)\n"
    );
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static PyMethodDef oaDoubleAppDef_oaViaDef_staticmethodlist[] = {
    {"static_find",(PyCFunction)oaDoubleAppDef_oaViaDef_static_find,METH_VARARGS,oaDoubleAppDef_oaViaDef_static_find_doc},
    {"static_get",(PyCFunction)oaDoubleAppDef_oaViaDef_static_get,METH_VARARGS,oaDoubleAppDef_oaViaDef_static_get_doc},
   {NULL,NULL,0,NULL}
};


// ------------------------------------------------------------------
//  Type Init:
// ------------------------------------------------------------------

int
PyoaDoubleAppDef_oaViaDef_TypeInit(PyObject* mod_dict)
{
    if (PyType_Ready(&PyoaDoubleAppDef_oaViaDef_Type)<0) {
      printf("** PyType_Ready failed for: oaDoubleAppDef_oaViaDef\n");
      return -1;
    }

    if (PyDict_SetItemString(mod_dict,"oaDoubleAppDef_oaViaDef",
           (PyObject*)(&PyoaDoubleAppDef_oaViaDef_Type))<0) {
       printf("** Failed to add type name to module dictionary for: oaDoubleAppDef_oaViaDef\n");
       return -1;
    }

    PyObject *dict, *value;
    PyMethodDef *method;
    dict=PyoaDoubleAppDef_oaViaDef_Type.tp_dict;
    for(method=oaDoubleAppDef_oaViaDef_staticmethodlist;method->ml_name!=NULL;method++) {
        value=PyCFunction_New(method,NULL);
    if (value==NULL) return -1;
        if (PyDict_SetItemString(dict,method->ml_name,value)!=0) {
        Py_DECREF(value);
            printf("** Failed to add static function to module dictionary for: %s\n",
                method->ml_name);
            return -1;
        }
        Py_DECREF(value);
    }
    return 0;
}


/********************************************************************
 *   Copyright 2002-2008  LSI Corporation
 *
 *   Licensed under the Apache License, Version 2.0 (the "License");
 *   you may not use this file except in compliance with the License.
 *   You may obtain a copy of the License at
 *
 *       http://www.apache.org/licenses/LICENSE-2.0
 *
 *   Unless required by applicable law or agreed to in writing, software
 *   distributed under the License is distributed on an "AS IS" BASIS,
 *   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *   See the License for the specific language governing permissions and
 *   limitations under the License.
 *
 *******************************************************************/

#include "pyoa_header.h"


// ==================================================================
// Wrapper Implementation for Class: oaDoubleAppDef_oaViaHeader
// ==================================================================


// ==================================================================
// Alloc/Dealloc Routines
// ==================================================================

// ------------------------------------------------------------------
static PyObject*
oaDoubleAppDef_oaViaHeader_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
  try {
    int is_raw=(type==&PyoaDoubleAppDef_oaViaHeader_Type);
    PyObject* bself = type->tp_alloc(type,0);
    if (bself == NULL) return bself;
    PyoaDoubleAppDef_oaViaHeaderObject* self = (PyoaDoubleAppDef_oaViaHeaderObject*)bself;
    self->locks = NULL;
    self->borrow = 0;
    static char *kwlist [] = { NULL } ;
    // Case: (oaDoubleAppDef_oaViaHeader)
    {
        PyParamoaDoubleAppDef_oaViaHeader p1;
        if (PyArg_ParseTuple(args,(char*)"O&",
              &PyoaDoubleAppDef_oaViaHeader_Convert,&p1)) {
            self->data=p1.Data();
            self->value=&(self->data);
            return bself;
        }
    }
    PyErr_Clear();
    // Case: ()
    {
        if (PyArg_ParseTuple(args,(char*)"")) {
          self->data=NULL;
          self->value=&(self->data);
          return bself;
        }
    }
    PyErr_Clear();
    PyErr_SetString(PyExc_TypeError,
        "No Arg-Matching Constructor found for class: oaDoubleAppDef_oaViaHeader, Choices are:\n"
        "    (oaDoubleAppDef_oaViaHeader)\n"
    );
    Py_DECREF(self);
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static void
oaDoubleAppDef_oaViaHeader_tp_dealloc(PyoaDoubleAppDef_oaViaHeaderObject* self)
{
    self->ob_type->tp_free((PyObject*)self);
}

// ------------------------------------------------------------------
static PyObject*
oaDoubleAppDef_oaViaHeader_tp_repr(PyObject *ob)
{
    PyParamoaDoubleAppDef_oaViaHeader value;
    int convert_status=PyoaDoubleAppDef_oaViaHeader_Convert(ob,&value);
    assert(convert_status!=0);
    PyObject* result;

    char buffer[48];
    sprintf(buffer,"<oaDoubleAppDef_oaViaHeader::" DISPLAY_FORMAT ">",POINTER_AS_DISPLAY(value.DataCall()));
    result=PyString_FromString(buffer);
    return result;
}
        
// ------------------------------------------------------------------
static int
oaDoubleAppDef_oaViaHeader_tp_compare(PyObject *ob1,PyObject* ob2)
{
    PyParamoaDoubleAppDef_oaViaHeader v1;
    PyParamoaDoubleAppDef_oaViaHeader v2;
    int convert_status1=PyoaDoubleAppDef_oaViaHeader_Convert(ob1,&v1);
    int convert_status2=PyoaDoubleAppDef_oaViaHeader_Convert(ob2,&v2);
    assert(convert_status1!=0);
    assert(convert_status2!=0);
    if (v1.DataCall()==v2.DataCall()) return 0;
    return 1;
}
        
// ------------------------------------------------------------------
int
PyoaDoubleAppDef_oaViaHeader_Convert(PyObject* ob,PyParamoaDoubleAppDef_oaViaHeader* result)
{
    if (ob == NULL) return 1;
    if (PyoaDoubleAppDef_oaViaHeader_Check(ob)) {
        result->SetData( (oaDoubleAppDef_oaViaHeader**) ((PyoaDoubleAppDef_oaViaHeaderObject*)ob)->value);
        return 1;
    }
    PyErr_SetString(PyExc_TypeError,
        "Convertion of parameter to class: oaDoubleAppDef_oaViaHeader Failed");
    return 0;
}
// ------------------------------------------------------------------
PyObject* PyoaDoubleAppDef_oaViaHeader_FromoaDoubleAppDef_oaViaHeader(oaDoubleAppDef_oaViaHeader** value,int borrow,PyObject* lock)
{
    if (value && *value) {
        oaDoubleAppDef_oaViaHeader* data=*value;
        PyObject* bself = PyoaDoubleAppDef_oaViaHeader_Type.tp_alloc(&PyoaDoubleAppDef_oaViaHeader_Type,0);
        if (bself == NULL) return bself;
        PyoaDoubleAppDef_oaViaHeaderObject* self = (PyoaDoubleAppDef_oaViaHeaderObject*)bself;
        self->value = (oaObject**) value;
        self->data = NULL;
        self->locks = NULL;
        self->borrow = 0; // Ignore borrow flag, since we copied
       if (lock) PyoaLockObject(self->locks,lock);
        return bself;
    }
    Py_INCREF(Py_None);
    return Py_None;
}
// ------------------------------------------------------------------
PyObject* PyoaDoubleAppDef_oaViaHeader_FromoaDoubleAppDef_oaViaHeader(oaDoubleAppDef_oaViaHeader* data)
{
    if (data) {
       PyObject* bself = PyoaDoubleAppDef_oaViaHeader_Type.tp_alloc(&PyoaDoubleAppDef_oaViaHeader_Type,0);
       if (bself == NULL) return bself;
       PyoaDoubleAppDef_oaViaHeaderObject* self = (PyoaDoubleAppDef_oaViaHeaderObject*)bself;
       self->data = (oaObject*) data;
       self->value = &(self->data);
       self->borrow = 0; 
       self->locks = NULL;
       return bself;
    }
    Py_INCREF(Py_None);
    return Py_None;
}

// ------------------------------------------------------------------
// FunctionMethods:
// ------------------------------------------------------------------

// ------------------------------------------------------------------
static char oaDoubleAppDef_oaViaHeader_get_doc[] = 
"Class: oaDoubleAppDef_oaViaHeader, Function: get\n"
"  Paramegers: (oaViaHeader)\n"
"    Calls: oaDouble get(const oaViaHeader* object)\n"
"    Signature: get|simple-oaDouble|cptr-oaViaHeader,\n"
"    This function returns the value of this double extension.\n"
"    object\n"
"    The object for which to get the value\n"
;

static PyObject*
oaDoubleAppDef_oaViaHeader_get(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaDoubleAppDef_oaViaHeader data;
    int convert_status=PyoaDoubleAppDef_oaViaHeader_Convert(ob,&data);
    assert(convert_status!=0);
    PyoaDoubleAppDef_oaViaHeaderObject* self=(PyoaDoubleAppDef_oaViaHeaderObject*)ob;
    if (!PyValidateDbObject(data.Data(),0)) return NULL;

    PyParamoaViaHeader p1;
    if (PyArg_ParseTuple(args,"O&",
          &PyoaViaHeader_Convert,&p1)) {
        if (!PyValidateDbObject(p1.Data(),1)) return NULL;
        oaDouble result= (data.DataCall()->get(p1.Data()));
        return PyoaDouble_FromoaDouble(result);
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaDoubleAppDef_oaViaHeader_getDefault_doc[] = 
"Class: oaDoubleAppDef_oaViaHeader, Function: getDefault\n"
"  Paramegers: ()\n"
"    Calls: oaDouble getDefault() const\n"
"    Signature: getDefault|simple-oaDouble|\n"
"    BrowseData: 1\n"
"    This function returns the default value of this double extension.\n"
;

static PyObject*
oaDoubleAppDef_oaViaHeader_getDefault(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaDoubleAppDef_oaViaHeader data;
    int convert_status=PyoaDoubleAppDef_oaViaHeader_Convert(ob,&data);
    assert(convert_status!=0);
    PyoaDoubleAppDef_oaViaHeaderObject* self=(PyoaDoubleAppDef_oaViaHeaderObject*)ob;
    if (!PyValidateDbObject(data.Data(),0)) return NULL;

    if (PyArg_ParseTuple(args,"")) {
        oaDouble result= (data.DataCall()->getDefault());
        return PyoaDouble_FromoaDouble(result);
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaDoubleAppDef_oaViaHeader_set_doc[] = 
"Class: oaDoubleAppDef_oaViaHeader, Function: set\n"
"  Paramegers: (oaViaHeader,oaDouble)\n"
"    Calls: void set(oaViaHeader* object,oaDouble value)\n"
"    Signature: set|void-void|ptr-oaViaHeader,simple-oaDouble,\n"
"    This function sets the value of this double extension.\n"
"    object\n"
"    The object on which to set the value\n"
"    value\n"
"    The value to set on the object\n"
;

static PyObject*
oaDoubleAppDef_oaViaHeader_set(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaDoubleAppDef_oaViaHeader data;
    int convert_status=PyoaDoubleAppDef_oaViaHeader_Convert(ob,&data);
    assert(convert_status!=0);
    PyoaDoubleAppDef_oaViaHeaderObject* self=(PyoaDoubleAppDef_oaViaHeaderObject*)ob;
    if (!PyValidateDbObject(data.Data(),0)) return NULL;

    PyParamoaViaHeader p1;
    PyParamoaDouble p2;
    if (PyArg_ParseTuple(args,"O&O&",
          &PyoaViaHeader_Convert,&p1,
          &PyoaDouble_Convert,&p2)) {
        if (!PyValidateDbObject(p1.Data(),1)) return NULL;
        data.DataCall()->set(p1.Data(),p2.Data());
        Py_INCREF(Py_None);
        return Py_None;
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaDoubleAppDef_oaViaHeader_isNull_doc[] =
"Class: oaDoubleAppDef_oaViaHeader, Function: isNull\n"
"  Parameters: () \n"
"    This functions returns 1 if the DbPointer is NULL, and 0 otherwise.\n"
;

static PyObject*
oaDoubleAppDef_oaViaHeader_tp_isNull(PyObject* ob, PyObject *args)
{
    PyParamoaDoubleAppDef_oaViaHeader data;
    int convert_status=PyoaDoubleAppDef_oaViaHeader_Convert(ob,&data);
    assert(convert_status!=0);
    if (data.DataCall()==NULL)
        return PyInt_FromLong(1);
    else
        return PyInt_FromLong(0);
}
static char oaDoubleAppDef_oaViaHeader_assign_doc[] = 
"Class: oaDoubleAppDef_oaViaHeader, Function: set\n"
"  Paramegers: (oaDouble)\n"
"    This function sets the current value.\n"
;

static PyObject*
oaDoubleAppDef_oaViaHeader_tp_assign(PyObject* ob, PyObject *args)
{
  PyParamoaDoubleAppDef_oaViaHeader data;
  int convert_status=PyoaDoubleAppDef_oaViaHeader_Convert(ob,&data);
  assert(convert_status!=0);
  try {
    PyParamoaDoubleAppDef_oaViaHeader p1;
    if (PyArg_ParseTuple(args,(char*)"O&",
          &PyoaDoubleAppDef_oaViaHeader_Convert,&p1)) {
        data.Data()=p1.Data();
        Py_INCREF(ob);
        return ob;
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}


// ------------------------------------------------------------------
//  Function Methods Table:
// ------------------------------------------------------------------

static PyMethodDef oaDoubleAppDef_oaViaHeader_methodlist[] = {
    {"get",(PyCFunction)oaDoubleAppDef_oaViaHeader_get,METH_VARARGS,oaDoubleAppDef_oaViaHeader_get_doc},
    {"getDefault",(PyCFunction)oaDoubleAppDef_oaViaHeader_getDefault,METH_VARARGS,oaDoubleAppDef_oaViaHeader_getDefault_doc},
    {"set",(PyCFunction)oaDoubleAppDef_oaViaHeader_set,METH_VARARGS,oaDoubleAppDef_oaViaHeader_set_doc},
    {"isNull",(PyCFunction)oaDoubleAppDef_oaViaHeader_tp_isNull,METH_VARARGS,oaDoubleAppDef_oaViaHeader_isNull_doc},
    {"assign",(PyCFunction)oaDoubleAppDef_oaViaHeader_tp_assign,METH_VARARGS,oaDoubleAppDef_oaViaHeader_assign_doc},
   {NULL,NULL,0,NULL}
};


// ------------------------------------------------------------------
//  Type Object:
// ------------------------------------------------------------------

// ------------------------------------------------------------------
static char oaDoubleAppDef_oaViaHeader_doc[] = 
"Class: oaDoubleAppDef_oaViaHeader\n"
"  The oaDoubleAppDef class implements an application-specific extension for a particular type of data in a database.\n"
"  Once created, a double field is added to each object of the specified dataType. The default value for this extension is DBL_MAX. Applications can use the new field for whatever purpose is necessary.\n"
"  For additional information on defining and using AppDefs, see oaAppDef and Extending the Database in the Programmer's Guide.\n"
"Constructors:\n"
"  Paramegers: (oaDoubleAppDef_oaViaHeader)\n"
"    Calls: (const oaDoubleAppDef_oaViaHeader&)\n"
"    Signature: oaDoubleAppDef_oaViaHeader||cref-oaDoubleAppDef_oaViaHeader,\n"
;

// ------------------------------------------------------------------
PyTypeObject PyoaDoubleAppDef_oaViaHeader_Type = {
    PyObject_HEAD_INIT(&PyType_Type)
    0,
    "oaDoubleAppDef_oaViaHeader",
    sizeof(PyoaDoubleAppDef_oaViaHeaderObject),
    0,
    (destructor)oaDoubleAppDef_oaViaHeader_tp_dealloc,	/* tp_dealloc */
    0,	/* tp_print */
    0,					/* tp_getattr */
    0,					/* tp_setattr */
    (cmpfunc)oaDoubleAppDef_oaViaHeader_tp_compare,	/* tp_compare */
    (reprfunc)oaDoubleAppDef_oaViaHeader_tp_repr,	/* tp_repr */
    0,					/* tp_as_number */
    0,					/* tp_as_sequence */
    0,					/* tp_as_mapping */
    0,					/* tp_as_hash */
    0,					/* tp_as_call */
    0,					/* tp_str */
    0,					/* tp_getattro */
    0,					/* tp_setattro */
    0,					/* tp_as_buffer */
    Py_TPFLAGS_DEFAULT|Py_TPFLAGS_BASETYPE, /* tp_flags */
    oaDoubleAppDef_oaViaHeader_doc,	/* tp_doc */
    0,					/* tp_traverse */
    0,					/* tp_clear */
    0,					/* tp_richcompre */
    0,					/* tp_weaklistoffset */
    0,					/* tp_iter */
    0,					/* tp_iternext */
    oaDoubleAppDef_oaViaHeader_methodlist,	/* tp_methods */
    0,					/* tp_members */
    0,					/* tp_getset */
    &PyoaAppDef_Type,	/* tp_base */
    0,					/* tp_dict */
    0,					/* tp_descr_get */
    0,					/* tp_descr_set */
    0,					/* tp_dictoffset */
    0,					/* tp_init */
    PyType_GenericAlloc,	/* tp_alloc */
    oaDoubleAppDef_oaViaHeader_new,	/* tp_new */
    _PyObject_Del,	/* tp_free */
};


// ------------------------------------------------------------------
// Static FunctionMethods:
// ------------------------------------------------------------------

// ------------------------------------------------------------------
static char oaDoubleAppDef_oaViaHeader_static_find_doc[] = 
"Class: oaDoubleAppDef_oaViaHeader, Function: find\n"
"  Paramegers: (oaString)\n"
"    Calls: oaDoubleAppDef_oaViaHeader* find(const oaString& name)\n"
"    Signature: find|ptr-oaDoubleAppDef_oaViaHeader|cref-oaString,\n"
"    This function returns an oaDoubleAppDef object with this dataType and the specified 'name' if it exists.\n"
"    name\n"
"    The name of the oaAppDef object to look for\n"
"  Paramegers: (oaString,oaAppObjectDef)\n"
"    Calls: oaDoubleAppDef_oaViaHeader* find(const oaString& name,const oaAppObjectDef* objDef)\n"
"    Signature: find|ptr-oaDoubleAppDef_oaViaHeader|cref-oaString,cptr-oaAppObjectDef,\n"
"    This function returns an oaDoubleAppDef object with this dataType and the specified 'name' that is associated with the specified object extension 'objDef'.\n"
"    name\n"
"    The name of the oaAppDef object to look for\n"
"    objDef\n"
"    A constant pointer to the object extension\n"
;

static PyObject*
oaDoubleAppDef_oaViaHeader_static_find(PyObject* ob, PyObject *args)
{
  try {
    // Case: (oaString)
    {
        PyParamoaString p1;
        if (PyArg_ParseTuple(args,"O&",
              &PyoaString_Convert,&p1)) {
            oaDoubleAppDef_oaViaHeaderp result= (oaDoubleAppDef_oaViaHeader::find(p1.Data()));
            return PyoaDoubleAppDef_oaViaHeader_FromoaDoubleAppDef_oaViaHeader(result);
        }
    }
    PyErr_Clear();
    // Case: (oaString,oaAppObjectDef)
    {
        PyParamoaString p1;
        PyParamoaAppObjectDef p2;
        if (PyArg_ParseTuple(args,"O&O&",
              &PyoaString_Convert,&p1,
              &PyoaAppObjectDef_Convert,&p2)) {
            if (!PyValidateDbObject(p2.Data(),2)) return NULL;
            oaDoubleAppDef_oaViaHeaderp result= (oaDoubleAppDef_oaViaHeader::find(p1.Data(),p2.Data()));
            return PyoaDoubleAppDef_oaViaHeader_FromoaDoubleAppDef_oaViaHeader(result);
        }
    }
    PyErr_Clear();
    PyErr_SetString(PyExc_TypeError,
        "No Arg-Matching Function found for class: oaDoubleAppDef_oaViaHeader, function: find, Choices are:\n"
        "    (oaString)\n"
        "    (oaString,oaAppObjectDef)\n"
    );
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaDoubleAppDef_oaViaHeader_static_get_doc[] = 
"Class: oaDoubleAppDef_oaViaHeader, Function: get\n"
"  Paramegers: (oaString)\n"
"    Calls: oaDoubleAppDef_oaViaHeader* get(const oaString& name)\n"
"    Signature: get|ptr-oaDoubleAppDef_oaViaHeader|cref-oaString,simple-oaDouble,simple-oaBoolean,\n"
"    This function constructs an oaDoubleAppDef object, creating a double extension with the specified name . You can create a double extension on any object except another extension.\n"
"    name\n"
"    The name given to the oaDoubleAppDef object\n"
"    defValue\n"
"    The default value for this extension\n"
"    persist\n"
"    Saves the oaDoubleAppDef data in the database\n"
"    oacAppDefExists\n"
"  Paramegers: (oaString,oaDouble)\n"
"    Calls: oaDoubleAppDef_oaViaHeader* get(const oaString& name,oaDouble defValue)\n"
"    Signature: get|ptr-oaDoubleAppDef_oaViaHeader|cref-oaString,simple-oaDouble,simple-oaBoolean,\n"
"    This function constructs an oaDoubleAppDef object, creating a double extension with the specified name . You can create a double extension on any object except another extension.\n"
"    name\n"
"    The name given to the oaDoubleAppDef object\n"
"    defValue\n"
"    The default value for this extension\n"
"    persist\n"
"    Saves the oaDoubleAppDef data in the database\n"
"    oacAppDefExists\n"
"  Paramegers: (oaString,oaDouble,oaBoolean)\n"
"    Calls: oaDoubleAppDef_oaViaHeader* get(const oaString& name,oaDouble defValue,oaBoolean persist)\n"
"    Signature: get|ptr-oaDoubleAppDef_oaViaHeader|cref-oaString,simple-oaDouble,simple-oaBoolean,\n"
"    This function constructs an oaDoubleAppDef object, creating a double extension with the specified name . You can create a double extension on any object except another extension.\n"
"    name\n"
"    The name given to the oaDoubleAppDef object\n"
"    defValue\n"
"    The default value for this extension\n"
"    persist\n"
"    Saves the oaDoubleAppDef data in the database\n"
"    oacAppDefExists\n"
"  Paramegers: (oaString,oaAppObjectDef)\n"
"    Calls: oaDoubleAppDef_oaViaHeader* get(const oaString& name,const oaAppObjectDef* objDef)\n"
"    Signature: get|ptr-oaDoubleAppDef_oaViaHeader|cref-oaString,cptr-oaAppObjectDef,simple-oaDouble,simple-oaBoolean,\n"
"    This function constructs an oaDoubleAppDef object, creating a double extension with the specified name for the specified object type.\n"
"    name\n"
"    The name given to the oaDoubleAppDef object\n"
"    objDef\n"
"    The object extension with which to associate the extension\n"
"    defValue\n"
"    An optional default value\n"
"    persist\n"
"    Saves the oaDoubleAppDef data in the database\n"
"    oacAppDefExists\n"
"  Paramegers: (oaString,oaAppObjectDef,oaDouble)\n"
"    Calls: oaDoubleAppDef_oaViaHeader* get(const oaString& name,const oaAppObjectDef* objDef,oaDouble defValue)\n"
"    Signature: get|ptr-oaDoubleAppDef_oaViaHeader|cref-oaString,cptr-oaAppObjectDef,simple-oaDouble,simple-oaBoolean,\n"
"    This function constructs an oaDoubleAppDef object, creating a double extension with the specified name for the specified object type.\n"
"    name\n"
"    The name given to the oaDoubleAppDef object\n"
"    objDef\n"
"    The object extension with which to associate the extension\n"
"    defValue\n"
"    An optional default value\n"
"    persist\n"
"    Saves the oaDoubleAppDef data in the database\n"
"    oacAppDefExists\n"
"  Paramegers: (oaString,oaAppObjectDef,oaDouble,oaBoolean)\n"
"    Calls: oaDoubleAppDef_oaViaHeader* get(const oaString& name,const oaAppObjectDef* objDef,oaDouble defValue,oaBoolean persist)\n"
"    Signature: get|ptr-oaDoubleAppDef_oaViaHeader|cref-oaString,cptr-oaAppObjectDef,simple-oaDouble,simple-oaBoolean,\n"
"    This function constructs an oaDoubleAppDef object, creating a double extension with the specified name for the specified object type.\n"
"    name\n"
"    The name given to the oaDoubleAppDef object\n"
"    objDef\n"
"    The object extension with which to associate the extension\n"
"    defValue\n"
"    An optional default value\n"
"    persist\n"
"    Saves the oaDoubleAppDef data in the database\n"
"    oacAppDefExists\n"
;

static PyObject*
oaDoubleAppDef_oaViaHeader_static_get(PyObject* ob, PyObject *args)
{
  try {
    // Case: (oaString)
    {
        PyParamoaString p1;
        if (PyArg_ParseTuple(args,"O&",
              &PyoaString_Convert,&p1)) {
            oaDoubleAppDef_oaViaHeaderp result= (oaDoubleAppDef_oaViaHeader::get(p1.Data()));
            return PyoaDoubleAppDef_oaViaHeader_FromoaDoubleAppDef_oaViaHeader(result);
        }
    }
    PyErr_Clear();
    // Case: (oaString,oaDouble)
    {
        PyParamoaString p1;
        PyParamoaDouble p2;
        if (PyArg_ParseTuple(args,"O&O&",
              &PyoaString_Convert,&p1,
              &PyoaDouble_Convert,&p2)) {
            oaDoubleAppDef_oaViaHeaderp result= (oaDoubleAppDef_oaViaHeader::get(p1.Data(),p2.Data()));
            return PyoaDoubleAppDef_oaViaHeader_FromoaDoubleAppDef_oaViaHeader(result);
        }
    }
    PyErr_Clear();
    // Case: (oaString,oaDouble,oaBoolean)
    {
        PyParamoaString p1;
        PyParamoaDouble p2;
        PyParamoaBoolean p3;
        if (PyArg_ParseTuple(args,"O&O&O&",
              &PyoaString_Convert,&p1,
              &PyoaDouble_Convert,&p2,
              &PyoaBoolean_Convert,&p3)) {
            oaDoubleAppDef_oaViaHeaderp result= (oaDoubleAppDef_oaViaHeader::get(p1.Data(),p2.Data(),p3.Data()));
            return PyoaDoubleAppDef_oaViaHeader_FromoaDoubleAppDef_oaViaHeader(result);
        }
    }
    PyErr_Clear();
    // Case: (oaString,oaAppObjectDef)
    {
        PyParamoaString p1;
        PyParamoaAppObjectDef p2;
        if (PyArg_ParseTuple(args,"O&O&",
              &PyoaString_Convert,&p1,
              &PyoaAppObjectDef_Convert,&p2)) {
            if (!PyValidateDbObject(p2.Data(),2)) return NULL;
            oaDoubleAppDef_oaViaHeaderp result= (oaDoubleAppDef_oaViaHeader::get(p1.Data(),p2.Data()));
            return PyoaDoubleAppDef_oaViaHeader_FromoaDoubleAppDef_oaViaHeader(result);
        }
    }
    PyErr_Clear();
    // Case: (oaString,oaAppObjectDef,oaDouble)
    {
        PyParamoaString p1;
        PyParamoaAppObjectDef p2;
        PyParamoaDouble p3;
        if (PyArg_ParseTuple(args,"O&O&O&",
              &PyoaString_Convert,&p1,
              &PyoaAppObjectDef_Convert,&p2,
              &PyoaDouble_Convert,&p3)) {
            if (!PyValidateDbObject(p2.Data(),2)) return NULL;
            oaDoubleAppDef_oaViaHeaderp result= (oaDoubleAppDef_oaViaHeader::get(p1.Data(),p2.Data(),p3.Data()));
            return PyoaDoubleAppDef_oaViaHeader_FromoaDoubleAppDef_oaViaHeader(result);
        }
    }
    PyErr_Clear();
    // Case: (oaString,oaAppObjectDef,oaDouble,oaBoolean)
    {
        PyParamoaString p1;
        PyParamoaAppObjectDef p2;
        PyParamoaDouble p3;
        PyParamoaBoolean p4;
        if (PyArg_ParseTuple(args,"O&O&O&O&",
              &PyoaString_Convert,&p1,
              &PyoaAppObjectDef_Convert,&p2,
              &PyoaDouble_Convert,&p3,
              &PyoaBoolean_Convert,&p4)) {
            if (!PyValidateDbObject(p2.Data(),2)) return NULL;
            oaDoubleAppDef_oaViaHeaderp result= (oaDoubleAppDef_oaViaHeader::get(p1.Data(),p2.Data(),p3.Data(),p4.Data()));
            return PyoaDoubleAppDef_oaViaHeader_FromoaDoubleAppDef_oaViaHeader(result);
        }
    }
    PyErr_Clear();
    PyErr_SetString(PyExc_TypeError,
        "No Arg-Matching Function found for class: oaDoubleAppDef_oaViaHeader, function: get, Choices are:\n"
        "    (oaString)\n"
        "    (oaString,oaDouble)\n"
        "    (oaString,oaDouble,oaBoolean)\n"
        "    (oaString,oaAppObjectDef)\n"
        "    (oaString,oaAppObjectDef,oaDouble)\n"
        "    (oaString,oaAppObjectDef,oaDouble,oaBoolean)\n"
    );
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static PyMethodDef oaDoubleAppDef_oaViaHeader_staticmethodlist[] = {
    {"static_find",(PyCFunction)oaDoubleAppDef_oaViaHeader_static_find,METH_VARARGS,oaDoubleAppDef_oaViaHeader_static_find_doc},
    {"static_get",(PyCFunction)oaDoubleAppDef_oaViaHeader_static_get,METH_VARARGS,oaDoubleAppDef_oaViaHeader_static_get_doc},
   {NULL,NULL,0,NULL}
};


// ------------------------------------------------------------------
//  Type Init:
// ------------------------------------------------------------------

int
PyoaDoubleAppDef_oaViaHeader_TypeInit(PyObject* mod_dict)
{
    if (PyType_Ready(&PyoaDoubleAppDef_oaViaHeader_Type)<0) {
      printf("** PyType_Ready failed for: oaDoubleAppDef_oaViaHeader\n");
      return -1;
    }

    if (PyDict_SetItemString(mod_dict,"oaDoubleAppDef_oaViaHeader",
           (PyObject*)(&PyoaDoubleAppDef_oaViaHeader_Type))<0) {
       printf("** Failed to add type name to module dictionary for: oaDoubleAppDef_oaViaHeader\n");
       return -1;
    }

    PyObject *dict, *value;
    PyMethodDef *method;
    dict=PyoaDoubleAppDef_oaViaHeader_Type.tp_dict;
    for(method=oaDoubleAppDef_oaViaHeader_staticmethodlist;method->ml_name!=NULL;method++) {
        value=PyCFunction_New(method,NULL);
    if (value==NULL) return -1;
        if (PyDict_SetItemString(dict,method->ml_name,value)!=0) {
        Py_DECREF(value);
            printf("** Failed to add static function to module dictionary for: %s\n",
                method->ml_name);
            return -1;
        }
        Py_DECREF(value);
    }
    return 0;
}


/********************************************************************
 *   Copyright 2002-2008  LSI Corporation
 *
 *   Licensed under the Apache License, Version 2.0 (the "License");
 *   you may not use this file except in compliance with the License.
 *   You may obtain a copy of the License at
 *
 *       http://www.apache.org/licenses/LICENSE-2.0
 *
 *   Unless required by applicable law or agreed to in writing, software
 *   distributed under the License is distributed on an "AS IS" BASIS,
 *   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *   See the License for the specific language governing permissions and
 *   limitations under the License.
 *
 *******************************************************************/

#include "pyoa_header.h"


// ==================================================================
// Wrapper Implementation for Class: oaDoubleAppDef_oaViaSpec
// ==================================================================


// ==================================================================
// Alloc/Dealloc Routines
// ==================================================================

// ------------------------------------------------------------------
static PyObject*
oaDoubleAppDef_oaViaSpec_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
  try {
    int is_raw=(type==&PyoaDoubleAppDef_oaViaSpec_Type);
    PyObject* bself = type->tp_alloc(type,0);
    if (bself == NULL) return bself;
    PyoaDoubleAppDef_oaViaSpecObject* self = (PyoaDoubleAppDef_oaViaSpecObject*)bself;
    self->locks = NULL;
    self->borrow = 0;
    static char *kwlist [] = { NULL } ;
    // Case: (oaDoubleAppDef_oaViaSpec)
    {
        PyParamoaDoubleAppDef_oaViaSpec p1;
        if (PyArg_ParseTuple(args,(char*)"O&",
              &PyoaDoubleAppDef_oaViaSpec_Convert,&p1)) {
            self->data=p1.Data();
            self->value=&(self->data);
            return bself;
        }
    }
    PyErr_Clear();
    // Case: ()
    {
        if (PyArg_ParseTuple(args,(char*)"")) {
          self->data=NULL;
          self->value=&(self->data);
          return bself;
        }
    }
    PyErr_Clear();
    PyErr_SetString(PyExc_TypeError,
        "No Arg-Matching Constructor found for class: oaDoubleAppDef_oaViaSpec, Choices are:\n"
        "    (oaDoubleAppDef_oaViaSpec)\n"
    );
    Py_DECREF(self);
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static void
oaDoubleAppDef_oaViaSpec_tp_dealloc(PyoaDoubleAppDef_oaViaSpecObject* self)
{
    self->ob_type->tp_free((PyObject*)self);
}

// ------------------------------------------------------------------
static PyObject*
oaDoubleAppDef_oaViaSpec_tp_repr(PyObject *ob)
{
    PyParamoaDoubleAppDef_oaViaSpec value;
    int convert_status=PyoaDoubleAppDef_oaViaSpec_Convert(ob,&value);
    assert(convert_status!=0);
    PyObject* result;

    char buffer[46];
    sprintf(buffer,"<oaDoubleAppDef_oaViaSpec::" DISPLAY_FORMAT ">",POINTER_AS_DISPLAY(value.DataCall()));
    result=PyString_FromString(buffer);
    return result;
}
        
// ------------------------------------------------------------------
static int
oaDoubleAppDef_oaViaSpec_tp_compare(PyObject *ob1,PyObject* ob2)
{
    PyParamoaDoubleAppDef_oaViaSpec v1;
    PyParamoaDoubleAppDef_oaViaSpec v2;
    int convert_status1=PyoaDoubleAppDef_oaViaSpec_Convert(ob1,&v1);
    int convert_status2=PyoaDoubleAppDef_oaViaSpec_Convert(ob2,&v2);
    assert(convert_status1!=0);
    assert(convert_status2!=0);
    if (v1.DataCall()==v2.DataCall()) return 0;
    return 1;
}
        
// ------------------------------------------------------------------
int
PyoaDoubleAppDef_oaViaSpec_Convert(PyObject* ob,PyParamoaDoubleAppDef_oaViaSpec* result)
{
    if (ob == NULL) return 1;
    if (PyoaDoubleAppDef_oaViaSpec_Check(ob)) {
        result->SetData( (oaDoubleAppDef_oaViaSpec**) ((PyoaDoubleAppDef_oaViaSpecObject*)ob)->value);
        return 1;
    }
    PyErr_SetString(PyExc_TypeError,
        "Convertion of parameter to class: oaDoubleAppDef_oaViaSpec Failed");
    return 0;
}
// ------------------------------------------------------------------
PyObject* PyoaDoubleAppDef_oaViaSpec_FromoaDoubleAppDef_oaViaSpec(oaDoubleAppDef_oaViaSpec** value,int borrow,PyObject* lock)
{
    if (value && *value) {
        oaDoubleAppDef_oaViaSpec* data=*value;
        PyObject* bself = PyoaDoubleAppDef_oaViaSpec_Type.tp_alloc(&PyoaDoubleAppDef_oaViaSpec_Type,0);
        if (bself == NULL) return bself;
        PyoaDoubleAppDef_oaViaSpecObject* self = (PyoaDoubleAppDef_oaViaSpecObject*)bself;
        self->value = (oaObject**) value;
        self->data = NULL;
        self->locks = NULL;
        self->borrow = 0; // Ignore borrow flag, since we copied
       if (lock) PyoaLockObject(self->locks,lock);
        return bself;
    }
    Py_INCREF(Py_None);
    return Py_None;
}
// ------------------------------------------------------------------
PyObject* PyoaDoubleAppDef_oaViaSpec_FromoaDoubleAppDef_oaViaSpec(oaDoubleAppDef_oaViaSpec* data)
{
    if (data) {
       PyObject* bself = PyoaDoubleAppDef_oaViaSpec_Type.tp_alloc(&PyoaDoubleAppDef_oaViaSpec_Type,0);
       if (bself == NULL) return bself;
       PyoaDoubleAppDef_oaViaSpecObject* self = (PyoaDoubleAppDef_oaViaSpecObject*)bself;
       self->data = (oaObject*) data;
       self->value = &(self->data);
       self->borrow = 0; 
       self->locks = NULL;
       return bself;
    }
    Py_INCREF(Py_None);
    return Py_None;
}

// ------------------------------------------------------------------
// FunctionMethods:
// ------------------------------------------------------------------

// ------------------------------------------------------------------
static char oaDoubleAppDef_oaViaSpec_get_doc[] = 
"Class: oaDoubleAppDef_oaViaSpec, Function: get\n"
"  Paramegers: (oaViaSpec)\n"
"    Calls: oaDouble get(const oaViaSpec* object)\n"
"    Signature: get|simple-oaDouble|cptr-oaViaSpec,\n"
"    This function returns the value of this double extension.\n"
"    object\n"
"    The object for which to get the value\n"
;

static PyObject*
oaDoubleAppDef_oaViaSpec_get(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaDoubleAppDef_oaViaSpec data;
    int convert_status=PyoaDoubleAppDef_oaViaSpec_Convert(ob,&data);
    assert(convert_status!=0);
    PyoaDoubleAppDef_oaViaSpecObject* self=(PyoaDoubleAppDef_oaViaSpecObject*)ob;
    if (!PyValidateDbObject(data.Data(),0)) return NULL;

    PyParamoaViaSpec p1;
    if (PyArg_ParseTuple(args,"O&",
          &PyoaViaSpec_Convert,&p1)) {
        if (!PyValidateDbObject(p1.Data(),1)) return NULL;
        oaDouble result= (data.DataCall()->get(p1.Data()));
        return PyoaDouble_FromoaDouble(result);
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaDoubleAppDef_oaViaSpec_getDefault_doc[] = 
"Class: oaDoubleAppDef_oaViaSpec, Function: getDefault\n"
"  Paramegers: ()\n"
"    Calls: oaDouble getDefault() const\n"
"    Signature: getDefault|simple-oaDouble|\n"
"    BrowseData: 1\n"
"    This function returns the default value of this double extension.\n"
;

static PyObject*
oaDoubleAppDef_oaViaSpec_getDefault(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaDoubleAppDef_oaViaSpec data;
    int convert_status=PyoaDoubleAppDef_oaViaSpec_Convert(ob,&data);
    assert(convert_status!=0);
    PyoaDoubleAppDef_oaViaSpecObject* self=(PyoaDoubleAppDef_oaViaSpecObject*)ob;
    if (!PyValidateDbObject(data.Data(),0)) return NULL;

    if (PyArg_ParseTuple(args,"")) {
        oaDouble result= (data.DataCall()->getDefault());
        return PyoaDouble_FromoaDouble(result);
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaDoubleAppDef_oaViaSpec_set_doc[] = 
"Class: oaDoubleAppDef_oaViaSpec, Function: set\n"
"  Paramegers: (oaViaSpec,oaDouble)\n"
"    Calls: void set(oaViaSpec* object,oaDouble value)\n"
"    Signature: set|void-void|ptr-oaViaSpec,simple-oaDouble,\n"
"    This function sets the value of this double extension.\n"
"    object\n"
"    The object on which to set the value\n"
"    value\n"
"    The value to set on the object\n"
;

static PyObject*
oaDoubleAppDef_oaViaSpec_set(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaDoubleAppDef_oaViaSpec data;
    int convert_status=PyoaDoubleAppDef_oaViaSpec_Convert(ob,&data);
    assert(convert_status!=0);
    PyoaDoubleAppDef_oaViaSpecObject* self=(PyoaDoubleAppDef_oaViaSpecObject*)ob;
    if (!PyValidateDbObject(data.Data(),0)) return NULL;

    PyParamoaViaSpec p1;
    PyParamoaDouble p2;
    if (PyArg_ParseTuple(args,"O&O&",
          &PyoaViaSpec_Convert,&p1,
          &PyoaDouble_Convert,&p2)) {
        if (!PyValidateDbObject(p1.Data(),1)) return NULL;
        data.DataCall()->set(p1.Data(),p2.Data());
        Py_INCREF(Py_None);
        return Py_None;
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaDoubleAppDef_oaViaSpec_isNull_doc[] =
"Class: oaDoubleAppDef_oaViaSpec, Function: isNull\n"
"  Parameters: () \n"
"    This functions returns 1 if the DbPointer is NULL, and 0 otherwise.\n"
;

static PyObject*
oaDoubleAppDef_oaViaSpec_tp_isNull(PyObject* ob, PyObject *args)
{
    PyParamoaDoubleAppDef_oaViaSpec data;
    int convert_status=PyoaDoubleAppDef_oaViaSpec_Convert(ob,&data);
    assert(convert_status!=0);
    if (data.DataCall()==NULL)
        return PyInt_FromLong(1);
    else
        return PyInt_FromLong(0);
}
static char oaDoubleAppDef_oaViaSpec_assign_doc[] = 
"Class: oaDoubleAppDef_oaViaSpec, Function: set\n"
"  Paramegers: (oaDouble)\n"
"    This function sets the current value.\n"
;

static PyObject*
oaDoubleAppDef_oaViaSpec_tp_assign(PyObject* ob, PyObject *args)
{
  PyParamoaDoubleAppDef_oaViaSpec data;
  int convert_status=PyoaDoubleAppDef_oaViaSpec_Convert(ob,&data);
  assert(convert_status!=0);
  try {
    PyParamoaDoubleAppDef_oaViaSpec p1;
    if (PyArg_ParseTuple(args,(char*)"O&",
          &PyoaDoubleAppDef_oaViaSpec_Convert,&p1)) {
        data.Data()=p1.Data();
        Py_INCREF(ob);
        return ob;
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}


// ------------------------------------------------------------------
//  Function Methods Table:
// ------------------------------------------------------------------

static PyMethodDef oaDoubleAppDef_oaViaSpec_methodlist[] = {
    {"get",(PyCFunction)oaDoubleAppDef_oaViaSpec_get,METH_VARARGS,oaDoubleAppDef_oaViaSpec_get_doc},
    {"getDefault",(PyCFunction)oaDoubleAppDef_oaViaSpec_getDefault,METH_VARARGS,oaDoubleAppDef_oaViaSpec_getDefault_doc},
    {"set",(PyCFunction)oaDoubleAppDef_oaViaSpec_set,METH_VARARGS,oaDoubleAppDef_oaViaSpec_set_doc},
    {"isNull",(PyCFunction)oaDoubleAppDef_oaViaSpec_tp_isNull,METH_VARARGS,oaDoubleAppDef_oaViaSpec_isNull_doc},
    {"assign",(PyCFunction)oaDoubleAppDef_oaViaSpec_tp_assign,METH_VARARGS,oaDoubleAppDef_oaViaSpec_assign_doc},
   {NULL,NULL,0,NULL}
};


// ------------------------------------------------------------------
//  Type Object:
// ------------------------------------------------------------------

// ------------------------------------------------------------------
static char oaDoubleAppDef_oaViaSpec_doc[] = 
"Class: oaDoubleAppDef_oaViaSpec\n"
"  The oaDoubleAppDef class implements an application-specific extension for a particular type of data in a database.\n"
"  Once created, a double field is added to each object of the specified dataType. The default value for this extension is DBL_MAX. Applications can use the new field for whatever purpose is necessary.\n"
"  For additional information on defining and using AppDefs, see oaAppDef and Extending the Database in the Programmer's Guide.\n"
"Constructors:\n"
"  Paramegers: (oaDoubleAppDef_oaViaSpec)\n"
"    Calls: (const oaDoubleAppDef_oaViaSpec&)\n"
"    Signature: oaDoubleAppDef_oaViaSpec||cref-oaDoubleAppDef_oaViaSpec,\n"
;

// ------------------------------------------------------------------
PyTypeObject PyoaDoubleAppDef_oaViaSpec_Type = {
    PyObject_HEAD_INIT(&PyType_Type)
    0,
    "oaDoubleAppDef_oaViaSpec",
    sizeof(PyoaDoubleAppDef_oaViaSpecObject),
    0,
    (destructor)oaDoubleAppDef_oaViaSpec_tp_dealloc,	/* tp_dealloc */
    0,	/* tp_print */
    0,					/* tp_getattr */
    0,					/* tp_setattr */
    (cmpfunc)oaDoubleAppDef_oaViaSpec_tp_compare,	/* tp_compare */
    (reprfunc)oaDoubleAppDef_oaViaSpec_tp_repr,	/* tp_repr */
    0,					/* tp_as_number */
    0,					/* tp_as_sequence */
    0,					/* tp_as_mapping */
    0,					/* tp_as_hash */
    0,					/* tp_as_call */
    0,					/* tp_str */
    0,					/* tp_getattro */
    0,					/* tp_setattro */
    0,					/* tp_as_buffer */
    Py_TPFLAGS_DEFAULT|Py_TPFLAGS_BASETYPE, /* tp_flags */
    oaDoubleAppDef_oaViaSpec_doc,	/* tp_doc */
    0,					/* tp_traverse */
    0,					/* tp_clear */
    0,					/* tp_richcompre */
    0,					/* tp_weaklistoffset */
    0,					/* tp_iter */
    0,					/* tp_iternext */
    oaDoubleAppDef_oaViaSpec_methodlist,	/* tp_methods */
    0,					/* tp_members */
    0,					/* tp_getset */
    &PyoaAppDef_Type,	/* tp_base */
    0,					/* tp_dict */
    0,					/* tp_descr_get */
    0,					/* tp_descr_set */
    0,					/* tp_dictoffset */
    0,					/* tp_init */
    PyType_GenericAlloc,	/* tp_alloc */
    oaDoubleAppDef_oaViaSpec_new,	/* tp_new */
    _PyObject_Del,	/* tp_free */
};


// ------------------------------------------------------------------
// Static FunctionMethods:
// ------------------------------------------------------------------

// ------------------------------------------------------------------
static char oaDoubleAppDef_oaViaSpec_static_find_doc[] = 
"Class: oaDoubleAppDef_oaViaSpec, Function: find\n"
"  Paramegers: (oaString)\n"
"    Calls: oaDoubleAppDef_oaViaSpec* find(const oaString& name)\n"
"    Signature: find|ptr-oaDoubleAppDef_oaViaSpec|cref-oaString,\n"
"    This function returns an oaDoubleAppDef object with this dataType and the specified 'name' if it exists.\n"
"    name\n"
"    The name of the oaAppDef object to look for\n"
"  Paramegers: (oaString,oaAppObjectDef)\n"
"    Calls: oaDoubleAppDef_oaViaSpec* find(const oaString& name,const oaAppObjectDef* objDef)\n"
"    Signature: find|ptr-oaDoubleAppDef_oaViaSpec|cref-oaString,cptr-oaAppObjectDef,\n"
"    This function returns an oaDoubleAppDef object with this dataType and the specified 'name' that is associated with the specified object extension 'objDef'.\n"
"    name\n"
"    The name of the oaAppDef object to look for\n"
"    objDef\n"
"    A constant pointer to the object extension\n"
;

static PyObject*
oaDoubleAppDef_oaViaSpec_static_find(PyObject* ob, PyObject *args)
{
  try {
    // Case: (oaString)
    {
        PyParamoaString p1;
        if (PyArg_ParseTuple(args,"O&",
              &PyoaString_Convert,&p1)) {
            oaDoubleAppDef_oaViaSpecp result= (oaDoubleAppDef_oaViaSpec::find(p1.Data()));
            return PyoaDoubleAppDef_oaViaSpec_FromoaDoubleAppDef_oaViaSpec(result);
        }
    }
    PyErr_Clear();
    // Case: (oaString,oaAppObjectDef)
    {
        PyParamoaString p1;
        PyParamoaAppObjectDef p2;
        if (PyArg_ParseTuple(args,"O&O&",
              &PyoaString_Convert,&p1,
              &PyoaAppObjectDef_Convert,&p2)) {
            if (!PyValidateDbObject(p2.Data(),2)) return NULL;
            oaDoubleAppDef_oaViaSpecp result= (oaDoubleAppDef_oaViaSpec::find(p1.Data(),p2.Data()));
            return PyoaDoubleAppDef_oaViaSpec_FromoaDoubleAppDef_oaViaSpec(result);
        }
    }
    PyErr_Clear();
    PyErr_SetString(PyExc_TypeError,
        "No Arg-Matching Function found for class: oaDoubleAppDef_oaViaSpec, function: find, Choices are:\n"
        "    (oaString)\n"
        "    (oaString,oaAppObjectDef)\n"
    );
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaDoubleAppDef_oaViaSpec_static_get_doc[] = 
"Class: oaDoubleAppDef_oaViaSpec, Function: get\n"
"  Paramegers: (oaString)\n"
"    Calls: oaDoubleAppDef_oaViaSpec* get(const oaString& name)\n"
"    Signature: get|ptr-oaDoubleAppDef_oaViaSpec|cref-oaString,simple-oaDouble,simple-oaBoolean,\n"
"    This function constructs an oaDoubleAppDef object, creating a double extension with the specified name . You can create a double extension on any object except another extension.\n"
"    name\n"
"    The name given to the oaDoubleAppDef object\n"
"    defValue\n"
"    The default value for this extension\n"
"    persist\n"
"    Saves the oaDoubleAppDef data in the database\n"
"    oacAppDefExists\n"
"  Paramegers: (oaString,oaDouble)\n"
"    Calls: oaDoubleAppDef_oaViaSpec* get(const oaString& name,oaDouble defValue)\n"
"    Signature: get|ptr-oaDoubleAppDef_oaViaSpec|cref-oaString,simple-oaDouble,simple-oaBoolean,\n"
"    This function constructs an oaDoubleAppDef object, creating a double extension with the specified name . You can create a double extension on any object except another extension.\n"
"    name\n"
"    The name given to the oaDoubleAppDef object\n"
"    defValue\n"
"    The default value for this extension\n"
"    persist\n"
"    Saves the oaDoubleAppDef data in the database\n"
"    oacAppDefExists\n"
"  Paramegers: (oaString,oaDouble,oaBoolean)\n"
"    Calls: oaDoubleAppDef_oaViaSpec* get(const oaString& name,oaDouble defValue,oaBoolean persist)\n"
"    Signature: get|ptr-oaDoubleAppDef_oaViaSpec|cref-oaString,simple-oaDouble,simple-oaBoolean,\n"
"    This function constructs an oaDoubleAppDef object, creating a double extension with the specified name . You can create a double extension on any object except another extension.\n"
"    name\n"
"    The name given to the oaDoubleAppDef object\n"
"    defValue\n"
"    The default value for this extension\n"
"    persist\n"
"    Saves the oaDoubleAppDef data in the database\n"
"    oacAppDefExists\n"
"  Paramegers: (oaString,oaAppObjectDef)\n"
"    Calls: oaDoubleAppDef_oaViaSpec* get(const oaString& name,const oaAppObjectDef* objDef)\n"
"    Signature: get|ptr-oaDoubleAppDef_oaViaSpec|cref-oaString,cptr-oaAppObjectDef,simple-oaDouble,simple-oaBoolean,\n"
"    This function constructs an oaDoubleAppDef object, creating a double extension with the specified name for the specified object type.\n"
"    name\n"
"    The name given to the oaDoubleAppDef object\n"
"    objDef\n"
"    The object extension with which to associate the extension\n"
"    defValue\n"
"    An optional default value\n"
"    persist\n"
"    Saves the oaDoubleAppDef data in the database\n"
"    oacAppDefExists\n"
"  Paramegers: (oaString,oaAppObjectDef,oaDouble)\n"
"    Calls: oaDoubleAppDef_oaViaSpec* get(const oaString& name,const oaAppObjectDef* objDef,oaDouble defValue)\n"
"    Signature: get|ptr-oaDoubleAppDef_oaViaSpec|cref-oaString,cptr-oaAppObjectDef,simple-oaDouble,simple-oaBoolean,\n"
"    This function constructs an oaDoubleAppDef object, creating a double extension with the specified name for the specified object type.\n"
"    name\n"
"    The name given to the oaDoubleAppDef object\n"
"    objDef\n"
"    The object extension with which to associate the extension\n"
"    defValue\n"
"    An optional default value\n"
"    persist\n"
"    Saves the oaDoubleAppDef data in the database\n"
"    oacAppDefExists\n"
"  Paramegers: (oaString,oaAppObjectDef,oaDouble,oaBoolean)\n"
"    Calls: oaDoubleAppDef_oaViaSpec* get(const oaString& name,const oaAppObjectDef* objDef,oaDouble defValue,oaBoolean persist)\n"
"    Signature: get|ptr-oaDoubleAppDef_oaViaSpec|cref-oaString,cptr-oaAppObjectDef,simple-oaDouble,simple-oaBoolean,\n"
"    This function constructs an oaDoubleAppDef object, creating a double extension with the specified name for the specified object type.\n"
"    name\n"
"    The name given to the oaDoubleAppDef object\n"
"    objDef\n"
"    The object extension with which to associate the extension\n"
"    defValue\n"
"    An optional default value\n"
"    persist\n"
"    Saves the oaDoubleAppDef data in the database\n"
"    oacAppDefExists\n"
;

static PyObject*
oaDoubleAppDef_oaViaSpec_static_get(PyObject* ob, PyObject *args)
{
  try {
    // Case: (oaString)
    {
        PyParamoaString p1;
        if (PyArg_ParseTuple(args,"O&",
              &PyoaString_Convert,&p1)) {
            oaDoubleAppDef_oaViaSpecp result= (oaDoubleAppDef_oaViaSpec::get(p1.Data()));
            return PyoaDoubleAppDef_oaViaSpec_FromoaDoubleAppDef_oaViaSpec(result);
        }
    }
    PyErr_Clear();
    // Case: (oaString,oaDouble)
    {
        PyParamoaString p1;
        PyParamoaDouble p2;
        if (PyArg_ParseTuple(args,"O&O&",
              &PyoaString_Convert,&p1,
              &PyoaDouble_Convert,&p2)) {
            oaDoubleAppDef_oaViaSpecp result= (oaDoubleAppDef_oaViaSpec::get(p1.Data(),p2.Data()));
            return PyoaDoubleAppDef_oaViaSpec_FromoaDoubleAppDef_oaViaSpec(result);
        }
    }
    PyErr_Clear();
    // Case: (oaString,oaDouble,oaBoolean)
    {
        PyParamoaString p1;
        PyParamoaDouble p2;
        PyParamoaBoolean p3;
        if (PyArg_ParseTuple(args,"O&O&O&",
              &PyoaString_Convert,&p1,
              &PyoaDouble_Convert,&p2,
              &PyoaBoolean_Convert,&p3)) {
            oaDoubleAppDef_oaViaSpecp result= (oaDoubleAppDef_oaViaSpec::get(p1.Data(),p2.Data(),p3.Data()));
            return PyoaDoubleAppDef_oaViaSpec_FromoaDoubleAppDef_oaViaSpec(result);
        }
    }
    PyErr_Clear();
    // Case: (oaString,oaAppObjectDef)
    {
        PyParamoaString p1;
        PyParamoaAppObjectDef p2;
        if (PyArg_ParseTuple(args,"O&O&",
              &PyoaString_Convert,&p1,
              &PyoaAppObjectDef_Convert,&p2)) {
            if (!PyValidateDbObject(p2.Data(),2)) return NULL;
            oaDoubleAppDef_oaViaSpecp result= (oaDoubleAppDef_oaViaSpec::get(p1.Data(),p2.Data()));
            return PyoaDoubleAppDef_oaViaSpec_FromoaDoubleAppDef_oaViaSpec(result);
        }
    }
    PyErr_Clear();
    // Case: (oaString,oaAppObjectDef,oaDouble)
    {
        PyParamoaString p1;
        PyParamoaAppObjectDef p2;
        PyParamoaDouble p3;
        if (PyArg_ParseTuple(args,"O&O&O&",
              &PyoaString_Convert,&p1,
              &PyoaAppObjectDef_Convert,&p2,
              &PyoaDouble_Convert,&p3)) {
            if (!PyValidateDbObject(p2.Data(),2)) return NULL;
            oaDoubleAppDef_oaViaSpecp result= (oaDoubleAppDef_oaViaSpec::get(p1.Data(),p2.Data(),p3.Data()));
            return PyoaDoubleAppDef_oaViaSpec_FromoaDoubleAppDef_oaViaSpec(result);
        }
    }
    PyErr_Clear();
    // Case: (oaString,oaAppObjectDef,oaDouble,oaBoolean)
    {
        PyParamoaString p1;
        PyParamoaAppObjectDef p2;
        PyParamoaDouble p3;
        PyParamoaBoolean p4;
        if (PyArg_ParseTuple(args,"O&O&O&O&",
              &PyoaString_Convert,&p1,
              &PyoaAppObjectDef_Convert,&p2,
              &PyoaDouble_Convert,&p3,
              &PyoaBoolean_Convert,&p4)) {
            if (!PyValidateDbObject(p2.Data(),2)) return NULL;
            oaDoubleAppDef_oaViaSpecp result= (oaDoubleAppDef_oaViaSpec::get(p1.Data(),p2.Data(),p3.Data(),p4.Data()));
            return PyoaDoubleAppDef_oaViaSpec_FromoaDoubleAppDef_oaViaSpec(result);
        }
    }
    PyErr_Clear();
    PyErr_SetString(PyExc_TypeError,
        "No Arg-Matching Function found for class: oaDoubleAppDef_oaViaSpec, function: get, Choices are:\n"
        "    (oaString)\n"
        "    (oaString,oaDouble)\n"
        "    (oaString,oaDouble,oaBoolean)\n"
        "    (oaString,oaAppObjectDef)\n"
        "    (oaString,oaAppObjectDef,oaDouble)\n"
        "    (oaString,oaAppObjectDef,oaDouble,oaBoolean)\n"
    );
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static PyMethodDef oaDoubleAppDef_oaViaSpec_staticmethodlist[] = {
    {"static_find",(PyCFunction)oaDoubleAppDef_oaViaSpec_static_find,METH_VARARGS,oaDoubleAppDef_oaViaSpec_static_find_doc},
    {"static_get",(PyCFunction)oaDoubleAppDef_oaViaSpec_static_get,METH_VARARGS,oaDoubleAppDef_oaViaSpec_static_get_doc},
   {NULL,NULL,0,NULL}
};


// ------------------------------------------------------------------
//  Type Init:
// ------------------------------------------------------------------

int
PyoaDoubleAppDef_oaViaSpec_TypeInit(PyObject* mod_dict)
{
    if (PyType_Ready(&PyoaDoubleAppDef_oaViaSpec_Type)<0) {
      printf("** PyType_Ready failed for: oaDoubleAppDef_oaViaSpec\n");
      return -1;
    }

    if (PyDict_SetItemString(mod_dict,"oaDoubleAppDef_oaViaSpec",
           (PyObject*)(&PyoaDoubleAppDef_oaViaSpec_Type))<0) {
       printf("** Failed to add type name to module dictionary for: oaDoubleAppDef_oaViaSpec\n");
       return -1;
    }

    PyObject *dict, *value;
    PyMethodDef *method;
    dict=PyoaDoubleAppDef_oaViaSpec_Type.tp_dict;
    for(method=oaDoubleAppDef_oaViaSpec_staticmethodlist;method->ml_name!=NULL;method++) {
        value=PyCFunction_New(method,NULL);
    if (value==NULL) return -1;
        if (PyDict_SetItemString(dict,method->ml_name,value)!=0) {
        Py_DECREF(value);
            printf("** Failed to add static function to module dictionary for: %s\n",
                method->ml_name);
            return -1;
        }
        Py_DECREF(value);
    }
    return 0;
}


/********************************************************************
 *   Copyright 2002-2008  LSI Corporation
 *
 *   Licensed under the Apache License, Version 2.0 (the "License");
 *   you may not use this file except in compliance with the License.
 *   You may obtain a copy of the License at
 *
 *       http://www.apache.org/licenses/LICENSE-2.0
 *
 *   Unless required by applicable law or agreed to in writing, software
 *   distributed under the License is distributed on an "AS IS" BASIS,
 *   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *   See the License for the specific language governing permissions and
 *   limitations under the License.
 *
 *******************************************************************/

#include "pyoa_header.h"


// ==================================================================
// Wrapper Implementation for Class: oaDoubleAppDef_oaView
// ==================================================================


// ==================================================================
// Alloc/Dealloc Routines
// ==================================================================

// ------------------------------------------------------------------
static PyObject*
oaDoubleAppDef_oaView_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
  try {
    int is_raw=(type==&PyoaDoubleAppDef_oaView_Type);
    PyObject* bself = type->tp_alloc(type,0);
    if (bself == NULL) return bself;
    PyoaDoubleAppDef_oaViewObject* self = (PyoaDoubleAppDef_oaViewObject*)bself;
    self->locks = NULL;
    self->borrow = 0;
    static char *kwlist [] = { NULL } ;
    // Case: (oaDoubleAppDef_oaView)
    {
        PyParamoaDoubleAppDef_oaView p1;
        if (PyArg_ParseTuple(args,(char*)"O&",
              &PyoaDoubleAppDef_oaView_Convert,&p1)) {
            self->data=p1.Data();
            self->value=&(self->data);
            return bself;
        }
    }
    PyErr_Clear();
    // Case: ()
    {
        if (PyArg_ParseTuple(args,(char*)"")) {
          self->data=NULL;
          self->value=&(self->data);
          return bself;
        }
    }
    PyErr_Clear();
    PyErr_SetString(PyExc_TypeError,
        "No Arg-Matching Constructor found for class: oaDoubleAppDef_oaView, Choices are:\n"
        "    (oaDoubleAppDef_oaView)\n"
    );
    Py_DECREF(self);
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static void
oaDoubleAppDef_oaView_tp_dealloc(PyoaDoubleAppDef_oaViewObject* self)
{
    self->ob_type->tp_free((PyObject*)self);
}

// ------------------------------------------------------------------
static PyObject*
oaDoubleAppDef_oaView_tp_repr(PyObject *ob)
{
    PyParamoaDoubleAppDef_oaView value;
    int convert_status=PyoaDoubleAppDef_oaView_Convert(ob,&value);
    assert(convert_status!=0);
    PyObject* result;

    char buffer[43];
    sprintf(buffer,"<oaDoubleAppDef_oaView::" DISPLAY_FORMAT ">",POINTER_AS_DISPLAY(value.DataCall()));
    result=PyString_FromString(buffer);
    return result;
}
        
// ------------------------------------------------------------------
static int
oaDoubleAppDef_oaView_tp_compare(PyObject *ob1,PyObject* ob2)
{
    PyParamoaDoubleAppDef_oaView v1;
    PyParamoaDoubleAppDef_oaView v2;
    int convert_status1=PyoaDoubleAppDef_oaView_Convert(ob1,&v1);
    int convert_status2=PyoaDoubleAppDef_oaView_Convert(ob2,&v2);
    assert(convert_status1!=0);
    assert(convert_status2!=0);
    if (v1.DataCall()==v2.DataCall()) return 0;
    return 1;
}
        
// ------------------------------------------------------------------
int
PyoaDoubleAppDef_oaView_Convert(PyObject* ob,PyParamoaDoubleAppDef_oaView* result)
{
    if (ob == NULL) return 1;
    if (PyoaDoubleAppDef_oaView_Check(ob)) {
        result->SetData( (oaDoubleAppDef_oaView**) ((PyoaDoubleAppDef_oaViewObject*)ob)->value);
        return 1;
    }
    PyErr_SetString(PyExc_TypeError,
        "Convertion of parameter to class: oaDoubleAppDef_oaView Failed");
    return 0;
}
// ------------------------------------------------------------------
PyObject* PyoaDoubleAppDef_oaView_FromoaDoubleAppDef_oaView(oaDoubleAppDef_oaView** value,int borrow,PyObject* lock)
{
    if (value && *value) {
        oaDoubleAppDef_oaView* data=*value;
        PyObject* bself = PyoaDoubleAppDef_oaView_Type.tp_alloc(&PyoaDoubleAppDef_oaView_Type,0);
        if (bself == NULL) return bself;
        PyoaDoubleAppDef_oaViewObject* self = (PyoaDoubleAppDef_oaViewObject*)bself;
        self->value = (oaObject**) value;
        self->data = NULL;
        self->locks = NULL;
        self->borrow = 0; // Ignore borrow flag, since we copied
       if (lock) PyoaLockObject(self->locks,lock);
        return bself;
    }
    Py_INCREF(Py_None);
    return Py_None;
}
// ------------------------------------------------------------------
PyObject* PyoaDoubleAppDef_oaView_FromoaDoubleAppDef_oaView(oaDoubleAppDef_oaView* data)
{
    if (data) {
       PyObject* bself = PyoaDoubleAppDef_oaView_Type.tp_alloc(&PyoaDoubleAppDef_oaView_Type,0);
       if (bself == NULL) return bself;
       PyoaDoubleAppDef_oaViewObject* self = (PyoaDoubleAppDef_oaViewObject*)bself;
       self->data = (oaObject*) data;
       self->value = &(self->data);
       self->borrow = 0; 
       self->locks = NULL;
       return bself;
    }
    Py_INCREF(Py_None);
    return Py_None;
}

// ------------------------------------------------------------------
// FunctionMethods:
// ------------------------------------------------------------------

// ------------------------------------------------------------------
static char oaDoubleAppDef_oaView_get_doc[] = 
"Class: oaDoubleAppDef_oaView, Function: get\n"
"  Paramegers: (oaView)\n"
"    Calls: oaDouble get(const oaView* object)\n"
"    Signature: get|simple-oaDouble|cptr-oaView,\n"
"    This function returns the value of this double extension.\n"
"    object\n"
"    The object for which to get the value\n"
;

static PyObject*
oaDoubleAppDef_oaView_get(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaDoubleAppDef_oaView data;
    int convert_status=PyoaDoubleAppDef_oaView_Convert(ob,&data);
    assert(convert_status!=0);
    PyoaDoubleAppDef_oaViewObject* self=(PyoaDoubleAppDef_oaViewObject*)ob;
    if (!PyValidateDbObject(data.Data(),0)) return NULL;

    PyParamoaView p1;
    if (PyArg_ParseTuple(args,"O&",
          &PyoaView_Convert,&p1)) {
        if (!PyValidateDbObject(p1.Data(),1)) return NULL;
        oaDouble result= (data.DataCall()->get(p1.Data()));
        return PyoaDouble_FromoaDouble(result);
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaDoubleAppDef_oaView_getDefault_doc[] = 
"Class: oaDoubleAppDef_oaView, Function: getDefault\n"
"  Paramegers: ()\n"
"    Calls: oaDouble getDefault() const\n"
"    Signature: getDefault|simple-oaDouble|\n"
"    BrowseData: 1\n"
"    This function returns the default value of this double extension.\n"
;

static PyObject*
oaDoubleAppDef_oaView_getDefault(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaDoubleAppDef_oaView data;
    int convert_status=PyoaDoubleAppDef_oaView_Convert(ob,&data);
    assert(convert_status!=0);
    PyoaDoubleAppDef_oaViewObject* self=(PyoaDoubleAppDef_oaViewObject*)ob;
    if (!PyValidateDbObject(data.Data(),0)) return NULL;

    if (PyArg_ParseTuple(args,"")) {
        oaDouble result= (data.DataCall()->getDefault());
        return PyoaDouble_FromoaDouble(result);
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaDoubleAppDef_oaView_set_doc[] = 
"Class: oaDoubleAppDef_oaView, Function: set\n"
"  Paramegers: (oaView,oaDouble)\n"
"    Calls: void set(oaView* object,oaDouble value)\n"
"    Signature: set|void-void|ptr-oaView,simple-oaDouble,\n"
"    This function sets the value of this double extension.\n"
"    object\n"
"    The object on which to set the value\n"
"    value\n"
"    The value to set on the object\n"
;

static PyObject*
oaDoubleAppDef_oaView_set(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaDoubleAppDef_oaView data;
    int convert_status=PyoaDoubleAppDef_oaView_Convert(ob,&data);
    assert(convert_status!=0);
    PyoaDoubleAppDef_oaViewObject* self=(PyoaDoubleAppDef_oaViewObject*)ob;
    if (!PyValidateDbObject(data.Data(),0)) return NULL;

    PyParamoaView p1;
    PyParamoaDouble p2;
    if (PyArg_ParseTuple(args,"O&O&",
          &PyoaView_Convert,&p1,
          &PyoaDouble_Convert,&p2)) {
        if (!PyValidateDbObject(p1.Data(),1)) return NULL;
        data.DataCall()->set(p1.Data(),p2.Data());
        Py_INCREF(Py_None);
        return Py_None;
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaDoubleAppDef_oaView_isNull_doc[] =
"Class: oaDoubleAppDef_oaView, Function: isNull\n"
"  Parameters: () \n"
"    This functions returns 1 if the DbPointer is NULL, and 0 otherwise.\n"
;

static PyObject*
oaDoubleAppDef_oaView_tp_isNull(PyObject* ob, PyObject *args)
{
    PyParamoaDoubleAppDef_oaView data;
    int convert_status=PyoaDoubleAppDef_oaView_Convert(ob,&data);
    assert(convert_status!=0);
    if (data.DataCall()==NULL)
        return PyInt_FromLong(1);
    else
        return PyInt_FromLong(0);
}
static char oaDoubleAppDef_oaView_assign_doc[] = 
"Class: oaDoubleAppDef_oaView, Function: set\n"
"  Paramegers: (oaDouble)\n"
"    This function sets the current value.\n"
;

static PyObject*
oaDoubleAppDef_oaView_tp_assign(PyObject* ob, PyObject *args)
{
  PyParamoaDoubleAppDef_oaView data;
  int convert_status=PyoaDoubleAppDef_oaView_Convert(ob,&data);
  assert(convert_status!=0);
  try {
    PyParamoaDoubleAppDef_oaView p1;
    if (PyArg_ParseTuple(args,(char*)"O&",
          &PyoaDoubleAppDef_oaView_Convert,&p1)) {
        data.Data()=p1.Data();
        Py_INCREF(ob);
        return ob;
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}


// ------------------------------------------------------------------
//  Function Methods Table:
// ------------------------------------------------------------------

static PyMethodDef oaDoubleAppDef_oaView_methodlist[] = {
    {"get",(PyCFunction)oaDoubleAppDef_oaView_get,METH_VARARGS,oaDoubleAppDef_oaView_get_doc},
    {"getDefault",(PyCFunction)oaDoubleAppDef_oaView_getDefault,METH_VARARGS,oaDoubleAppDef_oaView_getDefault_doc},
    {"set",(PyCFunction)oaDoubleAppDef_oaView_set,METH_VARARGS,oaDoubleAppDef_oaView_set_doc},
    {"isNull",(PyCFunction)oaDoubleAppDef_oaView_tp_isNull,METH_VARARGS,oaDoubleAppDef_oaView_isNull_doc},
    {"assign",(PyCFunction)oaDoubleAppDef_oaView_tp_assign,METH_VARARGS,oaDoubleAppDef_oaView_assign_doc},
   {NULL,NULL,0,NULL}
};


// ------------------------------------------------------------------
//  Type Object:
// ------------------------------------------------------------------

// ------------------------------------------------------------------
static char oaDoubleAppDef_oaView_doc[] = 
"Class: oaDoubleAppDef_oaView\n"
"  The oaDoubleAppDef class implements an application-specific extension for a particular type of data in a database.\n"
"  Once created, a double field is added to each object of the specified dataType. The default value for this extension is DBL_MAX. Applications can use the new field for whatever purpose is necessary.\n"
"  For additional information on defining and using AppDefs, see oaAppDef and Extending the Database in the Programmer's Guide.\n"
"Constructors:\n"
"  Paramegers: (oaDoubleAppDef_oaView)\n"
"    Calls: (const oaDoubleAppDef_oaView&)\n"
"    Signature: oaDoubleAppDef_oaView||cref-oaDoubleAppDef_oaView,\n"
;

// ------------------------------------------------------------------
PyTypeObject PyoaDoubleAppDef_oaView_Type = {
    PyObject_HEAD_INIT(&PyType_Type)
    0,
    "oaDoubleAppDef_oaView",
    sizeof(PyoaDoubleAppDef_oaViewObject),
    0,
    (destructor)oaDoubleAppDef_oaView_tp_dealloc,	/* tp_dealloc */
    0,	/* tp_print */
    0,					/* tp_getattr */
    0,					/* tp_setattr */
    (cmpfunc)oaDoubleAppDef_oaView_tp_compare,	/* tp_compare */
    (reprfunc)oaDoubleAppDef_oaView_tp_repr,	/* tp_repr */
    0,					/* tp_as_number */
    0,					/* tp_as_sequence */
    0,					/* tp_as_mapping */
    0,					/* tp_as_hash */
    0,					/* tp_as_call */
    0,					/* tp_str */
    0,					/* tp_getattro */
    0,					/* tp_setattro */
    0,					/* tp_as_buffer */
    Py_TPFLAGS_DEFAULT|Py_TPFLAGS_BASETYPE, /* tp_flags */
    oaDoubleAppDef_oaView_doc,	/* tp_doc */
    0,					/* tp_traverse */
    0,					/* tp_clear */
    0,					/* tp_richcompre */
    0,					/* tp_weaklistoffset */
    0,					/* tp_iter */
    0,					/* tp_iternext */
    oaDoubleAppDef_oaView_methodlist,	/* tp_methods */
    0,					/* tp_members */
    0,					/* tp_getset */
    &PyoaAppDef_Type,	/* tp_base */
    0,					/* tp_dict */
    0,					/* tp_descr_get */
    0,					/* tp_descr_set */
    0,					/* tp_dictoffset */
    0,					/* tp_init */
    PyType_GenericAlloc,	/* tp_alloc */
    oaDoubleAppDef_oaView_new,	/* tp_new */
    _PyObject_Del,	/* tp_free */
};


// ------------------------------------------------------------------
// Static FunctionMethods:
// ------------------------------------------------------------------

// ------------------------------------------------------------------
static char oaDoubleAppDef_oaView_static_find_doc[] = 
"Class: oaDoubleAppDef_oaView, Function: find\n"
"  Paramegers: (oaString)\n"
"    Calls: oaDoubleAppDef_oaView* find(const oaString& name)\n"
"    Signature: find|ptr-oaDoubleAppDef_oaView|cref-oaString,\n"
"    This function returns an oaDoubleAppDef object with this dataType and the specified 'name' if it exists.\n"
"    name\n"
"    The name of the oaAppDef object to look for\n"
"  Paramegers: (oaString,oaAppObjectDef)\n"
"    Calls: oaDoubleAppDef_oaView* find(const oaString& name,const oaAppObjectDef* objDef)\n"
"    Signature: find|ptr-oaDoubleAppDef_oaView|cref-oaString,cptr-oaAppObjectDef,\n"
"    This function returns an oaDoubleAppDef object with this dataType and the specified 'name' that is associated with the specified object extension 'objDef'.\n"
"    name\n"
"    The name of the oaAppDef object to look for\n"
"    objDef\n"
"    A constant pointer to the object extension\n"
;

static PyObject*
oaDoubleAppDef_oaView_static_find(PyObject* ob, PyObject *args)
{
  try {
    // Case: (oaString)
    {
        PyParamoaString p1;
        if (PyArg_ParseTuple(args,"O&",
              &PyoaString_Convert,&p1)) {
            oaDoubleAppDef_oaViewp result= (oaDoubleAppDef_oaView::find(p1.Data()));
            return PyoaDoubleAppDef_oaView_FromoaDoubleAppDef_oaView(result);
        }
    }
    PyErr_Clear();
    // Case: (oaString,oaAppObjectDef)
    {
        PyParamoaString p1;
        PyParamoaAppObjectDef p2;
        if (PyArg_ParseTuple(args,"O&O&",
              &PyoaString_Convert,&p1,
              &PyoaAppObjectDef_Convert,&p2)) {
            if (!PyValidateDbObject(p2.Data(),2)) return NULL;
            oaDoubleAppDef_oaViewp result= (oaDoubleAppDef_oaView::find(p1.Data(),p2.Data()));
            return PyoaDoubleAppDef_oaView_FromoaDoubleAppDef_oaView(result);
        }
    }
    PyErr_Clear();
    PyErr_SetString(PyExc_TypeError,
        "No Arg-Matching Function found for class: oaDoubleAppDef_oaView, function: find, Choices are:\n"
        "    (oaString)\n"
        "    (oaString,oaAppObjectDef)\n"
    );
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaDoubleAppDef_oaView_static_get_doc[] = 
"Class: oaDoubleAppDef_oaView, Function: get\n"
"  Paramegers: (oaString)\n"
"    Calls: oaDoubleAppDef_oaView* get(const oaString& name)\n"
"    Signature: get|ptr-oaDoubleAppDef_oaView|cref-oaString,simple-oaDouble,simple-oaBoolean,\n"
"    This function constructs an oaDoubleAppDef object, creating a double extension with the specified name . You can create a double extension on any object except another extension.\n"
"    name\n"
"    The name given to the oaDoubleAppDef object\n"
"    defValue\n"
"    The default value for this extension\n"
"    persist\n"
"    Saves the oaDoubleAppDef data in the database\n"
"    oacAppDefExists\n"
"  Paramegers: (oaString,oaDouble)\n"
"    Calls: oaDoubleAppDef_oaView* get(const oaString& name,oaDouble defValue)\n"
"    Signature: get|ptr-oaDoubleAppDef_oaView|cref-oaString,simple-oaDouble,simple-oaBoolean,\n"
"    This function constructs an oaDoubleAppDef object, creating a double extension with the specified name . You can create a double extension on any object except another extension.\n"
"    name\n"
"    The name given to the oaDoubleAppDef object\n"
"    defValue\n"
"    The default value for this extension\n"
"    persist\n"
"    Saves the oaDoubleAppDef data in the database\n"
"    oacAppDefExists\n"
"  Paramegers: (oaString,oaDouble,oaBoolean)\n"
"    Calls: oaDoubleAppDef_oaView* get(const oaString& name,oaDouble defValue,oaBoolean persist)\n"
"    Signature: get|ptr-oaDoubleAppDef_oaView|cref-oaString,simple-oaDouble,simple-oaBoolean,\n"
"    This function constructs an oaDoubleAppDef object, creating a double extension with the specified name . You can create a double extension on any object except another extension.\n"
"    name\n"
"    The name given to the oaDoubleAppDef object\n"
"    defValue\n"
"    The default value for this extension\n"
"    persist\n"
"    Saves the oaDoubleAppDef data in the database\n"
"    oacAppDefExists\n"
"  Paramegers: (oaString,oaAppObjectDef)\n"
"    Calls: oaDoubleAppDef_oaView* get(const oaString& name,const oaAppObjectDef* objDef)\n"
"    Signature: get|ptr-oaDoubleAppDef_oaView|cref-oaString,cptr-oaAppObjectDef,simple-oaDouble,simple-oaBoolean,\n"
"    This function constructs an oaDoubleAppDef object, creating a double extension with the specified name for the specified object type.\n"
"    name\n"
"    The name given to the oaDoubleAppDef object\n"
"    objDef\n"
"    The object extension with which to associate the extension\n"
"    defValue\n"
"    An optional default value\n"
"    persist\n"
"    Saves the oaDoubleAppDef data in the database\n"
"    oacAppDefExists\n"
"  Paramegers: (oaString,oaAppObjectDef,oaDouble)\n"
"    Calls: oaDoubleAppDef_oaView* get(const oaString& name,const oaAppObjectDef* objDef,oaDouble defValue)\n"
"    Signature: get|ptr-oaDoubleAppDef_oaView|cref-oaString,cptr-oaAppObjectDef,simple-oaDouble,simple-oaBoolean,\n"
"    This function constructs an oaDoubleAppDef object, creating a double extension with the specified name for the specified object type.\n"
"    name\n"
"    The name given to the oaDoubleAppDef object\n"
"    objDef\n"
"    The object extension with which to associate the extension\n"
"    defValue\n"
"    An optional default value\n"
"    persist\n"
"    Saves the oaDoubleAppDef data in the database\n"
"    oacAppDefExists\n"
"  Paramegers: (oaString,oaAppObjectDef,oaDouble,oaBoolean)\n"
"    Calls: oaDoubleAppDef_oaView* get(const oaString& name,const oaAppObjectDef* objDef,oaDouble defValue,oaBoolean persist)\n"
"    Signature: get|ptr-oaDoubleAppDef_oaView|cref-oaString,cptr-oaAppObjectDef,simple-oaDouble,simple-oaBoolean,\n"
"    This function constructs an oaDoubleAppDef object, creating a double extension with the specified name for the specified object type.\n"
"    name\n"
"    The name given to the oaDoubleAppDef object\n"
"    objDef\n"
"    The object extension with which to associate the extension\n"
"    defValue\n"
"    An optional default value\n"
"    persist\n"
"    Saves the oaDoubleAppDef data in the database\n"
"    oacAppDefExists\n"
;

static PyObject*
oaDoubleAppDef_oaView_static_get(PyObject* ob, PyObject *args)
{
  try {
    // Case: (oaString)
    {
        PyParamoaString p1;
        if (PyArg_ParseTuple(args,"O&",
              &PyoaString_Convert,&p1)) {
            oaDoubleAppDef_oaViewp result= (oaDoubleAppDef_oaView::get(p1.Data()));
            return PyoaDoubleAppDef_oaView_FromoaDoubleAppDef_oaView(result);
        }
    }
    PyErr_Clear();
    // Case: (oaString,oaDouble)
    {
        PyParamoaString p1;
        PyParamoaDouble p2;
        if (PyArg_ParseTuple(args,"O&O&",
              &PyoaString_Convert,&p1,
              &PyoaDouble_Convert,&p2)) {
            oaDoubleAppDef_oaViewp result= (oaDoubleAppDef_oaView::get(p1.Data(),p2.Data()));
            return PyoaDoubleAppDef_oaView_FromoaDoubleAppDef_oaView(result);
        }
    }
    PyErr_Clear();
    // Case: (oaString,oaDouble,oaBoolean)
    {
        PyParamoaString p1;
        PyParamoaDouble p2;
        PyParamoaBoolean p3;
        if (PyArg_ParseTuple(args,"O&O&O&",
              &PyoaString_Convert,&p1,
              &PyoaDouble_Convert,&p2,
              &PyoaBoolean_Convert,&p3)) {
            oaDoubleAppDef_oaViewp result= (oaDoubleAppDef_oaView::get(p1.Data(),p2.Data(),p3.Data()));
            return PyoaDoubleAppDef_oaView_FromoaDoubleAppDef_oaView(result);
        }
    }
    PyErr_Clear();
    // Case: (oaString,oaAppObjectDef)
    {
        PyParamoaString p1;
        PyParamoaAppObjectDef p2;
        if (PyArg_ParseTuple(args,"O&O&",
              &PyoaString_Convert,&p1,
              &PyoaAppObjectDef_Convert,&p2)) {
            if (!PyValidateDbObject(p2.Data(),2)) return NULL;
            oaDoubleAppDef_oaViewp result= (oaDoubleAppDef_oaView::get(p1.Data(),p2.Data()));
            return PyoaDoubleAppDef_oaView_FromoaDoubleAppDef_oaView(result);
        }
    }
    PyErr_Clear();
    // Case: (oaString,oaAppObjectDef,oaDouble)
    {
        PyParamoaString p1;
        PyParamoaAppObjectDef p2;
        PyParamoaDouble p3;
        if (PyArg_ParseTuple(args,"O&O&O&",
              &PyoaString_Convert,&p1,
              &PyoaAppObjectDef_Convert,&p2,
              &PyoaDouble_Convert,&p3)) {
            if (!PyValidateDbObject(p2.Data(),2)) return NULL;
            oaDoubleAppDef_oaViewp result= (oaDoubleAppDef_oaView::get(p1.Data(),p2.Data(),p3.Data()));
            return PyoaDoubleAppDef_oaView_FromoaDoubleAppDef_oaView(result);
        }
    }
    PyErr_Clear();
    // Case: (oaString,oaAppObjectDef,oaDouble,oaBoolean)
    {
        PyParamoaString p1;
        PyParamoaAppObjectDef p2;
        PyParamoaDouble p3;
        PyParamoaBoolean p4;
        if (PyArg_ParseTuple(args,"O&O&O&O&",
              &PyoaString_Convert,&p1,
              &PyoaAppObjectDef_Convert,&p2,
              &PyoaDouble_Convert,&p3,
              &PyoaBoolean_Convert,&p4)) {
            if (!PyValidateDbObject(p2.Data(),2)) return NULL;
            oaDoubleAppDef_oaViewp result= (oaDoubleAppDef_oaView::get(p1.Data(),p2.Data(),p3.Data(),p4.Data()));
            return PyoaDoubleAppDef_oaView_FromoaDoubleAppDef_oaView(result);
        }
    }
    PyErr_Clear();
    PyErr_SetString(PyExc_TypeError,
        "No Arg-Matching Function found for class: oaDoubleAppDef_oaView, function: get, Choices are:\n"
        "    (oaString)\n"
        "    (oaString,oaDouble)\n"
        "    (oaString,oaDouble,oaBoolean)\n"
        "    (oaString,oaAppObjectDef)\n"
        "    (oaString,oaAppObjectDef,oaDouble)\n"
        "    (oaString,oaAppObjectDef,oaDouble,oaBoolean)\n"
    );
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static PyMethodDef oaDoubleAppDef_oaView_staticmethodlist[] = {
    {"static_find",(PyCFunction)oaDoubleAppDef_oaView_static_find,METH_VARARGS,oaDoubleAppDef_oaView_static_find_doc},
    {"static_get",(PyCFunction)oaDoubleAppDef_oaView_static_get,METH_VARARGS,oaDoubleAppDef_oaView_static_get_doc},
   {NULL,NULL,0,NULL}
};


// ------------------------------------------------------------------
//  Type Init:
// ------------------------------------------------------------------

int
PyoaDoubleAppDef_oaView_TypeInit(PyObject* mod_dict)
{
    if (PyType_Ready(&PyoaDoubleAppDef_oaView_Type)<0) {
      printf("** PyType_Ready failed for: oaDoubleAppDef_oaView\n");
      return -1;
    }

    if (PyDict_SetItemString(mod_dict,"oaDoubleAppDef_oaView",
           (PyObject*)(&PyoaDoubleAppDef_oaView_Type))<0) {
       printf("** Failed to add type name to module dictionary for: oaDoubleAppDef_oaView\n");
       return -1;
    }

    PyObject *dict, *value;
    PyMethodDef *method;
    dict=PyoaDoubleAppDef_oaView_Type.tp_dict;
    for(method=oaDoubleAppDef_oaView_staticmethodlist;method->ml_name!=NULL;method++) {
        value=PyCFunction_New(method,NULL);
    if (value==NULL) return -1;
        if (PyDict_SetItemString(dict,method->ml_name,value)!=0) {
        Py_DECREF(value);
            printf("** Failed to add static function to module dictionary for: %s\n",
                method->ml_name);
            return -1;
        }
        Py_DECREF(value);
    }
    return 0;
}


/********************************************************************
 *   Copyright 2002-2008  LSI Corporation
 *
 *   Licensed under the Apache License, Version 2.0 (the "License");
 *   you may not use this file except in compliance with the License.
 *   You may obtain a copy of the License at
 *
 *       http://www.apache.org/licenses/LICENSE-2.0
 *
 *   Unless required by applicable law or agreed to in writing, software
 *   distributed under the License is distributed on an "AS IS" BASIS,
 *   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *   See the License for the specific language governing permissions and
 *   limitations under the License.
 *
 *******************************************************************/

#include "pyoa_header.h"


// ==================================================================
// Wrapper Implementation for Class: oaDoubleAppDef_oaWafer
// ==================================================================


// ==================================================================
// Alloc/Dealloc Routines
// ==================================================================

// ------------------------------------------------------------------
static PyObject*
oaDoubleAppDef_oaWafer_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
  try {
    int is_raw=(type==&PyoaDoubleAppDef_oaWafer_Type);
    PyObject* bself = type->tp_alloc(type,0);
    if (bself == NULL) return bself;
    PyoaDoubleAppDef_oaWaferObject* self = (PyoaDoubleAppDef_oaWaferObject*)bself;
    self->locks = NULL;
    self->borrow = 0;
    static char *kwlist [] = { NULL } ;
    // Case: (oaDoubleAppDef_oaWafer)
    {
        PyParamoaDoubleAppDef_oaWafer p1;
        if (PyArg_ParseTuple(args,(char*)"O&",
              &PyoaDoubleAppDef_oaWafer_Convert,&p1)) {
            self->data=p1.Data();
            self->value=&(self->data);
            return bself;
        }
    }
    PyErr_Clear();
    // Case: ()
    {
        if (PyArg_ParseTuple(args,(char*)"")) {
          self->data=NULL;
          self->value=&(self->data);
          return bself;
        }
    }
    PyErr_Clear();
    PyErr_SetString(PyExc_TypeError,
        "No Arg-Matching Constructor found for class: oaDoubleAppDef_oaWafer, Choices are:\n"
        "    (oaDoubleAppDef_oaWafer)\n"
    );
    Py_DECREF(self);
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static void
oaDoubleAppDef_oaWafer_tp_dealloc(PyoaDoubleAppDef_oaWaferObject* self)
{
    self->ob_type->tp_free((PyObject*)self);
}

// ------------------------------------------------------------------
static PyObject*
oaDoubleAppDef_oaWafer_tp_repr(PyObject *ob)
{
    PyParamoaDoubleAppDef_oaWafer value;
    int convert_status=PyoaDoubleAppDef_oaWafer_Convert(ob,&value);
    assert(convert_status!=0);
    PyObject* result;

    char buffer[44];
    sprintf(buffer,"<oaDoubleAppDef_oaWafer::" DISPLAY_FORMAT ">",POINTER_AS_DISPLAY(value.DataCall()));
    result=PyString_FromString(buffer);
    return result;
}
        
// ------------------------------------------------------------------
static int
oaDoubleAppDef_oaWafer_tp_compare(PyObject *ob1,PyObject* ob2)
{
    PyParamoaDoubleAppDef_oaWafer v1;
    PyParamoaDoubleAppDef_oaWafer v2;
    int convert_status1=PyoaDoubleAppDef_oaWafer_Convert(ob1,&v1);
    int convert_status2=PyoaDoubleAppDef_oaWafer_Convert(ob2,&v2);
    assert(convert_status1!=0);
    assert(convert_status2!=0);
    if (v1.DataCall()==v2.DataCall()) return 0;
    return 1;
}
        
// ------------------------------------------------------------------
int
PyoaDoubleAppDef_oaWafer_Convert(PyObject* ob,PyParamoaDoubleAppDef_oaWafer* result)
{
    if (ob == NULL) return 1;
    if (PyoaDoubleAppDef_oaWafer_Check(ob)) {
        result->SetData( (oaDoubleAppDef_oaWafer**) ((PyoaDoubleAppDef_oaWaferObject*)ob)->value);
        return 1;
    }
    PyErr_SetString(PyExc_TypeError,
        "Convertion of parameter to class: oaDoubleAppDef_oaWafer Failed");
    return 0;
}
// ------------------------------------------------------------------
PyObject* PyoaDoubleAppDef_oaWafer_FromoaDoubleAppDef_oaWafer(oaDoubleAppDef_oaWafer** value,int borrow,PyObject* lock)
{
    if (value && *value) {
        oaDoubleAppDef_oaWafer* data=*value;
        PyObject* bself = PyoaDoubleAppDef_oaWafer_Type.tp_alloc(&PyoaDoubleAppDef_oaWafer_Type,0);
        if (bself == NULL) return bself;
        PyoaDoubleAppDef_oaWaferObject* self = (PyoaDoubleAppDef_oaWaferObject*)bself;
        self->value = (oaObject**) value;
        self->data = NULL;
        self->locks = NULL;
        self->borrow = 0; // Ignore borrow flag, since we copied
       if (lock) PyoaLockObject(self->locks,lock);
        return bself;
    }
    Py_INCREF(Py_None);
    return Py_None;
}
// ------------------------------------------------------------------
PyObject* PyoaDoubleAppDef_oaWafer_FromoaDoubleAppDef_oaWafer(oaDoubleAppDef_oaWafer* data)
{
    if (data) {
       PyObject* bself = PyoaDoubleAppDef_oaWafer_Type.tp_alloc(&PyoaDoubleAppDef_oaWafer_Type,0);
       if (bself == NULL) return bself;
       PyoaDoubleAppDef_oaWaferObject* self = (PyoaDoubleAppDef_oaWaferObject*)bself;
       self->data = (oaObject*) data;
       self->value = &(self->data);
       self->borrow = 0; 
       self->locks = NULL;
       return bself;
    }
    Py_INCREF(Py_None);
    return Py_None;
}

// ------------------------------------------------------------------
// FunctionMethods:
// ------------------------------------------------------------------

// ------------------------------------------------------------------
static char oaDoubleAppDef_oaWafer_get_doc[] = 
"Class: oaDoubleAppDef_oaWafer, Function: get\n"
"  Paramegers: (oaWafer)\n"
"    Calls: oaDouble get(const oaWafer* object)\n"
"    Signature: get|simple-oaDouble|cptr-oaWafer,\n"
"    This function returns the value of this double extension.\n"
"    object\n"
"    The object for which to get the value\n"
;

static PyObject*
oaDoubleAppDef_oaWafer_get(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaDoubleAppDef_oaWafer data;
    int convert_status=PyoaDoubleAppDef_oaWafer_Convert(ob,&data);
    assert(convert_status!=0);
    PyoaDoubleAppDef_oaWaferObject* self=(PyoaDoubleAppDef_oaWaferObject*)ob;
    if (!PyValidateDbObject(data.Data(),0)) return NULL;

    PyParamoaWafer p1;
    if (PyArg_ParseTuple(args,"O&",
          &PyoaWafer_Convert,&p1)) {
        if (!PyValidateDbObject(p1.Data(),1)) return NULL;
        oaDouble result= (data.DataCall()->get(p1.Data()));
        return PyoaDouble_FromoaDouble(result);
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaDoubleAppDef_oaWafer_getDefault_doc[] = 
"Class: oaDoubleAppDef_oaWafer, Function: getDefault\n"
"  Paramegers: ()\n"
"    Calls: oaDouble getDefault() const\n"
"    Signature: getDefault|simple-oaDouble|\n"
"    BrowseData: 1\n"
"    This function returns the default value of this double extension.\n"
;

static PyObject*
oaDoubleAppDef_oaWafer_getDefault(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaDoubleAppDef_oaWafer data;
    int convert_status=PyoaDoubleAppDef_oaWafer_Convert(ob,&data);
    assert(convert_status!=0);
    PyoaDoubleAppDef_oaWaferObject* self=(PyoaDoubleAppDef_oaWaferObject*)ob;
    if (!PyValidateDbObject(data.Data(),0)) return NULL;

    if (PyArg_ParseTuple(args,"")) {
        oaDouble result= (data.DataCall()->getDefault());
        return PyoaDouble_FromoaDouble(result);
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaDoubleAppDef_oaWafer_set_doc[] = 
"Class: oaDoubleAppDef_oaWafer, Function: set\n"
"  Paramegers: (oaWafer,oaDouble)\n"
"    Calls: void set(oaWafer* object,oaDouble value)\n"
"    Signature: set|void-void|ptr-oaWafer,simple-oaDouble,\n"
"    This function sets the value of this double extension.\n"
"    object\n"
"    The object on which to set the value\n"
"    value\n"
"    The value to set on the object\n"
;

static PyObject*
oaDoubleAppDef_oaWafer_set(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaDoubleAppDef_oaWafer data;
    int convert_status=PyoaDoubleAppDef_oaWafer_Convert(ob,&data);
    assert(convert_status!=0);
    PyoaDoubleAppDef_oaWaferObject* self=(PyoaDoubleAppDef_oaWaferObject*)ob;
    if (!PyValidateDbObject(data.Data(),0)) return NULL;

    PyParamoaWafer p1;
    PyParamoaDouble p2;
    if (PyArg_ParseTuple(args,"O&O&",
          &PyoaWafer_Convert,&p1,
          &PyoaDouble_Convert,&p2)) {
        if (!PyValidateDbObject(p1.Data(),1)) return NULL;
        data.DataCall()->set(p1.Data(),p2.Data());
        Py_INCREF(Py_None);
        return Py_None;
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaDoubleAppDef_oaWafer_isNull_doc[] =
"Class: oaDoubleAppDef_oaWafer, Function: isNull\n"
"  Parameters: () \n"
"    This functions returns 1 if the DbPointer is NULL, and 0 otherwise.\n"
;

static PyObject*
oaDoubleAppDef_oaWafer_tp_isNull(PyObject* ob, PyObject *args)
{
    PyParamoaDoubleAppDef_oaWafer data;
    int convert_status=PyoaDoubleAppDef_oaWafer_Convert(ob,&data);
    assert(convert_status!=0);
    if (data.DataCall()==NULL)
        return PyInt_FromLong(1);
    else
        return PyInt_FromLong(0);
}
static char oaDoubleAppDef_oaWafer_assign_doc[] = 
"Class: oaDoubleAppDef_oaWafer, Function: set\n"
"  Paramegers: (oaDouble)\n"
"    This function sets the current value.\n"
;

static PyObject*
oaDoubleAppDef_oaWafer_tp_assign(PyObject* ob, PyObject *args)
{
  PyParamoaDoubleAppDef_oaWafer data;
  int convert_status=PyoaDoubleAppDef_oaWafer_Convert(ob,&data);
  assert(convert_status!=0);
  try {
    PyParamoaDoubleAppDef_oaWafer p1;
    if (PyArg_ParseTuple(args,(char*)"O&",
          &PyoaDoubleAppDef_oaWafer_Convert,&p1)) {
        data.Data()=p1.Data();
        Py_INCREF(ob);
        return ob;
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}


// ------------------------------------------------------------------
//  Function Methods Table:
// ------------------------------------------------------------------

static PyMethodDef oaDoubleAppDef_oaWafer_methodlist[] = {
    {"get",(PyCFunction)oaDoubleAppDef_oaWafer_get,METH_VARARGS,oaDoubleAppDef_oaWafer_get_doc},
    {"getDefault",(PyCFunction)oaDoubleAppDef_oaWafer_getDefault,METH_VARARGS,oaDoubleAppDef_oaWafer_getDefault_doc},
    {"set",(PyCFunction)oaDoubleAppDef_oaWafer_set,METH_VARARGS,oaDoubleAppDef_oaWafer_set_doc},
    {"isNull",(PyCFunction)oaDoubleAppDef_oaWafer_tp_isNull,METH_VARARGS,oaDoubleAppDef_oaWafer_isNull_doc},
    {"assign",(PyCFunction)oaDoubleAppDef_oaWafer_tp_assign,METH_VARARGS,oaDoubleAppDef_oaWafer_assign_doc},
   {NULL,NULL,0,NULL}
};


// ------------------------------------------------------------------
//  Type Object:
// ------------------------------------------------------------------

// ------------------------------------------------------------------
static char oaDoubleAppDef_oaWafer_doc[] = 
"Class: oaDoubleAppDef_oaWafer\n"
"  The oaDoubleAppDef class implements an application-specific extension for a particular type of data in a database.\n"
"  Once created, a double field is added to each object of the specified dataType. The default value for this extension is DBL_MAX. Applications can use the new field for whatever purpose is necessary.\n"
"  For additional information on defining and using AppDefs, see oaAppDef and Extending the Database in the Programmer's Guide.\n"
"Constructors:\n"
"  Paramegers: (oaDoubleAppDef_oaWafer)\n"
"    Calls: (const oaDoubleAppDef_oaWafer&)\n"
"    Signature: oaDoubleAppDef_oaWafer||cref-oaDoubleAppDef_oaWafer,\n"
;

// ------------------------------------------------------------------
PyTypeObject PyoaDoubleAppDef_oaWafer_Type = {
    PyObject_HEAD_INIT(&PyType_Type)
    0,
    "oaDoubleAppDef_oaWafer",
    sizeof(PyoaDoubleAppDef_oaWaferObject),
    0,
    (destructor)oaDoubleAppDef_oaWafer_tp_dealloc,	/* tp_dealloc */
    0,	/* tp_print */
    0,					/* tp_getattr */
    0,					/* tp_setattr */
    (cmpfunc)oaDoubleAppDef_oaWafer_tp_compare,	/* tp_compare */
    (reprfunc)oaDoubleAppDef_oaWafer_tp_repr,	/* tp_repr */
    0,					/* tp_as_number */
    0,					/* tp_as_sequence */
    0,					/* tp_as_mapping */
    0,					/* tp_as_hash */
    0,					/* tp_as_call */
    0,					/* tp_str */
    0,					/* tp_getattro */
    0,					/* tp_setattro */
    0,					/* tp_as_buffer */
    Py_TPFLAGS_DEFAULT|Py_TPFLAGS_BASETYPE, /* tp_flags */
    oaDoubleAppDef_oaWafer_doc,	/* tp_doc */
    0,					/* tp_traverse */
    0,					/* tp_clear */
    0,					/* tp_richcompre */
    0,					/* tp_weaklistoffset */
    0,					/* tp_iter */
    0,					/* tp_iternext */
    oaDoubleAppDef_oaWafer_methodlist,	/* tp_methods */
    0,					/* tp_members */
    0,					/* tp_getset */
    &PyoaAppDef_Type,	/* tp_base */
    0,					/* tp_dict */
    0,					/* tp_descr_get */
    0,					/* tp_descr_set */
    0,					/* tp_dictoffset */
    0,					/* tp_init */
    PyType_GenericAlloc,	/* tp_alloc */
    oaDoubleAppDef_oaWafer_new,	/* tp_new */
    _PyObject_Del,	/* tp_free */
};


// ------------------------------------------------------------------
// Static FunctionMethods:
// ------------------------------------------------------------------

// ------------------------------------------------------------------
static char oaDoubleAppDef_oaWafer_static_find_doc[] = 
"Class: oaDoubleAppDef_oaWafer, Function: find\n"
"  Paramegers: (oaString)\n"
"    Calls: oaDoubleAppDef_oaWafer* find(const oaString& name)\n"
"    Signature: find|ptr-oaDoubleAppDef_oaWafer|cref-oaString,\n"
"    This function returns an oaDoubleAppDef object with this dataType and the specified 'name' if it exists.\n"
"    name\n"
"    The name of the oaAppDef object to look for\n"
"  Paramegers: (oaString,oaAppObjectDef)\n"
"    Calls: oaDoubleAppDef_oaWafer* find(const oaString& name,const oaAppObjectDef* objDef)\n"
"    Signature: find|ptr-oaDoubleAppDef_oaWafer|cref-oaString,cptr-oaAppObjectDef,\n"
"    This function returns an oaDoubleAppDef object with this dataType and the specified 'name' that is associated with the specified object extension 'objDef'.\n"
"    name\n"
"    The name of the oaAppDef object to look for\n"
"    objDef\n"
"    A constant pointer to the object extension\n"
;

static PyObject*
oaDoubleAppDef_oaWafer_static_find(PyObject* ob, PyObject *args)
{
  try {
    // Case: (oaString)
    {
        PyParamoaString p1;
        if (PyArg_ParseTuple(args,"O&",
              &PyoaString_Convert,&p1)) {
            oaDoubleAppDef_oaWaferp result= (oaDoubleAppDef_oaWafer::find(p1.Data()));
            return PyoaDoubleAppDef_oaWafer_FromoaDoubleAppDef_oaWafer(result);
        }
    }
    PyErr_Clear();
    // Case: (oaString,oaAppObjectDef)
    {
        PyParamoaString p1;
        PyParamoaAppObjectDef p2;
        if (PyArg_ParseTuple(args,"O&O&",
              &PyoaString_Convert,&p1,
              &PyoaAppObjectDef_Convert,&p2)) {
            if (!PyValidateDbObject(p2.Data(),2)) return NULL;
            oaDoubleAppDef_oaWaferp result= (oaDoubleAppDef_oaWafer::find(p1.Data(),p2.Data()));
            return PyoaDoubleAppDef_oaWafer_FromoaDoubleAppDef_oaWafer(result);
        }
    }
    PyErr_Clear();
    PyErr_SetString(PyExc_TypeError,
        "No Arg-Matching Function found for class: oaDoubleAppDef_oaWafer, function: find, Choices are:\n"
        "    (oaString)\n"
        "    (oaString,oaAppObjectDef)\n"
    );
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaDoubleAppDef_oaWafer_static_get_doc[] = 
"Class: oaDoubleAppDef_oaWafer, Function: get\n"
"  Paramegers: (oaString)\n"
"    Calls: oaDoubleAppDef_oaWafer* get(const oaString& name)\n"
"    Signature: get|ptr-oaDoubleAppDef_oaWafer|cref-oaString,simple-oaDouble,simple-oaBoolean,\n"
"    This function constructs an oaDoubleAppDef object, creating a double extension with the specified name . You can create a double extension on any object except another extension.\n"
"    name\n"
"    The name given to the oaDoubleAppDef object\n"
"    defValue\n"
"    The default value for this extension\n"
"    persist\n"
"    Saves the oaDoubleAppDef data in the database\n"
"    oacAppDefExists\n"
"  Paramegers: (oaString,oaDouble)\n"
"    Calls: oaDoubleAppDef_oaWafer* get(const oaString& name,oaDouble defValue)\n"
"    Signature: get|ptr-oaDoubleAppDef_oaWafer|cref-oaString,simple-oaDouble,simple-oaBoolean,\n"
"    This function constructs an oaDoubleAppDef object, creating a double extension with the specified name . You can create a double extension on any object except another extension.\n"
"    name\n"
"    The name given to the oaDoubleAppDef object\n"
"    defValue\n"
"    The default value for this extension\n"
"    persist\n"
"    Saves the oaDoubleAppDef data in the database\n"
"    oacAppDefExists\n"
"  Paramegers: (oaString,oaDouble,oaBoolean)\n"
"    Calls: oaDoubleAppDef_oaWafer* get(const oaString& name,oaDouble defValue,oaBoolean persist)\n"
"    Signature: get|ptr-oaDoubleAppDef_oaWafer|cref-oaString,simple-oaDouble,simple-oaBoolean,\n"
"    This function constructs an oaDoubleAppDef object, creating a double extension with the specified name . You can create a double extension on any object except another extension.\n"
"    name\n"
"    The name given to the oaDoubleAppDef object\n"
"    defValue\n"
"    The default value for this extension\n"
"    persist\n"
"    Saves the oaDoubleAppDef data in the database\n"
"    oacAppDefExists\n"
"  Paramegers: (oaString,oaAppObjectDef)\n"
"    Calls: oaDoubleAppDef_oaWafer* get(const oaString& name,const oaAppObjectDef* objDef)\n"
"    Signature: get|ptr-oaDoubleAppDef_oaWafer|cref-oaString,cptr-oaAppObjectDef,simple-oaDouble,simple-oaBoolean,\n"
"    This function constructs an oaDoubleAppDef object, creating a double extension with the specified name for the specified object type.\n"
"    name\n"
"    The name given to the oaDoubleAppDef object\n"
"    objDef\n"
"    The object extension with which to associate the extension\n"
"    defValue\n"
"    An optional default value\n"
"    persist\n"
"    Saves the oaDoubleAppDef data in the database\n"
"    oacAppDefExists\n"
"  Paramegers: (oaString,oaAppObjectDef,oaDouble)\n"
"    Calls: oaDoubleAppDef_oaWafer* get(const oaString& name,const oaAppObjectDef* objDef,oaDouble defValue)\n"
"    Signature: get|ptr-oaDoubleAppDef_oaWafer|cref-oaString,cptr-oaAppObjectDef,simple-oaDouble,simple-oaBoolean,\n"
"    This function constructs an oaDoubleAppDef object, creating a double extension with the specified name for the specified object type.\n"
"    name\n"
"    The name given to the oaDoubleAppDef object\n"
"    objDef\n"
"    The object extension with which to associate the extension\n"
"    defValue\n"
"    An optional default value\n"
"    persist\n"
"    Saves the oaDoubleAppDef data in the database\n"
"    oacAppDefExists\n"
"  Paramegers: (oaString,oaAppObjectDef,oaDouble,oaBoolean)\n"
"    Calls: oaDoubleAppDef_oaWafer* get(const oaString& name,const oaAppObjectDef* objDef,oaDouble defValue,oaBoolean persist)\n"
"    Signature: get|ptr-oaDoubleAppDef_oaWafer|cref-oaString,cptr-oaAppObjectDef,simple-oaDouble,simple-oaBoolean,\n"
"    This function constructs an oaDoubleAppDef object, creating a double extension with the specified name for the specified object type.\n"
"    name\n"
"    The name given to the oaDoubleAppDef object\n"
"    objDef\n"
"    The object extension with which to associate the extension\n"
"    defValue\n"
"    An optional default value\n"
"    persist\n"
"    Saves the oaDoubleAppDef data in the database\n"
"    oacAppDefExists\n"
;

static PyObject*
oaDoubleAppDef_oaWafer_static_get(PyObject* ob, PyObject *args)
{
  try {
    // Case: (oaString)
    {
        PyParamoaString p1;
        if (PyArg_ParseTuple(args,"O&",
              &PyoaString_Convert,&p1)) {
            oaDoubleAppDef_oaWaferp result= (oaDoubleAppDef_oaWafer::get(p1.Data()));
            return PyoaDoubleAppDef_oaWafer_FromoaDoubleAppDef_oaWafer(result);
        }
    }
    PyErr_Clear();
    // Case: (oaString,oaDouble)
    {
        PyParamoaString p1;
        PyParamoaDouble p2;
        if (PyArg_ParseTuple(args,"O&O&",
              &PyoaString_Convert,&p1,
              &PyoaDouble_Convert,&p2)) {
            oaDoubleAppDef_oaWaferp result= (oaDoubleAppDef_oaWafer::get(p1.Data(),p2.Data()));
            return PyoaDoubleAppDef_oaWafer_FromoaDoubleAppDef_oaWafer(result);
        }
    }
    PyErr_Clear();
    // Case: (oaString,oaDouble,oaBoolean)
    {
        PyParamoaString p1;
        PyParamoaDouble p2;
        PyParamoaBoolean p3;
        if (PyArg_ParseTuple(args,"O&O&O&",
              &PyoaString_Convert,&p1,
              &PyoaDouble_Convert,&p2,
              &PyoaBoolean_Convert,&p3)) {
            oaDoubleAppDef_oaWaferp result= (oaDoubleAppDef_oaWafer::get(p1.Data(),p2.Data(),p3.Data()));
            return PyoaDoubleAppDef_oaWafer_FromoaDoubleAppDef_oaWafer(result);
        }
    }
    PyErr_Clear();
    // Case: (oaString,oaAppObjectDef)
    {
        PyParamoaString p1;
        PyParamoaAppObjectDef p2;
        if (PyArg_ParseTuple(args,"O&O&",
              &PyoaString_Convert,&p1,
              &PyoaAppObjectDef_Convert,&p2)) {
            if (!PyValidateDbObject(p2.Data(),2)) return NULL;
            oaDoubleAppDef_oaWaferp result= (oaDoubleAppDef_oaWafer::get(p1.Data(),p2.Data()));
            return PyoaDoubleAppDef_oaWafer_FromoaDoubleAppDef_oaWafer(result);
        }
    }
    PyErr_Clear();
    // Case: (oaString,oaAppObjectDef,oaDouble)
    {
        PyParamoaString p1;
        PyParamoaAppObjectDef p2;
        PyParamoaDouble p3;
        if (PyArg_ParseTuple(args,"O&O&O&",
              &PyoaString_Convert,&p1,
              &PyoaAppObjectDef_Convert,&p2,
              &PyoaDouble_Convert,&p3)) {
            if (!PyValidateDbObject(p2.Data(),2)) return NULL;
            oaDoubleAppDef_oaWaferp result= (oaDoubleAppDef_oaWafer::get(p1.Data(),p2.Data(),p3.Data()));
            return PyoaDoubleAppDef_oaWafer_FromoaDoubleAppDef_oaWafer(result);
        }
    }
    PyErr_Clear();
    // Case: (oaString,oaAppObjectDef,oaDouble,oaBoolean)
    {
        PyParamoaString p1;
        PyParamoaAppObjectDef p2;
        PyParamoaDouble p3;
        PyParamoaBoolean p4;
        if (PyArg_ParseTuple(args,"O&O&O&O&",
              &PyoaString_Convert,&p1,
              &PyoaAppObjectDef_Convert,&p2,
              &PyoaDouble_Convert,&p3,
              &PyoaBoolean_Convert,&p4)) {
            if (!PyValidateDbObject(p2.Data(),2)) return NULL;
            oaDoubleAppDef_oaWaferp result= (oaDoubleAppDef_oaWafer::get(p1.Data(),p2.Data(),p3.Data(),p4.Data()));
            return PyoaDoubleAppDef_oaWafer_FromoaDoubleAppDef_oaWafer(result);
        }
    }
    PyErr_Clear();
    PyErr_SetString(PyExc_TypeError,
        "No Arg-Matching Function found for class: oaDoubleAppDef_oaWafer, function: get, Choices are:\n"
        "    (oaString)\n"
        "    (oaString,oaDouble)\n"
        "    (oaString,oaDouble,oaBoolean)\n"
        "    (oaString,oaAppObjectDef)\n"
        "    (oaString,oaAppObjectDef,oaDouble)\n"
        "    (oaString,oaAppObjectDef,oaDouble,oaBoolean)\n"
    );
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static PyMethodDef oaDoubleAppDef_oaWafer_staticmethodlist[] = {
    {"static_find",(PyCFunction)oaDoubleAppDef_oaWafer_static_find,METH_VARARGS,oaDoubleAppDef_oaWafer_static_find_doc},
    {"static_get",(PyCFunction)oaDoubleAppDef_oaWafer_static_get,METH_VARARGS,oaDoubleAppDef_oaWafer_static_get_doc},
   {NULL,NULL,0,NULL}
};


// ------------------------------------------------------------------
//  Type Init:
// ------------------------------------------------------------------

int
PyoaDoubleAppDef_oaWafer_TypeInit(PyObject* mod_dict)
{
    if (PyType_Ready(&PyoaDoubleAppDef_oaWafer_Type)<0) {
      printf("** PyType_Ready failed for: oaDoubleAppDef_oaWafer\n");
      return -1;
    }

    if (PyDict_SetItemString(mod_dict,"oaDoubleAppDef_oaWafer",
           (PyObject*)(&PyoaDoubleAppDef_oaWafer_Type))<0) {
       printf("** Failed to add type name to module dictionary for: oaDoubleAppDef_oaWafer\n");
       return -1;
    }

    PyObject *dict, *value;
    PyMethodDef *method;
    dict=PyoaDoubleAppDef_oaWafer_Type.tp_dict;
    for(method=oaDoubleAppDef_oaWafer_staticmethodlist;method->ml_name!=NULL;method++) {
        value=PyCFunction_New(method,NULL);
    if (value==NULL) return -1;
        if (PyDict_SetItemString(dict,method->ml_name,value)!=0) {
        Py_DECREF(value);
            printf("** Failed to add static function to module dictionary for: %s\n",
                method->ml_name);
            return -1;
        }
        Py_DECREF(value);
    }
    return 0;
}


/********************************************************************
 *   Copyright 2002-2008  LSI Corporation
 *
 *   Licensed under the Apache License, Version 2.0 (the "License");
 *   you may not use this file except in compliance with the License.
 *   You may obtain a copy of the License at
 *
 *       http://www.apache.org/licenses/LICENSE-2.0
 *
 *   Unless required by applicable law or agreed to in writing, software
 *   distributed under the License is distributed on an "AS IS" BASIS,
 *   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *   See the License for the specific language governing permissions and
 *   limitations under the License.
 *
 *******************************************************************/

#include "pyoa_header.h"


// ==================================================================
// Wrapper Implementation for Class: oaDoubleAppDef_oaWaferDesc
// ==================================================================


// ==================================================================
// Alloc/Dealloc Routines
// ==================================================================

// ------------------------------------------------------------------
static PyObject*
oaDoubleAppDef_oaWaferDesc_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
  try {
    int is_raw=(type==&PyoaDoubleAppDef_oaWaferDesc_Type);
    PyObject* bself = type->tp_alloc(type,0);
    if (bself == NULL) return bself;
    PyoaDoubleAppDef_oaWaferDescObject* self = (PyoaDoubleAppDef_oaWaferDescObject*)bself;
    self->locks = NULL;
    self->borrow = 0;
    static char *kwlist [] = { NULL } ;
    // Case: (oaDoubleAppDef_oaWaferDesc)
    {
        PyParamoaDoubleAppDef_oaWaferDesc p1;
        if (PyArg_ParseTuple(args,(char*)"O&",
              &PyoaDoubleAppDef_oaWaferDesc_Convert,&p1)) {
            self->data=p1.Data();
            self->value=&(self->data);
            return bself;
        }
    }
    PyErr_Clear();
    // Case: ()
    {
        if (PyArg_ParseTuple(args,(char*)"")) {
          self->data=NULL;
          self->value=&(self->data);
          return bself;
        }
    }
    PyErr_Clear();
    PyErr_SetString(PyExc_TypeError,
        "No Arg-Matching Constructor found for class: oaDoubleAppDef_oaWaferDesc, Choices are:\n"
        "    (oaDoubleAppDef_oaWaferDesc)\n"
    );
    Py_DECREF(self);
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static void
oaDoubleAppDef_oaWaferDesc_tp_dealloc(PyoaDoubleAppDef_oaWaferDescObject* self)
{
    self->ob_type->tp_free((PyObject*)self);
}

// ------------------------------------------------------------------
static PyObject*
oaDoubleAppDef_oaWaferDesc_tp_repr(PyObject *ob)
{
    PyParamoaDoubleAppDef_oaWaferDesc value;
    int convert_status=PyoaDoubleAppDef_oaWaferDesc_Convert(ob,&value);
    assert(convert_status!=0);
    PyObject* result;

    char buffer[48];
    sprintf(buffer,"<oaDoubleAppDef_oaWaferDesc::" DISPLAY_FORMAT ">",POINTER_AS_DISPLAY(value.DataCall()));
    result=PyString_FromString(buffer);
    return result;
}
        
// ------------------------------------------------------------------
static int
oaDoubleAppDef_oaWaferDesc_tp_compare(PyObject *ob1,PyObject* ob2)
{
    PyParamoaDoubleAppDef_oaWaferDesc v1;
    PyParamoaDoubleAppDef_oaWaferDesc v2;
    int convert_status1=PyoaDoubleAppDef_oaWaferDesc_Convert(ob1,&v1);
    int convert_status2=PyoaDoubleAppDef_oaWaferDesc_Convert(ob2,&v2);
    assert(convert_status1!=0);
    assert(convert_status2!=0);
    if (v1.DataCall()==v2.DataCall()) return 0;
    return 1;
}
        
// ------------------------------------------------------------------
int
PyoaDoubleAppDef_oaWaferDesc_Convert(PyObject* ob,PyParamoaDoubleAppDef_oaWaferDesc* result)
{
    if (ob == NULL) return 1;
    if (PyoaDoubleAppDef_oaWaferDesc_Check(ob)) {
        result->SetData( (oaDoubleAppDef_oaWaferDesc**) ((PyoaDoubleAppDef_oaWaferDescObject*)ob)->value);
        return 1;
    }
    PyErr_SetString(PyExc_TypeError,
        "Convertion of parameter to class: oaDoubleAppDef_oaWaferDesc Failed");
    return 0;
}
// ------------------------------------------------------------------
PyObject* PyoaDoubleAppDef_oaWaferDesc_FromoaDoubleAppDef_oaWaferDesc(oaDoubleAppDef_oaWaferDesc** value,int borrow,PyObject* lock)
{
    if (value && *value) {
        oaDoubleAppDef_oaWaferDesc* data=*value;
        PyObject* bself = PyoaDoubleAppDef_oaWaferDesc_Type.tp_alloc(&PyoaDoubleAppDef_oaWaferDesc_Type,0);
        if (bself == NULL) return bself;
        PyoaDoubleAppDef_oaWaferDescObject* self = (PyoaDoubleAppDef_oaWaferDescObject*)bself;
        self->value = (oaObject**) value;
        self->data = NULL;
        self->locks = NULL;
        self->borrow = 0; // Ignore borrow flag, since we copied
       if (lock) PyoaLockObject(self->locks,lock);
        return bself;
    }
    Py_INCREF(Py_None);
    return Py_None;
}
// ------------------------------------------------------------------
PyObject* PyoaDoubleAppDef_oaWaferDesc_FromoaDoubleAppDef_oaWaferDesc(oaDoubleAppDef_oaWaferDesc* data)
{
    if (data) {
       PyObject* bself = PyoaDoubleAppDef_oaWaferDesc_Type.tp_alloc(&PyoaDoubleAppDef_oaWaferDesc_Type,0);
       if (bself == NULL) return bself;
       PyoaDoubleAppDef_oaWaferDescObject* self = (PyoaDoubleAppDef_oaWaferDescObject*)bself;
       self->data = (oaObject*) data;
       self->value = &(self->data);
       self->borrow = 0; 
       self->locks = NULL;
       return bself;
    }
    Py_INCREF(Py_None);
    return Py_None;
}

// ------------------------------------------------------------------
// FunctionMethods:
// ------------------------------------------------------------------

// ------------------------------------------------------------------
static char oaDoubleAppDef_oaWaferDesc_get_doc[] = 
"Class: oaDoubleAppDef_oaWaferDesc, Function: get\n"
"  Paramegers: (oaWaferDesc)\n"
"    Calls: oaDouble get(const oaWaferDesc* object)\n"
"    Signature: get|simple-oaDouble|cptr-oaWaferDesc,\n"
"    This function returns the value of this double extension.\n"
"    object\n"
"    The object for which to get the value\n"
;

static PyObject*
oaDoubleAppDef_oaWaferDesc_get(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaDoubleAppDef_oaWaferDesc data;
    int convert_status=PyoaDoubleAppDef_oaWaferDesc_Convert(ob,&data);
    assert(convert_status!=0);
    PyoaDoubleAppDef_oaWaferDescObject* self=(PyoaDoubleAppDef_oaWaferDescObject*)ob;
    if (!PyValidateDbObject(data.Data(),0)) return NULL;

    PyParamoaWaferDesc p1;
    if (PyArg_ParseTuple(args,"O&",
          &PyoaWaferDesc_Convert,&p1)) {
        if (!PyValidateDbObject(p1.Data(),1)) return NULL;
        oaDouble result= (data.DataCall()->get(p1.Data()));
        return PyoaDouble_FromoaDouble(result);
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaDoubleAppDef_oaWaferDesc_getDefault_doc[] = 
"Class: oaDoubleAppDef_oaWaferDesc, Function: getDefault\n"
"  Paramegers: ()\n"
"    Calls: oaDouble getDefault() const\n"
"    Signature: getDefault|simple-oaDouble|\n"
"    BrowseData: 1\n"
"    This function returns the default value of this double extension.\n"
;

static PyObject*
oaDoubleAppDef_oaWaferDesc_getDefault(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaDoubleAppDef_oaWaferDesc data;
    int convert_status=PyoaDoubleAppDef_oaWaferDesc_Convert(ob,&data);
    assert(convert_status!=0);
    PyoaDoubleAppDef_oaWaferDescObject* self=(PyoaDoubleAppDef_oaWaferDescObject*)ob;
    if (!PyValidateDbObject(data.Data(),0)) return NULL;

    if (PyArg_ParseTuple(args,"")) {
        oaDouble result= (data.DataCall()->getDefault());
        return PyoaDouble_FromoaDouble(result);
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaDoubleAppDef_oaWaferDesc_set_doc[] = 
"Class: oaDoubleAppDef_oaWaferDesc, Function: set\n"
"  Paramegers: (oaWaferDesc,oaDouble)\n"
"    Calls: void set(oaWaferDesc* object,oaDouble value)\n"
"    Signature: set|void-void|ptr-oaWaferDesc,simple-oaDouble,\n"
"    This function sets the value of this double extension.\n"
"    object\n"
"    The object on which to set the value\n"
"    value\n"
"    The value to set on the object\n"
;

static PyObject*
oaDoubleAppDef_oaWaferDesc_set(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaDoubleAppDef_oaWaferDesc data;
    int convert_status=PyoaDoubleAppDef_oaWaferDesc_Convert(ob,&data);
    assert(convert_status!=0);
    PyoaDoubleAppDef_oaWaferDescObject* self=(PyoaDoubleAppDef_oaWaferDescObject*)ob;
    if (!PyValidateDbObject(data.Data(),0)) return NULL;

    PyParamoaWaferDesc p1;
    PyParamoaDouble p2;
    if (PyArg_ParseTuple(args,"O&O&",
          &PyoaWaferDesc_Convert,&p1,
          &PyoaDouble_Convert,&p2)) {
        if (!PyValidateDbObject(p1.Data(),1)) return NULL;
        data.DataCall()->set(p1.Data(),p2.Data());
        Py_INCREF(Py_None);
        return Py_None;
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaDoubleAppDef_oaWaferDesc_isNull_doc[] =
"Class: oaDoubleAppDef_oaWaferDesc, Function: isNull\n"
"  Parameters: () \n"
"    This functions returns 1 if the DbPointer is NULL, and 0 otherwise.\n"
;

static PyObject*
oaDoubleAppDef_oaWaferDesc_tp_isNull(PyObject* ob, PyObject *args)
{
    PyParamoaDoubleAppDef_oaWaferDesc data;
    int convert_status=PyoaDoubleAppDef_oaWaferDesc_Convert(ob,&data);
    assert(convert_status!=0);
    if (data.DataCall()==NULL)
        return PyInt_FromLong(1);
    else
        return PyInt_FromLong(0);
}
static char oaDoubleAppDef_oaWaferDesc_assign_doc[] = 
"Class: oaDoubleAppDef_oaWaferDesc, Function: set\n"
"  Paramegers: (oaDouble)\n"
"    This function sets the current value.\n"
;

static PyObject*
oaDoubleAppDef_oaWaferDesc_tp_assign(PyObject* ob, PyObject *args)
{
  PyParamoaDoubleAppDef_oaWaferDesc data;
  int convert_status=PyoaDoubleAppDef_oaWaferDesc_Convert(ob,&data);
  assert(convert_status!=0);
  try {
    PyParamoaDoubleAppDef_oaWaferDesc p1;
    if (PyArg_ParseTuple(args,(char*)"O&",
          &PyoaDoubleAppDef_oaWaferDesc_Convert,&p1)) {
        data.Data()=p1.Data();
        Py_INCREF(ob);
        return ob;
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}


// ------------------------------------------------------------------
//  Function Methods Table:
// ------------------------------------------------------------------

static PyMethodDef oaDoubleAppDef_oaWaferDesc_methodlist[] = {
    {"get",(PyCFunction)oaDoubleAppDef_oaWaferDesc_get,METH_VARARGS,oaDoubleAppDef_oaWaferDesc_get_doc},
    {"getDefault",(PyCFunction)oaDoubleAppDef_oaWaferDesc_getDefault,METH_VARARGS,oaDoubleAppDef_oaWaferDesc_getDefault_doc},
    {"set",(PyCFunction)oaDoubleAppDef_oaWaferDesc_set,METH_VARARGS,oaDoubleAppDef_oaWaferDesc_set_doc},
    {"isNull",(PyCFunction)oaDoubleAppDef_oaWaferDesc_tp_isNull,METH_VARARGS,oaDoubleAppDef_oaWaferDesc_isNull_doc},
    {"assign",(PyCFunction)oaDoubleAppDef_oaWaferDesc_tp_assign,METH_VARARGS,oaDoubleAppDef_oaWaferDesc_assign_doc},
   {NULL,NULL,0,NULL}
};


// ------------------------------------------------------------------
//  Type Object:
// ------------------------------------------------------------------

// ------------------------------------------------------------------
static char oaDoubleAppDef_oaWaferDesc_doc[] = 
"Class: oaDoubleAppDef_oaWaferDesc\n"
"  The oaDoubleAppDef class implements an application-specific extension for a particular type of data in a database.\n"
"  Once created, a double field is added to each object of the specified dataType. The default value for this extension is DBL_MAX. Applications can use the new field for whatever purpose is necessary.\n"
"  For additional information on defining and using AppDefs, see oaAppDef and Extending the Database in the Programmer's Guide.\n"
"Constructors:\n"
"  Paramegers: (oaDoubleAppDef_oaWaferDesc)\n"
"    Calls: (const oaDoubleAppDef_oaWaferDesc&)\n"
"    Signature: oaDoubleAppDef_oaWaferDesc||cref-oaDoubleAppDef_oaWaferDesc,\n"
;

// ------------------------------------------------------------------
PyTypeObject PyoaDoubleAppDef_oaWaferDesc_Type = {
    PyObject_HEAD_INIT(&PyType_Type)
    0,
    "oaDoubleAppDef_oaWaferDesc",
    sizeof(PyoaDoubleAppDef_oaWaferDescObject),
    0,
    (destructor)oaDoubleAppDef_oaWaferDesc_tp_dealloc,	/* tp_dealloc */
    0,	/* tp_print */
    0,					/* tp_getattr */
    0,					/* tp_setattr */
    (cmpfunc)oaDoubleAppDef_oaWaferDesc_tp_compare,	/* tp_compare */
    (reprfunc)oaDoubleAppDef_oaWaferDesc_tp_repr,	/* tp_repr */
    0,					/* tp_as_number */
    0,					/* tp_as_sequence */
    0,					/* tp_as_mapping */
    0,					/* tp_as_hash */
    0,					/* tp_as_call */
    0,					/* tp_str */
    0,					/* tp_getattro */
    0,					/* tp_setattro */
    0,					/* tp_as_buffer */
    Py_TPFLAGS_DEFAULT|Py_TPFLAGS_BASETYPE, /* tp_flags */
    oaDoubleAppDef_oaWaferDesc_doc,	/* tp_doc */
    0,					/* tp_traverse */
    0,					/* tp_clear */
    0,					/* tp_richcompre */
    0,					/* tp_weaklistoffset */
    0,					/* tp_iter */
    0,					/* tp_iternext */
    oaDoubleAppDef_oaWaferDesc_methodlist,	/* tp_methods */
    0,					/* tp_members */
    0,					/* tp_getset */
    &PyoaAppDef_Type,	/* tp_base */
    0,					/* tp_dict */
    0,					/* tp_descr_get */
    0,					/* tp_descr_set */
    0,					/* tp_dictoffset */
    0,					/* tp_init */
    PyType_GenericAlloc,	/* tp_alloc */
    oaDoubleAppDef_oaWaferDesc_new,	/* tp_new */
    _PyObject_Del,	/* tp_free */
};


// ------------------------------------------------------------------
// Static FunctionMethods:
// ------------------------------------------------------------------

// ------------------------------------------------------------------
static char oaDoubleAppDef_oaWaferDesc_static_find_doc[] = 
"Class: oaDoubleAppDef_oaWaferDesc, Function: find\n"
"  Paramegers: (oaString)\n"
"    Calls: oaDoubleAppDef_oaWaferDesc* find(const oaString& name)\n"
"    Signature: find|ptr-oaDoubleAppDef_oaWaferDesc|cref-oaString,\n"
"    This function returns an oaDoubleAppDef object with this dataType and the specified 'name' if it exists.\n"
"    name\n"
"    The name of the oaAppDef object to look for\n"
"  Paramegers: (oaString,oaAppObjectDef)\n"
"    Calls: oaDoubleAppDef_oaWaferDesc* find(const oaString& name,const oaAppObjectDef* objDef)\n"
"    Signature: find|ptr-oaDoubleAppDef_oaWaferDesc|cref-oaString,cptr-oaAppObjectDef,\n"
"    This function returns an oaDoubleAppDef object with this dataType and the specified 'name' that is associated with the specified object extension 'objDef'.\n"
"    name\n"
"    The name of the oaAppDef object to look for\n"
"    objDef\n"
"    A constant pointer to the object extension\n"
;

static PyObject*
oaDoubleAppDef_oaWaferDesc_static_find(PyObject* ob, PyObject *args)
{
  try {
    // Case: (oaString)
    {
        PyParamoaString p1;
        if (PyArg_ParseTuple(args,"O&",
              &PyoaString_Convert,&p1)) {
            oaDoubleAppDef_oaWaferDescp result= (oaDoubleAppDef_oaWaferDesc::find(p1.Data()));
            return PyoaDoubleAppDef_oaWaferDesc_FromoaDoubleAppDef_oaWaferDesc(result);
        }
    }
    PyErr_Clear();
    // Case: (oaString,oaAppObjectDef)
    {
        PyParamoaString p1;
        PyParamoaAppObjectDef p2;
        if (PyArg_ParseTuple(args,"O&O&",
              &PyoaString_Convert,&p1,
              &PyoaAppObjectDef_Convert,&p2)) {
            if (!PyValidateDbObject(p2.Data(),2)) return NULL;
            oaDoubleAppDef_oaWaferDescp result= (oaDoubleAppDef_oaWaferDesc::find(p1.Data(),p2.Data()));
            return PyoaDoubleAppDef_oaWaferDesc_FromoaDoubleAppDef_oaWaferDesc(result);
        }
    }
    PyErr_Clear();
    PyErr_SetString(PyExc_TypeError,
        "No Arg-Matching Function found for class: oaDoubleAppDef_oaWaferDesc, function: find, Choices are:\n"
        "    (oaString)\n"
        "    (oaString,oaAppObjectDef)\n"
    );
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaDoubleAppDef_oaWaferDesc_static_get_doc[] = 
"Class: oaDoubleAppDef_oaWaferDesc, Function: get\n"
"  Paramegers: (oaString)\n"
"    Calls: oaDoubleAppDef_oaWaferDesc* get(const oaString& name)\n"
"    Signature: get|ptr-oaDoubleAppDef_oaWaferDesc|cref-oaString,simple-oaDouble,simple-oaBoolean,\n"
"    This function constructs an oaDoubleAppDef object, creating a double extension with the specified name . You can create a double extension on any object except another extension.\n"
"    name\n"
"    The name given to the oaDoubleAppDef object\n"
"    defValue\n"
"    The default value for this extension\n"
"    persist\n"
"    Saves the oaDoubleAppDef data in the database\n"
"    oacAppDefExists\n"
"  Paramegers: (oaString,oaDouble)\n"
"    Calls: oaDoubleAppDef_oaWaferDesc* get(const oaString& name,oaDouble defValue)\n"
"    Signature: get|ptr-oaDoubleAppDef_oaWaferDesc|cref-oaString,simple-oaDouble,simple-oaBoolean,\n"
"    This function constructs an oaDoubleAppDef object, creating a double extension with the specified name . You can create a double extension on any object except another extension.\n"
"    name\n"
"    The name given to the oaDoubleAppDef object\n"
"    defValue\n"
"    The default value for this extension\n"
"    persist\n"
"    Saves the oaDoubleAppDef data in the database\n"
"    oacAppDefExists\n"
"  Paramegers: (oaString,oaDouble,oaBoolean)\n"
"    Calls: oaDoubleAppDef_oaWaferDesc* get(const oaString& name,oaDouble defValue,oaBoolean persist)\n"
"    Signature: get|ptr-oaDoubleAppDef_oaWaferDesc|cref-oaString,simple-oaDouble,simple-oaBoolean,\n"
"    This function constructs an oaDoubleAppDef object, creating a double extension with the specified name . You can create a double extension on any object except another extension.\n"
"    name\n"
"    The name given to the oaDoubleAppDef object\n"
"    defValue\n"
"    The default value for this extension\n"
"    persist\n"
"    Saves the oaDoubleAppDef data in the database\n"
"    oacAppDefExists\n"
"  Paramegers: (oaString,oaAppObjectDef)\n"
"    Calls: oaDoubleAppDef_oaWaferDesc* get(const oaString& name,const oaAppObjectDef* objDef)\n"
"    Signature: get|ptr-oaDoubleAppDef_oaWaferDesc|cref-oaString,cptr-oaAppObjectDef,simple-oaDouble,simple-oaBoolean,\n"
"    This function constructs an oaDoubleAppDef object, creating a double extension with the specified name for the specified object type.\n"
"    name\n"
"    The name given to the oaDoubleAppDef object\n"
"    objDef\n"
"    The object extension with which to associate the extension\n"
"    defValue\n"
"    An optional default value\n"
"    persist\n"
"    Saves the oaDoubleAppDef data in the database\n"
"    oacAppDefExists\n"
"  Paramegers: (oaString,oaAppObjectDef,oaDouble)\n"
"    Calls: oaDoubleAppDef_oaWaferDesc* get(const oaString& name,const oaAppObjectDef* objDef,oaDouble defValue)\n"
"    Signature: get|ptr-oaDoubleAppDef_oaWaferDesc|cref-oaString,cptr-oaAppObjectDef,simple-oaDouble,simple-oaBoolean,\n"
"    This function constructs an oaDoubleAppDef object, creating a double extension with the specified name for the specified object type.\n"
"    name\n"
"    The name given to the oaDoubleAppDef object\n"
"    objDef\n"
"    The object extension with which to associate the extension\n"
"    defValue\n"
"    An optional default value\n"
"    persist\n"
"    Saves the oaDoubleAppDef data in the database\n"
"    oacAppDefExists\n"
"  Paramegers: (oaString,oaAppObjectDef,oaDouble,oaBoolean)\n"
"    Calls: oaDoubleAppDef_oaWaferDesc* get(const oaString& name,const oaAppObjectDef* objDef,oaDouble defValue,oaBoolean persist)\n"
"    Signature: get|ptr-oaDoubleAppDef_oaWaferDesc|cref-oaString,cptr-oaAppObjectDef,simple-oaDouble,simple-oaBoolean,\n"
"    This function constructs an oaDoubleAppDef object, creating a double extension with the specified name for the specified object type.\n"
"    name\n"
"    The name given to the oaDoubleAppDef object\n"
"    objDef\n"
"    The object extension with which to associate the extension\n"
"    defValue\n"
"    An optional default value\n"
"    persist\n"
"    Saves the oaDoubleAppDef data in the database\n"
"    oacAppDefExists\n"
;

static PyObject*
oaDoubleAppDef_oaWaferDesc_static_get(PyObject* ob, PyObject *args)
{
  try {
    // Case: (oaString)
    {
        PyParamoaString p1;
        if (PyArg_ParseTuple(args,"O&",
              &PyoaString_Convert,&p1)) {
            oaDoubleAppDef_oaWaferDescp result= (oaDoubleAppDef_oaWaferDesc::get(p1.Data()));
            return PyoaDoubleAppDef_oaWaferDesc_FromoaDoubleAppDef_oaWaferDesc(result);
        }
    }
    PyErr_Clear();
    // Case: (oaString,oaDouble)
    {
        PyParamoaString p1;
        PyParamoaDouble p2;
        if (PyArg_ParseTuple(args,"O&O&",
              &PyoaString_Convert,&p1,
              &PyoaDouble_Convert,&p2)) {
            oaDoubleAppDef_oaWaferDescp result= (oaDoubleAppDef_oaWaferDesc::get(p1.Data(),p2.Data()));
            return PyoaDoubleAppDef_oaWaferDesc_FromoaDoubleAppDef_oaWaferDesc(result);
        }
    }
    PyErr_Clear();
    // Case: (oaString,oaDouble,oaBoolean)
    {
        PyParamoaString p1;
        PyParamoaDouble p2;
        PyParamoaBoolean p3;
        if (PyArg_ParseTuple(args,"O&O&O&",
              &PyoaString_Convert,&p1,
              &PyoaDouble_Convert,&p2,
              &PyoaBoolean_Convert,&p3)) {
            oaDoubleAppDef_oaWaferDescp result= (oaDoubleAppDef_oaWaferDesc::get(p1.Data(),p2.Data(),p3.Data()));
            return PyoaDoubleAppDef_oaWaferDesc_FromoaDoubleAppDef_oaWaferDesc(result);
        }
    }
    PyErr_Clear();
    // Case: (oaString,oaAppObjectDef)
    {
        PyParamoaString p1;
        PyParamoaAppObjectDef p2;
        if (PyArg_ParseTuple(args,"O&O&",
              &PyoaString_Convert,&p1,
              &PyoaAppObjectDef_Convert,&p2)) {
            if (!PyValidateDbObject(p2.Data(),2)) return NULL;
            oaDoubleAppDef_oaWaferDescp result= (oaDoubleAppDef_oaWaferDesc::get(p1.Data(),p2.Data()));
            return PyoaDoubleAppDef_oaWaferDesc_FromoaDoubleAppDef_oaWaferDesc(result);
        }
    }
    PyErr_Clear();
    // Case: (oaString,oaAppObjectDef,oaDouble)
    {
        PyParamoaString p1;
        PyParamoaAppObjectDef p2;
        PyParamoaDouble p3;
        if (PyArg_ParseTuple(args,"O&O&O&",
              &PyoaString_Convert,&p1,
              &PyoaAppObjectDef_Convert,&p2,
              &PyoaDouble_Convert,&p3)) {
            if (!PyValidateDbObject(p2.Data(),2)) return NULL;
            oaDoubleAppDef_oaWaferDescp result= (oaDoubleAppDef_oaWaferDesc::get(p1.Data(),p2.Data(),p3.Data()));
            return PyoaDoubleAppDef_oaWaferDesc_FromoaDoubleAppDef_oaWaferDesc(result);
        }
    }
    PyErr_Clear();
    // Case: (oaString,oaAppObjectDef,oaDouble,oaBoolean)
    {
        PyParamoaString p1;
        PyParamoaAppObjectDef p2;
        PyParamoaDouble p3;
        PyParamoaBoolean p4;
        if (PyArg_ParseTuple(args,"O&O&O&O&",
              &PyoaString_Convert,&p1,
              &PyoaAppObjectDef_Convert,&p2,
              &PyoaDouble_Convert,&p3,
              &PyoaBoolean_Convert,&p4)) {
            if (!PyValidateDbObject(p2.Data(),2)) return NULL;
            oaDoubleAppDef_oaWaferDescp result= (oaDoubleAppDef_oaWaferDesc::get(p1.Data(),p2.Data(),p3.Data(),p4.Data()));
            return PyoaDoubleAppDef_oaWaferDesc_FromoaDoubleAppDef_oaWaferDesc(result);
        }
    }
    PyErr_Clear();
    PyErr_SetString(PyExc_TypeError,
        "No Arg-Matching Function found for class: oaDoubleAppDef_oaWaferDesc, function: get, Choices are:\n"
        "    (oaString)\n"
        "    (oaString,oaDouble)\n"
        "    (oaString,oaDouble,oaBoolean)\n"
        "    (oaString,oaAppObjectDef)\n"
        "    (oaString,oaAppObjectDef,oaDouble)\n"
        "    (oaString,oaAppObjectDef,oaDouble,oaBoolean)\n"
    );
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static PyMethodDef oaDoubleAppDef_oaWaferDesc_staticmethodlist[] = {
    {"static_find",(PyCFunction)oaDoubleAppDef_oaWaferDesc_static_find,METH_VARARGS,oaDoubleAppDef_oaWaferDesc_static_find_doc},
    {"static_get",(PyCFunction)oaDoubleAppDef_oaWaferDesc_static_get,METH_VARARGS,oaDoubleAppDef_oaWaferDesc_static_get_doc},
   {NULL,NULL,0,NULL}
};


// ------------------------------------------------------------------
//  Type Init:
// ------------------------------------------------------------------

int
PyoaDoubleAppDef_oaWaferDesc_TypeInit(PyObject* mod_dict)
{
    if (PyType_Ready(&PyoaDoubleAppDef_oaWaferDesc_Type)<0) {
      printf("** PyType_Ready failed for: oaDoubleAppDef_oaWaferDesc\n");
      return -1;
    }

    if (PyDict_SetItemString(mod_dict,"oaDoubleAppDef_oaWaferDesc",
           (PyObject*)(&PyoaDoubleAppDef_oaWaferDesc_Type))<0) {
       printf("** Failed to add type name to module dictionary for: oaDoubleAppDef_oaWaferDesc\n");
       return -1;
    }

    PyObject *dict, *value;
    PyMethodDef *method;
    dict=PyoaDoubleAppDef_oaWaferDesc_Type.tp_dict;
    for(method=oaDoubleAppDef_oaWaferDesc_staticmethodlist;method->ml_name!=NULL;method++) {
        value=PyCFunction_New(method,NULL);
    if (value==NULL) return -1;
        if (PyDict_SetItemString(dict,method->ml_name,value)!=0) {
        Py_DECREF(value);
            printf("** Failed to add static function to module dictionary for: %s\n",
                method->ml_name);
            return -1;
        }
        Py_DECREF(value);
    }
    return 0;
}


/********************************************************************
 *   Copyright 2002-2008  LSI Corporation
 *
 *   Licensed under the Apache License, Version 2.0 (the "License");
 *   you may not use this file except in compliance with the License.
 *   You may obtain a copy of the License at
 *
 *       http://www.apache.org/licenses/LICENSE-2.0
 *
 *   Unless required by applicable law or agreed to in writing, software
 *   distributed under the License is distributed on an "AS IS" BASIS,
 *   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *   See the License for the specific language governing permissions and
 *   limitations under the License.
 *
 *******************************************************************/

#include "pyoa_header.h"


// ==================================================================
// Wrapper Implementation for Class: oaDoubleAppDef_oaWaferFeature
// ==================================================================


// ==================================================================
// Alloc/Dealloc Routines
// ==================================================================

// ------------------------------------------------------------------
static PyObject*
oaDoubleAppDef_oaWaferFeature_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
  try {
    int is_raw=(type==&PyoaDoubleAppDef_oaWaferFeature_Type);
    PyObject* bself = type->tp_alloc(type,0);
    if (bself == NULL) return bself;
    PyoaDoubleAppDef_oaWaferFeatureObject* self = (PyoaDoubleAppDef_oaWaferFeatureObject*)bself;
    self->locks = NULL;
    self->borrow = 0;
    static char *kwlist [] = { NULL } ;
    // Case: (oaDoubleAppDef_oaWaferFeature)
    {
        PyParamoaDoubleAppDef_oaWaferFeature p1;
        if (PyArg_ParseTuple(args,(char*)"O&",
              &PyoaDoubleAppDef_oaWaferFeature_Convert,&p1)) {
            self->data=p1.Data();
            self->value=&(self->data);
            return bself;
        }
    }
    PyErr_Clear();
    // Case: ()
    {
        if (PyArg_ParseTuple(args,(char*)"")) {
          self->data=NULL;
          self->value=&(self->data);
          return bself;
        }
    }
    PyErr_Clear();
    PyErr_SetString(PyExc_TypeError,
        "No Arg-Matching Constructor found for class: oaDoubleAppDef_oaWaferFeature, Choices are:\n"
        "    (oaDoubleAppDef_oaWaferFeature)\n"
    );
    Py_DECREF(self);
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static void
oaDoubleAppDef_oaWaferFeature_tp_dealloc(PyoaDoubleAppDef_oaWaferFeatureObject* self)
{
    self->ob_type->tp_free((PyObject*)self);
}

// ------------------------------------------------------------------
static PyObject*
oaDoubleAppDef_oaWaferFeature_tp_repr(PyObject *ob)
{
    PyParamoaDoubleAppDef_oaWaferFeature value;
    int convert_status=PyoaDoubleAppDef_oaWaferFeature_Convert(ob,&value);
    assert(convert_status!=0);
    PyObject* result;

    char buffer[51];
    sprintf(buffer,"<oaDoubleAppDef_oaWaferFeature::" DISPLAY_FORMAT ">",POINTER_AS_DISPLAY(value.DataCall()));
    result=PyString_FromString(buffer);
    return result;
}
        
// ------------------------------------------------------------------
static int
oaDoubleAppDef_oaWaferFeature_tp_compare(PyObject *ob1,PyObject* ob2)
{
    PyParamoaDoubleAppDef_oaWaferFeature v1;
    PyParamoaDoubleAppDef_oaWaferFeature v2;
    int convert_status1=PyoaDoubleAppDef_oaWaferFeature_Convert(ob1,&v1);
    int convert_status2=PyoaDoubleAppDef_oaWaferFeature_Convert(ob2,&v2);
    assert(convert_status1!=0);
    assert(convert_status2!=0);
    if (v1.DataCall()==v2.DataCall()) return 0;
    return 1;
}
        
// ------------------------------------------------------------------
int
PyoaDoubleAppDef_oaWaferFeature_Convert(PyObject* ob,PyParamoaDoubleAppDef_oaWaferFeature* result)
{
    if (ob == NULL) return 1;
    if (PyoaDoubleAppDef_oaWaferFeature_Check(ob)) {
        result->SetData( (oaDoubleAppDef_oaWaferFeature**) ((PyoaDoubleAppDef_oaWaferFeatureObject*)ob)->value);
        return 1;
    }
    PyErr_SetString(PyExc_TypeError,
        "Convertion of parameter to class: oaDoubleAppDef_oaWaferFeature Failed");
    return 0;
}
// ------------------------------------------------------------------
PyObject* PyoaDoubleAppDef_oaWaferFeature_FromoaDoubleAppDef_oaWaferFeature(oaDoubleAppDef_oaWaferFeature** value,int borrow,PyObject* lock)
{
    if (value && *value) {
        oaDoubleAppDef_oaWaferFeature* data=*value;
        PyObject* bself = PyoaDoubleAppDef_oaWaferFeature_Type.tp_alloc(&PyoaDoubleAppDef_oaWaferFeature_Type,0);
        if (bself == NULL) return bself;
        PyoaDoubleAppDef_oaWaferFeatureObject* self = (PyoaDoubleAppDef_oaWaferFeatureObject*)bself;
        self->value = (oaObject**) value;
        self->data = NULL;
        self->locks = NULL;
        self->borrow = 0; // Ignore borrow flag, since we copied
       if (lock) PyoaLockObject(self->locks,lock);
        return bself;
    }
    Py_INCREF(Py_None);
    return Py_None;
}
// ------------------------------------------------------------------
PyObject* PyoaDoubleAppDef_oaWaferFeature_FromoaDoubleAppDef_oaWaferFeature(oaDoubleAppDef_oaWaferFeature* data)
{
    if (data) {
       PyObject* bself = PyoaDoubleAppDef_oaWaferFeature_Type.tp_alloc(&PyoaDoubleAppDef_oaWaferFeature_Type,0);
       if (bself == NULL) return bself;
       PyoaDoubleAppDef_oaWaferFeatureObject* self = (PyoaDoubleAppDef_oaWaferFeatureObject*)bself;
       self->data = (oaObject*) data;
       self->value = &(self->data);
       self->borrow = 0; 
       self->locks = NULL;
       return bself;
    }
    Py_INCREF(Py_None);
    return Py_None;
}

// ------------------------------------------------------------------
// FunctionMethods:
// ------------------------------------------------------------------

// ------------------------------------------------------------------
static char oaDoubleAppDef_oaWaferFeature_get_doc[] = 
"Class: oaDoubleAppDef_oaWaferFeature, Function: get\n"
"  Paramegers: (oaWaferFeature)\n"
"    Calls: oaDouble get(const oaWaferFeature* object)\n"
"    Signature: get|simple-oaDouble|cptr-oaWaferFeature,\n"
"    This function returns the value of this double extension.\n"
"    object\n"
"    The object for which to get the value\n"
;

static PyObject*
oaDoubleAppDef_oaWaferFeature_get(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaDoubleAppDef_oaWaferFeature data;
    int convert_status=PyoaDoubleAppDef_oaWaferFeature_Convert(ob,&data);
    assert(convert_status!=0);
    PyoaDoubleAppDef_oaWaferFeatureObject* self=(PyoaDoubleAppDef_oaWaferFeatureObject*)ob;
    if (!PyValidateDbObject(data.Data(),0)) return NULL;

    PyParamoaWaferFeature p1;
    if (PyArg_ParseTuple(args,"O&",
          &PyoaWaferFeature_Convert,&p1)) {
        if (!PyValidateDbObject(p1.Data(),1)) return NULL;
        oaDouble result= (data.DataCall()->get(p1.Data()));
        return PyoaDouble_FromoaDouble(result);
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaDoubleAppDef_oaWaferFeature_getDefault_doc[] = 
"Class: oaDoubleAppDef_oaWaferFeature, Function: getDefault\n"
"  Paramegers: ()\n"
"    Calls: oaDouble getDefault() const\n"
"    Signature: getDefault|simple-oaDouble|\n"
"    BrowseData: 1\n"
"    This function returns the default value of this double extension.\n"
;

static PyObject*
oaDoubleAppDef_oaWaferFeature_getDefault(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaDoubleAppDef_oaWaferFeature data;
    int convert_status=PyoaDoubleAppDef_oaWaferFeature_Convert(ob,&data);
    assert(convert_status!=0);
    PyoaDoubleAppDef_oaWaferFeatureObject* self=(PyoaDoubleAppDef_oaWaferFeatureObject*)ob;
    if (!PyValidateDbObject(data.Data(),0)) return NULL;

    if (PyArg_ParseTuple(args,"")) {
        oaDouble result= (data.DataCall()->getDefault());
        return PyoaDouble_FromoaDouble(result);
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaDoubleAppDef_oaWaferFeature_set_doc[] = 
"Class: oaDoubleAppDef_oaWaferFeature, Function: set\n"
"  Paramegers: (oaWaferFeature,oaDouble)\n"
"    Calls: void set(oaWaferFeature* object,oaDouble value)\n"
"    Signature: set|void-void|ptr-oaWaferFeature,simple-oaDouble,\n"
"    This function sets the value of this double extension.\n"
"    object\n"
"    The object on which to set the value\n"
"    value\n"
"    The value to set on the object\n"
;

static PyObject*
oaDoubleAppDef_oaWaferFeature_set(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaDoubleAppDef_oaWaferFeature data;
    int convert_status=PyoaDoubleAppDef_oaWaferFeature_Convert(ob,&data);
    assert(convert_status!=0);
    PyoaDoubleAppDef_oaWaferFeatureObject* self=(PyoaDoubleAppDef_oaWaferFeatureObject*)ob;
    if (!PyValidateDbObject(data.Data(),0)) return NULL;

    PyParamoaWaferFeature p1;
    PyParamoaDouble p2;
    if (PyArg_ParseTuple(args,"O&O&",
          &PyoaWaferFeature_Convert,&p1,
          &PyoaDouble_Convert,&p2)) {
        if (!PyValidateDbObject(p1.Data(),1)) return NULL;
        data.DataCall()->set(p1.Data(),p2.Data());
        Py_INCREF(Py_None);
        return Py_None;
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaDoubleAppDef_oaWaferFeature_isNull_doc[] =
"Class: oaDoubleAppDef_oaWaferFeature, Function: isNull\n"
"  Parameters: () \n"
"    This functions returns 1 if the DbPointer is NULL, and 0 otherwise.\n"
;

static PyObject*
oaDoubleAppDef_oaWaferFeature_tp_isNull(PyObject* ob, PyObject *args)
{
    PyParamoaDoubleAppDef_oaWaferFeature data;
    int convert_status=PyoaDoubleAppDef_oaWaferFeature_Convert(ob,&data);
    assert(convert_status!=0);
    if (data.DataCall()==NULL)
        return PyInt_FromLong(1);
    else
        return PyInt_FromLong(0);
}
static char oaDoubleAppDef_oaWaferFeature_assign_doc[] = 
"Class: oaDoubleAppDef_oaWaferFeature, Function: set\n"
"  Paramegers: (oaDouble)\n"
"    This function sets the current value.\n"
;

static PyObject*
oaDoubleAppDef_oaWaferFeature_tp_assign(PyObject* ob, PyObject *args)
{
  PyParamoaDoubleAppDef_oaWaferFeature data;
  int convert_status=PyoaDoubleAppDef_oaWaferFeature_Convert(ob,&data);
  assert(convert_status!=0);
  try {
    PyParamoaDoubleAppDef_oaWaferFeature p1;
    if (PyArg_ParseTuple(args,(char*)"O&",
          &PyoaDoubleAppDef_oaWaferFeature_Convert,&p1)) {
        data.Data()=p1.Data();
        Py_INCREF(ob);
        return ob;
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}


// ------------------------------------------------------------------
//  Function Methods Table:
// ------------------------------------------------------------------

static PyMethodDef oaDoubleAppDef_oaWaferFeature_methodlist[] = {
    {"get",(PyCFunction)oaDoubleAppDef_oaWaferFeature_get,METH_VARARGS,oaDoubleAppDef_oaWaferFeature_get_doc},
    {"getDefault",(PyCFunction)oaDoubleAppDef_oaWaferFeature_getDefault,METH_VARARGS,oaDoubleAppDef_oaWaferFeature_getDefault_doc},
    {"set",(PyCFunction)oaDoubleAppDef_oaWaferFeature_set,METH_VARARGS,oaDoubleAppDef_oaWaferFeature_set_doc},
    {"isNull",(PyCFunction)oaDoubleAppDef_oaWaferFeature_tp_isNull,METH_VARARGS,oaDoubleAppDef_oaWaferFeature_isNull_doc},
    {"assign",(PyCFunction)oaDoubleAppDef_oaWaferFeature_tp_assign,METH_VARARGS,oaDoubleAppDef_oaWaferFeature_assign_doc},
   {NULL,NULL,0,NULL}
};


// ------------------------------------------------------------------
//  Type Object:
// ------------------------------------------------------------------

// ------------------------------------------------------------------
static char oaDoubleAppDef_oaWaferFeature_doc[] = 
"Class: oaDoubleAppDef_oaWaferFeature\n"
"  The oaDoubleAppDef class implements an application-specific extension for a particular type of data in a database.\n"
"  Once created, a double field is added to each object of the specified dataType. The default value for this extension is DBL_MAX. Applications can use the new field for whatever purpose is necessary.\n"
"  For additional information on defining and using AppDefs, see oaAppDef and Extending the Database in the Programmer's Guide.\n"
"Constructors:\n"
"  Paramegers: (oaDoubleAppDef_oaWaferFeature)\n"
"    Calls: (const oaDoubleAppDef_oaWaferFeature&)\n"
"    Signature: oaDoubleAppDef_oaWaferFeature||cref-oaDoubleAppDef_oaWaferFeature,\n"
;

// ------------------------------------------------------------------
PyTypeObject PyoaDoubleAppDef_oaWaferFeature_Type = {
    PyObject_HEAD_INIT(&PyType_Type)
    0,
    "oaDoubleAppDef_oaWaferFeature",
    sizeof(PyoaDoubleAppDef_oaWaferFeatureObject),
    0,
    (destructor)oaDoubleAppDef_oaWaferFeature_tp_dealloc,	/* tp_dealloc */
    0,	/* tp_print */
    0,					/* tp_getattr */
    0,					/* tp_setattr */
    (cmpfunc)oaDoubleAppDef_oaWaferFeature_tp_compare,	/* tp_compare */
    (reprfunc)oaDoubleAppDef_oaWaferFeature_tp_repr,	/* tp_repr */
    0,					/* tp_as_number */
    0,					/* tp_as_sequence */
    0,					/* tp_as_mapping */
    0,					/* tp_as_hash */
    0,					/* tp_as_call */
    0,					/* tp_str */
    0,					/* tp_getattro */
    0,					/* tp_setattro */
    0,					/* tp_as_buffer */
    Py_TPFLAGS_DEFAULT|Py_TPFLAGS_BASETYPE, /* tp_flags */
    oaDoubleAppDef_oaWaferFeature_doc,	/* tp_doc */
    0,					/* tp_traverse */
    0,					/* tp_clear */
    0,					/* tp_richcompre */
    0,					/* tp_weaklistoffset */
    0,					/* tp_iter */
    0,					/* tp_iternext */
    oaDoubleAppDef_oaWaferFeature_methodlist,	/* tp_methods */
    0,					/* tp_members */
    0,					/* tp_getset */
    &PyoaAppDef_Type,	/* tp_base */
    0,					/* tp_dict */
    0,					/* tp_descr_get */
    0,					/* tp_descr_set */
    0,					/* tp_dictoffset */
    0,					/* tp_init */
    PyType_GenericAlloc,	/* tp_alloc */
    oaDoubleAppDef_oaWaferFeature_new,	/* tp_new */
    _PyObject_Del,	/* tp_free */
};


// ------------------------------------------------------------------
// Static FunctionMethods:
// ------------------------------------------------------------------

// ------------------------------------------------------------------
static char oaDoubleAppDef_oaWaferFeature_static_find_doc[] = 
"Class: oaDoubleAppDef_oaWaferFeature, Function: find\n"
"  Paramegers: (oaString)\n"
"    Calls: oaDoubleAppDef_oaWaferFeature* find(const oaString& name)\n"
"    Signature: find|ptr-oaDoubleAppDef_oaWaferFeature|cref-oaString,\n"
"    This function returns an oaDoubleAppDef object with this dataType and the specified 'name' if it exists.\n"
"    name\n"
"    The name of the oaAppDef object to look for\n"
"  Paramegers: (oaString,oaAppObjectDef)\n"
"    Calls: oaDoubleAppDef_oaWaferFeature* find(const oaString& name,const oaAppObjectDef* objDef)\n"
"    Signature: find|ptr-oaDoubleAppDef_oaWaferFeature|cref-oaString,cptr-oaAppObjectDef,\n"
"    This function returns an oaDoubleAppDef object with this dataType and the specified 'name' that is associated with the specified object extension 'objDef'.\n"
"    name\n"
"    The name of the oaAppDef object to look for\n"
"    objDef\n"
"    A constant pointer to the object extension\n"
;

static PyObject*
oaDoubleAppDef_oaWaferFeature_static_find(PyObject* ob, PyObject *args)
{
  try {
    // Case: (oaString)
    {
        PyParamoaString p1;
        if (PyArg_ParseTuple(args,"O&",
              &PyoaString_Convert,&p1)) {
            oaDoubleAppDef_oaWaferFeaturep result= (oaDoubleAppDef_oaWaferFeature::find(p1.Data()));
            return PyoaDoubleAppDef_oaWaferFeature_FromoaDoubleAppDef_oaWaferFeature(result);
        }
    }
    PyErr_Clear();
    // Case: (oaString,oaAppObjectDef)
    {
        PyParamoaString p1;
        PyParamoaAppObjectDef p2;
        if (PyArg_ParseTuple(args,"O&O&",
              &PyoaString_Convert,&p1,
              &PyoaAppObjectDef_Convert,&p2)) {
            if (!PyValidateDbObject(p2.Data(),2)) return NULL;
            oaDoubleAppDef_oaWaferFeaturep result= (oaDoubleAppDef_oaWaferFeature::find(p1.Data(),p2.Data()));
            return PyoaDoubleAppDef_oaWaferFeature_FromoaDoubleAppDef_oaWaferFeature(result);
        }
    }
    PyErr_Clear();
    PyErr_SetString(PyExc_TypeError,
        "No Arg-Matching Function found for class: oaDoubleAppDef_oaWaferFeature, function: find, Choices are:\n"
        "    (oaString)\n"
        "    (oaString,oaAppObjectDef)\n"
    );
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaDoubleAppDef_oaWaferFeature_static_get_doc[] = 
"Class: oaDoubleAppDef_oaWaferFeature, Function: get\n"
"  Paramegers: (oaString)\n"
"    Calls: oaDoubleAppDef_oaWaferFeature* get(const oaString& name)\n"
"    Signature: get|ptr-oaDoubleAppDef_oaWaferFeature|cref-oaString,simple-oaDouble,simple-oaBoolean,\n"
"    This function constructs an oaDoubleAppDef object, creating a double extension with the specified name . You can create a double extension on any object except another extension.\n"
"    name\n"
"    The name given to the oaDoubleAppDef object\n"
"    defValue\n"
"    The default value for this extension\n"
"    persist\n"
"    Saves the oaDoubleAppDef data in the database\n"
"    oacAppDefExists\n"
"  Paramegers: (oaString,oaDouble)\n"
"    Calls: oaDoubleAppDef_oaWaferFeature* get(const oaString& name,oaDouble defValue)\n"
"    Signature: get|ptr-oaDoubleAppDef_oaWaferFeature|cref-oaString,simple-oaDouble,simple-oaBoolean,\n"
"    This function constructs an oaDoubleAppDef object, creating a double extension with the specified name . You can create a double extension on any object except another extension.\n"
"    name\n"
"    The name given to the oaDoubleAppDef object\n"
"    defValue\n"
"    The default value for this extension\n"
"    persist\n"
"    Saves the oaDoubleAppDef data in the database\n"
"    oacAppDefExists\n"
"  Paramegers: (oaString,oaDouble,oaBoolean)\n"
"    Calls: oaDoubleAppDef_oaWaferFeature* get(const oaString& name,oaDouble defValue,oaBoolean persist)\n"
"    Signature: get|ptr-oaDoubleAppDef_oaWaferFeature|cref-oaString,simple-oaDouble,simple-oaBoolean,\n"
"    This function constructs an oaDoubleAppDef object, creating a double extension with the specified name . You can create a double extension on any object except another extension.\n"
"    name\n"
"    The name given to the oaDoubleAppDef object\n"
"    defValue\n"
"    The default value for this extension\n"
"    persist\n"
"    Saves the oaDoubleAppDef data in the database\n"
"    oacAppDefExists\n"
"  Paramegers: (oaString,oaAppObjectDef)\n"
"    Calls: oaDoubleAppDef_oaWaferFeature* get(const oaString& name,const oaAppObjectDef* objDef)\n"
"    Signature: get|ptr-oaDoubleAppDef_oaWaferFeature|cref-oaString,cptr-oaAppObjectDef,simple-oaDouble,simple-oaBoolean,\n"
"    This function constructs an oaDoubleAppDef object, creating a double extension with the specified name for the specified object type.\n"
"    name\n"
"    The name given to the oaDoubleAppDef object\n"
"    objDef\n"
"    The object extension with which to associate the extension\n"
"    defValue\n"
"    An optional default value\n"
"    persist\n"
"    Saves the oaDoubleAppDef data in the database\n"
"    oacAppDefExists\n"
"  Paramegers: (oaString,oaAppObjectDef,oaDouble)\n"
"    Calls: oaDoubleAppDef_oaWaferFeature* get(const oaString& name,const oaAppObjectDef* objDef,oaDouble defValue)\n"
"    Signature: get|ptr-oaDoubleAppDef_oaWaferFeature|cref-oaString,cptr-oaAppObjectDef,simple-oaDouble,simple-oaBoolean,\n"
"    This function constructs an oaDoubleAppDef object, creating a double extension with the specified name for the specified object type.\n"
"    name\n"
"    The name given to the oaDoubleAppDef object\n"
"    objDef\n"
"    The object extension with which to associate the extension\n"
"    defValue\n"
"    An optional default value\n"
"    persist\n"
"    Saves the oaDoubleAppDef data in the database\n"
"    oacAppDefExists\n"
"  Paramegers: (oaString,oaAppObjectDef,oaDouble,oaBoolean)\n"
"    Calls: oaDoubleAppDef_oaWaferFeature* get(const oaString& name,const oaAppObjectDef* objDef,oaDouble defValue,oaBoolean persist)\n"
"    Signature: get|ptr-oaDoubleAppDef_oaWaferFeature|cref-oaString,cptr-oaAppObjectDef,simple-oaDouble,simple-oaBoolean,\n"
"    This function constructs an oaDoubleAppDef object, creating a double extension with the specified name for the specified object type.\n"
"    name\n"
"    The name given to the oaDoubleAppDef object\n"
"    objDef\n"
"    The object extension with which to associate the extension\n"
"    defValue\n"
"    An optional default value\n"
"    persist\n"
"    Saves the oaDoubleAppDef data in the database\n"
"    oacAppDefExists\n"
;

static PyObject*
oaDoubleAppDef_oaWaferFeature_static_get(PyObject* ob, PyObject *args)
{
  try {
    // Case: (oaString)
    {
        PyParamoaString p1;
        if (PyArg_ParseTuple(args,"O&",
              &PyoaString_Convert,&p1)) {
            oaDoubleAppDef_oaWaferFeaturep result= (oaDoubleAppDef_oaWaferFeature::get(p1.Data()));
            return PyoaDoubleAppDef_oaWaferFeature_FromoaDoubleAppDef_oaWaferFeature(result);
        }
    }
    PyErr_Clear();
    // Case: (oaString,oaDouble)
    {
        PyParamoaString p1;
        PyParamoaDouble p2;
        if (PyArg_ParseTuple(args,"O&O&",
              &PyoaString_Convert,&p1,
              &PyoaDouble_Convert,&p2)) {
            oaDoubleAppDef_oaWaferFeaturep result= (oaDoubleAppDef_oaWaferFeature::get(p1.Data(),p2.Data()));
            return PyoaDoubleAppDef_oaWaferFeature_FromoaDoubleAppDef_oaWaferFeature(result);
        }
    }
    PyErr_Clear();
    // Case: (oaString,oaDouble,oaBoolean)
    {
        PyParamoaString p1;
        PyParamoaDouble p2;
        PyParamoaBoolean p3;
        if (PyArg_ParseTuple(args,"O&O&O&",
              &PyoaString_Convert,&p1,
              &PyoaDouble_Convert,&p2,
              &PyoaBoolean_Convert,&p3)) {
            oaDoubleAppDef_oaWaferFeaturep result= (oaDoubleAppDef_oaWaferFeature::get(p1.Data(),p2.Data(),p3.Data()));
            return PyoaDoubleAppDef_oaWaferFeature_FromoaDoubleAppDef_oaWaferFeature(result);
        }
    }
    PyErr_Clear();
    // Case: (oaString,oaAppObjectDef)
    {
        PyParamoaString p1;
        PyParamoaAppObjectDef p2;
        if (PyArg_ParseTuple(args,"O&O&",
              &PyoaString_Convert,&p1,
              &PyoaAppObjectDef_Convert,&p2)) {
            if (!PyValidateDbObject(p2.Data(),2)) return NULL;
            oaDoubleAppDef_oaWaferFeaturep result= (oaDoubleAppDef_oaWaferFeature::get(p1.Data(),p2.Data()));
            return PyoaDoubleAppDef_oaWaferFeature_FromoaDoubleAppDef_oaWaferFeature(result);
        }
    }
    PyErr_Clear();
    // Case: (oaString,oaAppObjectDef,oaDouble)
    {
        PyParamoaString p1;
        PyParamoaAppObjectDef p2;
        PyParamoaDouble p3;
        if (PyArg_ParseTuple(args,"O&O&O&",
              &PyoaString_Convert,&p1,
              &PyoaAppObjectDef_Convert,&p2,
              &PyoaDouble_Convert,&p3)) {
            if (!PyValidateDbObject(p2.Data(),2)) return NULL;
            oaDoubleAppDef_oaWaferFeaturep result= (oaDoubleAppDef_oaWaferFeature::get(p1.Data(),p2.Data(),p3.Data()));
            return PyoaDoubleAppDef_oaWaferFeature_FromoaDoubleAppDef_oaWaferFeature(result);
        }
    }
    PyErr_Clear();
    // Case: (oaString,oaAppObjectDef,oaDouble,oaBoolean)
    {
        PyParamoaString p1;
        PyParamoaAppObjectDef p2;
        PyParamoaDouble p3;
        PyParamoaBoolean p4;
        if (PyArg_ParseTuple(args,"O&O&O&O&",
              &PyoaString_Convert,&p1,
              &PyoaAppObjectDef_Convert,&p2,
              &PyoaDouble_Convert,&p3,
              &PyoaBoolean_Convert,&p4)) {
            if (!PyValidateDbObject(p2.Data(),2)) return NULL;
            oaDoubleAppDef_oaWaferFeaturep result= (oaDoubleAppDef_oaWaferFeature::get(p1.Data(),p2.Data(),p3.Data(),p4.Data()));
            return PyoaDoubleAppDef_oaWaferFeature_FromoaDoubleAppDef_oaWaferFeature(result);
        }
    }
    PyErr_Clear();
    PyErr_SetString(PyExc_TypeError,
        "No Arg-Matching Function found for class: oaDoubleAppDef_oaWaferFeature, function: get, Choices are:\n"
        "    (oaString)\n"
        "    (oaString,oaDouble)\n"
        "    (oaString,oaDouble,oaBoolean)\n"
        "    (oaString,oaAppObjectDef)\n"
        "    (oaString,oaAppObjectDef,oaDouble)\n"
        "    (oaString,oaAppObjectDef,oaDouble,oaBoolean)\n"
    );
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static PyMethodDef oaDoubleAppDef_oaWaferFeature_staticmethodlist[] = {
    {"static_find",(PyCFunction)oaDoubleAppDef_oaWaferFeature_static_find,METH_VARARGS,oaDoubleAppDef_oaWaferFeature_static_find_doc},
    {"static_get",(PyCFunction)oaDoubleAppDef_oaWaferFeature_static_get,METH_VARARGS,oaDoubleAppDef_oaWaferFeature_static_get_doc},
   {NULL,NULL,0,NULL}
};


// ------------------------------------------------------------------
//  Type Init:
// ------------------------------------------------------------------

int
PyoaDoubleAppDef_oaWaferFeature_TypeInit(PyObject* mod_dict)
{
    if (PyType_Ready(&PyoaDoubleAppDef_oaWaferFeature_Type)<0) {
      printf("** PyType_Ready failed for: oaDoubleAppDef_oaWaferFeature\n");
      return -1;
    }

    if (PyDict_SetItemString(mod_dict,"oaDoubleAppDef_oaWaferFeature",
           (PyObject*)(&PyoaDoubleAppDef_oaWaferFeature_Type))<0) {
       printf("** Failed to add type name to module dictionary for: oaDoubleAppDef_oaWaferFeature\n");
       return -1;
    }

    PyObject *dict, *value;
    PyMethodDef *method;
    dict=PyoaDoubleAppDef_oaWaferFeature_Type.tp_dict;
    for(method=oaDoubleAppDef_oaWaferFeature_staticmethodlist;method->ml_name!=NULL;method++) {
        value=PyCFunction_New(method,NULL);
    if (value==NULL) return -1;
        if (PyDict_SetItemString(dict,method->ml_name,value)!=0) {
        Py_DECREF(value);
            printf("** Failed to add static function to module dictionary for: %s\n",
                method->ml_name);
            return -1;
        }
        Py_DECREF(value);
    }
    return 0;
}


/********************************************************************
 *   Copyright 2002-2008  LSI Corporation
 *
 *   Licensed under the Apache License, Version 2.0 (the "License");
 *   you may not use this file except in compliance with the License.
 *   You may obtain a copy of the License at
 *
 *       http://www.apache.org/licenses/LICENSE-2.0
 *
 *   Unless required by applicable law or agreed to in writing, software
 *   distributed under the License is distributed on an "AS IS" BASIS,
 *   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *   See the License for the specific language governing permissions and
 *   limitations under the License.
 *
 *******************************************************************/

#include "pyoa_header.h"


// ==================================================================
// Wrapper Implementation for Class: oaDoubleProp
// ==================================================================


// ==================================================================
// Alloc/Dealloc Routines
// ==================================================================

// ------------------------------------------------------------------
static PyObject*
oaDoubleProp_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
  try {
    int is_raw=(type==&PyoaDoubleProp_Type);
    PyObject* bself = type->tp_alloc(type,0);
    if (bself == NULL) return bself;
    PyoaDoublePropObject* self = (PyoaDoublePropObject*)bself;
    self->locks = NULL;
    self->borrow = 0;
    static char *kwlist [] = { NULL } ;
    // Case: (oaDoubleProp)
    {
        PyParamoaDoubleProp p1;
        if (PyArg_ParseTuple(args,(char*)"O&",
              &PyoaDoubleProp_Convert,&p1)) {
            self->data=p1.Data();
            self->value=&(self->data);
            return bself;
        }
    }
    PyErr_Clear();
    // Case: ()
    {
        if (PyArg_ParseTuple(args,(char*)"")) {
          self->data=NULL;
          self->value=&(self->data);
          return bself;
        }
    }
    PyErr_Clear();
    PyErr_SetString(PyExc_TypeError,
        "No Arg-Matching Constructor found for class: oaDoubleProp, Choices are:\n"
        "    (oaDoubleProp)\n"
    );
    Py_DECREF(self);
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static void
oaDoubleProp_tp_dealloc(PyoaDoublePropObject* self)
{
    self->ob_type->tp_free((PyObject*)self);
}

// ------------------------------------------------------------------
static PyObject*
oaDoubleProp_tp_repr(PyObject *ob)
{
    PyParamoaDoubleProp value;
    int convert_status=PyoaDoubleProp_Convert(ob,&value);
    assert(convert_status!=0);
    PyObject* result;
    if (!value.Data()) {
        oaString buffer("<oaDoubleProp::NULL>");
        result=PyString_FromString((char*)(const char*)buffer);
    }
    else {
        oaString sresult;
        value.DataCall()->getName(sresult);
    
        char addr[34];
        sprintf(addr,DISPLAY_FORMAT,POINTER_AS_DISPLAY(value.DataCall()));
        oaString buffer;
        buffer+=oaString("<oaDoubleProp::");
        buffer+=oaString(addr);
        buffer+=oaString("::");
        buffer+=oaString(sresult);
        buffer+=oaString(">");
        result=PyString_FromString((char*)(const char*)buffer);
    
    }
    return result;
}
        
// ------------------------------------------------------------------
static int
oaDoubleProp_tp_compare(PyObject *ob1,PyObject* ob2)
{
    PyParamoaDoubleProp v1;
    PyParamoaDoubleProp v2;
    int convert_status1=PyoaDoubleProp_Convert(ob1,&v1);
    int convert_status2=PyoaDoubleProp_Convert(ob2,&v2);
    assert(convert_status1!=0);
    assert(convert_status2!=0);
    if (v1.DataCall()==v2.DataCall()) return 0;
    return 1;
}
        
// ------------------------------------------------------------------
int
PyoaDoubleProp_Convert(PyObject* ob,PyParamoaDoubleProp* result)
{
    if (ob == NULL) return 1;
    if (PyoaDoubleProp_Check(ob)) {
        result->SetData( (oaDoubleProp**) ((PyoaDoublePropObject*)ob)->value);
        return 1;
    }
    PyErr_SetString(PyExc_TypeError,
        "Convertion of parameter to class: oaDoubleProp Failed");
    return 0;
}
// ------------------------------------------------------------------
PyObject* PyoaDoubleProp_FromoaDoubleProp(oaDoubleProp** value,int borrow,PyObject* lock)
{
    if (value && *value) {
        oaDoubleProp* data=*value;
        PyObject* bself = PyoaDoubleProp_Type.tp_alloc(&PyoaDoubleProp_Type,0);
        if (bself == NULL) return bself;
        PyoaDoublePropObject* self = (PyoaDoublePropObject*)bself;
        self->value = (oaObject**) value;
        self->data = NULL;
        self->locks = NULL;
        self->borrow = 0; // Ignore borrow flag, since we copied
       if (lock) PyoaLockObject(self->locks,lock);
        return bself;
    }
    Py_INCREF(Py_None);
    return Py_None;
}
// ------------------------------------------------------------------
PyObject* PyoaDoubleProp_FromoaDoubleProp(oaDoubleProp* data)
{
    if (data) {
       PyObject* bself = PyoaDoubleProp_Type.tp_alloc(&PyoaDoubleProp_Type,0);
       if (bself == NULL) return bself;
       PyoaDoublePropObject* self = (PyoaDoublePropObject*)bself;
       self->data = (oaObject*) data;
       self->value = &(self->data);
       self->borrow = 0; 
       self->locks = NULL;
       return bself;
    }
    Py_INCREF(Py_None);
    return Py_None;
}

// ------------------------------------------------------------------
// FunctionMethods:
// ------------------------------------------------------------------

// ------------------------------------------------------------------
static char oaDoubleProp_getValue_doc[] = 
"Class: oaDoubleProp, Function: getValue\n"
"  Paramegers: ()\n"
"    Calls: oaDouble getValue() const\n"
"    Signature: getValue|simple-oaDouble|\n"
"    BrowseData: 1\n"
"    This function returns the value of this property.\n"
;

static PyObject*
oaDoubleProp_getValue(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaDoubleProp data;
    int convert_status=PyoaDoubleProp_Convert(ob,&data);
    assert(convert_status!=0);
    PyoaDoublePropObject* self=(PyoaDoublePropObject*)ob;
    if (!PyValidateDbObject(data.Data(),0)) return NULL;

    if (PyArg_ParseTuple(args,"")) {
        oaDouble result= (data.DataCall()->getValue());
        return PyoaDouble_FromoaDouble(result);
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaDoubleProp_setValue_doc[] = 
"Class: oaDoubleProp, Function: setValue\n"
"  Paramegers: (oaDouble)\n"
"    Calls: void setValue(oaDouble value)\n"
"    Signature: setValue|void-void|simple-oaDouble,\n"
"    This function sets this property to the specified value.\n"
"    value\n"
"    The property value to set\n"
;

static PyObject*
oaDoubleProp_setValue(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaDoubleProp data;
    int convert_status=PyoaDoubleProp_Convert(ob,&data);
    assert(convert_status!=0);
    PyoaDoublePropObject* self=(PyoaDoublePropObject*)ob;
    if (!PyValidateDbObject(data.Data(),0)) return NULL;

    PyParamoaDouble p1;
    if (PyArg_ParseTuple(args,"O&",
          &PyoaDouble_Convert,&p1)) {
        data.DataCall()->setValue(p1.Data());
        Py_INCREF(Py_None);
        return Py_None;
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaDoubleProp_isNull_doc[] =
"Class: oaDoubleProp, Function: isNull\n"
"  Parameters: () \n"
"    This functions returns 1 if the DbPointer is NULL, and 0 otherwise.\n"
;

static PyObject*
oaDoubleProp_tp_isNull(PyObject* ob, PyObject *args)
{
    PyParamoaDoubleProp data;
    int convert_status=PyoaDoubleProp_Convert(ob,&data);
    assert(convert_status!=0);
    if (data.DataCall()==NULL)
        return PyInt_FromLong(1);
    else
        return PyInt_FromLong(0);
}
static char oaDoubleProp_assign_doc[] = 
"Class: oaDoubleProp, Function: set\n"
"  Paramegers: (oaDouble)\n"
"    This function sets the current value.\n"
;

static PyObject*
oaDoubleProp_tp_assign(PyObject* ob, PyObject *args)
{
  PyParamoaDoubleProp data;
  int convert_status=PyoaDoubleProp_Convert(ob,&data);
  assert(convert_status!=0);
  try {
    PyParamoaDoubleProp p1;
    if (PyArg_ParseTuple(args,(char*)"O&",
          &PyoaDoubleProp_Convert,&p1)) {
        data.Data()=p1.Data();
        Py_INCREF(ob);
        return ob;
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}


// ------------------------------------------------------------------
//  Function Methods Table:
// ------------------------------------------------------------------

static PyMethodDef oaDoubleProp_methodlist[] = {
    {"getValue",(PyCFunction)oaDoubleProp_getValue,METH_VARARGS,oaDoubleProp_getValue_doc},
    {"setValue",(PyCFunction)oaDoubleProp_setValue,METH_VARARGS,oaDoubleProp_setValue_doc},
    {"isNull",(PyCFunction)oaDoubleProp_tp_isNull,METH_VARARGS,oaDoubleProp_isNull_doc},
    {"assign",(PyCFunction)oaDoubleProp_tp_assign,METH_VARARGS,oaDoubleProp_assign_doc},
   {NULL,NULL,0,NULL}
};


// ------------------------------------------------------------------
//  Type Object:
// ------------------------------------------------------------------

// ------------------------------------------------------------------
static char oaDoubleProp_doc[] = 
"Class: oaDoubleProp\n"
"  The oaDoubleProp is a property that has a 64-bit floating point value.\n"
"  Properties are application-defined values that can be added to any managed object in oaDesign , oaTech , and oaWafer databases except for the following paged objects: oaDevice , oaNode , oaParasiticNetwork , and oaSubNetwork .\n"
"  To create properties on DM Objects, create the corresponding oaDMData object (using oaLibDMData::open , oaCellDMData::open , oaViewDMData::open , or oaCellViewDMData::open ), then create properties on that oaDMData object.\n"
"  See oaProp for a general discussion of properties.\n"
"Constructors:\n"
"  Paramegers: (oaDoubleProp)\n"
"    Calls: (const oaDoubleProp&)\n"
"    Signature: oaDoubleProp||cref-oaDoubleProp,\n"
;

// ------------------------------------------------------------------
PyTypeObject PyoaDoubleProp_Type = {
    PyObject_HEAD_INIT(&PyType_Type)
    0,
    "oaDoubleProp",
    sizeof(PyoaDoublePropObject),
    0,
    (destructor)oaDoubleProp_tp_dealloc,	/* tp_dealloc */
    0,	/* tp_print */
    0,					/* tp_getattr */
    0,					/* tp_setattr */
    (cmpfunc)oaDoubleProp_tp_compare,	/* tp_compare */
    (reprfunc)oaDoubleProp_tp_repr,	/* tp_repr */
    0,					/* tp_as_number */
    0,					/* tp_as_sequence */
    0,					/* tp_as_mapping */
    0,					/* tp_as_hash */
    0,					/* tp_as_call */
    0,					/* tp_str */
    0,					/* tp_getattro */
    0,					/* tp_setattro */
    0,					/* tp_as_buffer */
    Py_TPFLAGS_DEFAULT|Py_TPFLAGS_BASETYPE, /* tp_flags */
    oaDoubleProp_doc,	/* tp_doc */
    0,					/* tp_traverse */
    0,					/* tp_clear */
    0,					/* tp_richcompre */
    0,					/* tp_weaklistoffset */
    0,					/* tp_iter */
    0,					/* tp_iternext */
    oaDoubleProp_methodlist,	/* tp_methods */
    0,					/* tp_members */
    0,					/* tp_getset */
    &PyoaProp_Type,	/* tp_base */
    0,					/* tp_dict */
    0,					/* tp_descr_get */
    0,					/* tp_descr_set */
    0,					/* tp_dictoffset */
    0,					/* tp_init */
    PyType_GenericAlloc,	/* tp_alloc */
    oaDoubleProp_new,	/* tp_new */
    _PyObject_Del,	/* tp_free */
};


// ------------------------------------------------------------------
// Static FunctionMethods:
// ------------------------------------------------------------------

// ------------------------------------------------------------------
static char oaDoubleProp_static_create_doc[] = 
"Class: oaDoubleProp, Function: create\n"
"  Paramegers: (oaObject,oaString,oaDouble)\n"
"    Calls: oaDoubleProp* create(oaObject* object,const oaString& name,oaDouble value)\n"
"    Signature: create|ptr-oaDoubleProp|ptr-oaObject,cref-oaString,simple-oaDouble,\n"
"    This function creates a double property with the specified attributes.\n"
"    Note: The specified name is checked to verify it is unique for properties on the specified object.\n"
"    object\n"
"    The object to which to attach the property\n"
"    name\n"
"    The property name\n"
"    value\n"
"    The property value\n"
"    A pointer to the oaDoubleProp\n"
"    oacInvalidObjForProp\n"
"    oacPropNameUsed\n"
;

static PyObject*
oaDoubleProp_static_create(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaObject p1;
    PyParamoaString p2;
    PyParamoaDouble p3;
    if (PyArg_ParseTuple(args,"O&O&O&",
          &PyoaObject_Convert,&p1,
          &PyoaString_Convert,&p2,
          &PyoaDouble_Convert,&p3)) {
        if (!PyValidateDbObject(p1.Data(),1)) return NULL;
        oaDoublePropp result= (oaDoubleProp::create(p1.Data(),p2.Data(),p3.Data()));
        return PyoaDoubleProp_FromoaDoubleProp(result);
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static PyMethodDef oaDoubleProp_staticmethodlist[] = {
    {"static_create",(PyCFunction)oaDoubleProp_static_create,METH_VARARGS,oaDoubleProp_static_create_doc},
   {NULL,NULL,0,NULL}
};


// ------------------------------------------------------------------
//  Type Init:
// ------------------------------------------------------------------

int
PyoaDoubleProp_TypeInit(PyObject* mod_dict)
{
    if (PyType_Ready(&PyoaDoubleProp_Type)<0) {
      printf("** PyType_Ready failed for: oaDoubleProp\n");
      return -1;
    }

    if (PyDict_SetItemString(mod_dict,"oaDoubleProp",
           (PyObject*)(&PyoaDoubleProp_Type))<0) {
       printf("** Failed to add type name to module dictionary for: oaDoubleProp\n");
       return -1;
    }

    PyObject *dict, *value;
    PyMethodDef *method;
    dict=PyoaDoubleProp_Type.tp_dict;
    for(method=oaDoubleProp_staticmethodlist;method->ml_name!=NULL;method++) {
        value=PyCFunction_New(method,NULL);
    if (value==NULL) return -1;
        if (PyDict_SetItemString(dict,method->ml_name,value)!=0) {
        Py_DECREF(value);
            printf("** Failed to add static function to module dictionary for: %s\n",
                method->ml_name);
            return -1;
        }
        Py_DECREF(value);
    }
    return 0;
}


/********************************************************************
 *   Copyright 2002-2008  LSI Corporation
 *
 *   Licensed under the Apache License, Version 2.0 (the "License");
 *   you may not use this file except in compliance with the License.
 *   You may obtain a copy of the License at
 *
 *       http://www.apache.org/licenses/LICENSE-2.0
 *
 *   Unless required by applicable law or agreed to in writing, software
 *   distributed under the License is distributed on an "AS IS" BASIS,
 *   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *   See the License for the specific language governing permissions and
 *   limitations under the License.
 *
 *******************************************************************/

#include "pyoa_header.h"


// ==================================================================
// Wrapper Implementation for Class: oaDoubleRangeProp
// ==================================================================


// ==================================================================
// Alloc/Dealloc Routines
// ==================================================================

// ------------------------------------------------------------------
static PyObject*
oaDoubleRangeProp_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
  try {
    int is_raw=(type==&PyoaDoubleRangeProp_Type);
    PyObject* bself = type->tp_alloc(type,0);
    if (bself == NULL) return bself;
    PyoaDoubleRangePropObject* self = (PyoaDoubleRangePropObject*)bself;
    self->locks = NULL;
    self->borrow = 0;
    static char *kwlist [] = { NULL } ;
    // Case: (oaDoubleRangeProp)
    {
        PyParamoaDoubleRangeProp p1;
        if (PyArg_ParseTuple(args,(char*)"O&",
              &PyoaDoubleRangeProp_Convert,&p1)) {
            self->data=p1.Data();
            self->value=&(self->data);
            return bself;
        }
    }
    PyErr_Clear();
    // Case: ()
    {
        if (PyArg_ParseTuple(args,(char*)"")) {
          self->data=NULL;
          self->value=&(self->data);
          return bself;
        }
    }
    PyErr_Clear();
    PyErr_SetString(PyExc_TypeError,
        "No Arg-Matching Constructor found for class: oaDoubleRangeProp, Choices are:\n"
        "    (oaDoubleRangeProp)\n"
    );
    Py_DECREF(self);
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static void
oaDoubleRangeProp_tp_dealloc(PyoaDoubleRangePropObject* self)
{
    self->ob_type->tp_free((PyObject*)self);
}

// ------------------------------------------------------------------
static PyObject*
oaDoubleRangeProp_tp_repr(PyObject *ob)
{
    PyParamoaDoubleRangeProp value;
    int convert_status=PyoaDoubleRangeProp_Convert(ob,&value);
    assert(convert_status!=0);
    PyObject* result;
    if (!value.Data()) {
        oaString buffer("<oaDoubleRangeProp::NULL>");
        result=PyString_FromString((char*)(const char*)buffer);
    }
    else {
        oaString sresult;
        value.DataCall()->getName(sresult);
    
        char addr[39];
        sprintf(addr,DISPLAY_FORMAT,POINTER_AS_DISPLAY(value.DataCall()));
        oaString buffer;
        buffer+=oaString("<oaDoubleRangeProp::");
        buffer+=oaString(addr);
        buffer+=oaString("::");
        buffer+=oaString(sresult);
        buffer+=oaString(">");
        result=PyString_FromString((char*)(const char*)buffer);
    
    }
    return result;
}
        
// ------------------------------------------------------------------
static int
oaDoubleRangeProp_tp_compare(PyObject *ob1,PyObject* ob2)
{
    PyParamoaDoubleRangeProp v1;
    PyParamoaDoubleRangeProp v2;
    int convert_status1=PyoaDoubleRangeProp_Convert(ob1,&v1);
    int convert_status2=PyoaDoubleRangeProp_Convert(ob2,&v2);
    assert(convert_status1!=0);
    assert(convert_status2!=0);
    if (v1.DataCall()==v2.DataCall()) return 0;
    return 1;
}
        
// ------------------------------------------------------------------
int
PyoaDoubleRangeProp_Convert(PyObject* ob,PyParamoaDoubleRangeProp* result)
{
    if (ob == NULL) return 1;
    if (PyoaDoubleRangeProp_Check(ob)) {
        result->SetData( (oaDoubleRangeProp**) ((PyoaDoubleRangePropObject*)ob)->value);
        return 1;
    }
    PyErr_SetString(PyExc_TypeError,
        "Convertion of parameter to class: oaDoubleRangeProp Failed");
    return 0;
}
// ------------------------------------------------------------------
PyObject* PyoaDoubleRangeProp_FromoaDoubleRangeProp(oaDoubleRangeProp** value,int borrow,PyObject* lock)
{
    if (value && *value) {
        oaDoubleRangeProp* data=*value;
        PyObject* bself = PyoaDoubleRangeProp_Type.tp_alloc(&PyoaDoubleRangeProp_Type,0);
        if (bself == NULL) return bself;
        PyoaDoubleRangePropObject* self = (PyoaDoubleRangePropObject*)bself;
        self->value = (oaObject**) value;
        self->data = NULL;
        self->locks = NULL;
        self->borrow = 0; // Ignore borrow flag, since we copied
       if (lock) PyoaLockObject(self->locks,lock);
        return bself;
    }
    Py_INCREF(Py_None);
    return Py_None;
}
// ------------------------------------------------------------------
PyObject* PyoaDoubleRangeProp_FromoaDoubleRangeProp(oaDoubleRangeProp* data)
{
    if (data) {
       PyObject* bself = PyoaDoubleRangeProp_Type.tp_alloc(&PyoaDoubleRangeProp_Type,0);
       if (bself == NULL) return bself;
       PyoaDoubleRangePropObject* self = (PyoaDoubleRangePropObject*)bself;
       self->data = (oaObject*) data;
       self->value = &(self->data);
       self->borrow = 0; 
       self->locks = NULL;
       return bself;
    }
    Py_INCREF(Py_None);
    return Py_None;
}

// ------------------------------------------------------------------
// FunctionMethods:
// ------------------------------------------------------------------

// ------------------------------------------------------------------
static char oaDoubleRangeProp_getLowerBound_doc[] = 
"Class: oaDoubleRangeProp, Function: getLowerBound\n"
"  Paramegers: ()\n"
"    Calls: oaDouble getLowerBound() const\n"
"    Signature: getLowerBound|simple-oaDouble|\n"
"    BrowseData: 1\n"
"    This function returns the lower bound of this range property.\n"
;

static PyObject*
oaDoubleRangeProp_getLowerBound(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaDoubleRangeProp data;
    int convert_status=PyoaDoubleRangeProp_Convert(ob,&data);
    assert(convert_status!=0);
    PyoaDoubleRangePropObject* self=(PyoaDoubleRangePropObject*)ob;
    if (!PyValidateDbObject(data.Data(),0)) return NULL;

    if (PyArg_ParseTuple(args,"")) {
        oaDouble result= (data.DataCall()->getLowerBound());
        return PyoaDouble_FromoaDouble(result);
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaDoubleRangeProp_getUpperBound_doc[] = 
"Class: oaDoubleRangeProp, Function: getUpperBound\n"
"  Paramegers: ()\n"
"    Calls: oaDouble getUpperBound() const\n"
"    Signature: getUpperBound|simple-oaDouble|\n"
"    BrowseData: 1\n"
"    This function returns the upper bound of this range property.\n"
;

static PyObject*
oaDoubleRangeProp_getUpperBound(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaDoubleRangeProp data;
    int convert_status=PyoaDoubleRangeProp_Convert(ob,&data);
    assert(convert_status!=0);
    PyoaDoubleRangePropObject* self=(PyoaDoubleRangePropObject*)ob;
    if (!PyValidateDbObject(data.Data(),0)) return NULL;

    if (PyArg_ParseTuple(args,"")) {
        oaDouble result= (data.DataCall()->getUpperBound());
        return PyoaDouble_FromoaDouble(result);
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaDoubleRangeProp_getValue_doc[] = 
"Class: oaDoubleRangeProp, Function: getValue\n"
"  Paramegers: ()\n"
"    Calls: oaDouble getValue() const\n"
"    Signature: getValue|simple-oaDouble|\n"
"    BrowseData: 1\n"
"    This function returns the value of this property.\n"
;

static PyObject*
oaDoubleRangeProp_getValue(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaDoubleRangeProp data;
    int convert_status=PyoaDoubleRangeProp_Convert(ob,&data);
    assert(convert_status!=0);
    PyoaDoubleRangePropObject* self=(PyoaDoubleRangePropObject*)ob;
    if (!PyValidateDbObject(data.Data(),0)) return NULL;

    if (PyArg_ParseTuple(args,"")) {
        oaDouble result= (data.DataCall()->getValue());
        return PyoaDouble_FromoaDouble(result);
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaDoubleRangeProp_set_doc[] = 
"Class: oaDoubleRangeProp, Function: set\n"
"  Paramegers: (oaDouble,oaDouble,oaDouble)\n"
"    Calls: void set(oaDouble lowerBound,oaDouble value,oaDouble upperBound)\n"
"    Signature: set|void-void|simple-oaDouble,simple-oaDouble,simple-oaDouble,\n"
"    This function sets this property attributes to the specified values.\n"
"    oacInvalidValueForFloatRange\n"
;

static PyObject*
oaDoubleRangeProp_set(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaDoubleRangeProp data;
    int convert_status=PyoaDoubleRangeProp_Convert(ob,&data);
    assert(convert_status!=0);
    PyoaDoubleRangePropObject* self=(PyoaDoubleRangePropObject*)ob;
    if (!PyValidateDbObject(data.Data(),0)) return NULL;

    PyParamoaDouble p1;
    PyParamoaDouble p2;
    PyParamoaDouble p3;
    if (PyArg_ParseTuple(args,"O&O&O&",
          &PyoaDouble_Convert,&p1,
          &PyoaDouble_Convert,&p2,
          &PyoaDouble_Convert,&p3)) {
        data.DataCall()->set(p1.Data(),p2.Data(),p3.Data());
        Py_INCREF(Py_None);
        return Py_None;
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaDoubleRangeProp_setValue_doc[] = 
"Class: oaDoubleRangeProp, Function: setValue\n"
"  Paramegers: (oaDouble)\n"
"    Calls: void setValue(oaDouble value)\n"
"    Signature: setValue|void-void|simple-oaDouble,\n"
"    This function sets this property to the specified value.\n"
"    oacInvalidValueForFloatRange\n"
;

static PyObject*
oaDoubleRangeProp_setValue(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaDoubleRangeProp data;
    int convert_status=PyoaDoubleRangeProp_Convert(ob,&data);
    assert(convert_status!=0);
    PyoaDoubleRangePropObject* self=(PyoaDoubleRangePropObject*)ob;
    if (!PyValidateDbObject(data.Data(),0)) return NULL;

    PyParamoaDouble p1;
    if (PyArg_ParseTuple(args,"O&",
          &PyoaDouble_Convert,&p1)) {
        data.DataCall()->setValue(p1.Data());
        Py_INCREF(Py_None);
        return Py_None;
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaDoubleRangeProp_isNull_doc[] =
"Class: oaDoubleRangeProp, Function: isNull\n"
"  Parameters: () \n"
"    This functions returns 1 if the DbPointer is NULL, and 0 otherwise.\n"
;

static PyObject*
oaDoubleRangeProp_tp_isNull(PyObject* ob, PyObject *args)
{
    PyParamoaDoubleRangeProp data;
    int convert_status=PyoaDoubleRangeProp_Convert(ob,&data);
    assert(convert_status!=0);
    if (data.DataCall()==NULL)
        return PyInt_FromLong(1);
    else
        return PyInt_FromLong(0);
}
static char oaDoubleRangeProp_assign_doc[] = 
"Class: oaDoubleRangeProp, Function: set\n"
"  Paramegers: (oaDouble)\n"
"    This function sets the current value.\n"
;

static PyObject*
oaDoubleRangeProp_tp_assign(PyObject* ob, PyObject *args)
{
  PyParamoaDoubleRangeProp data;
  int convert_status=PyoaDoubleRangeProp_Convert(ob,&data);
  assert(convert_status!=0);
  try {
    PyParamoaDoubleRangeProp p1;
    if (PyArg_ParseTuple(args,(char*)"O&",
          &PyoaDoubleRangeProp_Convert,&p1)) {
        data.Data()=p1.Data();
        Py_INCREF(ob);
        return ob;
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}


// ------------------------------------------------------------------
//  Function Methods Table:
// ------------------------------------------------------------------

static PyMethodDef oaDoubleRangeProp_methodlist[] = {
    {"getLowerBound",(PyCFunction)oaDoubleRangeProp_getLowerBound,METH_VARARGS,oaDoubleRangeProp_getLowerBound_doc},
    {"getUpperBound",(PyCFunction)oaDoubleRangeProp_getUpperBound,METH_VARARGS,oaDoubleRangeProp_getUpperBound_doc},
    {"getValue",(PyCFunction)oaDoubleRangeProp_getValue,METH_VARARGS,oaDoubleRangeProp_getValue_doc},
    {"set",(PyCFunction)oaDoubleRangeProp_set,METH_VARARGS,oaDoubleRangeProp_set_doc},
    {"setValue",(PyCFunction)oaDoubleRangeProp_setValue,METH_VARARGS,oaDoubleRangeProp_setValue_doc},
    {"isNull",(PyCFunction)oaDoubleRangeProp_tp_isNull,METH_VARARGS,oaDoubleRangeProp_isNull_doc},
    {"assign",(PyCFunction)oaDoubleRangeProp_tp_assign,METH_VARARGS,oaDoubleRangeProp_assign_doc},
   {NULL,NULL,0,NULL}
};


// ------------------------------------------------------------------
//  Type Object:
// ------------------------------------------------------------------

// ------------------------------------------------------------------
static char oaDoubleRangeProp_doc[] = 
"Class: oaDoubleRangeProp\n"
"  The oaDoubleRangeProp is a property that has a double-type value as well as a range of valid values that the double is allowed to take on. The range can be used by a generic property editor to assist a user to enter a proper value.\n"
"  Properties are application-defined values that can be added to any managed object in oaDesign , oaTech , and oaWafer databases except for the following paged objects: oaDevice , oaNode , oaParasiticNetwork , and oaSubNetwork .\n"
"  To create properties on DM Objects, create the corresponding oaDMData object (using oaLibDMData::open , oaCellDMData::open , oaViewDMData::open , or oaCellViewDMData::open ), then create properties on that oaDMData object.\n"
"  See oaProp for a general discussion of properties.\n"
"Constructors:\n"
"  Paramegers: (oaDoubleRangeProp)\n"
"    Calls: (const oaDoubleRangeProp&)\n"
"    Signature: oaDoubleRangeProp||cref-oaDoubleRangeProp,\n"
;

// ------------------------------------------------------------------
PyTypeObject PyoaDoubleRangeProp_Type = {
    PyObject_HEAD_INIT(&PyType_Type)
    0,
    "oaDoubleRangeProp",
    sizeof(PyoaDoubleRangePropObject),
    0,
    (destructor)oaDoubleRangeProp_tp_dealloc,	/* tp_dealloc */
    0,	/* tp_print */
    0,					/* tp_getattr */
    0,					/* tp_setattr */
    (cmpfunc)oaDoubleRangeProp_tp_compare,	/* tp_compare */
    (reprfunc)oaDoubleRangeProp_tp_repr,	/* tp_repr */
    0,					/* tp_as_number */
    0,					/* tp_as_sequence */
    0,					/* tp_as_mapping */
    0,					/* tp_as_hash */
    0,					/* tp_as_call */
    0,					/* tp_str */
    0,					/* tp_getattro */
    0,					/* tp_setattro */
    0,					/* tp_as_buffer */
    Py_TPFLAGS_DEFAULT|Py_TPFLAGS_BASETYPE, /* tp_flags */
    oaDoubleRangeProp_doc,	/* tp_doc */
    0,					/* tp_traverse */
    0,					/* tp_clear */
    0,					/* tp_richcompre */
    0,					/* tp_weaklistoffset */
    0,					/* tp_iter */
    0,					/* tp_iternext */
    oaDoubleRangeProp_methodlist,	/* tp_methods */
    0,					/* tp_members */
    0,					/* tp_getset */
    &PyoaProp_Type,	/* tp_base */
    0,					/* tp_dict */
    0,					/* tp_descr_get */
    0,					/* tp_descr_set */
    0,					/* tp_dictoffset */
    0,					/* tp_init */
    PyType_GenericAlloc,	/* tp_alloc */
    oaDoubleRangeProp_new,	/* tp_new */
    _PyObject_Del,	/* tp_free */
};


// ------------------------------------------------------------------
// Static FunctionMethods:
// ------------------------------------------------------------------

// ------------------------------------------------------------------
static char oaDoubleRangeProp_static_create_doc[] = 
"Class: oaDoubleRangeProp, Function: create\n"
"  Paramegers: (oaObject,oaString,oaDouble,oaDouble,oaDouble)\n"
"    Calls: oaDoubleRangeProp* create(oaObject* object,const oaString& name,oaDouble lowerBound,oaDouble value,oaDouble upperBound)\n"
"    Signature: create|ptr-oaDoubleRangeProp|ptr-oaObject,cref-oaString,simple-oaDouble,simple-oaDouble,simple-oaDouble,\n"
"    This function creates a double range property with the specified attributes. The specified name is checked to verify it is unique for properties on the specified object .\n"
"    oacInvalidObjForProp\n"
"    oacInvalidValueForFloatRange\n"
"    oacPropNameUsed\n"
;

static PyObject*
oaDoubleRangeProp_static_create(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaObject p1;
    PyParamoaString p2;
    PyParamoaDouble p3;
    PyParamoaDouble p4;
    PyParamoaDouble p5;
    if (PyArg_ParseTuple(args,"O&O&O&O&O&",
          &PyoaObject_Convert,&p1,
          &PyoaString_Convert,&p2,
          &PyoaDouble_Convert,&p3,
          &PyoaDouble_Convert,&p4,
          &PyoaDouble_Convert,&p5)) {
        if (!PyValidateDbObject(p1.Data(),1)) return NULL;
        oaDoubleRangePropp result= (oaDoubleRangeProp::create(p1.Data(),p2.Data(),p3.Data(),p4.Data(),p5.Data()));
        return PyoaDoubleRangeProp_FromoaDoubleRangeProp(result);
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static PyMethodDef oaDoubleRangeProp_staticmethodlist[] = {
    {"static_create",(PyCFunction)oaDoubleRangeProp_static_create,METH_VARARGS,oaDoubleRangeProp_static_create_doc},
   {NULL,NULL,0,NULL}
};


// ------------------------------------------------------------------
//  Type Init:
// ------------------------------------------------------------------

int
PyoaDoubleRangeProp_TypeInit(PyObject* mod_dict)
{
    if (PyType_Ready(&PyoaDoubleRangeProp_Type)<0) {
      printf("** PyType_Ready failed for: oaDoubleRangeProp\n");
      return -1;
    }

    if (PyDict_SetItemString(mod_dict,"oaDoubleRangeProp",
           (PyObject*)(&PyoaDoubleRangeProp_Type))<0) {
       printf("** Failed to add type name to module dictionary for: oaDoubleRangeProp\n");
       return -1;
    }

    PyObject *dict, *value;
    PyMethodDef *method;
    dict=PyoaDoubleRangeProp_Type.tp_dict;
    for(method=oaDoubleRangeProp_staticmethodlist;method->ml_name!=NULL;method++) {
        value=PyCFunction_New(method,NULL);
    if (value==NULL) return -1;
        if (PyDict_SetItemString(dict,method->ml_name,value)!=0) {
        Py_DECREF(value);
            printf("** Failed to add static function to module dictionary for: %s\n",
                method->ml_name);
            return -1;
        }
        Py_DECREF(value);
    }
    return 0;
}


/********************************************************************
 *   Copyright 2002-2008  LSI Corporation
 *
 *   Licensed under the Apache License, Version 2.0 (the "License");
 *   you may not use this file except in compliance with the License.
 *   You may obtain a copy of the License at
 *
 *       http://www.apache.org/licenses/LICENSE-2.0
 *
 *   Unless required by applicable law or agreed to in writing, software
 *   distributed under the License is distributed on an "AS IS" BASIS,
 *   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *   See the License for the specific language governing permissions and
 *   limitations under the License.
 *
 *******************************************************************/

#include "pyoa_header.h"


// ==================================================================
// Wrapper Implementation for Class: oaDualInt
// ==================================================================


// ==================================================================
// Alloc/Dealloc Routines
// ==================================================================

// ------------------------------------------------------------------
static PyObject*
oaDualInt_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
  try {
    int is_raw=(type==&PyoaDualInt_Type);
    PyObject* bself = type->tp_alloc(type,0);
    if (bself == NULL) return bself;
    PyoaDualIntObject* self = (PyoaDualIntObject*)bself;
    self->locks = NULL;
    self->borrow = 0;
    static char *kwlist [] = { NULL } ;
    // Case: ()
    {
        if (PyArg_ParseTuple(args,"")) {
            self->value =  new oaDualInt();
            return bself;
        }
    }
    PyErr_Clear();
    // Case: (oaInt4)
    {
        PyParamoaInt4 p1;
        if (PyArg_ParseTuple(args,"O&",
              &PyoaInt4_Convert,&p1)) {
            self->value =  new oaDualInt(p1.Data());
            return bself;
        }
    }
    PyErr_Clear();
    // Case: (oaInt4,oaInt4)
    {
        PyParamoaInt4 p1;
        PyParamoaInt4 p2;
        if (PyArg_ParseTuple(args,"O&O&",
              &PyoaInt4_Convert,&p1,
              &PyoaInt4_Convert,&p2)) {
            self->value =  new oaDualInt(p1.Data(),p2.Data());
            return bself;
        }
    }
    PyErr_Clear();
    // Case: (oaDualInt)
    {
        PyParamoaDualInt p1;
        if (PyArg_ParseTuple(args,(char*)"O&",
              &PyoaDualInt_Convert,&p1)) {
            self->value= new oaDualInt(p1.Data());
            return bself;
        }
    }
    PyErr_Clear();
    PyErr_SetString(PyExc_TypeError,
        "No Arg-Matching Constructor found for class: oaDualInt, Choices are:\n"
        "    ()\n"
        "    (oaInt4)\n"
        "    (oaInt4,oaInt4)\n"
        "    (oaDualInt)\n"
    );
    Py_DECREF(self);
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static void
oaDualInt_tp_dealloc(PyoaDualIntObject* self)
{
    if (!self->borrow) {
        delete (self->value);
    }
    Py_XDECREF(self->locks);
    self->ob_type->tp_free((PyObject*)self);
}

// ------------------------------------------------------------------
static PyObject*
oaDualInt_tp_repr(PyObject *ob)
{
    PyParamoaDualInt value;
    int convert_status=PyoaDualInt_Convert(ob,&value);
    assert(convert_status!=0);
    PyObject* result;

    char buffer[31];
    sprintf(buffer,"<oaDualInt::" DISPLAY_FORMAT ">",POINTER_AS_DISPLAY(value.DataCall()));
    result=PyString_FromString(buffer);
    return result;
}
        
// ------------------------------------------------------------------
static int
oaDualInt_tp_compare(PyObject *ob1,PyObject* ob2)
{
    PyParamoaDualInt v1;
    PyParamoaDualInt v2;
    int convert_status1=PyoaDualInt_Convert(ob1,&v1);
    int convert_status2=PyoaDualInt_Convert(ob2,&v2);
    assert(convert_status1!=0);
    assert(convert_status2!=0);
    if (v1.DataCall()==v2.DataCall()) return 0;
    if (v1.Data()==v2.Data()) return 0;
    return 1;
}
        
// ------------------------------------------------------------------
int
PyoaDualInt_Convert(PyObject* ob,PyParamoaDualInt* result)
{
    if (ob == NULL) return 1;
    if (PyoaDualInt_Check(ob)) {
        result->SetData(  ((PyoaDualIntObject*)ob)->value);
        return 1;
    }
    PyErr_SetString(PyExc_TypeError,
        "Convertion of parameter to class: oaDualInt Failed");
    return 0;
}
// ------------------------------------------------------------------
PyObject* PyoaDualInt_FromoaDualInt(oaDualInt* data,int borrow,PyObject* lock)
{
    if (data) {
        PyObject* bself = PyoaDualInt_Type.tp_alloc(&PyoaDualInt_Type,0);
        if (bself == NULL) return bself;
        PyoaDualIntObject* self = (PyoaDualIntObject*)bself;
        self->value =  data;
        self->locks = NULL;
        self->borrow = borrow;
        if (lock) PyoaLockObject(self->locks,lock);
        return bself;
    }
    Py_INCREF(Py_None);
    return Py_None;
}
// ------------------------------------------------------------------
PyObject* PyoaDualInt_FromoaDualInt(const oaDualInt& data)
{
    PyObject* bself = PyoaDualInt_Type.tp_alloc(&PyoaDualInt_Type,0);
    if (bself == NULL) return bself;
    PyoaDualIntObject* self = (PyoaDualIntObject*)bself;
    self->value =  new oaDualInt(data);
    self->borrow = 0;
    self->locks = NULL;
    return bself;
}

// ------------------------------------------------------------------
// FunctionMethods:
// ------------------------------------------------------------------

// ------------------------------------------------------------------
static char oaDualInt_getFirst_doc[] = 
"Class: oaDualInt, Function: getFirst\n"
"  Paramegers: ()\n"
"    Calls: oaInt4 getFirst() const\n"
"    Signature: getFirst|simple-oaInt4|\n"
"    BrowseData: 1\n"
"    This function returns the first value in the pair.\n"
"    Todo\n"
"    Check description of member function.\n"
;

static PyObject*
oaDualInt_getFirst(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaDualInt data;
    int convert_status=PyoaDualInt_Convert(ob,&data);
    assert(convert_status!=0);
    PyoaDualIntObject* self=(PyoaDualIntObject*)ob;

    if (PyArg_ParseTuple(args,"")) {
        oaInt4 result= (data.DataCall()->getFirst());
        return PyoaInt4_FromoaInt4(result);
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaDualInt_getSecond_doc[] = 
"Class: oaDualInt, Function: getSecond\n"
"  Paramegers: ()\n"
"    Calls: oaInt4 getSecond() const\n"
"    Signature: getSecond|simple-oaInt4|\n"
"    BrowseData: 1\n"
"    This function returns the second value in the pair.\n"
"    Todo\n"
"    Check description of member function.\n"
;

static PyObject*
oaDualInt_getSecond(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaDualInt data;
    int convert_status=PyoaDualInt_Convert(ob,&data);
    assert(convert_status!=0);
    PyoaDualIntObject* self=(PyoaDualIntObject*)ob;

    if (PyArg_ParseTuple(args,"")) {
        oaInt4 result= (data.DataCall()->getSecond());
        return PyoaInt4_FromoaInt4(result);
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaDualInt_setFirst_doc[] = 
"Class: oaDualInt, Function: setFirst\n"
"  Paramegers: (oaInt4)\n"
"    Calls: void setFirst(oaInt4 value)\n"
"    Signature: setFirst|void-void|simple-oaInt4,\n"
"    This function sets the first value in the pair.\n"
"    value\n"
"    The value to be set as the first value of this pair.\n"
"    Todo\n"
"    Check description of member function. Add description of each parameter.\n"
;

static PyObject*
oaDualInt_setFirst(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaDualInt data;
    int convert_status=PyoaDualInt_Convert(ob,&data);
    assert(convert_status!=0);
    PyoaDualIntObject* self=(PyoaDualIntObject*)ob;

    PyParamoaInt4 p1;
    if (PyArg_ParseTuple(args,"O&",
          &PyoaInt4_Convert,&p1)) {
        data.DataCall()->setFirst(p1.Data());
        Py_INCREF(Py_None);
        return Py_None;
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaDualInt_setSecond_doc[] = 
"Class: oaDualInt, Function: setSecond\n"
"  Paramegers: (oaInt4)\n"
"    Calls: void setSecond(oaInt4 value)\n"
"    Signature: setSecond|void-void|simple-oaInt4,\n"
"    This function sets the second value in the pair.\n"
"    value\n"
"    The value to be set as the second value of this pair\n"
"    Todo\n"
"    Add description of member function. Add description of each parameter.\n"
;

static PyObject*
oaDualInt_setSecond(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaDualInt data;
    int convert_status=PyoaDualInt_Convert(ob,&data);
    assert(convert_status!=0);
    PyoaDualIntObject* self=(PyoaDualIntObject*)ob;

    PyParamoaInt4 p1;
    if (PyArg_ParseTuple(args,"O&",
          &PyoaInt4_Convert,&p1)) {
        data.DataCall()->setSecond(p1.Data());
        Py_INCREF(Py_None);
        return Py_None;
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

static char oaDualInt_assign_doc[] = 
"Class: oaDualInt, Function: set\n"
"  Paramegers: (oaDouble)\n"
"    This function sets the current value.\n"
;

static PyObject*
oaDualInt_tp_assign(PyObject* ob, PyObject *args)
{
  PyParamoaDualInt data;
  int convert_status=PyoaDualInt_Convert(ob,&data);
  assert(convert_status!=0);
  try {
    PyParamoaDualInt p1;
    if (PyArg_ParseTuple(args,(char*)"O&",
          &PyoaDualInt_Convert,&p1)) {
        data.Data()=p1.Data();
        Py_INCREF(ob);
        return ob;
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}


// ------------------------------------------------------------------
//  Function Methods Table:
// ------------------------------------------------------------------

static PyMethodDef oaDualInt_methodlist[] = {
    {"getFirst",(PyCFunction)oaDualInt_getFirst,METH_VARARGS,oaDualInt_getFirst_doc},
    {"getSecond",(PyCFunction)oaDualInt_getSecond,METH_VARARGS,oaDualInt_getSecond_doc},
    {"setFirst",(PyCFunction)oaDualInt_setFirst,METH_VARARGS,oaDualInt_setFirst_doc},
    {"setSecond",(PyCFunction)oaDualInt_setSecond,METH_VARARGS,oaDualInt_setSecond_doc},
    {"assign",(PyCFunction)oaDualInt_tp_assign,METH_VARARGS,oaDualInt_assign_doc},
   {NULL,NULL,0,NULL}
};


// ------------------------------------------------------------------
//  Type Object:
// ------------------------------------------------------------------

// ------------------------------------------------------------------
static char oaDualInt_doc[] = 
"Class: oaDualInt\n"
"  The oaDualInt object specifies an ordered pair of oaInt4 values.\n"
"Constructors:\n"
"  Paramegers: ()\n"
"    Calls: oaDualInt()\n"
"    Signature: oaDualInt||simple-oaInt4,simple-oaInt4,\n"
"    This is the oaDualInt constructor class.\n"
"    firstValue\n"
"    The first value of this integer pair.\n"
"    secondValue\n"
"    The second value of this integer pair.\n"
"    Todo\n"
"    Check description of member function. Add description of each parameter.\n"
"  Paramegers: (oaInt4)\n"
"    Calls: oaDualInt(oaInt4 firstValue)\n"
"    Signature: oaDualInt||simple-oaInt4,simple-oaInt4,\n"
"    This is the oaDualInt constructor class.\n"
"    firstValue\n"
"    The first value of this integer pair.\n"
"    secondValue\n"
"    The second value of this integer pair.\n"
"    Todo\n"
"    Check description of member function. Add description of each parameter.\n"
"  Paramegers: (oaInt4,oaInt4)\n"
"    Calls: oaDualInt(oaInt4 firstValue,oaInt4 secondValue)\n"
"    Signature: oaDualInt||simple-oaInt4,simple-oaInt4,\n"
"    This is the oaDualInt constructor class.\n"
"    firstValue\n"
"    The first value of this integer pair.\n"
"    secondValue\n"
"    The second value of this integer pair.\n"
"    Todo\n"
"    Check description of member function. Add description of each parameter.\n"
"  Paramegers: (oaDualInt)\n"
"    Calls: (const oaDualInt&)\n"
"    Signature: oaDualInt||cref-oaDualInt,\n"
;

// ------------------------------------------------------------------
PyTypeObject PyoaDualInt_Type = {
    PyObject_HEAD_INIT(&PyType_Type)
    0,
    "oaDualInt",
    sizeof(PyoaDualIntObject),
    0,
    (destructor)oaDualInt_tp_dealloc,	/* tp_dealloc */
    0,	/* tp_print */
    0,					/* tp_getattr */
    0,					/* tp_setattr */
    (cmpfunc)oaDualInt_tp_compare,	/* tp_compare */
    (reprfunc)oaDualInt_tp_repr,	/* tp_repr */
    0,					/* tp_as_number */
    0,					/* tp_as_sequence */
    0,					/* tp_as_mapping */
    0,					/* tp_as_hash */
    0,					/* tp_as_call */
    0,					/* tp_str */
    0,					/* tp_getattro */
    0,					/* tp_setattro */
    0,					/* tp_as_buffer */
    Py_TPFLAGS_DEFAULT|Py_TPFLAGS_BASETYPE, /* tp_flags */
    oaDualInt_doc,	/* tp_doc */
    0,					/* tp_traverse */
    0,					/* tp_clear */
    0,					/* tp_richcompre */
    0,					/* tp_weaklistoffset */
    0,					/* tp_iter */
    0,					/* tp_iternext */
    oaDualInt_methodlist,	/* tp_methods */
    0,					/* tp_members */
    0,					/* tp_getset */
    0,					/* tp_base */
    0,					/* tp_dict */
    0,					/* tp_descr_get */
    0,					/* tp_descr_set */
    0,					/* tp_dictoffset */
    0,					/* tp_init */
    PyType_GenericAlloc,	/* tp_alloc */
    oaDualInt_new,	/* tp_new */
    _PyObject_Del,	/* tp_free */
};


// ------------------------------------------------------------------
//  Type Init:
// ------------------------------------------------------------------

int
PyoaDualInt_TypeInit(PyObject* mod_dict)
{
    if (PyType_Ready(&PyoaDualInt_Type)<0) {
      printf("** PyType_Ready failed for: oaDualInt\n");
      return -1;
    }

    if (PyDict_SetItemString(mod_dict,"oaDualInt",
           (PyObject*)(&PyoaDualInt_Type))<0) {
       printf("** Failed to add type name to module dictionary for: oaDualInt\n");
       return -1;
    }
    return 0;
}


// ==================================================================
// Array for class: oaDualInt
// ==================================================================

// ------------------------------------------------------------------
static PyObject*
oaDualInt_Array_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
  try {
    int is_raw=(type==&PyoaDualInt_Array_Type);
    PyObject* gself = type->tp_alloc(type,0);
    if (gself == NULL) return gself;
    PyoaDualInt_ArrayObject* self = (PyoaDualInt_ArrayObject*)gself;
    self->borrow = 0;
    self->locks=NULL;
    static char *kwlist [] = { NULL } ;
    /* Case: () */ 
    {
        if (PyArg_ParseTuple(args,"")) {
            return gself;
        }
    }
    PyErr_Clear();
    /* Case: (int) */
    {
        int p1;
        if (PyArg_ParseTuple(args,(char*)"i",&p1)) {
            self->data.SetLen(p1);
            return gself;
        }
    }
    PyErr_Clear();
    /* Case: (oaDualInt_Array) */
    {
        PyParamoaDualInt_Array p1;
        if (PyArg_ParseTuple(args,(char*)"O&",
              &PyoaDualInt_Array_Convert,&p1)) {
            self->data.TakeAway(p1);
            return gself;
        }
    }
    /* Error */
    PyErr_Clear();
    PyErr_SetString(PyExc_TypeError,
        "No Arg-Matching Constructor found for class: oaDualInt_Array, Choices are:\n"
        "    ()\n"
        "    (int)\n"
        "    (oaDualInt_Array)\n"
    );
    Py_DECREF(gself);
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static void
oaDualInt_Array_dealloc(PyObject* gself)
{
    PyoaDualInt_ArrayObject* self = (PyoaDualInt_ArrayObject*)gself;
    Py_XDECREF(self->locks);
    self->ob_type->tp_free(gself);
}

// ------------------------------------------------------------------
static PyObject*
oaDualInt_Array_str(PyObject *ob)
{
    PyParamoaDualInt_Array value;
    int convert_status=PyoaDualInt_Array_Convert(ob,&value);
    assert(convert_status!=0);
    PyObject* lst=PyoaDualInt_Array_CreateList(value);
    PyObject* result=PyObject_Str(lst);
    Py_DECREF(lst);
    return result;
}

// ------------------------------------------------------------------
static PyObject*
oaDualInt_Array_repr(PyObject *ob)
{
    PyParamoaDualInt_Array value;
    int convert_status=PyoaDualInt_Array_Convert(ob,&value);
    assert(convert_status!=0);
    PyObject* lst=PyoaDualInt_Array_CreateList(value);
    PyObject* result=PyObject_Repr(lst);
    Py_DECREF(lst);
    return result;
}

// ------------------------------------------------------------------
static int
oaDualInt_Array_compare(PyObject *ob1,PyObject* ob2)
{
    PyParamoaDualInt_Array p1;
    PyParamoaDualInt_Array p2;
    int s1=PyoaDualInt_Array_Convert(ob1,&p1);
    int s2=PyoaDualInt_Array_Convert(ob2,&p2);
    assert(s1!=0);
    assert(s2!=0);
    PyObject* l1=PyoaDualInt_Array_CreateList(p1);
    PyObject* l2=PyoaDualInt_Array_CreateList(p2);
    int result=PyObject_Compare(l1,l2);
    Py_DECREF(l1);
    Py_DECREF(l2);
    return result;
}

// ------------------------------------------------------------------
int
PyoaDualInt_Array_Convert(PyObject* ob,PyParamoaDualInt_Array* result)
{
  Pyoa_ssize_t len,i;
  if (PyoaDualInt_Array_Check(ob)) {
    PyoaDualInt_ArrayObject* self = (PyoaDualInt_ArrayObject*)ob;
    result->Borrow(self->data);
  }
  else if (PyList_Check(ob)) {
    len=PyList_Size(ob);
    result->SetLen(len);
    PyParamoaDualInt data;
    for(i=0;i<len;i++) {
      PyObject* a=PyList_GetItem(ob,i);
      if (!PyoaDualInt_Convert(a,&data)) return 0;
      result->SetItem(i,data.Data());
    }
  }
  else if (PyTuple_Check(ob)) {
    len=PyTuple_Size(ob);
    result->SetLen(len);
    PyParamoaDualInt data;
    for(i=0;i<len;i++) {
      PyObject* a=PyTuple_GetItem(ob,i);
      if (!PyoaDualInt_Convert(a,&data)) return 0;
      result->SetItem(i,data.Data());
    }
  }
  else {
    PyErr_SetString(PyExc_TypeError,
      "Convertion of parameter to class: oaDualInt_Array Failed");
    return 0;
  }
  return 1;
}

// ------------------------------------------------------------------
PyObject* PyoaDualInt_Array_FromoaDualInt_Array(const oaDualInt_Array& value)
{
  PyObject* gself = PyoaDualInt_Array_Type.tp_alloc(&PyoaDualInt_Array_Type,0);
  if (gself == NULL) return gself;
  PyoaDualInt_ArrayObject* self = (PyoaDualInt_ArrayObject*)gself;
  self->data = value;
  self->borrow = 0;
  self->locks=NULL;
  return gself;
}

// ------------------------------------------------------------------
PyObject* PyoaDualInt_Array_FromoaDualInt_Array(PyTypeoaDualInt* data,Pyoa_ssize_t len,PyObject* lock)
{
  PyObject* gself = PyoaDualInt_Array_Type.tp_alloc(&PyoaDualInt_Array_Type,0);
  if (gself == NULL) return gself;
  PyoaDualInt_ArrayObject* self = (PyoaDualInt_ArrayObject*)gself;
  self->data.Borrow(data,len);
  self->borrow = 1;
  self->locks=NULL;
  if (lock) PyoaLockObject(self->locks,lock);
  return gself;
}

// ------------------------------------------------------------------
PyObject* PyoaDualInt_Array_CreateList(PyParamoaDualInt_Array& value)
{
  Pyoa_ssize_t i;
  PyObject* lst=PyList_New(value.Len());
  for(i=0;i<value.Len();i++) {
    PyObject* ob=PyoaDualInt_FromoaDualInt(value.Data()[i]);
    PyList_SetItem(lst,i,ob);
  }
  return lst;
}

// ------------------------------------------------------------------
// Methods
// ------------------------------------------------------------------
static char oaDualInt_Array_assign_doc[] = 
"Class: oaDualInt_Array, Function: assign\n"
"  Paramegers: (oaDualInt_Array)\n"
"    This function assigns the current value.\n"
;

static PyObject*
oaDualInt_Array_assign(PyObject* ob, PyObject *args)
{
  PyoaDualInt_ArrayObject* self=(PyoaDualInt_ArrayObject*)ob;
  try {
    PyParamoaDualInt_Array p1;
    if (PyArg_ParseTuple(args,(char*)"O&",
          &PyoaDualInt_Array_Convert,&p1)) {
        self->data=p1;
        Py_INCREF(ob);
        return ob;
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}
// ------------------------------------------------------------------
static char oaDualInt_Array_list_doc[] = 
"Class: oaDualInt_Array, Function: list\n"
"  Paramegers: ()\n"
"    This function returns the current value as a list.\n"
;

static PyObject*
oaDualInt_Array_list(PyObject* ob, PyObject *args)
{
  PyoaDualInt_ArrayObject* self=(PyoaDualInt_ArrayObject*)ob;
  try {
    if (PyArg_ParseTuple(args,(char*)"")) {
      return PyoaDualInt_Array_CreateList(self->data);
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}
// ------------------------------------------------------------------
//  Function Methods Table:
// ------------------------------------------------------------------
static PyMethodDef oaDualInt_Array_methodlist[] = {
    {"assign",(PyCFunction)oaDualInt_Array_assign,METH_VARARGS,oaDualInt_Array_assign_doc},
    {"list",(PyCFunction)oaDualInt_Array_list,METH_VARARGS,oaDualInt_Array_list_doc},
   {NULL,NULL,0,NULL}
};

// ------------------------------------------------------------------
static PyObject*
oaDualInt_Array_index_get(PyObject* ob,Pyoa_ssize_t index)
{
  PyoaDualInt_ArrayObject* self=(PyoaDualInt_ArrayObject*)ob;
  try {
    PyParamoaDualInt_Array data;
    int convert_status=PyoaDualInt_Array_Convert(ob,&data);
    assert(convert_status!=0);
    if (index<0 || index>=data.Len()) {
        PyObject* err=PyString_FromString("index out of range");
        PyErr_SetObject(PyExc_IndexError, err);
        Py_DECREF(err);
        return NULL;
    }
    return PyoaDualInt_FromoaDualInt(data.GetItemPtr(index),1,self->locks);
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static Pyoa_ssize_t
oaDualInt_Array_index_get_length(PyObject* ob)
{
    PyParamoaDualInt_Array data;
    int convert_status=PyoaDualInt_Array_Convert(ob,&data);
    assert(convert_status!=0);
    return data.Len();
}

// ------------------------------------------------------------------
static int
oaDualInt_Array_index_set(PyObject *ob, Pyoa_ssize_t index, PyObject* value)
{
  try {
    PyParamoaDualInt_Array data;
    PyParamoaDualInt dataitem;
    int convert_status=PyoaDualInt_Array_Convert(ob,&data);
    assert(convert_status!=0);
    if (index<0 || index>=data.Len()) {
        PyObject* err=PyString_FromString("index out of range");
        PyErr_SetObject(PyExc_IndexError, err);
        Py_DECREF(err);
        return -1;
    }
    if (PyoaDualInt_Convert(value,&dataitem)==0) return -1;
    data.SetItem(index,dataitem.Data());
    return 0;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return 0;
  }
}

// ------------------------------------------------------------------
static char oaDualInt_Array_doc[] =
"Class: oaDualInt_Array\n"
"  The oaDualInt_Array utility class provides an array of oaDualInt.\n"
"Constructors:\n"
"  Paramegers: ()\n"
"    Calls: oaDualInt_Array()\n"
"    Signature: oaDualInt_Array||\n"
"    This is the default constructor for the oaDualInt_Array class. This constructor creates an empty oaDualInt_Array.\n"
"  Paramegers: (oaDualInt_Array)\n"
"    Calls: (const oaDualInt_Array&)\n"
"    Signature: oaDualInt_Array||cref-oaDualInt_Array,\n"
;

// ------------------------------------------------------------------
static PySequenceMethods oaDualInt_Array_as_sequence = {
    (Pyoa_inquiry)oaDualInt_Array_index_get_length, /* sq_length */
    (Pyoa_binaryfunc)0,              /* sq_concat */
    (Pyoa_intargfunc)0,              /* sq_repeat */
    (Pyoa_intargfunc)oaDualInt_Array_index_get, /* sq_item */
    (Pyoa_intintargfunc)0,           /* sq_slice */
    (Pyoa_intobjargproc)oaDualInt_Array_index_set,      /* sq_ass_item */
};

// ------------------------------------------------------------------
PyTypeObject PyoaDualInt_Array_Type = {
    PyObject_HEAD_INIT(&PyType_Type)
    0,
    "oaDualInt_Array",
    sizeof(PyoaDualInt_ArrayObject),
    0,
    oaDualInt_Array_dealloc, /* tp_dealloc */
    0,  /* tp_print */
    0,                                  /* tp_getattr */
    0,                                  /* tp_setattr */
    oaDualInt_Array_compare,    /* tp_compare */
    oaDualInt_Array_repr,      /* tp_repr */
    0,                                  /* tp_as_number */
    &oaDualInt_Array_as_sequence,  /* tp_as_sequence */
    0,                                  /* tp_as_mapping */
    0,                                  /* tp_as_hash */
    0,                                  /* tp_as_call */
    oaDualInt_Array_str,               /* tp_str */
    0,                                  /* tp_getattro */
    0,                                  /* tp_setattro */
    0,                                  /* tp_as_buffer */
    Py_TPFLAGS_DEFAULT|Py_TPFLAGS_BASETYPE, /* tp_flags */
    oaDualInt_Array_doc, /* tp_doc */
    0,                                  /* tp_traverse */
    0,                                  /* tp_clear */
    0,                                  /* tp_richcompre */
    0,                                  /* tp_weaklistoffset */
    0,                                  /* tp_iter */
    0,                                  /* tp_iternext */
    oaDualInt_Array_methodlist, /* tp_methods */
    0,                                  /* tp_members */
    0,                                  /* tp_getset */
    0,                                  /* tp_base */
    0,                                  /* tp_dict */
    0,                                  /* tp_descr_get */
    0,                                  /* tp_descr_set */
    0,                                  /* tp_dictoffset */
    0,                                  /* tp_init */
    PyType_GenericAlloc,        /* tp_alloc */
    oaDualInt_Array_new, /* tp_new */
    _PyObject_Del,      /* tp_free */
};


// ------------------------------------------------------------------
int
PyoaDualInt_Array_TypeInit(PyObject* mod_dict)
{
    if (PyType_Ready(&PyoaDualInt_Array_Type)<0) {
      printf("** PyType_Ready failed for: oaDualInt_Array\n");
      return -1;
    }
    if (PyDict_SetItemString(mod_dict,"oaDualInt_Array",
           (PyObject*)(&PyoaDualInt_Array_Type))<0) {
       printf("** Failed to add type name to module dictionary for: oaDualInt_Array\n");
       return -1;
    }
    return 0;
}


/********************************************************************
 *   Copyright 2002-2008  LSI Corporation
 *
 *   Licensed under the Apache License, Version 2.0 (the "License");
 *   you may not use this file except in compliance with the License.
 *   You may obtain a copy of the License at
 *
 *       http://www.apache.org/licenses/LICENSE-2.0
 *
 *   Unless required by applicable law or agreed to in writing, software
 *   distributed under the License is distributed on an "AS IS" BASIS,
 *   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *   See the License for the specific language governing permissions and
 *   limitations under the License.
 *
 *******************************************************************/

#include "pyoa_header.h"


// ==================================================================
// Wrapper Implementation for Class: oaDualInt1DTblValue
// ==================================================================


// ==================================================================
// Alloc/Dealloc Routines
// ==================================================================

// ------------------------------------------------------------------
static PyObject*
oaDualInt1DTblValue_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
  try {
    int is_raw=(type==&PyoaDualInt1DTblValue_Type);
    PyObject* bself = type->tp_alloc(type,0);
    if (bself == NULL) return bself;
    PyoaDualInt1DTblValueObject* self = (PyoaDualInt1DTblValueObject*)bself;
    self->locks = NULL;
    self->borrow = 0;
    static char *kwlist [] = { NULL } ;
    // Case: (oaDualInt1DTblValue)
    {
        PyParamoaDualInt1DTblValue p1;
        if (PyArg_ParseTuple(args,(char*)"O&",
              &PyoaDualInt1DTblValue_Convert,&p1)) {
            self->data=p1.Data();
            self->value=&(self->data);
            return bself;
        }
    }
    PyErr_Clear();
    // Case: ()
    {
        if (PyArg_ParseTuple(args,(char*)"")) {
          self->data=NULL;
          self->value=&(self->data);
          return bself;
        }
    }
    PyErr_Clear();
    PyErr_SetString(PyExc_TypeError,
        "No Arg-Matching Constructor found for class: oaDualInt1DTblValue, Choices are:\n"
        "    (oaDualInt1DTblValue)\n"
    );
    Py_DECREF(self);
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static void
oaDualInt1DTblValue_tp_dealloc(PyoaDualInt1DTblValueObject* self)
{
    self->ob_type->tp_free((PyObject*)self);
}

// ------------------------------------------------------------------
static PyObject*
oaDualInt1DTblValue_tp_repr(PyObject *ob)
{
    PyParamoaDualInt1DTblValue value;
    int convert_status=PyoaDualInt1DTblValue_Convert(ob,&value);
    assert(convert_status!=0);
    PyObject* result;

    char buffer[41];
    sprintf(buffer,"<oaDualInt1DTblValue::" DISPLAY_FORMAT ">",POINTER_AS_DISPLAY(value.DataCall()));
    result=PyString_FromString(buffer);
    return result;
}
        
// ------------------------------------------------------------------
static int
oaDualInt1DTblValue_tp_compare(PyObject *ob1,PyObject* ob2)
{
    PyParamoaDualInt1DTblValue v1;
    PyParamoaDualInt1DTblValue v2;
    int convert_status1=PyoaDualInt1DTblValue_Convert(ob1,&v1);
    int convert_status2=PyoaDualInt1DTblValue_Convert(ob2,&v2);
    assert(convert_status1!=0);
    assert(convert_status2!=0);
    if (v1.DataCall()==v2.DataCall()) return 0;
    return 1;
}
        
// ------------------------------------------------------------------
int
PyoaDualInt1DTblValue_Convert(PyObject* ob,PyParamoaDualInt1DTblValue* result)
{
    if (ob == NULL) return 1;
    if (PyoaDualInt1DTblValue_Check(ob)) {
        result->SetData( (oaDualInt1DTblValue**) ((PyoaDualInt1DTblValueObject*)ob)->value);
        return 1;
    }
    PyErr_SetString(PyExc_TypeError,
        "Convertion of parameter to class: oaDualInt1DTblValue Failed");
    return 0;
}
// ------------------------------------------------------------------
PyObject* PyoaDualInt1DTblValue_FromoaDualInt1DTblValue(oaDualInt1DTblValue** value,int borrow,PyObject* lock)
{
    if (value && *value) {
        oaDualInt1DTblValue* data=*value;
        PyObject* bself = PyoaDualInt1DTblValue_Type.tp_alloc(&PyoaDualInt1DTblValue_Type,0);
        if (bself == NULL) return bself;
        PyoaDualInt1DTblValueObject* self = (PyoaDualInt1DTblValueObject*)bself;
        self->value = (oaObject**) value;
        self->data = NULL;
        self->locks = NULL;
        self->borrow = 0; // Ignore borrow flag, since we copied
       if (lock) PyoaLockObject(self->locks,lock);
        return bself;
    }
    Py_INCREF(Py_None);
    return Py_None;
}
// ------------------------------------------------------------------
PyObject* PyoaDualInt1DTblValue_FromoaDualInt1DTblValue(oaDualInt1DTblValue* data)
{
    if (data) {
       PyObject* bself = PyoaDualInt1DTblValue_Type.tp_alloc(&PyoaDualInt1DTblValue_Type,0);
       if (bself == NULL) return bself;
       PyoaDualInt1DTblValueObject* self = (PyoaDualInt1DTblValueObject*)bself;
       self->data = (oaObject*) data;
       self->value = &(self->data);
       self->borrow = 0; 
       self->locks = NULL;
       return bself;
    }
    Py_INCREF(Py_None);
    return Py_None;
}

// ------------------------------------------------------------------
// FunctionMethods:
// ------------------------------------------------------------------

// ------------------------------------------------------------------
static char oaDualInt1DTblValue_getFirst_doc[] = 
"Class: oaDualInt1DTblValue, Function: getFirst\n"
"  Paramegers: (oa1DLookupTbl_oaInt4_oaInt4)\n"
"    Calls: void getFirst(oa1DLookupTbl_oaInt4_oaInt4& value) const\n"
"    Signature: getFirst|void-void|ref-oa1DLookupTbl_oaInt4_oaInt4,\n"
"    BrowseData: 0,oa1DLookupTbl_oaInt4_oaInt4\n"
"    This function returns the first int1DTbl for this value.\n"
"    value\n"
"    The returned value.\n"
;

static PyObject*
oaDualInt1DTblValue_getFirst(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaDualInt1DTblValue data;
    int convert_status=PyoaDualInt1DTblValue_Convert(ob,&data);
    assert(convert_status!=0);
    PyoaDualInt1DTblValueObject* self=(PyoaDualInt1DTblValueObject*)ob;
    if (!PyValidateDbObject(data.Data(),0)) return NULL;

    PyParamoa1DLookupTbl_oaInt4_oaInt4 p1;
    if (PyArg_ParseTuple(args,"O&",
          &Pyoa1DLookupTbl_oaInt4_oaInt4_Convert,&p1)) {
        data.DataCall()->getFirst(p1.Data());
        Py_INCREF(Py_None);
        return Py_None;
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaDualInt1DTblValue_getSecond_doc[] = 
"Class: oaDualInt1DTblValue, Function: getSecond\n"
"  Paramegers: (oa1DLookupTbl_oaInt4_oaInt4)\n"
"    Calls: void getSecond(oa1DLookupTbl_oaInt4_oaInt4& value) const\n"
"    Signature: getSecond|void-void|ref-oa1DLookupTbl_oaInt4_oaInt4,\n"
"    BrowseData: 0,oa1DLookupTbl_oaInt4_oaInt4\n"
"    This function returns the second int1DTbl for this value.\n"
"    value\n"
"    The returned value.\n"
;

static PyObject*
oaDualInt1DTblValue_getSecond(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaDualInt1DTblValue data;
    int convert_status=PyoaDualInt1DTblValue_Convert(ob,&data);
    assert(convert_status!=0);
    PyoaDualInt1DTblValueObject* self=(PyoaDualInt1DTblValueObject*)ob;
    if (!PyValidateDbObject(data.Data(),0)) return NULL;

    PyParamoa1DLookupTbl_oaInt4_oaInt4 p1;
    if (PyArg_ParseTuple(args,"O&",
          &Pyoa1DLookupTbl_oaInt4_oaInt4_Convert,&p1)) {
        data.DataCall()->getSecond(p1.Data());
        Py_INCREF(Py_None);
        return Py_None;
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaDualInt1DTblValue_setFirst_doc[] = 
"Class: oaDualInt1DTblValue, Function: setFirst\n"
"  Paramegers: (oa1DLookupTbl_oaInt4_oaInt4)\n"
"    Calls: void setFirst(const oa1DLookupTbl_oaInt4_oaInt4& value)\n"
"    Signature: setFirst|void-void|cref-oa1DLookupTbl_oaInt4_oaInt4,\n"
"    This function sets the first int1DTbl for this value to the specified value.\n"
"    value\n"
"    The first int1DTbl value to set\n"
;

static PyObject*
oaDualInt1DTblValue_setFirst(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaDualInt1DTblValue data;
    int convert_status=PyoaDualInt1DTblValue_Convert(ob,&data);
    assert(convert_status!=0);
    PyoaDualInt1DTblValueObject* self=(PyoaDualInt1DTblValueObject*)ob;
    if (!PyValidateDbObject(data.Data(),0)) return NULL;

    PyParamoa1DLookupTbl_oaInt4_oaInt4 p1;
    if (PyArg_ParseTuple(args,"O&",
          &Pyoa1DLookupTbl_oaInt4_oaInt4_Convert,&p1)) {
        data.DataCall()->setFirst(p1.Data());
        Py_INCREF(Py_None);
        return Py_None;
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaDualInt1DTblValue_setSecond_doc[] = 
"Class: oaDualInt1DTblValue, Function: setSecond\n"
"  Paramegers: (oa1DLookupTbl_oaInt4_oaInt4)\n"
"    Calls: void setSecond(const oa1DLookupTbl_oaInt4_oaInt4& value)\n"
"    Signature: setSecond|void-void|cref-oa1DLookupTbl_oaInt4_oaInt4,\n"
"    This function sets the second int1DTbl for this value to the specified value.\n"
"    value\n"
"    The second int1DTbl value to set\n"
;

static PyObject*
oaDualInt1DTblValue_setSecond(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaDualInt1DTblValue data;
    int convert_status=PyoaDualInt1DTblValue_Convert(ob,&data);
    assert(convert_status!=0);
    PyoaDualInt1DTblValueObject* self=(PyoaDualInt1DTblValueObject*)ob;
    if (!PyValidateDbObject(data.Data(),0)) return NULL;

    PyParamoa1DLookupTbl_oaInt4_oaInt4 p1;
    if (PyArg_ParseTuple(args,"O&",
          &Pyoa1DLookupTbl_oaInt4_oaInt4_Convert,&p1)) {
        data.DataCall()->setSecond(p1.Data());
        Py_INCREF(Py_None);
        return Py_None;
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaDualInt1DTblValue_isNull_doc[] =
"Class: oaDualInt1DTblValue, Function: isNull\n"
"  Parameters: () \n"
"    This functions returns 1 if the DbPointer is NULL, and 0 otherwise.\n"
;

static PyObject*
oaDualInt1DTblValue_tp_isNull(PyObject* ob, PyObject *args)
{
    PyParamoaDualInt1DTblValue data;
    int convert_status=PyoaDualInt1DTblValue_Convert(ob,&data);
    assert(convert_status!=0);
    if (data.DataCall()==NULL)
        return PyInt_FromLong(1);
    else
        return PyInt_FromLong(0);
}
static char oaDualInt1DTblValue_assign_doc[] = 
"Class: oaDualInt1DTblValue, Function: set\n"
"  Paramegers: (oaDouble)\n"
"    This function sets the current value.\n"
;

static PyObject*
oaDualInt1DTblValue_tp_assign(PyObject* ob, PyObject *args)
{
  PyParamoaDualInt1DTblValue data;
  int convert_status=PyoaDualInt1DTblValue_Convert(ob,&data);
  assert(convert_status!=0);
  try {
    PyParamoaDualInt1DTblValue p1;
    if (PyArg_ParseTuple(args,(char*)"O&",
          &PyoaDualInt1DTblValue_Convert,&p1)) {
        data.Data()=p1.Data();
        Py_INCREF(ob);
        return ob;
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}


// ------------------------------------------------------------------
//  Function Methods Table:
// ------------------------------------------------------------------

static PyMethodDef oaDualInt1DTblValue_methodlist[] = {
    {"getFirst",(PyCFunction)oaDualInt1DTblValue_getFirst,METH_VARARGS,oaDualInt1DTblValue_getFirst_doc},
    {"getSecond",(PyCFunction)oaDualInt1DTblValue_getSecond,METH_VARARGS,oaDualInt1DTblValue_getSecond_doc},
    {"setFirst",(PyCFunction)oaDualInt1DTblValue_setFirst,METH_VARARGS,oaDualInt1DTblValue_setFirst_doc},
    {"setSecond",(PyCFunction)oaDualInt1DTblValue_setSecond,METH_VARARGS,oaDualInt1DTblValue_setSecond_doc},
    {"isNull",(PyCFunction)oaDualInt1DTblValue_tp_isNull,METH_VARARGS,oaDualInt1DTblValue_isNull_doc},
    {"assign",(PyCFunction)oaDualInt1DTblValue_tp_assign,METH_VARARGS,oaDualInt1DTblValue_assign_doc},
   {NULL,NULL,0,NULL}
};


// ------------------------------------------------------------------
//  Type Object:
// ------------------------------------------------------------------

// ------------------------------------------------------------------
static char oaDualInt1DTblValue_doc[] = 
"Class: oaDualInt1DTblValue\n"
"  The oaDualInt1DTblValue class represents two 1D integer lookup table values.\n"
"  See oaValue for a discussion of the usage of all of the oaValue subclasses.\n"
"Constructors:\n"
"  Paramegers: (oaDualInt1DTblValue)\n"
"    Calls: (const oaDualInt1DTblValue&)\n"
"    Signature: oaDualInt1DTblValue||cref-oaDualInt1DTblValue,\n"
;

// ------------------------------------------------------------------
PyTypeObject PyoaDualInt1DTblValue_Type = {
    PyObject_HEAD_INIT(&PyType_Type)
    0,
    "oaDualInt1DTblValue",
    sizeof(PyoaDualInt1DTblValueObject),
    0,
    (destructor)oaDualInt1DTblValue_tp_dealloc,	/* tp_dealloc */
    0,	/* tp_print */
    0,					/* tp_getattr */
    0,					/* tp_setattr */
    (cmpfunc)oaDualInt1DTblValue_tp_compare,	/* tp_compare */
    (reprfunc)oaDualInt1DTblValue_tp_repr,	/* tp_repr */
    0,					/* tp_as_number */
    0,					/* tp_as_sequence */
    0,					/* tp_as_mapping */
    0,					/* tp_as_hash */
    0,					/* tp_as_call */
    0,					/* tp_str */
    0,					/* tp_getattro */
    0,					/* tp_setattro */
    0,					/* tp_as_buffer */
    Py_TPFLAGS_DEFAULT|Py_TPFLAGS_BASETYPE, /* tp_flags */
    oaDualInt1DTblValue_doc,	/* tp_doc */
    0,					/* tp_traverse */
    0,					/* tp_clear */
    0,					/* tp_richcompre */
    0,					/* tp_weaklistoffset */
    0,					/* tp_iter */
    0,					/* tp_iternext */
    oaDualInt1DTblValue_methodlist,	/* tp_methods */
    0,					/* tp_members */
    0,					/* tp_getset */
    &PyoaValue_Type,	/* tp_base */
    0,					/* tp_dict */
    0,					/* tp_descr_get */
    0,					/* tp_descr_set */
    0,					/* tp_dictoffset */
    0,					/* tp_init */
    PyType_GenericAlloc,	/* tp_alloc */
    oaDualInt1DTblValue_new,	/* tp_new */
    _PyObject_Del,	/* tp_free */
};


// ------------------------------------------------------------------
// Static FunctionMethods:
// ------------------------------------------------------------------

// ------------------------------------------------------------------
static char oaDualInt1DTblValue_static_create_doc[] = 
"Class: oaDualInt1DTblValue, Function: create\n"
"  Paramegers: (oaObject,oa1DLookupTbl_oaInt4_oaInt4,oa1DLookupTbl_oaInt4_oaInt4)\n"
"    Calls: oaDualInt1DTblValue* create(oaObject* database,const oa1DLookupTbl_oaInt4_oaInt4& first,const oa1DLookupTbl_oaInt4_oaInt4& second)\n"
"    Signature: create|ptr-oaDualInt1DTblValue|ptr-oaObject,cref-oa1DLookupTbl_oaInt4_oaInt4,cref-oa1DLookupTbl_oaInt4_oaInt4,\n"
"    This function creates a dualInt1DTbl value with the specified attributes.\n"
"    database\n"
"    The database in which to create the value\n"
"    first\n"
"    The first int1DTbl value\n"
"    second\n"
"    The second int1DTbl value\n"
"    oacInvalidDatabase\n"
;

static PyObject*
oaDualInt1DTblValue_static_create(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaObject p1;
    PyParamoa1DLookupTbl_oaInt4_oaInt4 p2;
    PyParamoa1DLookupTbl_oaInt4_oaInt4 p3;
    if (PyArg_ParseTuple(args,"O&O&O&",
          &PyoaObject_Convert,&p1,
          &Pyoa1DLookupTbl_oaInt4_oaInt4_Convert,&p2,
          &Pyoa1DLookupTbl_oaInt4_oaInt4_Convert,&p3)) {
        if (!PyValidateDbObject(p1.Data(),1)) return NULL;
        oaDualInt1DTblValuep result= (oaDualInt1DTblValue::create(p1.Data(),p2.Data(),p3.Data()));
        return PyoaDualInt1DTblValue_FromoaDualInt1DTblValue(result);
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static PyMethodDef oaDualInt1DTblValue_staticmethodlist[] = {
    {"static_create",(PyCFunction)oaDualInt1DTblValue_static_create,METH_VARARGS,oaDualInt1DTblValue_static_create_doc},
   {NULL,NULL,0,NULL}
};


// ------------------------------------------------------------------
//  Type Init:
// ------------------------------------------------------------------

int
PyoaDualInt1DTblValue_TypeInit(PyObject* mod_dict)
{
    if (PyType_Ready(&PyoaDualInt1DTblValue_Type)<0) {
      printf("** PyType_Ready failed for: oaDualInt1DTblValue\n");
      return -1;
    }

    if (PyDict_SetItemString(mod_dict,"oaDualInt1DTblValue",
           (PyObject*)(&PyoaDualInt1DTblValue_Type))<0) {
       printf("** Failed to add type name to module dictionary for: oaDualInt1DTblValue\n");
       return -1;
    }

    PyObject *dict, *value;
    PyMethodDef *method;
    dict=PyoaDualInt1DTblValue_Type.tp_dict;
    for(method=oaDualInt1DTblValue_staticmethodlist;method->ml_name!=NULL;method++) {
        value=PyCFunction_New(method,NULL);
    if (value==NULL) return -1;
        if (PyDict_SetItemString(dict,method->ml_name,value)!=0) {
        Py_DECREF(value);
            printf("** Failed to add static function to module dictionary for: %s\n",
                method->ml_name);
            return -1;
        }
        Py_DECREF(value);
    }
    return 0;
}


/********************************************************************
 *   Copyright 2002-2008  LSI Corporation
 *
 *   Licensed under the Apache License, Version 2.0 (the "License");
 *   you may not use this file except in compliance with the License.
 *   You may obtain a copy of the License at
 *
 *       http://www.apache.org/licenses/LICENSE-2.0
 *
 *   Unless required by applicable law or agreed to in writing, software
 *   distributed under the License is distributed on an "AS IS" BASIS,
 *   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *   See the License for the specific language governing permissions and
 *   limitations under the License.
 *
 *******************************************************************/

#include "pyoa_header.h"


// ==================================================================
// Wrapper Implementation for Class: oaDualIntArray
// ==================================================================


// ==================================================================
// Alloc/Dealloc Routines
// ==================================================================

// ------------------------------------------------------------------
static PyObject*
oaDualIntArray_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
  try {
    int is_raw=(type==&PyoaDualIntArray_Type);
    PyObject* bself = type->tp_alloc(type,0);
    if (bself == NULL) return bself;
    PyoaDualIntArrayObject* self = (PyoaDualIntArrayObject*)bself;
    self->locks = NULL;
    self->borrow = 0;
    static char *kwlist [] = { NULL } ;
    // Case: ()
    {
        if (PyArg_ParseTuple(args,"")) {
            self->value = (oaArrayBase_oaDualInt*)  new oaDualIntArray();
            return bself;
        }
    }
    PyErr_Clear();
    // Case: (oaUInt4)
    {
        PyParamoaUInt4 p1;
        if (PyArg_ParseTuple(args,"O&",
              &PyoaUInt4_Convert,&p1)) {
            self->value = (oaArrayBase_oaDualInt*)  new oaDualIntArray(p1.Data());
            return bself;
        }
    }
    PyErr_Clear();
    // Case: ([oaDualInt])
    {
        PyParamoaDualInt_Array p1;
        if (PyArg_ParseTuple(args,"O&",
              &PyoaDualInt_Array_Convert,&p1)) {
            self->value = (oaArrayBase_oaDualInt*)  new oaDualIntArray(p1.Data(),p1.Len());
            return bself;
        }
    }
    PyErr_Clear();
    // Case: (oaDualIntArray)
    {
        PyParamoaDualIntArray p1;
        if (PyArg_ParseTuple(args,(char*)"O&",
              &PyoaDualIntArray_Convert,&p1)) {
            self->value=(oaArrayBase_oaDualInt*)  new oaDualIntArray(p1.Data());
            return bself;
        }
    }
    PyErr_Clear();
    PyErr_SetString(PyExc_TypeError,
        "No Arg-Matching Constructor found for class: oaDualIntArray, Choices are:\n"
        "    ()\n"
        "    (oaUInt4)\n"
        "    ([oaDualInt])\n"
        "    (oaDualIntArray)\n"
    );
    Py_DECREF(self);
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static void
oaDualIntArray_tp_dealloc(PyoaDualIntArrayObject* self)
{
    if (!self->borrow) {
        delete (oaDualIntArray*)(self->value);
    }
    Py_XDECREF(self->locks);
    self->ob_type->tp_free((PyObject*)self);
}

// ------------------------------------------------------------------
static PyObject*
oaDualIntArray_tp_repr(PyObject *ob)
{
    PyParamoaDualIntArray value;
    int convert_status=PyoaDualIntArray_Convert(ob,&value);
    assert(convert_status!=0);
    PyObject* result;

    char buffer[36];
    sprintf(buffer,"<oaDualIntArray::" DISPLAY_FORMAT ">",POINTER_AS_DISPLAY(value.DataCall()));
    result=PyString_FromString(buffer);
    return result;
}
        
// ------------------------------------------------------------------
static int
oaDualIntArray_tp_compare(PyObject *ob1,PyObject* ob2)
{
    PyParamoaDualIntArray v1;
    PyParamoaDualIntArray v2;
    int convert_status1=PyoaDualIntArray_Convert(ob1,&v1);
    int convert_status2=PyoaDualIntArray_Convert(ob2,&v2);
    assert(convert_status1!=0);
    assert(convert_status2!=0);
    if (v1.DataCall()==v2.DataCall()) return 0;
    return 1;
}
        
// ------------------------------------------------------------------
int
PyoaDualIntArray_Convert(PyObject* ob,PyParamoaDualIntArray* result)
{
    if (ob == NULL) return 1;
    if (PyoaDualIntArray_Check(ob)) {
        result->SetData( (oaDualIntArray*) ((PyoaDualIntArrayObject*)ob)->value);
        return 1;
    }
    PyErr_SetString(PyExc_TypeError,
        "Convertion of parameter to class: oaDualIntArray Failed");
    return 0;
}
// ------------------------------------------------------------------
PyObject* PyoaDualIntArray_FromoaDualIntArray(oaDualIntArray* data,int borrow,PyObject* lock)
{
    if (data) {
        PyObject* bself = PyoaDualIntArray_Type.tp_alloc(&PyoaDualIntArray_Type,0);
        if (bself == NULL) return bself;
        PyoaDualIntArrayObject* self = (PyoaDualIntArrayObject*)bself;
        self->value = (oaArrayBase_oaDualInt*)  data;
        self->locks = NULL;
        self->borrow = borrow;
        if (lock) PyoaLockObject(self->locks,lock);
        return bself;
    }
    Py_INCREF(Py_None);
    return Py_None;
}

// ------------------------------------------------------------------
//  Type Object:
// ------------------------------------------------------------------

// ------------------------------------------------------------------
static char oaDualIntArray_doc[] = 
"Class: oaDualIntArray\n"
"  This class implements an array of oaInt4 integer pairs. It is declared in the oaBase module.\n"
"  Todo\n"
"  Check description of class.\n"
"Constructors:\n"
"  Paramegers: ()\n"
"    Calls: oaDualIntArray()\n"
"    Signature: oaDualIntArray||simple-oaUInt4,\n"
"    This is the constructor for the oaDualIntArray class.\n"
"    sizeIn\n"
"    The initial size of this array.\n"
"    Todo\n"
"    Check description of member function. Add description of each parameter.\n"
"  Paramegers: (oaUInt4)\n"
"    Calls: oaDualIntArray(oaUInt4 sizeIn)\n"
"    Signature: oaDualIntArray||simple-oaUInt4,\n"
"    This is the constructor for the oaDualIntArray class.\n"
"    sizeIn\n"
"    The initial size of this array.\n"
"    Todo\n"
"    Check description of member function. Add description of each parameter.\n"
"  Paramegers: ([oaDualInt])\n"
"    Calls: oaDualIntArray(const oaDualInt* arrayIn)\n"
"    Signature: oaDualIntArray||cptr-oaDualInt,simple-oaUInt4,\n"
"    This is a constructor for oaDualIntArray that constructs the array object with an array of oaDualInt objects.\n"
"    arrayIn\n"
"    The array of oaDualInt objects to construct this array with.\n"
"    numElementsIn\n"
"    The number of elements in the array.\n"
"    Todo\n"
"    Add description of member function. Add description of each parameter.\n"
"  Paramegers: (oaDualIntArray)\n"
"    Calls: (const oaDualIntArray&)\n"
"    Signature: oaDualIntArray||cref-oaDualIntArray,\n"
;

// ------------------------------------------------------------------
PyTypeObject PyoaDualIntArray_Type = {
    PyObject_HEAD_INIT(&PyType_Type)
    0,
    "oaDualIntArray",
    sizeof(PyoaDualIntArrayObject),
    0,
    (destructor)oaDualIntArray_tp_dealloc,	/* tp_dealloc */
    0,	/* tp_print */
    0,					/* tp_getattr */
    0,					/* tp_setattr */
    (cmpfunc)oaDualIntArray_tp_compare,	/* tp_compare */
    (reprfunc)oaDualIntArray_tp_repr,	/* tp_repr */
    0,					/* tp_as_number */
    0,					/* tp_as_sequence */
    0,					/* tp_as_mapping */
    0,					/* tp_as_hash */
    0,					/* tp_as_call */
    0,					/* tp_str */
    0,					/* tp_getattro */
    0,					/* tp_setattro */
    0,					/* tp_as_buffer */
    Py_TPFLAGS_DEFAULT|Py_TPFLAGS_BASETYPE, /* tp_flags */
    oaDualIntArray_doc,	/* tp_doc */
    0,					/* tp_traverse */
    0,					/* tp_clear */
    0,					/* tp_richcompre */
    0,					/* tp_weaklistoffset */
    0,					/* tp_iter */
    0,					/* tp_iternext */
    0,					/* tp_methods */
    0,					/* tp_members */
    0,					/* tp_getset */
    &PyoaArray_oaDualInt_Type,	/* tp_base */
    0,					/* tp_dict */
    0,					/* tp_descr_get */
    0,					/* tp_descr_set */
    0,					/* tp_dictoffset */
    0,					/* tp_init */
    PyType_GenericAlloc,	/* tp_alloc */
    oaDualIntArray_new,	/* tp_new */
    _PyObject_Del,	/* tp_free */
};


// ------------------------------------------------------------------
//  Type Init:
// ------------------------------------------------------------------

int
PyoaDualIntArray_TypeInit(PyObject* mod_dict)
{
    if (PyType_Ready(&PyoaDualIntArray_Type)<0) {
      printf("** PyType_Ready failed for: oaDualIntArray\n");
      return -1;
    }

    if (PyDict_SetItemString(mod_dict,"oaDualIntArray",
           (PyObject*)(&PyoaDualIntArray_Type))<0) {
       printf("** Failed to add type name to module dictionary for: oaDualIntArray\n");
       return -1;
    }
    return 0;
}


/********************************************************************
 *   Copyright 2002-2008  LSI Corporation
 *
 *   Licensed under the Apache License, Version 2.0 (the "License");
 *   you may not use this file except in compliance with the License.
 *   You may obtain a copy of the License at
 *
 *       http://www.apache.org/licenses/LICENSE-2.0
 *
 *   Unless required by applicable law or agreed to in writing, software
 *   distributed under the License is distributed on an "AS IS" BASIS,
 *   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *   See the License for the specific language governing permissions and
 *   limitations under the License.
 *
 *******************************************************************/

#include "pyoa_header.h"


// ==================================================================
// Wrapper Implementation for Class: oaDualIntValue
// ==================================================================


// ==================================================================
// Alloc/Dealloc Routines
// ==================================================================

// ------------------------------------------------------------------
static PyObject*
oaDualIntValue_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
  try {
    int is_raw=(type==&PyoaDualIntValue_Type);
    PyObject* bself = type->tp_alloc(type,0);
    if (bself == NULL) return bself;
    PyoaDualIntValueObject* self = (PyoaDualIntValueObject*)bself;
    self->locks = NULL;
    self->borrow = 0;
    static char *kwlist [] = { NULL } ;
    // Case: (oaDualIntValue)
    {
        PyParamoaDualIntValue p1;
        if (PyArg_ParseTuple(args,(char*)"O&",
              &PyoaDualIntValue_Convert,&p1)) {
            self->data=p1.Data();
            self->value=&(self->data);
            return bself;
        }
    }
    PyErr_Clear();
    // Case: ()
    {
        if (PyArg_ParseTuple(args,(char*)"")) {
          self->data=NULL;
          self->value=&(self->data);
          return bself;
        }
    }
    PyErr_Clear();
    PyErr_SetString(PyExc_TypeError,
        "No Arg-Matching Constructor found for class: oaDualIntValue, Choices are:\n"
        "    (oaDualIntValue)\n"
    );
    Py_DECREF(self);
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static void
oaDualIntValue_tp_dealloc(PyoaDualIntValueObject* self)
{
    self->ob_type->tp_free((PyObject*)self);
}

// ------------------------------------------------------------------
static PyObject*
oaDualIntValue_tp_repr(PyObject *ob)
{
    PyParamoaDualIntValue value;
    int convert_status=PyoaDualIntValue_Convert(ob,&value);
    assert(convert_status!=0);
    PyObject* result;

    char buffer[36];
    sprintf(buffer,"<oaDualIntValue::" DISPLAY_FORMAT ">",POINTER_AS_DISPLAY(value.DataCall()));
    result=PyString_FromString(buffer);
    return result;
}
        
// ------------------------------------------------------------------
static int
oaDualIntValue_tp_compare(PyObject *ob1,PyObject* ob2)
{
    PyParamoaDualIntValue v1;
    PyParamoaDualIntValue v2;
    int convert_status1=PyoaDualIntValue_Convert(ob1,&v1);
    int convert_status2=PyoaDualIntValue_Convert(ob2,&v2);
    assert(convert_status1!=0);
    assert(convert_status2!=0);
    if (v1.DataCall()==v2.DataCall()) return 0;
    return 1;
}
        
// ------------------------------------------------------------------
int
PyoaDualIntValue_Convert(PyObject* ob,PyParamoaDualIntValue* result)
{
    if (ob == NULL) return 1;
    if (PyoaDualIntValue_Check(ob)) {
        result->SetData( (oaDualIntValue**) ((PyoaDualIntValueObject*)ob)->value);
        return 1;
    }
    PyErr_SetString(PyExc_TypeError,
        "Convertion of parameter to class: oaDualIntValue Failed");
    return 0;
}
// ------------------------------------------------------------------
PyObject* PyoaDualIntValue_FromoaDualIntValue(oaDualIntValue** value,int borrow,PyObject* lock)
{
    if (value && *value) {
        oaDualIntValue* data=*value;
        PyObject* bself = PyoaDualIntValue_Type.tp_alloc(&PyoaDualIntValue_Type,0);
        if (bself == NULL) return bself;
        PyoaDualIntValueObject* self = (PyoaDualIntValueObject*)bself;
        self->value = (oaObject**) value;
        self->data = NULL;
        self->locks = NULL;
        self->borrow = 0; // Ignore borrow flag, since we copied
       if (lock) PyoaLockObject(self->locks,lock);
        return bself;
    }
    Py_INCREF(Py_None);
    return Py_None;
}
// ------------------------------------------------------------------
PyObject* PyoaDualIntValue_FromoaDualIntValue(oaDualIntValue* data)
{
    if (data) {
       PyObject* bself = PyoaDualIntValue_Type.tp_alloc(&PyoaDualIntValue_Type,0);
       if (bself == NULL) return bself;
       PyoaDualIntValueObject* self = (PyoaDualIntValueObject*)bself;
       self->data = (oaObject*) data;
       self->value = &(self->data);
       self->borrow = 0; 
       self->locks = NULL;
       return bself;
    }
    Py_INCREF(Py_None);
    return Py_None;
}

// ------------------------------------------------------------------
// FunctionMethods:
// ------------------------------------------------------------------

// ------------------------------------------------------------------
static char oaDualIntValue_getFirst_doc[] = 
"Class: oaDualIntValue, Function: getFirst\n"
"  Paramegers: ()\n"
"    Calls: oaInt4 getFirst() const\n"
"    Signature: getFirst|simple-oaInt4|\n"
"    BrowseData: 1\n"
"    This function returns the first integer for this value.\n"
;

static PyObject*
oaDualIntValue_getFirst(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaDualIntValue data;
    int convert_status=PyoaDualIntValue_Convert(ob,&data);
    assert(convert_status!=0);
    PyoaDualIntValueObject* self=(PyoaDualIntValueObject*)ob;
    if (!PyValidateDbObject(data.Data(),0)) return NULL;

    if (PyArg_ParseTuple(args,"")) {
        oaInt4 result= (data.DataCall()->getFirst());
        return PyoaInt4_FromoaInt4(result);
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaDualIntValue_getSecond_doc[] = 
"Class: oaDualIntValue, Function: getSecond\n"
"  Paramegers: ()\n"
"    Calls: oaInt4 getSecond() const\n"
"    Signature: getSecond|simple-oaInt4|\n"
"    BrowseData: 1\n"
"    This function returns the second for this value.\n"
;

static PyObject*
oaDualIntValue_getSecond(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaDualIntValue data;
    int convert_status=PyoaDualIntValue_Convert(ob,&data);
    assert(convert_status!=0);
    PyoaDualIntValueObject* self=(PyoaDualIntValueObject*)ob;
    if (!PyValidateDbObject(data.Data(),0)) return NULL;

    if (PyArg_ParseTuple(args,"")) {
        oaInt4 result= (data.DataCall()->getSecond());
        return PyoaInt4_FromoaInt4(result);
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaDualIntValue_setFirst_doc[] = 
"Class: oaDualIntValue, Function: setFirst\n"
"  Paramegers: (oaInt4)\n"
"    Calls: void setFirst(oaInt4 value)\n"
"    Signature: setFirst|void-void|simple-oaInt4,\n"
"    This function sets the first integer in this value to the specified value.\n"
"    value\n"
"    The first integer value to set\n"
;

static PyObject*
oaDualIntValue_setFirst(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaDualIntValue data;
    int convert_status=PyoaDualIntValue_Convert(ob,&data);
    assert(convert_status!=0);
    PyoaDualIntValueObject* self=(PyoaDualIntValueObject*)ob;
    if (!PyValidateDbObject(data.Data(),0)) return NULL;

    PyParamoaInt4 p1;
    if (PyArg_ParseTuple(args,"O&",
          &PyoaInt4_Convert,&p1)) {
        data.DataCall()->setFirst(p1.Data());
        Py_INCREF(Py_None);
        return Py_None;
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaDualIntValue_setSecond_doc[] = 
"Class: oaDualIntValue, Function: setSecond\n"
"  Paramegers: (oaInt4)\n"
"    Calls: void setSecond(oaInt4 value)\n"
"    Signature: setSecond|void-void|simple-oaInt4,\n"
"    This function sets the second integer of this value to the specified value.\n"
"    value\n"
"    The second integer value to set\n"
;

static PyObject*
oaDualIntValue_setSecond(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaDualIntValue data;
    int convert_status=PyoaDualIntValue_Convert(ob,&data);
    assert(convert_status!=0);
    PyoaDualIntValueObject* self=(PyoaDualIntValueObject*)ob;
    if (!PyValidateDbObject(data.Data(),0)) return NULL;

    PyParamoaInt4 p1;
    if (PyArg_ParseTuple(args,"O&",
          &PyoaInt4_Convert,&p1)) {
        data.DataCall()->setSecond(p1.Data());
        Py_INCREF(Py_None);
        return Py_None;
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaDualIntValue_isNull_doc[] =
"Class: oaDualIntValue, Function: isNull\n"
"  Parameters: () \n"
"    This functions returns 1 if the DbPointer is NULL, and 0 otherwise.\n"
;

static PyObject*
oaDualIntValue_tp_isNull(PyObject* ob, PyObject *args)
{
    PyParamoaDualIntValue data;
    int convert_status=PyoaDualIntValue_Convert(ob,&data);
    assert(convert_status!=0);
    if (data.DataCall()==NULL)
        return PyInt_FromLong(1);
    else
        return PyInt_FromLong(0);
}
static char oaDualIntValue_assign_doc[] = 
"Class: oaDualIntValue, Function: set\n"
"  Paramegers: (oaDouble)\n"
"    This function sets the current value.\n"
;

static PyObject*
oaDualIntValue_tp_assign(PyObject* ob, PyObject *args)
{
  PyParamoaDualIntValue data;
  int convert_status=PyoaDualIntValue_Convert(ob,&data);
  assert(convert_status!=0);
  try {
    PyParamoaDualIntValue p1;
    if (PyArg_ParseTuple(args,(char*)"O&",
          &PyoaDualIntValue_Convert,&p1)) {
        data.Data()=p1.Data();
        Py_INCREF(ob);
        return ob;
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}


// ------------------------------------------------------------------
//  Function Methods Table:
// ------------------------------------------------------------------

static PyMethodDef oaDualIntValue_methodlist[] = {
    {"getFirst",(PyCFunction)oaDualIntValue_getFirst,METH_VARARGS,oaDualIntValue_getFirst_doc},
    {"getSecond",(PyCFunction)oaDualIntValue_getSecond,METH_VARARGS,oaDualIntValue_getSecond_doc},
    {"setFirst",(PyCFunction)oaDualIntValue_setFirst,METH_VARARGS,oaDualIntValue_setFirst_doc},
    {"setSecond",(PyCFunction)oaDualIntValue_setSecond,METH_VARARGS,oaDualIntValue_setSecond_doc},
    {"isNull",(PyCFunction)oaDualIntValue_tp_isNull,METH_VARARGS,oaDualIntValue_isNull_doc},
    {"assign",(PyCFunction)oaDualIntValue_tp_assign,METH_VARARGS,oaDualIntValue_assign_doc},
   {NULL,NULL,0,NULL}
};


// ------------------------------------------------------------------
//  Type Object:
// ------------------------------------------------------------------

// ------------------------------------------------------------------
static char oaDualIntValue_doc[] = 
"Class: oaDualIntValue\n"
"  The oaDualInValue class represents two integer values.\n"
"  See oaValue for a discussion of the usage of all of the oaValue subclasses.\n"
"Constructors:\n"
"  Paramegers: (oaDualIntValue)\n"
"    Calls: (const oaDualIntValue&)\n"
"    Signature: oaDualIntValue||cref-oaDualIntValue,\n"
;

// ------------------------------------------------------------------
PyTypeObject PyoaDualIntValue_Type = {
    PyObject_HEAD_INIT(&PyType_Type)
    0,
    "oaDualIntValue",
    sizeof(PyoaDualIntValueObject),
    0,
    (destructor)oaDualIntValue_tp_dealloc,	/* tp_dealloc */
    0,	/* tp_print */
    0,					/* tp_getattr */
    0,					/* tp_setattr */
    (cmpfunc)oaDualIntValue_tp_compare,	/* tp_compare */
    (reprfunc)oaDualIntValue_tp_repr,	/* tp_repr */
    0,					/* tp_as_number */
    0,					/* tp_as_sequence */
    0,					/* tp_as_mapping */
    0,					/* tp_as_hash */
    0,					/* tp_as_call */
    0,					/* tp_str */
    0,					/* tp_getattro */
    0,					/* tp_setattro */
    0,					/* tp_as_buffer */
    Py_TPFLAGS_DEFAULT|Py_TPFLAGS_BASETYPE, /* tp_flags */
    oaDualIntValue_doc,	/* tp_doc */
    0,					/* tp_traverse */
    0,					/* tp_clear */
    0,					/* tp_richcompre */
    0,					/* tp_weaklistoffset */
    0,					/* tp_iter */
    0,					/* tp_iternext */
    oaDualIntValue_methodlist,	/* tp_methods */
    0,					/* tp_members */
    0,					/* tp_getset */
    &PyoaValue_Type,	/* tp_base */
    0,					/* tp_dict */
    0,					/* tp_descr_get */
    0,					/* tp_descr_set */
    0,					/* tp_dictoffset */
    0,					/* tp_init */
    PyType_GenericAlloc,	/* tp_alloc */
    oaDualIntValue_new,	/* tp_new */
    _PyObject_Del,	/* tp_free */
};


// ------------------------------------------------------------------
// Static FunctionMethods:
// ------------------------------------------------------------------

// ------------------------------------------------------------------
static char oaDualIntValue_static_create_doc[] = 
"Class: oaDualIntValue, Function: create\n"
"  Paramegers: (oaObject,oaInt4,oaInt4)\n"
"    Calls: oaDualIntValue* create(oaObject* database,oaInt4 first,oaInt4 second)\n"
"    Signature: create|ptr-oaDualIntValue|ptr-oaObject,simple-oaInt4,simple-oaInt4,\n"
"    This function creates a dualInt value in the database specified.\n"
"    database\n"
"    The database in which the value is created\n"
"    first\n"
"    The first integer value\n"
"    second\n"
"    The second integer value\n"
"    oacInvalidDatabase\n"
"  Paramegers: (oaObject,oaDualInt)\n"
"    Calls: oaDualIntValue* create(oaObject* database,const oaDualInt& value)\n"
"    Signature: create|ptr-oaDualIntValue|ptr-oaObject,cref-oaDualInt,\n"
"    This function creates a two-integer value in the specified database.\n"
"    database\n"
"    The database in which to create this dualIntValue.\n"
"    value\n"
"    The oaDualInt value to set on this oaDualIntValue object.\n"
"    Todo\n"
"    Check description of member functionand parameters. Specify how this create function differs from other create overloads. Move this annotation up to main oaDualIntValue docs.\n"
;

static PyObject*
oaDualIntValue_static_create(PyObject* ob, PyObject *args)
{
  try {
    // Case: (oaObject,oaInt4,oaInt4)
    {
        PyParamoaObject p1;
        PyParamoaInt4 p2;
        PyParamoaInt4 p3;
        if (PyArg_ParseTuple(args,"O&O&O&",
              &PyoaObject_Convert,&p1,
              &PyoaInt4_Convert,&p2,
              &PyoaInt4_Convert,&p3)) {
            if (!PyValidateDbObject(p1.Data(),1)) return NULL;
            oaDualIntValuep result= (oaDualIntValue::create(p1.Data(),p2.Data(),p3.Data()));
            return PyoaDualIntValue_FromoaDualIntValue(result);
        }
    }
    PyErr_Clear();
    // Case: (oaObject,oaDualInt)
    {
        PyParamoaObject p1;
        PyParamoaDualInt p2;
        if (PyArg_ParseTuple(args,"O&O&",
              &PyoaObject_Convert,&p1,
              &PyoaDualInt_Convert,&p2)) {
            if (!PyValidateDbObject(p1.Data(),1)) return NULL;
            oaDualIntValuep result= (oaDualIntValue::create(p1.Data(),p2.Data()));
            return PyoaDualIntValue_FromoaDualIntValue(result);
        }
    }
    PyErr_Clear();
    PyErr_SetString(PyExc_TypeError,
        "No Arg-Matching Function found for class: oaDualIntValue, function: create, Choices are:\n"
        "    (oaObject,oaInt4,oaInt4)\n"
        "    (oaObject,oaDualInt)\n"
    );
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static PyMethodDef oaDualIntValue_staticmethodlist[] = {
    {"static_create",(PyCFunction)oaDualIntValue_static_create,METH_VARARGS,oaDualIntValue_static_create_doc},
   {NULL,NULL,0,NULL}
};


// ------------------------------------------------------------------
//  Type Init:
// ------------------------------------------------------------------

int
PyoaDualIntValue_TypeInit(PyObject* mod_dict)
{
    if (PyType_Ready(&PyoaDualIntValue_Type)<0) {
      printf("** PyType_Ready failed for: oaDualIntValue\n");
      return -1;
    }

    if (PyDict_SetItemString(mod_dict,"oaDualIntValue",
           (PyObject*)(&PyoaDualIntValue_Type))<0) {
       printf("** Failed to add type name to module dictionary for: oaDualIntValue\n");
       return -1;
    }

    PyObject *dict, *value;
    PyMethodDef *method;
    dict=PyoaDualIntValue_Type.tp_dict;
    for(method=oaDualIntValue_staticmethodlist;method->ml_name!=NULL;method++) {
        value=PyCFunction_New(method,NULL);
    if (value==NULL) return -1;
        if (PyDict_SetItemString(dict,method->ml_name,value)!=0) {
        Py_DECREF(value);
            printf("** Failed to add static function to module dictionary for: %s\n",
                method->ml_name);
            return -1;
        }
        Py_DECREF(value);
    }
    return 0;
}


/********************************************************************
 *   Copyright 2002-2008  LSI Corporation
 *
 *   Licensed under the Apache License, Version 2.0 (the "License");
 *   you may not use this file except in compliance with the License.
 *   You may obtain a copy of the License at
 *
 *       http://www.apache.org/licenses/LICENSE-2.0
 *
 *   Unless required by applicable law or agreed to in writing, software
 *   distributed under the License is distributed on an "AS IS" BASIS,
 *   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *   See the License for the specific language governing permissions and
 *   limitations under the License.
 *
 *******************************************************************/

#include "pyoa_header.h"


// ==================================================================
// Wrapper Implementation for Class: oaEllipse
// ==================================================================


// ==================================================================
// Alloc/Dealloc Routines
// ==================================================================

// ------------------------------------------------------------------
static PyObject*
oaEllipse_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
  try {
    int is_raw=(type==&PyoaEllipse_Type);
    PyObject* bself = type->tp_alloc(type,0);
    if (bself == NULL) return bself;
    PyoaEllipseObject* self = (PyoaEllipseObject*)bself;
    self->locks = NULL;
    self->borrow = 0;
    static char *kwlist [] = { NULL } ;
    // Case: (oaEllipse)
    {
        PyParamoaEllipse p1;
        if (PyArg_ParseTuple(args,(char*)"O&",
              &PyoaEllipse_Convert,&p1)) {
            self->data=p1.Data();
            self->value=&(self->data);
            return bself;
        }
    }
    PyErr_Clear();
    // Case: ()
    {
        if (PyArg_ParseTuple(args,(char*)"")) {
          self->data=NULL;
          self->value=&(self->data);
          return bself;
        }
    }
    PyErr_Clear();
    PyErr_SetString(PyExc_TypeError,
        "No Arg-Matching Constructor found for class: oaEllipse, Choices are:\n"
        "    (oaEllipse)\n"
    );
    Py_DECREF(self);
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static void
oaEllipse_tp_dealloc(PyoaEllipseObject* self)
{
    self->ob_type->tp_free((PyObject*)self);
}

// ------------------------------------------------------------------
static PyObject*
oaEllipse_tp_repr(PyObject *ob)
{
    PyParamoaEllipse value;
    int convert_status=PyoaEllipse_Convert(ob,&value);
    assert(convert_status!=0);
    PyObject* result;

    char buffer[31];
    sprintf(buffer,"<oaEllipse::" DISPLAY_FORMAT ">",POINTER_AS_DISPLAY(value.DataCall()));
    result=PyString_FromString(buffer);
    return result;
}
        
// ------------------------------------------------------------------
static int
oaEllipse_tp_compare(PyObject *ob1,PyObject* ob2)
{
    PyParamoaEllipse v1;
    PyParamoaEllipse v2;
    int convert_status1=PyoaEllipse_Convert(ob1,&v1);
    int convert_status2=PyoaEllipse_Convert(ob2,&v2);
    assert(convert_status1!=0);
    assert(convert_status2!=0);
    if (v1.DataCall()==v2.DataCall()) return 0;
    return 1;
}
        
// ------------------------------------------------------------------
int
PyoaEllipse_Convert(PyObject* ob,PyParamoaEllipse* result)
{
    if (ob == NULL) return 1;
    if (PyoaEllipse_Check(ob)) {
        result->SetData( (oaEllipse**) ((PyoaEllipseObject*)ob)->value);
        return 1;
    }
    PyErr_SetString(PyExc_TypeError,
        "Convertion of parameter to class: oaEllipse Failed");
    return 0;
}
// ------------------------------------------------------------------
PyObject* PyoaEllipse_FromoaEllipse(oaEllipse** value,int borrow,PyObject* lock)
{
    if (value && *value) {
        oaEllipse* data=*value;
        PyObject* bself = PyoaEllipse_Type.tp_alloc(&PyoaEllipse_Type,0);
        if (bself == NULL) return bself;
        PyoaEllipseObject* self = (PyoaEllipseObject*)bself;
        self->value = (oaObject**) value;
        self->data = NULL;
        self->locks = NULL;
        self->borrow = 0; // Ignore borrow flag, since we copied
       if (lock) PyoaLockObject(self->locks,lock);
        return bself;
    }
    Py_INCREF(Py_None);
    return Py_None;
}
// ------------------------------------------------------------------
PyObject* PyoaEllipse_FromoaEllipse(oaEllipse* data)
{
    if (data) {
       PyObject* bself = PyoaEllipse_Type.tp_alloc(&PyoaEllipse_Type,0);
       if (bself == NULL) return bself;
       PyoaEllipseObject* self = (PyoaEllipseObject*)bself;
       self->data = (oaObject*) data;
       self->value = &(self->data);
       self->borrow = 0; 
       self->locks = NULL;
       return bself;
    }
    Py_INCREF(Py_None);
    return Py_None;
}

// ------------------------------------------------------------------
// FunctionMethods:
// ------------------------------------------------------------------

// ------------------------------------------------------------------
static char oaEllipse_convertToPolygon_doc[] = 
"Class: oaEllipse, Function: convertToPolygon\n"
"  Paramegers: ()\n"
"    Calls: oaPolygon* convertToPolygon()\n"
"    Signature: convertToPolygon|ptr-oaPolygon|simple-oaUInt4,\n"
"    BrowseData: 1\n"
"    This function converts this ellipse to a polygon using the specified number of sides. The polygon is returned, although it is the same pointer as the ellipse.\n"
"    numSides\n"
"    The number of segments to represent the ellipse as a polygon\n"
"    oacEllipseNumSidesInvalid\n"
"  Paramegers: (oaUInt4)\n"
"    Calls: oaPolygon* convertToPolygon(oaUInt4 numSides)\n"
"    Signature: convertToPolygon|ptr-oaPolygon|simple-oaUInt4,\n"
"    This function converts this ellipse to a polygon using the specified number of sides. The polygon is returned, although it is the same pointer as the ellipse.\n"
"    numSides\n"
"    The number of segments to represent the ellipse as a polygon\n"
"    oacEllipseNumSidesInvalid\n"
;

static PyObject*
oaEllipse_convertToPolygon(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaEllipse data;
    int convert_status=PyoaEllipse_Convert(ob,&data);
    assert(convert_status!=0);
    PyoaEllipseObject* self=(PyoaEllipseObject*)ob;
    if (!PyValidateDbObject(data.Data(),0)) return NULL;

    // Case: ()
    {
        if (PyArg_ParseTuple(args,"")) {
            oaPolygonp result= (data.DataCall()->convertToPolygon());
            return PyoaPolygon_FromoaPolygon(result);
        }
    }
    PyErr_Clear();
    // Case: (oaUInt4)
    {
        PyParamoaUInt4 p1;
        if (PyArg_ParseTuple(args,"O&",
              &PyoaUInt4_Convert,&p1)) {
            oaPolygonp result= (data.DataCall()->convertToPolygon(p1.Data()));
            return PyoaPolygon_FromoaPolygon(result);
        }
    }
    PyErr_Clear();
    PyErr_SetString(PyExc_TypeError,
        "No Arg-Matching Function found for class: oaEllipse, function: convertToPolygon, Choices are:\n"
        "    ()\n"
        "    (oaUInt4)\n"
    );
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaEllipse_getBoundary_doc[] = 
"Class: oaEllipse, Function: getBoundary\n"
"  Paramegers: (oaPointArray,oaUInt4)\n"
"    Calls: void getBoundary(oaPointArray& points,oaUInt4 numSides) const\n"
"    Signature: getBoundary|void-void|ref-oaPointArray,simple-oaUInt4,\n"
"    This function fills out points with the bounding polygon of this ellipse. The polygon is generated with the number of sides specified by numSides .\n"
"    points\n"
"    The location for the returned array of points for the ellipse\n"
"    numSides\n"
"    The number of sides that define the bounding polygon\n"
"    oacEllipseNumSidesInvalid\n"
;

static PyObject*
oaEllipse_getBoundary(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaEllipse data;
    int convert_status=PyoaEllipse_Convert(ob,&data);
    assert(convert_status!=0);
    PyoaEllipseObject* self=(PyoaEllipseObject*)ob;
    if (!PyValidateDbObject(data.Data(),0)) return NULL;

    PyParamoaPointArray p1;
    PyParamoaUInt4 p2;
    if (PyArg_ParseTuple(args,"O&O&",
          &PyoaPointArray_Convert,&p1,
          &PyoaUInt4_Convert,&p2)) {
        data.DataCall()->getBoundary(p1.Data(),p2.Data());
        Py_INCREF(Py_None);
        return Py_None;
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaEllipse_setBBox_doc[] = 
"Class: oaEllipse, Function: setBBox\n"
"  Paramegers: (oaBox)\n"
"    Calls: void setBBox(const oaBox& bBoxIn)\n"
"    Signature: setBBox|void-void|cref-oaBox,\n"
"    This function sets the bBox of this ellipse to the specified value.\n"
"    bBoxIn\n"
"    The specified bounding box for the ellipse\n"
"    oacEllipseBBoxInvalid\n"
;

static PyObject*
oaEllipse_setBBox(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaEllipse data;
    int convert_status=PyoaEllipse_Convert(ob,&data);
    assert(convert_status!=0);
    PyoaEllipseObject* self=(PyoaEllipseObject*)ob;
    if (!PyValidateDbObject(data.Data(),0)) return NULL;

    PyParamoaBox p1;
    if (PyArg_ParseTuple(args,"O&",
          &PyoaBox_Convert,&p1)) {
        data.DataCall()->setBBox(p1.Data());
        Py_INCREF(Py_None);
        return Py_None;
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaEllipse_isNull_doc[] =
"Class: oaEllipse, Function: isNull\n"
"  Parameters: () \n"
"    This functions returns 1 if the DbPointer is NULL, and 0 otherwise.\n"
;

static PyObject*
oaEllipse_tp_isNull(PyObject* ob, PyObject *args)
{
    PyParamoaEllipse data;
    int convert_status=PyoaEllipse_Convert(ob,&data);
    assert(convert_status!=0);
    if (data.DataCall()==NULL)
        return PyInt_FromLong(1);
    else
        return PyInt_FromLong(0);
}
static char oaEllipse_assign_doc[] = 
"Class: oaEllipse, Function: set\n"
"  Paramegers: (oaDouble)\n"
"    This function sets the current value.\n"
;

static PyObject*
oaEllipse_tp_assign(PyObject* ob, PyObject *args)
{
  PyParamoaEllipse data;
  int convert_status=PyoaEllipse_Convert(ob,&data);
  assert(convert_status!=0);
  try {
    PyParamoaEllipse p1;
    if (PyArg_ParseTuple(args,(char*)"O&",
          &PyoaEllipse_Convert,&p1)) {
        data.Data()=p1.Data();
        Py_INCREF(ob);
        return ob;
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}


// ------------------------------------------------------------------
//  Function Methods Table:
// ------------------------------------------------------------------

static PyMethodDef oaEllipse_methodlist[] = {
    {"convertToPolygon",(PyCFunction)oaEllipse_convertToPolygon,METH_VARARGS,oaEllipse_convertToPolygon_doc},
    {"getBoundary",(PyCFunction)oaEllipse_getBoundary,METH_VARARGS,oaEllipse_getBoundary_doc},
    {"setBBox",(PyCFunction)oaEllipse_setBBox,METH_VARARGS,oaEllipse_setBBox_doc},
    {"isNull",(PyCFunction)oaEllipse_tp_isNull,METH_VARARGS,oaEllipse_isNull_doc},
    {"assign",(PyCFunction)oaEllipse_tp_assign,METH_VARARGS,oaEllipse_assign_doc},
   {NULL,NULL,0,NULL}
};


// ------------------------------------------------------------------
//  Type Object:
// ------------------------------------------------------------------

// ------------------------------------------------------------------
static char oaEllipse_doc[] = 
"Class: oaEllipse\n"
"  The oaEllipse class implements an ellipse shape. Ellipses are defined by their bounding boxes. A circle is a special case of an ellipse where the bounding box is square.\n"
"Constructors:\n"
"  Paramegers: (oaEllipse)\n"
"    Calls: (const oaEllipse&)\n"
"    Signature: oaEllipse||cref-oaEllipse,\n"
;

// ------------------------------------------------------------------
PyTypeObject PyoaEllipse_Type = {
    PyObject_HEAD_INIT(&PyType_Type)
    0,
    "oaEllipse",
    sizeof(PyoaEllipseObject),
    0,
    (destructor)oaEllipse_tp_dealloc,	/* tp_dealloc */
    0,	/* tp_print */
    0,					/* tp_getattr */
    0,					/* tp_setattr */
    (cmpfunc)oaEllipse_tp_compare,	/* tp_compare */
    (reprfunc)oaEllipse_tp_repr,	/* tp_repr */
    0,					/* tp_as_number */
    0,					/* tp_as_sequence */
    0,					/* tp_as_mapping */
    0,					/* tp_as_hash */
    0,					/* tp_as_call */
    0,					/* tp_str */
    0,					/* tp_getattro */
    0,					/* tp_setattro */
    0,					/* tp_as_buffer */
    Py_TPFLAGS_DEFAULT|Py_TPFLAGS_BASETYPE, /* tp_flags */
    oaEllipse_doc,	/* tp_doc */
    0,					/* tp_traverse */
    0,					/* tp_clear */
    0,					/* tp_richcompre */
    0,					/* tp_weaklistoffset */
    0,					/* tp_iter */
    0,					/* tp_iternext */
    oaEllipse_methodlist,	/* tp_methods */
    0,					/* tp_members */
    0,					/* tp_getset */
    &PyoaShape_Type,	/* tp_base */
    0,					/* tp_dict */
    0,					/* tp_descr_get */
    0,					/* tp_descr_set */
    0,					/* tp_dictoffset */
    0,					/* tp_init */
    PyType_GenericAlloc,	/* tp_alloc */
    oaEllipse_new,	/* tp_new */
    _PyObject_Del,	/* tp_free */
};


// ------------------------------------------------------------------
// Static FunctionMethods:
// ------------------------------------------------------------------

// ------------------------------------------------------------------
static char oaEllipse_static_create_doc[] = 
"Class: oaEllipse, Function: create\n"
"  Paramegers: (oaBlock,oaLayerNum,oaPurposeNum,oaBox)\n"
"    Calls: oaEllipse* create(oaBlock* block,oaLayerNum layerNum,oaPurposeNum purposeNum,const oaBox& bBox)\n"
"    Signature: create|ptr-oaEllipse|ptr-oaBlock,simple-oaLayerNum,simple-oaPurposeNum,cref-oaBox,\n"
"    This function creates an ellipse with the specified attributes. The specified bBox is checked to verify it does not have a zero area and it is not inverted.\n"
"    block\n"
"    The block in which the ellipse is created\n"
"    layerNum\n"
"    The number of the layer on which the ellipse is created\n"
"    purposeNum\n"
"    The number of the purpose on which the ellipse is created\n"
"    bBox\n"
"    The bounding box for the ellipse\n"
"    oacEllipseBBoxInvalid\n"
;

static PyObject*
oaEllipse_static_create(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaBlock p1;
    PyParamoaLayerNum p2;
    PyParamoaPurposeNum p3;
    PyParamoaBox p4;
    if (PyArg_ParseTuple(args,"O&O&O&O&",
          &PyoaBlock_Convert,&p1,
          &PyoaLayerNum_Convert,&p2,
          &PyoaPurposeNum_Convert,&p3,
          &PyoaBox_Convert,&p4)) {
        if (!PyValidateDbObject(p1.Data(),1)) return NULL;
        oaEllipsep result= (oaEllipse::create(p1.Data(),p2.Data(),p3.Data(),p4.Data()));
        return PyoaEllipse_FromoaEllipse(result);
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaEllipse_static_genBoundary_doc[] = 
"Class: oaEllipse, Function: genBoundary\n"
"  Paramegers: (oaBox,oaUInt4,oaPointArray)\n"
"    Calls: void genBoundary(const oaBox& ellipseBBox,oaUInt4 numSides,oaPointArray& boundary)\n"
"    Signature: genBoundary|void-void|cref-oaBox,simple-oaUInt4,ref-oaPointArray,\n"
"    This function fills out boundary with the boundary polygon of the ellipse specified by ellipseBBoxIn . The polygon is generated with the number of sides specified by numSidesIn .\n"
"    ellipseBBox\n"
"    The bounding box for the ellipse\n"
"    numSides\n"
"    The number of sides returned\n"
"    boundary\n"
"    The location of the returned point array\n"
"    oacEllipseNumSidesInvalid\n"
;

static PyObject*
oaEllipse_static_genBoundary(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaBox p1;
    PyParamoaUInt4 p2;
    PyParamoaPointArray p3;
    if (PyArg_ParseTuple(args,"O&O&O&",
          &PyoaBox_Convert,&p1,
          &PyoaUInt4_Convert,&p2,
          &PyoaPointArray_Convert,&p3)) {
        oaEllipse::genBoundary(p1.Data(),p2.Data(),p3.Data());
        Py_INCREF(Py_None);
        return Py_None;
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static PyMethodDef oaEllipse_staticmethodlist[] = {
    {"static_create",(PyCFunction)oaEllipse_static_create,METH_VARARGS,oaEllipse_static_create_doc},
    {"static_genBoundary",(PyCFunction)oaEllipse_static_genBoundary,METH_VARARGS,oaEllipse_static_genBoundary_doc},
   {NULL,NULL,0,NULL}
};


// ------------------------------------------------------------------
//  Type Init:
// ------------------------------------------------------------------

int
PyoaEllipse_TypeInit(PyObject* mod_dict)
{
    if (PyType_Ready(&PyoaEllipse_Type)<0) {
      printf("** PyType_Ready failed for: oaEllipse\n");
      return -1;
    }

    if (PyDict_SetItemString(mod_dict,"oaEllipse",
           (PyObject*)(&PyoaEllipse_Type))<0) {
       printf("** Failed to add type name to module dictionary for: oaEllipse\n");
       return -1;
    }

    PyObject *dict, *value;
    PyMethodDef *method;
    dict=PyoaEllipse_Type.tp_dict;
    for(method=oaEllipse_staticmethodlist;method->ml_name!=NULL;method++) {
        value=PyCFunction_New(method,NULL);
    if (value==NULL) return -1;
        if (PyDict_SetItemString(dict,method->ml_name,value)!=0) {
        Py_DECREF(value);
            printf("** Failed to add static function to module dictionary for: %s\n",
                method->ml_name);
            return -1;
        }
        Py_DECREF(value);
    }
    return 0;
}


/********************************************************************
 *   Copyright 2002-2008  LSI Corporation
 *
 *   Licensed under the Apache License, Version 2.0 (the "License");
 *   you may not use this file except in compliance with the License.
 *   You may obtain a copy of the License at
 *
 *       http://www.apache.org/licenses/LICENSE-2.0
 *
 *   Unless required by applicable law or agreed to in writing, software
 *   distributed under the License is distributed on an "AS IS" BASIS,
 *   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *   See the License for the specific language governing permissions and
 *   limitations under the License.
 *
 *******************************************************************/

#include "pyoa_header.h"


// ==================================================================
// Wrapper Implementation for Class: oaElmore
// ==================================================================


// ==================================================================
// Alloc/Dealloc Routines
// ==================================================================

// ------------------------------------------------------------------
static PyObject*
oaElmore_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
  try {
    int is_raw=(type==&PyoaElmore_Type);
    PyObject* bself = type->tp_alloc(type,0);
    if (bself == NULL) return bself;
    PyoaElmoreObject* self = (PyoaElmoreObject*)bself;
    self->locks = NULL;
    self->borrow = 0;
    static char *kwlist [] = { NULL } ;
    // Case: (oaElmore)
    {
        PyParamoaElmore p1;
        if (PyArg_ParseTuple(args,(char*)"O&",
              &PyoaElmore_Convert,&p1)) {
            self->data=p1.Data();
            self->value=&(self->data);
            return bself;
        }
    }
    PyErr_Clear();
    // Case: ()
    {
        if (PyArg_ParseTuple(args,(char*)"")) {
          self->data=NULL;
          self->value=&(self->data);
          return bself;
        }
    }
    PyErr_Clear();
    PyErr_SetString(PyExc_TypeError,
        "No Arg-Matching Constructor found for class: oaElmore, Choices are:\n"
        "    (oaElmore)\n"
    );
    Py_DECREF(self);
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static void
oaElmore_tp_dealloc(PyoaElmoreObject* self)
{
    self->ob_type->tp_free((PyObject*)self);
}

// ------------------------------------------------------------------
static PyObject*
oaElmore_tp_repr(PyObject *ob)
{
    PyParamoaElmore value;
    int convert_status=PyoaElmore_Convert(ob,&value);
    assert(convert_status!=0);
    PyObject* result;

    char buffer[30];
    sprintf(buffer,"<oaElmore::" DISPLAY_FORMAT ">",POINTER_AS_DISPLAY(value.DataCall()));
    result=PyString_FromString(buffer);
    return result;
}
        
// ------------------------------------------------------------------
static int
oaElmore_tp_compare(PyObject *ob1,PyObject* ob2)
{
    PyParamoaElmore v1;
    PyParamoaElmore v2;
    int convert_status1=PyoaElmore_Convert(ob1,&v1);
    int convert_status2=PyoaElmore_Convert(ob2,&v2);
    assert(convert_status1!=0);
    assert(convert_status2!=0);
    if (v1.DataCall()==v2.DataCall()) return 0;
    return 1;
}
        
// ------------------------------------------------------------------
int
PyoaElmore_Convert(PyObject* ob,PyParamoaElmore* result)
{
    if (ob == NULL) return 1;
    if (PyoaElmore_Check(ob)) {
        result->SetData( (oaElmore**) ((PyoaElmoreObject*)ob)->value);
        return 1;
    }
    PyErr_SetString(PyExc_TypeError,
        "Convertion of parameter to class: oaElmore Failed");
    return 0;
}
// ------------------------------------------------------------------
PyObject* PyoaElmore_FromoaElmore(oaElmore** value,int borrow,PyObject* lock)
{
    if (value && *value) {
        oaElmore* data=*value;
        PyObject* bself = PyoaElmore_Type.tp_alloc(&PyoaElmore_Type,0);
        if (bself == NULL) return bself;
        PyoaElmoreObject* self = (PyoaElmoreObject*)bself;
        self->value = (oaObject**) value;
        self->data = NULL;
        self->locks = NULL;
        self->borrow = 0; // Ignore borrow flag, since we copied
       if (lock) PyoaLockObject(self->locks,lock);
        return bself;
    }
    Py_INCREF(Py_None);
    return Py_None;
}
// ------------------------------------------------------------------
PyObject* PyoaElmore_FromoaElmore(oaElmore* data)
{
    if (data) {
       PyObject* bself = PyoaElmore_Type.tp_alloc(&PyoaElmore_Type,0);
       if (bself == NULL) return bself;
       PyoaElmoreObject* self = (PyoaElmoreObject*)bself;
       self->data = (oaObject*) data;
       self->value = &(self->data);
       self->borrow = 0; 
       self->locks = NULL;
       return bself;
    }
    Py_INCREF(Py_None);
    return Py_None;
}

// ------------------------------------------------------------------
// FunctionMethods:
// ------------------------------------------------------------------

// ------------------------------------------------------------------
static char oaElmore_destroy_doc[] = 
"Class: oaElmore, Function: destroy\n"
"  Paramegers: ()\n"
"    Calls: void destroy()\n"
"    Signature: destroy|void-void|\n"
"    BrowseData: 0\n"
"    This function destroys this oaElmore, removing it from the database.\n"
;

static PyObject*
oaElmore_destroy(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaElmore data;
    int convert_status=PyoaElmore_Convert(ob,&data);
    assert(convert_status!=0);
    PyoaElmoreObject* self=(PyoaElmoreObject*)ob;
    if (!PyValidateDbObject(data.Data(),0)) return NULL;

    if (PyArg_ParseTuple(args,"")) {
        data.DataCall()->destroy();
        Py_INCREF(Py_None);
        return Py_None;
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaElmore_getDelay_doc[] = 
"Class: oaElmore, Function: getDelay\n"
"  Paramegers: ()\n"
"    Calls: oaFloat getDelay() const\n"
"    Signature: getDelay|simple-oaFloat|\n"
"    BrowseData: 1\n"
"    This function returns the delay for this elmore.\n"
;

static PyObject*
oaElmore_getDelay(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaElmore data;
    int convert_status=PyoaElmore_Convert(ob,&data);
    assert(convert_status!=0);
    PyoaElmoreObject* self=(PyoaElmoreObject*)ob;
    if (!PyValidateDbObject(data.Data(),0)) return NULL;

    if (PyArg_ParseTuple(args,"")) {
        oaFloat result= (data.DataCall()->getDelay());
        return PyoaFloat_FromoaFloat(result);
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaElmore_getReceiver_doc[] = 
"Class: oaElmore, Function: getReceiver\n"
"  Paramegers: ()\n"
"    Calls: oaDesignObject* getReceiver() const\n"
"    Signature: getReceiver|ptr-oaDesignObject|\n"
"    BrowseData: 1\n"
"    This function returns the receiver for this elmore, which is either a terminal or an instTerm.\n"
;

static PyObject*
oaElmore_getReceiver(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaElmore data;
    int convert_status=PyoaElmore_Convert(ob,&data);
    assert(convert_status!=0);
    PyoaElmoreObject* self=(PyoaElmoreObject*)ob;
    if (!PyValidateDbObject(data.Data(),0)) return NULL;

    if (PyArg_ParseTuple(args,"")) {
        oaDesignObjectp result= (data.DataCall()->getReceiver());
        return PyoaDesignObject_FromoaDesignObject(result);
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaElmore_getReducedModel_doc[] = 
"Class: oaElmore, Function: getReducedModel\n"
"  Paramegers: ()\n"
"    Calls: oaReducedModel* getReducedModel() const\n"
"    Signature: getReducedModel|ptr-oaReducedModel|\n"
"    BrowseData: 1\n"
"    This function returns the reduced model for this elmore, which is either an oaLumpedElmore or an oaPiElmore .\n"
;

static PyObject*
oaElmore_getReducedModel(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaElmore data;
    int convert_status=PyoaElmore_Convert(ob,&data);
    assert(convert_status!=0);
    PyoaElmoreObject* self=(PyoaElmoreObject*)ob;
    if (!PyValidateDbObject(data.Data(),0)) return NULL;

    if (PyArg_ParseTuple(args,"")) {
        oaReducedModelp result= (data.DataCall()->getReducedModel());
        return PyoaReducedModel_FromoaReducedModel(result);
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaElmore_setDelay_doc[] = 
"Class: oaElmore, Function: setDelay\n"
"  Paramegers: (oaFloat)\n"
"    Calls: void setDelay(oaFloat value)\n"
"    Signature: setDelay|void-void|simple-oaFloat,\n"
"    This function sets the delay for this elmore.\n"
;

static PyObject*
oaElmore_setDelay(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaElmore data;
    int convert_status=PyoaElmore_Convert(ob,&data);
    assert(convert_status!=0);
    PyoaElmoreObject* self=(PyoaElmoreObject*)ob;
    if (!PyValidateDbObject(data.Data(),0)) return NULL;

    PyParamoaFloat p1;
    if (PyArg_ParseTuple(args,"O&",
          &PyoaFloat_Convert,&p1)) {
        data.DataCall()->setDelay(p1.Data());
        Py_INCREF(Py_None);
        return Py_None;
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaElmore_isNull_doc[] =
"Class: oaElmore, Function: isNull\n"
"  Parameters: () \n"
"    This functions returns 1 if the DbPointer is NULL, and 0 otherwise.\n"
;

static PyObject*
oaElmore_tp_isNull(PyObject* ob, PyObject *args)
{
    PyParamoaElmore data;
    int convert_status=PyoaElmore_Convert(ob,&data);
    assert(convert_status!=0);
    if (data.DataCall()==NULL)
        return PyInt_FromLong(1);
    else
        return PyInt_FromLong(0);
}
static char oaElmore_assign_doc[] = 
"Class: oaElmore, Function: set\n"
"  Paramegers: (oaDouble)\n"
"    This function sets the current value.\n"
;

static PyObject*
oaElmore_tp_assign(PyObject* ob, PyObject *args)
{
  PyParamoaElmore data;
  int convert_status=PyoaElmore_Convert(ob,&data);
  assert(convert_status!=0);
  try {
    PyParamoaElmore p1;
    if (PyArg_ParseTuple(args,(char*)"O&",
          &PyoaElmore_Convert,&p1)) {
        data.Data()=p1.Data();
        Py_INCREF(ob);
        return ob;
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}


// ------------------------------------------------------------------
//  Function Methods Table:
// ------------------------------------------------------------------

static PyMethodDef oaElmore_methodlist[] = {
    {"destroy",(PyCFunction)oaElmore_destroy,METH_VARARGS,oaElmore_destroy_doc},
    {"getDelay",(PyCFunction)oaElmore_getDelay,METH_VARARGS,oaElmore_getDelay_doc},
    {"getReceiver",(PyCFunction)oaElmore_getReceiver,METH_VARARGS,oaElmore_getReceiver_doc},
    {"getReducedModel",(PyCFunction)oaElmore_getReducedModel,METH_VARARGS,oaElmore_getReducedModel_doc},
    {"setDelay",(PyCFunction)oaElmore_setDelay,METH_VARARGS,oaElmore_setDelay_doc},
    {"isNull",(PyCFunction)oaElmore_tp_isNull,METH_VARARGS,oaElmore_isNull_doc},
    {"assign",(PyCFunction)oaElmore_tp_assign,METH_VARARGS,oaElmore_assign_doc},
   {NULL,NULL,0,NULL}
};


// ------------------------------------------------------------------
//  Type Object:
// ------------------------------------------------------------------

// ------------------------------------------------------------------
static char oaElmore_doc[] = 
"Class: oaElmore\n"
"  The oaElmore class represents the first moment (delay) of the impulse response of the interconnect parasitics from a particular driver to the receivers on the net. The oaElmore objects are part of a complete oaLumpedElmore or oaPiElmore reduced model for a driver.\n"
"  Undo is not supported for the oaElmore class.\n"
"  The oaElmore class can be observed by deriving from\n"
"Constructors:\n"
"  Paramegers: (oaElmore)\n"
"    Calls: (const oaElmore&)\n"
"    Signature: oaElmore||cref-oaElmore,\n"
;

// ------------------------------------------------------------------
PyTypeObject PyoaElmore_Type = {
    PyObject_HEAD_INIT(&PyType_Type)
    0,
    "oaElmore",
    sizeof(PyoaElmoreObject),
    0,
    (destructor)oaElmore_tp_dealloc,	/* tp_dealloc */
    0,	/* tp_print */
    0,					/* tp_getattr */
    0,					/* tp_setattr */
    (cmpfunc)oaElmore_tp_compare,	/* tp_compare */
    (reprfunc)oaElmore_tp_repr,	/* tp_repr */
    0,					/* tp_as_number */
    0,					/* tp_as_sequence */
    0,					/* tp_as_mapping */
    0,					/* tp_as_hash */
    0,					/* tp_as_call */
    0,					/* tp_str */
    0,					/* tp_getattro */
    0,					/* tp_setattro */
    0,					/* tp_as_buffer */
    Py_TPFLAGS_DEFAULT|Py_TPFLAGS_BASETYPE, /* tp_flags */
    oaElmore_doc,	/* tp_doc */
    0,					/* tp_traverse */
    0,					/* tp_clear */
    0,					/* tp_richcompre */
    0,					/* tp_weaklistoffset */
    0,					/* tp_iter */
    0,					/* tp_iternext */
    oaElmore_methodlist,	/* tp_methods */
    0,					/* tp_members */
    0,					/* tp_getset */
    &PyoaDesignObject_Type,	/* tp_base */
    0,					/* tp_dict */
    0,					/* tp_descr_get */
    0,					/* tp_descr_set */
    0,					/* tp_dictoffset */
    0,					/* tp_init */
    PyType_GenericAlloc,	/* tp_alloc */
    oaElmore_new,	/* tp_new */
    _PyObject_Del,	/* tp_free */
};


// ------------------------------------------------------------------
// Static FunctionMethods:
// ------------------------------------------------------------------

// ------------------------------------------------------------------
static char oaElmore_static_create_doc[] = 
"Class: oaElmore, Function: create\n"
"  Paramegers: (oaLumpedElmore,oaDesignObject,oaFloat)\n"
"    Calls: oaElmore* create(oaLumpedElmore* model,oaDesignObject* receiver,oaFloat delay)\n"
"    Signature: create|ptr-oaElmore|ptr-oaLumpedElmore,ptr-oaDesignObject,simple-oaFloat,\n"
"    This function creates a new elmore for the specified receiver object, which can be terminal or instTerm in block or occurrence domain, and adds the elmore to the specified oaLumpedElmore model .\n"
"    oacDriverReceiverNotInSameDomain\n"
"    oacInvalidReducedModelObjectType\n"
"    oacParasiticTermMustBeScalar\n"
"    oacInvalidReceiverTermType\n"
"    oacReceiverNetDoesNotMatchDriverNet\n"
"  Paramegers: (oaPiElmore,oaDesignObject,oaFloat)\n"
"    Calls: oaElmore* create(oaPiElmore* model,oaDesignObject* receiver,oaFloat delay)\n"
"    Signature: create|ptr-oaElmore|ptr-oaPiElmore,ptr-oaDesignObject,simple-oaFloat,\n"
"    This function creates a new elmore for the specified receiver object, which can be terminal or instTerm in block or occurrence domain, and adds the elmore to the specified oaPiElmore model .\n"
"    oacDriverReceiverNotInSameDomain\n"
"    oacInvalidReducedModelObjectType\n"
"    oacParasiticTermMustBeScalar\n"
"    oacInvalidReceiverTermType\n"
"    oacReceiverNetDoesNotMatchDriverNet\n"
;

static PyObject*
oaElmore_static_create(PyObject* ob, PyObject *args)
{
  try {
    // Case: (oaLumpedElmore,oaDesignObject,oaFloat)
    {
        PyParamoaLumpedElmore p1;
        PyParamoaDesignObject p2;
        PyParamoaFloat p3;
        if (PyArg_ParseTuple(args,"O&O&O&",
              &PyoaLumpedElmore_Convert,&p1,
              &PyoaDesignObject_Convert,&p2,
              &PyoaFloat_Convert,&p3)) {
            if (!PyValidateDbObject(p1.Data(),1)) return NULL;
            if (!PyValidateDbObject(p2.Data(),2)) return NULL;
            oaElmorep result= (oaElmore::create(p1.Data(),p2.Data(),p3.Data()));
            return PyoaElmore_FromoaElmore(result);
        }
    }
    PyErr_Clear();
    // Case: (oaPiElmore,oaDesignObject,oaFloat)
    {
        PyParamoaPiElmore p1;
        PyParamoaDesignObject p2;
        PyParamoaFloat p3;
        if (PyArg_ParseTuple(args,"O&O&O&",
              &PyoaPiElmore_Convert,&p1,
              &PyoaDesignObject_Convert,&p2,
              &PyoaFloat_Convert,&p3)) {
            if (!PyValidateDbObject(p1.Data(),1)) return NULL;
            if (!PyValidateDbObject(p2.Data(),2)) return NULL;
            oaElmorep result= (oaElmore::create(p1.Data(),p2.Data(),p3.Data()));
            return PyoaElmore_FromoaElmore(result);
        }
    }
    PyErr_Clear();
    PyErr_SetString(PyExc_TypeError,
        "No Arg-Matching Function found for class: oaElmore, function: create, Choices are:\n"
        "    (oaLumpedElmore,oaDesignObject,oaFloat)\n"
        "    (oaPiElmore,oaDesignObject,oaFloat)\n"
    );
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaElmore_static_find_doc[] = 
"Class: oaElmore, Function: find\n"
"  Paramegers: (oaLumpedElmore,oaDesignObject)\n"
"    Calls: oaElmore* find(const oaLumpedElmore* model,const oaDesignObject* receiver)\n"
"    Signature: find|ptr-oaElmore|cptr-oaLumpedElmore,cptr-oaDesignObject,\n"
"    This function finds and returns the elmore for the specified receiver object in the oaLumpedElmore reduced model . If no elmore exists for the receiver, NULL is returned.\n"
"  Paramegers: (oaPiElmore,oaDesignObject)\n"
"    Calls: oaElmore* find(const oaPiElmore* model,const oaDesignObject* receiver)\n"
"    Signature: find|ptr-oaElmore|cptr-oaPiElmore,cptr-oaDesignObject,\n"
"    This function finds and returns the elmore for the specified receiver object in the oaPiElmore reduced model . If no elmore exists for the receiver, NULL is returned.\n"
;

static PyObject*
oaElmore_static_find(PyObject* ob, PyObject *args)
{
  try {
    // Case: (oaLumpedElmore,oaDesignObject)
    {
        PyParamoaLumpedElmore p1;
        PyParamoaDesignObject p2;
        if (PyArg_ParseTuple(args,"O&O&",
              &PyoaLumpedElmore_Convert,&p1,
              &PyoaDesignObject_Convert,&p2)) {
            if (!PyValidateDbObject(p1.Data(),1)) return NULL;
            if (!PyValidateDbObject(p2.Data(),2)) return NULL;
            oaElmorep result= (oaElmore::find(p1.Data(),p2.Data()));
            return PyoaElmore_FromoaElmore(result);
        }
    }
    PyErr_Clear();
    // Case: (oaPiElmore,oaDesignObject)
    {
        PyParamoaPiElmore p1;
        PyParamoaDesignObject p2;
        if (PyArg_ParseTuple(args,"O&O&",
              &PyoaPiElmore_Convert,&p1,
              &PyoaDesignObject_Convert,&p2)) {
            if (!PyValidateDbObject(p1.Data(),1)) return NULL;
            if (!PyValidateDbObject(p2.Data(),2)) return NULL;
            oaElmorep result= (oaElmore::find(p1.Data(),p2.Data()));
            return PyoaElmore_FromoaElmore(result);
        }
    }
    PyErr_Clear();
    PyErr_SetString(PyExc_TypeError,
        "No Arg-Matching Function found for class: oaElmore, function: find, Choices are:\n"
        "    (oaLumpedElmore,oaDesignObject)\n"
        "    (oaPiElmore,oaDesignObject)\n"
    );
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static PyMethodDef oaElmore_staticmethodlist[] = {
    {"static_create",(PyCFunction)oaElmore_static_create,METH_VARARGS,oaElmore_static_create_doc},
    {"static_find",(PyCFunction)oaElmore_static_find,METH_VARARGS,oaElmore_static_find_doc},
   {NULL,NULL,0,NULL}
};


// ------------------------------------------------------------------
//  Type Init:
// ------------------------------------------------------------------

int
PyoaElmore_TypeInit(PyObject* mod_dict)
{
    if (PyType_Ready(&PyoaElmore_Type)<0) {
      printf("** PyType_Ready failed for: oaElmore\n");
      return -1;
    }

    if (PyDict_SetItemString(mod_dict,"oaElmore",
           (PyObject*)(&PyoaElmore_Type))<0) {
       printf("** Failed to add type name to module dictionary for: oaElmore\n");
       return -1;
    }

    PyObject *dict, *value;
    PyMethodDef *method;
    dict=PyoaElmore_Type.tp_dict;
    for(method=oaElmore_staticmethodlist;method->ml_name!=NULL;method++) {
        value=PyCFunction_New(method,NULL);
    if (value==NULL) return -1;
        if (PyDict_SetItemString(dict,method->ml_name,value)!=0) {
        Py_DECREF(value);
            printf("** Failed to add static function to module dictionary for: %s\n",
                method->ml_name);
            return -1;
        }
        Py_DECREF(value);
    }
    return 0;
}


/********************************************************************
 *   Copyright 2002-2008  LSI Corporation
 *
 *   Licensed under the Apache License, Version 2.0 (the "License");
 *   you may not use this file except in compliance with the License.
 *   You may obtain a copy of the License at
 *
 *       http://www.apache.org/licenses/LICENSE-2.0
 *
 *   Unless required by applicable law or agreed to in writing, software
 *   distributed under the License is distributed on an "AS IS" BASIS,
 *   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *   See the License for the specific language governing permissions and
 *   limitations under the License.
 *
 *******************************************************************/

#include "pyoa_header.h"


// ==================================================================
// Wrapper Implementation for Class: oaElmoreModTypeEnum
// ==================================================================

// ------------------------------------------------------------------

int
PyoaElmoreModTypeEnum_Convert(PyObject* ob,PyParamoaElmoreModTypeEnum* result)
{
    if (ob == NULL) return 1;
    if (PyString_Check(ob)) {
        char* str=PyString_AsString(ob);
        if (strcasecmp(str,"oacSetValueElmoreModType")==0) { result->SetData(oacSetValueElmoreModType); return 1;}
    }            
    if (PyInt_Check(ob)) {
        long val=PyInt_AsLong(ob);
        result->SetData((oaElmoreModTypeEnum)val);
        return 1;
    }
    PyErr_SetString(PyExc_TypeError,
        "Convertion of parameter to class: oaElmoreModTypeEnum Failed");
    return 0;
}
// ------------------------------------------------------------------

PyObject* PyoaElmoreModTypeEnum_FromoaElmoreModTypeEnum(oaElmoreModTypeEnum ob)
{
    if (ob==oacSetValueElmoreModType) return PyString_FromString("oacSetValueElmoreModType");

    Py_INCREF(Py_None);
    return Py_None;
}

// ------------------------------------------------------------------
//  Enum Typecast function:
// ------------------------------------------------------------------

static PyObject*
PyoaElmoreModTypeEnum_TypeFunction(PyObject* mod,PyObject* args)
{
    int v;
    oaElmoreModTypeEnum e;
    if (PyArg_ParseTuple(args,(char*)"i",&v)) {
       return PyoaElmoreModTypeEnum_FromoaElmoreModTypeEnum(oaElmoreModTypeEnum(v));
    }
    PyErr_Clear();
    if (PyArg_ParseTuple(args,(char*)"O&",&PyoaElmoreModTypeEnum_Convert,&e)) {
       return PyInt_FromLong(long(e));
    }
    return NULL;
}
static char oaElmoreModTypeEnum_doc[] =
"Type convert function for enum: oaElmoreModTypeEnum";
                               
static PyMethodDef PyoaElmoreModTypeEnum_method =
  {"oaElmoreModTypeEnum",(PyCFunction)PyoaElmoreModTypeEnum_TypeFunction,METH_VARARGS,oaElmoreModTypeEnum_doc};
  

// ------------------------------------------------------------------
//  Enum Init:
// ------------------------------------------------------------------

int
PyoaElmoreModTypeEnum_TypeInit(PyObject* mod_dict)
{
    // Put Enum values in Dictionary
    PyObject* value;
    value=PyString_FromString("oacSetValueElmoreModType");
    PyDict_SetItemString(mod_dict,"oacSetValueElmoreModType",value);
    Py_DECREF(value);

    // Put Enum name function in Dictionary
    value=PyCFunction_New(&PyoaElmoreModTypeEnum_method,NULL);
    if (PyDict_SetItemString(mod_dict,"oaElmoreModTypeEnum",value)!=0) {
    Py_DECREF(value);
        printf("** Failed to add enum function to module dictionary for: oaElmoreModTypeEnum\n");
        return -1;
    }
    Py_DECREF(value);
    return 0;
}

/********************************************************************
 *   Copyright 2002-2008  LSI Corporation
 *
 *   Licensed under the Apache License, Version 2.0 (the "License");
 *   you may not use this file except in compliance with the License.
 *   You may obtain a copy of the License at
 *
 *       http://www.apache.org/licenses/LICENSE-2.0
 *
 *   Unless required by applicable law or agreed to in writing, software
 *   distributed under the License is distributed on an "AS IS" BASIS,
 *   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *   See the License for the specific language governing permissions and
 *   limitations under the License.
 *
 *******************************************************************/

#include "pyoa_header.h"


// ==================================================================
// Wrapper Implementation for Class: oaEndStyle
// ==================================================================


// ==================================================================
// Alloc/Dealloc Routines
// ==================================================================

// ------------------------------------------------------------------
static PyObject*
oaEndStyle_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
  try {
    int is_raw=(type==&PyoaEndStyle_Type);
    PyObject* bself = type->tp_alloc(type,0);
    if (bself == NULL) return bself;
    PyoaEndStyleObject* self = (PyoaEndStyleObject*)bself;
    self->locks = NULL;
    self->borrow = 0;
    static char *kwlist [] = { NULL } ;
    // Case: (oaEndStyleEnum)
    {
        PyParamoaEndStyleEnum p1;
        if (PyArg_ParseTuple(args,"O&",
              &PyoaEndStyleEnum_Convert,&p1)) {
            self->value =  new oaEndStyle(p1.Data());
            return bself;
        }
    }
    PyErr_Clear();
    // Case: (oaString)
    {
        PyParamoaString p1;
        if (PyArg_ParseTuple(args,"O&",
              &PyoaString_Convert,&p1)) {
            self->value =  new oaEndStyle(p1.Data());
            return bself;
        }
    }
    PyErr_Clear();
    // Case: (oaEndStyle)
    {
        PyParamoaEndStyle p1;
        if (PyArg_ParseTuple(args,(char*)"O&",
              &PyoaEndStyle_Convert,&p1)) {
            self->value= new oaEndStyle(p1.Data());
            return bself;
        }
    }
    PyErr_Clear();
    PyErr_SetString(PyExc_TypeError,
        "No Arg-Matching Constructor found for class: oaEndStyle, Choices are:\n"
        "    (oaEndStyleEnum)\n"
        "    (oaString)\n"
        "    (oaEndStyle)\n"
    );
    Py_DECREF(self);
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static void
oaEndStyle_tp_dealloc(PyoaEndStyleObject* self)
{
    if (!self->borrow) {
        delete (self->value);
    }
    Py_XDECREF(self->locks);
    self->ob_type->tp_free((PyObject*)self);
}

// ------------------------------------------------------------------
static PyObject*
oaEndStyle_tp_repr(PyObject *ob)
{
    PyParamoaEndStyle value;
    int convert_status=PyoaEndStyle_Convert(ob,&value);
    assert(convert_status!=0);
    PyObject* result;
    oaString sresult(value.DataCall()->getName());

    char addr[32];
    sprintf(addr,DISPLAY_FORMAT,POINTER_AS_DISPLAY(value.DataCall()));
    oaString buffer;
    buffer+=oaString("<oaEndStyle::");
    buffer+=oaString(addr);
    buffer+=oaString("::");
    buffer+=oaString(sresult);
    buffer+=oaString(">");
    result=PyString_FromString((char*)(const char*)buffer);
    return result;
}
        
// ------------------------------------------------------------------
static int
oaEndStyle_tp_compare(PyObject *ob1,PyObject* ob2)
{
    PyParamoaEndStyle v1;
    PyParamoaEndStyle v2;
    int convert_status1=PyoaEndStyle_Convert(ob1,&v1);
    int convert_status2=PyoaEndStyle_Convert(ob2,&v2);
    assert(convert_status1!=0);
    assert(convert_status2!=0);
    if (v1.DataCall()==v2.DataCall()) return 0;
    return 1;
}
        
// ------------------------------------------------------------------
int
PyoaEndStyle_Convert(PyObject* ob,PyParamoaEndStyle* result)
{
    if (ob == NULL) return 1;
    if (PyoaEndStyle_Check(ob)) {
        result->SetData(  ((PyoaEndStyleObject*)ob)->value);
        return 1;
    }
    PyErr_SetString(PyExc_TypeError,
        "Convertion of parameter to class: oaEndStyle Failed");
    return 0;
}
// ------------------------------------------------------------------
PyObject* PyoaEndStyle_FromoaEndStyle(oaEndStyle* data,int borrow,PyObject* lock)
{
    if (data) {
        PyObject* bself = PyoaEndStyle_Type.tp_alloc(&PyoaEndStyle_Type,0);
        if (bself == NULL) return bself;
        PyoaEndStyleObject* self = (PyoaEndStyleObject*)bself;
        self->value =  data;
        self->locks = NULL;
        self->borrow = borrow;
        if (lock) PyoaLockObject(self->locks,lock);
        return bself;
    }
    Py_INCREF(Py_None);
    return Py_None;
}

// ------------------------------------------------------------------
// FunctionMethods:
// ------------------------------------------------------------------

// ------------------------------------------------------------------
static char oaEndStyle_getName_doc[] = 
"Class: oaEndStyle, Function: getName\n"
"  Paramegers: ()\n"
"    Calls: const oaString& getName() const\n"
"    Signature: getName|cref-oaString|\n"
"    BrowseData: 1\n"
"    This function returns a string that represents the name for the enumerated value that this end style represents.\n"
;

static PyObject*
oaEndStyle_getName(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaEndStyle data;
    int convert_status=PyoaEndStyle_Convert(ob,&data);
    assert(convert_status!=0);
    PyoaEndStyleObject* self=(PyoaEndStyleObject*)ob;

    if (PyArg_ParseTuple(args,"")) {
        oaString result= (data.DataCall()->getName());
        return PyoaString_FromoaString(result);
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaEndStyle_oaEndStyleEnum_doc[] = 
"Class: oaEndStyle, Function: oaEndStyleEnum\n"
"  Paramegers: ()\n"
"    Calls: oaEndStyleEnum oaEndStyleEnum() const\n"
"    Signature: operator oaEndStyleEnum|simple-oaEndStyleEnum|\n"
"    BrowseData: 1\n"
"    This operator converts this oaEndStyle object into the corresponding enumerated oaEndStyleEnum value that it represents.\n"
;

static PyObject*
oaEndStyle_oaEndStyleEnum(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaEndStyle data;
    int convert_status=PyoaEndStyle_Convert(ob,&data);
    assert(convert_status!=0);
    PyoaEndStyleObject* self=(PyoaEndStyleObject*)ob;

    if (PyArg_ParseTuple(args,"")) {
        oaEndStyleEnum result= (data.DataCall()->operator oaEndStyleEnum());
        return PyoaEndStyleEnum_FromoaEndStyleEnum(result);
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

static char oaEndStyle_assign_doc[] = 
"Class: oaEndStyle, Function: set\n"
"  Paramegers: (oaDouble)\n"
"    This function sets the current value.\n"
;

static PyObject*
oaEndStyle_tp_assign(PyObject* ob, PyObject *args)
{
  PyParamoaEndStyle data;
  int convert_status=PyoaEndStyle_Convert(ob,&data);
  assert(convert_status!=0);
  try {
    PyParamoaEndStyle p1;
    if (PyArg_ParseTuple(args,(char*)"O&",
          &PyoaEndStyle_Convert,&p1)) {
        data.Data()=p1.Data();
        Py_INCREF(ob);
        return ob;
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}


// ------------------------------------------------------------------
//  Function Methods Table:
// ------------------------------------------------------------------

static PyMethodDef oaEndStyle_methodlist[] = {
    {"getName",(PyCFunction)oaEndStyle_getName,METH_VARARGS,oaEndStyle_getName_doc},
    {"oaEndStyleEnum",(PyCFunction)oaEndStyle_oaEndStyleEnum,METH_VARARGS,oaEndStyle_oaEndStyleEnum_doc},
    {"assign",(PyCFunction)oaEndStyle_tp_assign,METH_VARARGS,oaEndStyle_assign_doc},
   {NULL,NULL,0,NULL}
};


// ------------------------------------------------------------------
//  Type Object:
// ------------------------------------------------------------------

// ------------------------------------------------------------------
static char oaEndStyle_doc[] = 
"Class: oaEndStyle\n"
"  The oaEndStyle class implements an enumerated type representing the different styles the end of a path segment may have.\n"
"  The oaEndStyle class is an enum wrapper class for oaEndStyleEnum values.\n"
"  See Enum Wrappers in the Programmers Guide for a discussion of enum wrappers.\n"
"  oaEndStyleEnum\n"
"Constructors:\n"
"  Paramegers: (oaEndStyleEnum)\n"
"    Calls: oaEndStyle(oaEndStyleEnum valueIn)\n"
"    Signature: oaEndStyle||simple-oaEndStyleEnum,\n"
"    This constructor creates an oaEndStyle object based on the oaEndStyleEnum value 'valueIn' passed to it.\n"
"    valueIn\n"
"    One of the oaEndStyleEnum values to create this oaEndStyle with\n"
"  Paramegers: (oaString)\n"
"    Calls: oaEndStyle(const oaString& name)\n"
"    Signature: oaEndStyle||cref-oaString,\n"
"    This constructor creates an oaEndStyle object based on the string value 'name' that represents a qualified end style.\n"
"    name\n"
"    One of the oaEndStyleEnum type names to use for this oaEndStyle\n"
"    oacInvalidEndStyleName\n"
"  Paramegers: (oaEndStyle)\n"
"    Calls: (const oaEndStyle&)\n"
"    Signature: oaEndStyle||cref-oaEndStyle,\n"
;

// ------------------------------------------------------------------
PyTypeObject PyoaEndStyle_Type = {
    PyObject_HEAD_INIT(&PyType_Type)
    0,
    "oaEndStyle",
    sizeof(PyoaEndStyleObject),
    0,
    (destructor)oaEndStyle_tp_dealloc,	/* tp_dealloc */
    0,	/* tp_print */
    0,					/* tp_getattr */
    0,					/* tp_setattr */
    (cmpfunc)oaEndStyle_tp_compare,	/* tp_compare */
    (reprfunc)oaEndStyle_tp_repr,	/* tp_repr */
    0,					/* tp_as_number */
    0,					/* tp_as_sequence */
    0,					/* tp_as_mapping */
    0,					/* tp_as_hash */
    0,					/* tp_as_call */
    0,					/* tp_str */
    0,					/* tp_getattro */
    0,					/* tp_setattro */
    0,					/* tp_as_buffer */
    Py_TPFLAGS_DEFAULT|Py_TPFLAGS_BASETYPE, /* tp_flags */
    oaEndStyle_doc,	/* tp_doc */
    0,					/* tp_traverse */
    0,					/* tp_clear */
    0,					/* tp_richcompre */
    0,					/* tp_weaklistoffset */
    0,					/* tp_iter */
    0,					/* tp_iternext */
    oaEndStyle_methodlist,	/* tp_methods */
    0,					/* tp_members */
    0,					/* tp_getset */
    0,					/* tp_base */
    0,					/* tp_dict */
    0,					/* tp_descr_get */
    0,					/* tp_descr_set */
    0,					/* tp_dictoffset */
    0,					/* tp_init */
    PyType_GenericAlloc,	/* tp_alloc */
    oaEndStyle_new,	/* tp_new */
    _PyObject_Del,	/* tp_free */
};


// ------------------------------------------------------------------
//  Type Init:
// ------------------------------------------------------------------

int
PyoaEndStyle_TypeInit(PyObject* mod_dict)
{
    if (PyType_Ready(&PyoaEndStyle_Type)<0) {
      printf("** PyType_Ready failed for: oaEndStyle\n");
      return -1;
    }

    if (PyDict_SetItemString(mod_dict,"oaEndStyle",
           (PyObject*)(&PyoaEndStyle_Type))<0) {
       printf("** Failed to add type name to module dictionary for: oaEndStyle\n");
       return -1;
    }
    return 0;
}


/********************************************************************
 *   Copyright 2002-2008  LSI Corporation
 *
 *   Licensed under the Apache License, Version 2.0 (the "License");
 *   you may not use this file except in compliance with the License.
 *   You may obtain a copy of the License at
 *
 *       http://www.apache.org/licenses/LICENSE-2.0
 *
 *   Unless required by applicable law or agreed to in writing, software
 *   distributed under the License is distributed on an "AS IS" BASIS,
 *   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *   See the License for the specific language governing permissions and
 *   limitations under the License.
 *
 *******************************************************************/

#include "pyoa_header.h"


// ==================================================================
// Wrapper Implementation for Class: oaEndStyleEnum
// ==================================================================

// ------------------------------------------------------------------

int
PyoaEndStyleEnum_Convert(PyObject* ob,PyParamoaEndStyleEnum* result)
{
    if (ob == NULL) return 1;
    if (PyString_Check(ob)) {
        char* str=PyString_AsString(ob);
        if (strcasecmp(str,"oacTruncateEndStyle")==0) { result->SetData(oacTruncateEndStyle); return 1;}
        if (strcasecmp(str,"oacExtendEndStyle")==0) { result->SetData(oacExtendEndStyle); return 1;}
        if (strcasecmp(str,"oacVariableEndStyle")==0) { result->SetData(oacVariableEndStyle); return 1;}
        if (strcasecmp(str,"oacChamferEndStyle")==0) { result->SetData(oacChamferEndStyle); return 1;}
        if (strcasecmp(str,"oacCustomEndStyle")==0) { result->SetData(oacCustomEndStyle); return 1;}
    }            
    if (PyInt_Check(ob)) {
        long val=PyInt_AsLong(ob);
        result->SetData((oaEndStyleEnum)val);
        return 1;
    }
    PyErr_SetString(PyExc_TypeError,
        "Convertion of parameter to class: oaEndStyleEnum Failed");
    return 0;
}
// ------------------------------------------------------------------

PyObject* PyoaEndStyleEnum_FromoaEndStyleEnum(oaEndStyleEnum ob)
{
    if (ob==oacTruncateEndStyle) return PyString_FromString("oacTruncateEndStyle");
    if (ob==oacExtendEndStyle) return PyString_FromString("oacExtendEndStyle");
    if (ob==oacVariableEndStyle) return PyString_FromString("oacVariableEndStyle");
    if (ob==oacChamferEndStyle) return PyString_FromString("oacChamferEndStyle");
    if (ob==oacCustomEndStyle) return PyString_FromString("oacCustomEndStyle");

    Py_INCREF(Py_None);
    return Py_None;
}

// ------------------------------------------------------------------
//  Enum Typecast function:
// ------------------------------------------------------------------

static PyObject*
PyoaEndStyleEnum_TypeFunction(PyObject* mod,PyObject* args)
{
    int v;
    oaEndStyleEnum e;
    if (PyArg_ParseTuple(args,(char*)"i",&v)) {
       return PyoaEndStyleEnum_FromoaEndStyleEnum(oaEndStyleEnum(v));
    }
    PyErr_Clear();
    if (PyArg_ParseTuple(args,(char*)"O&",&PyoaEndStyleEnum_Convert,&e)) {
       return PyInt_FromLong(long(e));
    }
    return NULL;
}
static char oaEndStyleEnum_doc[] =
"Type convert function for enum: oaEndStyleEnum";
                               
static PyMethodDef PyoaEndStyleEnum_method =
  {"oaEndStyleEnum",(PyCFunction)PyoaEndStyleEnum_TypeFunction,METH_VARARGS,oaEndStyleEnum_doc};
  

// ------------------------------------------------------------------
//  Enum Init:
// ------------------------------------------------------------------

int
PyoaEndStyleEnum_TypeInit(PyObject* mod_dict)
{
    // Put Enum values in Dictionary
    PyObject* value;
    value=PyString_FromString("oacTruncateEndStyle");
    PyDict_SetItemString(mod_dict,"oacTruncateEndStyle",value);
    Py_DECREF(value);
    value=PyString_FromString("oacExtendEndStyle");
    PyDict_SetItemString(mod_dict,"oacExtendEndStyle",value);
    Py_DECREF(value);
    value=PyString_FromString("oacVariableEndStyle");
    PyDict_SetItemString(mod_dict,"oacVariableEndStyle",value);
    Py_DECREF(value);
    value=PyString_FromString("oacChamferEndStyle");
    PyDict_SetItemString(mod_dict,"oacChamferEndStyle",value);
    Py_DECREF(value);
    value=PyString_FromString("oacCustomEndStyle");
    PyDict_SetItemString(mod_dict,"oacCustomEndStyle",value);
    Py_DECREF(value);

    // Put Enum name function in Dictionary
    value=PyCFunction_New(&PyoaEndStyleEnum_method,NULL);
    if (PyDict_SetItemString(mod_dict,"oaEndStyleEnum",value)!=0) {
    Py_DECREF(value);
        printf("** Failed to add enum function to module dictionary for: oaEndStyleEnum\n");
        return -1;
    }
    Py_DECREF(value);
    return 0;
}

/********************************************************************
 *   Copyright 2002-2008  LSI Corporation
 *
 *   Licensed under the Apache License, Version 2.0 (the "License");
 *   you may not use this file except in compliance with the License.
 *   You may obtain a copy of the License at
 *
 *       http://www.apache.org/licenses/LICENSE-2.0
 *
 *   Unless required by applicable law or agreed to in writing, software
 *   distributed under the License is distributed on an "AS IS" BASIS,
 *   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *   See the License for the specific language governing permissions and
 *   limitations under the License.
 *
 *******************************************************************/

#include "pyoa_header.h"


// ==================================================================
// Wrapper Implementation for Class: oaEndpointType
// ==================================================================


// ==================================================================
// Alloc/Dealloc Routines
// ==================================================================

// ------------------------------------------------------------------
static PyObject*
oaEndpointType_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
  try {
    int is_raw=(type==&PyoaEndpointType_Type);
    PyObject* bself = type->tp_alloc(type,0);
    if (bself == NULL) return bself;
    PyoaEndpointTypeObject* self = (PyoaEndpointTypeObject*)bself;
    self->locks = NULL;
    self->borrow = 0;
    static char *kwlist [] = { NULL } ;
    // Case: (oaEndpointTypeEnum)
    {
        PyParamoaEndpointTypeEnum p1;
        if (PyArg_ParseTuple(args,"O&",
              &PyoaEndpointTypeEnum_Convert,&p1)) {
            self->value =  new oaEndpointType(p1.Data());
            return bself;
        }
    }
    PyErr_Clear();
    // Case: (oaString)
    {
        PyParamoaString p1;
        if (PyArg_ParseTuple(args,"O&",
              &PyoaString_Convert,&p1)) {
            self->value =  new oaEndpointType(p1.Data());
            return bself;
        }
    }
    PyErr_Clear();
    // Case: (oaEndpointType)
    {
        PyParamoaEndpointType p1;
        if (PyArg_ParseTuple(args,(char*)"O&",
              &PyoaEndpointType_Convert,&p1)) {
            self->value= new oaEndpointType(p1.Data());
            return bself;
        }
    }
    PyErr_Clear();
    PyErr_SetString(PyExc_TypeError,
        "No Arg-Matching Constructor found for class: oaEndpointType, Choices are:\n"
        "    (oaEndpointTypeEnum)\n"
        "    (oaString)\n"
        "    (oaEndpointType)\n"
    );
    Py_DECREF(self);
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static void
oaEndpointType_tp_dealloc(PyoaEndpointTypeObject* self)
{
    if (!self->borrow) {
        delete (self->value);
    }
    Py_XDECREF(self->locks);
    self->ob_type->tp_free((PyObject*)self);
}

// ------------------------------------------------------------------
static PyObject*
oaEndpointType_tp_repr(PyObject *ob)
{
    PyParamoaEndpointType value;
    int convert_status=PyoaEndpointType_Convert(ob,&value);
    assert(convert_status!=0);
    PyObject* result;
    oaString sresult(value.DataCall()->getName());

    char addr[36];
    sprintf(addr,DISPLAY_FORMAT,POINTER_AS_DISPLAY(value.DataCall()));
    oaString buffer;
    buffer+=oaString("<oaEndpointType::");
    buffer+=oaString(addr);
    buffer+=oaString("::");
    buffer+=oaString(sresult);
    buffer+=oaString(">");
    result=PyString_FromString((char*)(const char*)buffer);
    return result;
}
        
// ------------------------------------------------------------------
static int
oaEndpointType_tp_compare(PyObject *ob1,PyObject* ob2)
{
    PyParamoaEndpointType v1;
    PyParamoaEndpointType v2;
    int convert_status1=PyoaEndpointType_Convert(ob1,&v1);
    int convert_status2=PyoaEndpointType_Convert(ob2,&v2);
    assert(convert_status1!=0);
    assert(convert_status2!=0);
    if (v1.DataCall()==v2.DataCall()) return 0;
    return 1;
}
        
// ------------------------------------------------------------------
int
PyoaEndpointType_Convert(PyObject* ob,PyParamoaEndpointType* result)
{
    if (ob == NULL) return 1;
    if (PyoaEndpointType_Check(ob)) {
        result->SetData(  ((PyoaEndpointTypeObject*)ob)->value);
        return 1;
    }
    PyErr_SetString(PyExc_TypeError,
        "Convertion of parameter to class: oaEndpointType Failed");
    return 0;
}
// ------------------------------------------------------------------
PyObject* PyoaEndpointType_FromoaEndpointType(oaEndpointType* data,int borrow,PyObject* lock)
{
    if (data) {
        PyObject* bself = PyoaEndpointType_Type.tp_alloc(&PyoaEndpointType_Type,0);
        if (bself == NULL) return bself;
        PyoaEndpointTypeObject* self = (PyoaEndpointTypeObject*)bself;
        self->value =  data;
        self->locks = NULL;
        self->borrow = borrow;
        if (lock) PyoaLockObject(self->locks,lock);
        return bself;
    }
    Py_INCREF(Py_None);
    return Py_None;
}

// ------------------------------------------------------------------
// FunctionMethods:
// ------------------------------------------------------------------

// ------------------------------------------------------------------
static char oaEndpointType_getName_doc[] = 
"Class: oaEndpointType, Function: getName\n"
"  Paramegers: ()\n"
"    Calls: const oaString& getName() const\n"
"    Signature: getName|cref-oaString|\n"
"    BrowseData: 1\n"
"    This function returns the name string associated with the encapsulated #oaEndpointTypeEnum object.\n"
;

static PyObject*
oaEndpointType_getName(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaEndpointType data;
    int convert_status=PyoaEndpointType_Convert(ob,&data);
    assert(convert_status!=0);
    PyoaEndpointTypeObject* self=(PyoaEndpointTypeObject*)ob;

    if (PyArg_ParseTuple(args,"")) {
        oaString result= (data.DataCall()->getName());
        return PyoaString_FromoaString(result);
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaEndpointType_oaEndpointTypeEnum_doc[] = 
"Class: oaEndpointType, Function: oaEndpointTypeEnum\n"
"  Paramegers: ()\n"
"    Calls: oaEndpointTypeEnum oaEndpointTypeEnum() const\n"
"    Signature: operator oaEndpointTypeEnum|simple-oaEndpointTypeEnum|\n"
"    BrowseData: 1\n"
"    This operator casts this oaEndpointType object into the corresponding #oaEndpointTypeEnum value.\n"
;

static PyObject*
oaEndpointType_oaEndpointTypeEnum(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaEndpointType data;
    int convert_status=PyoaEndpointType_Convert(ob,&data);
    assert(convert_status!=0);
    PyoaEndpointTypeObject* self=(PyoaEndpointTypeObject*)ob;

    if (PyArg_ParseTuple(args,"")) {
        oaEndpointTypeEnum result= (data.DataCall()->operator oaEndpointTypeEnum());
        return PyoaEndpointTypeEnum_FromoaEndpointTypeEnum(result);
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

static char oaEndpointType_assign_doc[] = 
"Class: oaEndpointType, Function: set\n"
"  Paramegers: (oaDouble)\n"
"    This function sets the current value.\n"
;

static PyObject*
oaEndpointType_tp_assign(PyObject* ob, PyObject *args)
{
  PyParamoaEndpointType data;
  int convert_status=PyoaEndpointType_Convert(ob,&data);
  assert(convert_status!=0);
  try {
    PyParamoaEndpointType p1;
    if (PyArg_ParseTuple(args,(char*)"O&",
          &PyoaEndpointType_Convert,&p1)) {
        data.Data()=p1.Data();
        Py_INCREF(ob);
        return ob;
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}


// ------------------------------------------------------------------
//  Function Methods Table:
// ------------------------------------------------------------------

static PyMethodDef oaEndpointType_methodlist[] = {
    {"getName",(PyCFunction)oaEndpointType_getName,METH_VARARGS,oaEndpointType_getName_doc},
    {"oaEndpointTypeEnum",(PyCFunction)oaEndpointType_oaEndpointTypeEnum,METH_VARARGS,oaEndpointType_oaEndpointTypeEnum_doc},
    {"assign",(PyCFunction)oaEndpointType_tp_assign,METH_VARARGS,oaEndpointType_assign_doc},
   {NULL,NULL,0,NULL}
};


// ------------------------------------------------------------------
//  Type Object:
// ------------------------------------------------------------------

// ------------------------------------------------------------------
static char oaEndpointType_doc[] = 
"Class: oaEndpointType\n"
"  The oaEndpointType class is an enum wrapper class that specifies which end is which for the two endpoints of a standard parasitic device. Se oaStdDevice::getNode for one example of its usage.\n"
"  See Enum Wrappers in the Programmers Guide for a discussion of enum wrappers.\n"
"  oaEndpointTypeEnum\n"
"Constructors:\n"
"  Paramegers: (oaEndpointTypeEnum)\n"
"    Calls: oaEndpointType(oaEndpointTypeEnum valueIn)\n"
"    Signature: oaEndpointType||simple-oaEndpointTypeEnum,\n"
"    This function constructs an instance of an oaEndpointType class using the specified #oaEndpointTypeEnum value.\n"
"  Paramegers: (oaString)\n"
"    Calls: oaEndpointType(const oaString& name)\n"
"    Signature: oaEndpointType||cref-oaString,\n"
"    This function constructs an instance of an oaEndpointType class using the #oaEndpointTypeEnum associated with the specified string name . This name must be defined in the legal set of names associated with #oaEndpointTypeEnum.\n"
"    oacInvalidEndpointTypeName\n"
"  Paramegers: (oaEndpointType)\n"
"    Calls: (const oaEndpointType&)\n"
"    Signature: oaEndpointType||cref-oaEndpointType,\n"
;

// ------------------------------------------------------------------
PyTypeObject PyoaEndpointType_Type = {
    PyObject_HEAD_INIT(&PyType_Type)
    0,
    "oaEndpointType",
    sizeof(PyoaEndpointTypeObject),
    0,
    (destructor)oaEndpointType_tp_dealloc,	/* tp_dealloc */
    0,	/* tp_print */
    0,					/* tp_getattr */
    0,					/* tp_setattr */
    (cmpfunc)oaEndpointType_tp_compare,	/* tp_compare */
    (reprfunc)oaEndpointType_tp_repr,	/* tp_repr */
    0,					/* tp_as_number */
    0,					/* tp_as_sequence */
    0,					/* tp_as_mapping */
    0,					/* tp_as_hash */
    0,					/* tp_as_call */
    0,					/* tp_str */
    0,					/* tp_getattro */
    0,					/* tp_setattro */
    0,					/* tp_as_buffer */
    Py_TPFLAGS_DEFAULT|Py_TPFLAGS_BASETYPE, /* tp_flags */
    oaEndpointType_doc,	/* tp_doc */
    0,					/* tp_traverse */
    0,					/* tp_clear */
    0,					/* tp_richcompre */
    0,					/* tp_weaklistoffset */
    0,					/* tp_iter */
    0,					/* tp_iternext */
    oaEndpointType_methodlist,	/* tp_methods */
    0,					/* tp_members */
    0,					/* tp_getset */
    0,					/* tp_base */
    0,					/* tp_dict */
    0,					/* tp_descr_get */
    0,					/* tp_descr_set */
    0,					/* tp_dictoffset */
    0,					/* tp_init */
    PyType_GenericAlloc,	/* tp_alloc */
    oaEndpointType_new,	/* tp_new */
    _PyObject_Del,	/* tp_free */
};


// ------------------------------------------------------------------
//  Type Init:
// ------------------------------------------------------------------

int
PyoaEndpointType_TypeInit(PyObject* mod_dict)
{
    if (PyType_Ready(&PyoaEndpointType_Type)<0) {
      printf("** PyType_Ready failed for: oaEndpointType\n");
      return -1;
    }

    if (PyDict_SetItemString(mod_dict,"oaEndpointType",
           (PyObject*)(&PyoaEndpointType_Type))<0) {
       printf("** Failed to add type name to module dictionary for: oaEndpointType\n");
       return -1;
    }
    return 0;
}


/********************************************************************
 *   Copyright 2002-2008  LSI Corporation
 *
 *   Licensed under the Apache License, Version 2.0 (the "License");
 *   you may not use this file except in compliance with the License.
 *   You may obtain a copy of the License at
 *
 *       http://www.apache.org/licenses/LICENSE-2.0
 *
 *   Unless required by applicable law or agreed to in writing, software
 *   distributed under the License is distributed on an "AS IS" BASIS,
 *   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *   See the License for the specific language governing permissions and
 *   limitations under the License.
 *
 *******************************************************************/

#include "pyoa_header.h"


// ==================================================================
// Wrapper Implementation for Class: oaEndpointTypeEnum
// ==================================================================

// ------------------------------------------------------------------

int
PyoaEndpointTypeEnum_Convert(PyObject* ob,PyParamoaEndpointTypeEnum* result)
{
    if (ob == NULL) return 1;
    if (PyString_Check(ob)) {
        char* str=PyString_AsString(ob);
        if (strcasecmp(str,"oacFromEndpointType")==0) { result->SetData(oacFromEndpointType); return 1;}
        if (strcasecmp(str,"oacToEndpointType")==0) { result->SetData(oacToEndpointType); return 1;}
    }            
    if (PyInt_Check(ob)) {
        long val=PyInt_AsLong(ob);
        result->SetData((oaEndpointTypeEnum)val);
        return 1;
    }
    PyErr_SetString(PyExc_TypeError,
        "Convertion of parameter to class: oaEndpointTypeEnum Failed");
    return 0;
}
// ------------------------------------------------------------------

PyObject* PyoaEndpointTypeEnum_FromoaEndpointTypeEnum(oaEndpointTypeEnum ob)
{
    if (ob==oacFromEndpointType) return PyString_FromString("oacFromEndpointType");
    if (ob==oacToEndpointType) return PyString_FromString("oacToEndpointType");

    Py_INCREF(Py_None);
    return Py_None;
}

// ------------------------------------------------------------------
//  Enum Typecast function:
// ------------------------------------------------------------------

static PyObject*
PyoaEndpointTypeEnum_TypeFunction(PyObject* mod,PyObject* args)
{
    int v;
    oaEndpointTypeEnum e;
    if (PyArg_ParseTuple(args,(char*)"i",&v)) {
       return PyoaEndpointTypeEnum_FromoaEndpointTypeEnum(oaEndpointTypeEnum(v));
    }
    PyErr_Clear();
    if (PyArg_ParseTuple(args,(char*)"O&",&PyoaEndpointTypeEnum_Convert,&e)) {
       return PyInt_FromLong(long(e));
    }
    return NULL;
}
static char oaEndpointTypeEnum_doc[] =
"Type convert function for enum: oaEndpointTypeEnum";
                               
static PyMethodDef PyoaEndpointTypeEnum_method =
  {"oaEndpointTypeEnum",(PyCFunction)PyoaEndpointTypeEnum_TypeFunction,METH_VARARGS,oaEndpointTypeEnum_doc};
  

// ------------------------------------------------------------------
//  Enum Init:
// ------------------------------------------------------------------

int
PyoaEndpointTypeEnum_TypeInit(PyObject* mod_dict)
{
    // Put Enum values in Dictionary
    PyObject* value;
    value=PyString_FromString("oacFromEndpointType");
    PyDict_SetItemString(mod_dict,"oacFromEndpointType",value);
    Py_DECREF(value);
    value=PyString_FromString("oacToEndpointType");
    PyDict_SetItemString(mod_dict,"oacToEndpointType",value);
    Py_DECREF(value);

    // Put Enum name function in Dictionary
    value=PyCFunction_New(&PyoaEndpointTypeEnum_method,NULL);
    if (PyDict_SetItemString(mod_dict,"oaEndpointTypeEnum",value)!=0) {
    Py_DECREF(value);
        printf("** Failed to add enum function to module dictionary for: oaEndpointTypeEnum\n");
        return -1;
    }
    Py_DECREF(value);
    return 0;
}

/********************************************************************
 *   Copyright 2002-2008  LSI Corporation
 *
 *   Licensed under the Apache License, Version 2.0 (the "License");
 *   you may not use this file except in compliance with the License.
 *   You may obtain a copy of the License at
 *
 *       http://www.apache.org/licenses/LICENSE-2.0
 *
 *   Unless required by applicable law or agreed to in writing, software
 *   distributed under the License is distributed on an "AS IS" BASIS,
 *   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *   See the License for the specific language governing permissions and
 *   limitations under the License.
 *
 *******************************************************************/

#include "pyoa_header.h"


// ==================================================================
// Wrapper Implementation for Class: oaEnumCollection
// ==================================================================


// ==================================================================
// Alloc/Dealloc Routines
// ==================================================================

// ------------------------------------------------------------------
static PyObject*
oaEnumCollection_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
  try {
    int is_raw=(type==&PyoaEnumCollection_Type);
    PyObject* bself = type->tp_alloc(type,0);
    if (bself == NULL) return bself;
    PyoaEnumCollectionObject* self = (PyoaEnumCollectionObject*)bself;
    self->locks = NULL;
    self->borrow = 0;
    static char *kwlist [] = { NULL } ;
    PyErr_SetString(PyExc_TypeError,
        "No Arg-Matching Constructor found for class: oaEnumCollection, Choices are:\n"
    );
    Py_DECREF(self);
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static void
oaEnumCollection_tp_dealloc(PyoaEnumCollectionObject* self)
{
    if (!self->borrow) {
        delete (self->value);
    }
    Py_XDECREF(self->locks);
    self->ob_type->tp_free((PyObject*)self);
}

// ------------------------------------------------------------------
static PyObject*
oaEnumCollection_tp_repr(PyObject *ob)
{
    PyParamoaEnumCollection value;
    int convert_status=PyoaEnumCollection_Convert(ob,&value);
    assert(convert_status!=0);
    PyObject* result;

    char buffer[38];
    sprintf(buffer,"<oaEnumCollection::" DISPLAY_FORMAT ">",POINTER_AS_DISPLAY(value.DataCall()));
    result=PyString_FromString(buffer);
    return result;
}
        
// ------------------------------------------------------------------
static int
oaEnumCollection_tp_compare(PyObject *ob1,PyObject* ob2)
{
    PyParamoaEnumCollection v1;
    PyParamoaEnumCollection v2;
    int convert_status1=PyoaEnumCollection_Convert(ob1,&v1);
    int convert_status2=PyoaEnumCollection_Convert(ob2,&v2);
    assert(convert_status1!=0);
    assert(convert_status2!=0);
    if (v1.DataCall()==v2.DataCall()) return 0;
    return 1;
}
        
// ------------------------------------------------------------------
int
PyoaEnumCollection_Convert(PyObject* ob,PyParamoaEnumCollection* result)
{
    if (ob == NULL) return 1;
    if (PyoaEnumCollection_Check(ob)) {
        result->SetData(  ((PyoaEnumCollectionObject*)ob)->value);
        return 1;
    }
    PyErr_SetString(PyExc_TypeError,
        "Convertion of parameter to class: oaEnumCollection Failed");
    return 0;
}
// ------------------------------------------------------------------
PyObject* PyoaEnumCollection_FromoaEnumCollection(oaEnumCollection* data,int borrow,PyObject* lock)
{
    if (data) {
        PyObject* bself = PyoaEnumCollection_Type.tp_alloc(&PyoaEnumCollection_Type,0);
        if (bself == NULL) return bself;
        PyoaEnumCollectionObject* self = (PyoaEnumCollectionObject*)bself;
        self->value =  data;
        self->locks = NULL;
        self->borrow = borrow;
        if (lock) PyoaLockObject(self->locks,lock);
        return bself;
    }
    Py_INCREF(Py_None);
    return Py_None;
}

// ------------------------------------------------------------------
// FunctionMethods:
// ------------------------------------------------------------------

// ------------------------------------------------------------------
static char oaEnumCollection_getCount_doc[] = 
"Class: oaEnumCollection, Function: getCount\n"
"  Paramegers: ()\n"
"    Calls: oaUInt4 getCount()\n"
"    Signature: getCount|simple-oaUInt4|\n"
"    BrowseData: 1\n"
"    This function returns the number of strings in the collection.\n"
;

static PyObject*
oaEnumCollection_getCount(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaEnumCollection data;
    int convert_status=PyoaEnumCollection_Convert(ob,&data);
    assert(convert_status!=0);
    PyoaEnumCollectionObject* self=(PyoaEnumCollectionObject*)ob;

    if (PyArg_ParseTuple(args,"")) {
        oaUInt4 result= (data.DataCall()->getCount());
        return PyoaUInt4_FromoaUInt4(result);
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaEnumCollection_isEmpty_doc[] = 
"Class: oaEnumCollection, Function: isEmpty\n"
"  Paramegers: ()\n"
"    Calls: oaBoolean isEmpty()\n"
"    Signature: isEmpty|simple-oaBoolean|\n"
"    BrowseData: 1\n"
"    This function returns a boolean value indicating whether there are any members in the collection.\n"
;

static PyObject*
oaEnumCollection_isEmpty(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaEnumCollection data;
    int convert_status=PyoaEnumCollection_Convert(ob,&data);
    assert(convert_status!=0);
    PyoaEnumCollectionObject* self=(PyoaEnumCollectionObject*)ob;

    if (PyArg_ParseTuple(args,"")) {
        oaBoolean result= (data.DataCall()->isEmpty());
        return PyoaBoolean_FromoaBoolean(result);
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

static char oaEnumCollection_assign_doc[] = 
"Class: oaEnumCollection, Function: set\n"
"  Paramegers: (oaDouble)\n"
"    This function sets the current value.\n"
;

static PyObject*
oaEnumCollection_tp_assign(PyObject* ob, PyObject *args)
{
  PyParamoaEnumCollection data;
  int convert_status=PyoaEnumCollection_Convert(ob,&data);
  assert(convert_status!=0);
  try {
    PyParamoaEnumCollection p1;
    if (PyArg_ParseTuple(args,(char*)"O&",
          &PyoaEnumCollection_Convert,&p1)) {
        data.Data()=p1.Data();
        Py_INCREF(ob);
        return ob;
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}


// ------------------------------------------------------------------
//  Function Methods Table:
// ------------------------------------------------------------------

static PyMethodDef oaEnumCollection_methodlist[] = {
    {"getCount",(PyCFunction)oaEnumCollection_getCount,METH_VARARGS,oaEnumCollection_getCount_doc},
    {"isEmpty",(PyCFunction)oaEnumCollection_isEmpty,METH_VARARGS,oaEnumCollection_isEmpty_doc},
    {"assign",(PyCFunction)oaEnumCollection_tp_assign,METH_VARARGS,oaEnumCollection_assign_doc},
   {NULL,NULL,0,NULL}
};


// ------------------------------------------------------------------
//  Type Object:
// ------------------------------------------------------------------

// ------------------------------------------------------------------
static char oaEnumCollection_doc[] = 
"Class: oaEnumCollection\n"
"  The oaEnumCollection class represents a list of enumeration strings to traverse. This class is returned by the oaEnumProp::getEnums() call. The oaEnumCollection class is primarily used to initialize an oaEnumPropIter iterator so that the members of the collection can be retrieved.\n"
"Constructors:\n"
;

// ------------------------------------------------------------------
PyTypeObject PyoaEnumCollection_Type = {
    PyObject_HEAD_INIT(&PyType_Type)
    0,
    "oaEnumCollection",
    sizeof(PyoaEnumCollectionObject),
    0,
    (destructor)oaEnumCollection_tp_dealloc,	/* tp_dealloc */
    0,	/* tp_print */
    0,					/* tp_getattr */
    0,					/* tp_setattr */
    (cmpfunc)oaEnumCollection_tp_compare,	/* tp_compare */
    (reprfunc)oaEnumCollection_tp_repr,	/* tp_repr */
    0,					/* tp_as_number */
    0,					/* tp_as_sequence */
    0,					/* tp_as_mapping */
    0,					/* tp_as_hash */
    0,					/* tp_as_call */
    0,					/* tp_str */
    0,					/* tp_getattro */
    0,					/* tp_setattro */
    0,					/* tp_as_buffer */
    Py_TPFLAGS_DEFAULT|Py_TPFLAGS_BASETYPE, /* tp_flags */
    oaEnumCollection_doc,	/* tp_doc */
    0,					/* tp_traverse */
    0,					/* tp_clear */
    0,					/* tp_richcompre */
    0,					/* tp_weaklistoffset */
    0,					/* tp_iter */
    0,					/* tp_iternext */
    oaEnumCollection_methodlist,	/* tp_methods */
    0,					/* tp_members */
    0,					/* tp_getset */
    0,					/* tp_base */
    0,					/* tp_dict */
    0,					/* tp_descr_get */
    0,					/* tp_descr_set */
    0,					/* tp_dictoffset */
    0,					/* tp_init */
    PyType_GenericAlloc,	/* tp_alloc */
    oaEnumCollection_new,	/* tp_new */
    _PyObject_Del,	/* tp_free */
};


// ------------------------------------------------------------------
//  Type Init:
// ------------------------------------------------------------------

int
PyoaEnumCollection_TypeInit(PyObject* mod_dict)
{
    if (PyType_Ready(&PyoaEnumCollection_Type)<0) {
      printf("** PyType_Ready failed for: oaEnumCollection\n");
      return -1;
    }

    if (PyDict_SetItemString(mod_dict,"oaEnumCollection",
           (PyObject*)(&PyoaEnumCollection_Type))<0) {
       printf("** Failed to add type name to module dictionary for: oaEnumCollection\n");
       return -1;
    }
    return 0;
}


/********************************************************************
 *   Copyright 2002-2008  LSI Corporation
 *
 *   Licensed under the Apache License, Version 2.0 (the "License");
 *   you may not use this file except in compliance with the License.
 *   You may obtain a copy of the License at
 *
 *       http://www.apache.org/licenses/LICENSE-2.0
 *
 *   Unless required by applicable law or agreed to in writing, software
 *   distributed under the License is distributed on an "AS IS" BASIS,
 *   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *   See the License for the specific language governing permissions and
 *   limitations under the License.
 *
 *******************************************************************/

#include "pyoa_header.h"


// ==================================================================
// Wrapper Implementation for Class: oaEnumProp
// ==================================================================


// ==================================================================
// Alloc/Dealloc Routines
// ==================================================================

// ------------------------------------------------------------------
static PyObject*
oaEnumProp_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
  try {
    int is_raw=(type==&PyoaEnumProp_Type);
    PyObject* bself = type->tp_alloc(type,0);
    if (bself == NULL) return bself;
    PyoaEnumPropObject* self = (PyoaEnumPropObject*)bself;
    self->locks = NULL;
    self->borrow = 0;
    static char *kwlist [] = { NULL } ;
    // Case: (oaEnumProp)
    {
        PyParamoaEnumProp p1;
        if (PyArg_ParseTuple(args,(char*)"O&",
              &PyoaEnumProp_Convert,&p1)) {
            self->data=p1.Data();
            self->value=&(self->data);
            return bself;
        }
    }
    PyErr_Clear();
    // Case: ()
    {
        if (PyArg_ParseTuple(args,(char*)"")) {
          self->data=NULL;
          self->value=&(self->data);
          return bself;
        }
    }
    PyErr_Clear();
    PyErr_SetString(PyExc_TypeError,
        "No Arg-Matching Constructor found for class: oaEnumProp, Choices are:\n"
        "    (oaEnumProp)\n"
    );
    Py_DECREF(self);
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static void
oaEnumProp_tp_dealloc(PyoaEnumPropObject* self)
{
    self->ob_type->tp_free((PyObject*)self);
}

// ------------------------------------------------------------------
static PyObject*
oaEnumProp_tp_repr(PyObject *ob)
{
    PyParamoaEnumProp value;
    int convert_status=PyoaEnumProp_Convert(ob,&value);
    assert(convert_status!=0);
    PyObject* result;
    if (!value.Data()) {
        oaString buffer("<oaEnumProp::NULL>");
        result=PyString_FromString((char*)(const char*)buffer);
    }
    else {
        oaString sresult;
        value.DataCall()->getName(sresult);
    
        char addr[32];
        sprintf(addr,DISPLAY_FORMAT,POINTER_AS_DISPLAY(value.DataCall()));
        oaString buffer;
        buffer+=oaString("<oaEnumProp::");
        buffer+=oaString(addr);
        buffer+=oaString("::");
        buffer+=oaString(sresult);
        buffer+=oaString(">");
        result=PyString_FromString((char*)(const char*)buffer);
    
    }
    return result;
}
        
// ------------------------------------------------------------------
static int
oaEnumProp_tp_compare(PyObject *ob1,PyObject* ob2)
{
    PyParamoaEnumProp v1;
    PyParamoaEnumProp v2;
    int convert_status1=PyoaEnumProp_Convert(ob1,&v1);
    int convert_status2=PyoaEnumProp_Convert(ob2,&v2);
    assert(convert_status1!=0);
    assert(convert_status2!=0);
    if (v1.DataCall()==v2.DataCall()) return 0;
    return 1;
}
        
// ------------------------------------------------------------------
int
PyoaEnumProp_Convert(PyObject* ob,PyParamoaEnumProp* result)
{
    if (ob == NULL) return 1;
    if (PyoaEnumProp_Check(ob)) {
        result->SetData( (oaEnumProp**) ((PyoaEnumPropObject*)ob)->value);
        return 1;
    }
    PyErr_SetString(PyExc_TypeError,
        "Convertion of parameter to class: oaEnumProp Failed");
    return 0;
}
// ------------------------------------------------------------------
PyObject* PyoaEnumProp_FromoaEnumProp(oaEnumProp** value,int borrow,PyObject* lock)
{
    if (value && *value) {
        oaEnumProp* data=*value;
        PyObject* bself = PyoaEnumProp_Type.tp_alloc(&PyoaEnumProp_Type,0);
        if (bself == NULL) return bself;
        PyoaEnumPropObject* self = (PyoaEnumPropObject*)bself;
        self->value = (oaObject**) value;
        self->data = NULL;
        self->locks = NULL;
        self->borrow = 0; // Ignore borrow flag, since we copied
       if (lock) PyoaLockObject(self->locks,lock);
        return bself;
    }
    Py_INCREF(Py_None);
    return Py_None;
}
// ------------------------------------------------------------------
PyObject* PyoaEnumProp_FromoaEnumProp(oaEnumProp* data)
{
    if (data) {
       PyObject* bself = PyoaEnumProp_Type.tp_alloc(&PyoaEnumProp_Type,0);
       if (bself == NULL) return bself;
       PyoaEnumPropObject* self = (PyoaEnumPropObject*)bself;
       self->data = (oaObject*) data;
       self->value = &(self->data);
       self->borrow = 0; 
       self->locks = NULL;
       return bself;
    }
    Py_INCREF(Py_None);
    return Py_None;
}

// ------------------------------------------------------------------
// FunctionMethods:
// ------------------------------------------------------------------

// ------------------------------------------------------------------
static char oaEnumProp_getEnums_doc[] = 
"Class: oaEnumProp, Function: getEnums\n"
"  Paramegers: ()\n"
"    Calls: oaEnumCollection getEnums() const\n"
"    Signature: getEnums|simple-oaEnumCollection|\n"
"    BrowseData: 1\n"
"    This function returns a collection of the valid enums for this property.\n"
;

static PyObject*
oaEnumProp_getEnums(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaEnumProp data;
    int convert_status=PyoaEnumProp_Convert(ob,&data);
    assert(convert_status!=0);
    PyoaEnumPropObject* self=(PyoaEnumPropObject*)ob;
    if (!PyValidateDbObject(data.Data(),0)) return NULL;

    if (PyArg_ParseTuple(args,"")) {
        oaEnumCollection* result= new oaEnumCollection(data.DataCall()->getEnums());
        return PyoaEnumCollection_FromoaEnumCollection(result,0,NULL);
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaEnumProp_getEnumsIter_doc[] = 
"Class: oaEnumProp, Function: getEnumsIter\n"
"  Paramegers: ()\n"
"    Calls: oaEnumPropIter getEnumsIter() const\n"
"    Signature: getEnumsIter|simple-oaEnumPropIter|\n"
"    BrowseData: 1\n"
"    This function returns an Iterator over the following collection: This function returns a collection of the valid enums for this property.\n"
;

static PyObject*
oaEnumProp_getEnumsIter(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaEnumProp data;
    int convert_status=PyoaEnumProp_Convert(ob,&data);
    assert(convert_status!=0);
    PyoaEnumPropObject* self=(PyoaEnumPropObject*)ob;
    if (!PyValidateDbObject(data.Data(),0)) return NULL;

    if (PyArg_ParseTuple(args,"")) {
        oaEnumPropIter* result= new oaEnumPropIter(data.DataCall()->getEnums());
        return PyoaEnumPropIter_FromoaEnumPropIter(result,0,NULL);
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaEnumProp_getValue_doc[] = 
"Class: oaEnumProp, Function: getValue\n"
"  Paramegers: (oaString)\n"
"    Calls: void getValue(oaString& value) const\n"
"    Signature: getValue|void-void|ref-oaString,\n"
"    BrowseData: 0,oaString\n"
"    This function returns the value of this property.\n"
;

static PyObject*
oaEnumProp_getValue(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaEnumProp data;
    int convert_status=PyoaEnumProp_Convert(ob,&data);
    assert(convert_status!=0);
    PyoaEnumPropObject* self=(PyoaEnumPropObject*)ob;
    if (!PyValidateDbObject(data.Data(),0)) return NULL;

    PyParamoaString p1;
    if (PyArg_ParseTuple(args,"O&",
          &PyoaString_Convert,&p1)) {
        data.DataCall()->getValue(p1.Data());
        Py_INCREF(Py_None);
        return Py_None;
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaEnumProp_setValue_doc[] = 
"Class: oaEnumProp, Function: setValue\n"
"  Paramegers: (oaString)\n"
"    Calls: void setValue(const oaString& value)\n"
"    Signature: setValue|void-void|cref-oaString,\n"
"    This function sets this property to the specified value.\n"
"    oacInvalidEnumValue\n"
;

static PyObject*
oaEnumProp_setValue(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaEnumProp data;
    int convert_status=PyoaEnumProp_Convert(ob,&data);
    assert(convert_status!=0);
    PyoaEnumPropObject* self=(PyoaEnumPropObject*)ob;
    if (!PyValidateDbObject(data.Data(),0)) return NULL;

    PyParamoaString p1;
    if (PyArg_ParseTuple(args,"O&",
          &PyoaString_Convert,&p1)) {
        data.DataCall()->setValue(p1.Data());
        Py_INCREF(Py_None);
        return Py_None;
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaEnumProp_isNull_doc[] =
"Class: oaEnumProp, Function: isNull\n"
"  Parameters: () \n"
"    This functions returns 1 if the DbPointer is NULL, and 0 otherwise.\n"
;

static PyObject*
oaEnumProp_tp_isNull(PyObject* ob, PyObject *args)
{
    PyParamoaEnumProp data;
    int convert_status=PyoaEnumProp_Convert(ob,&data);
    assert(convert_status!=0);
    if (data.DataCall()==NULL)
        return PyInt_FromLong(1);
    else
        return PyInt_FromLong(0);
}
static char oaEnumProp_assign_doc[] = 
"Class: oaEnumProp, Function: set\n"
"  Paramegers: (oaDouble)\n"
"    This function sets the current value.\n"
;

static PyObject*
oaEnumProp_tp_assign(PyObject* ob, PyObject *args)
{
  PyParamoaEnumProp data;
  int convert_status=PyoaEnumProp_Convert(ob,&data);
  assert(convert_status!=0);
  try {
    PyParamoaEnumProp p1;
    if (PyArg_ParseTuple(args,(char*)"O&",
          &PyoaEnumProp_Convert,&p1)) {
        data.Data()=p1.Data();
        Py_INCREF(ob);
        return ob;
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}


// ------------------------------------------------------------------
//  Function Methods Table:
// ------------------------------------------------------------------

static PyMethodDef oaEnumProp_methodlist[] = {
    {"getEnums",(PyCFunction)oaEnumProp_getEnums,METH_VARARGS,oaEnumProp_getEnums_doc},
    {"getEnumsIter",(PyCFunction)oaEnumProp_getEnumsIter,METH_VARARGS,oaEnumProp_getEnumsIter_doc},
    {"getValue",(PyCFunction)oaEnumProp_getValue,METH_VARARGS,oaEnumProp_getValue_doc},
    {"setValue",(PyCFunction)oaEnumProp_setValue,METH_VARARGS,oaEnumProp_setValue_doc},
    {"isNull",(PyCFunction)oaEnumProp_tp_isNull,METH_VARARGS,oaEnumProp_isNull_doc},
    {"assign",(PyCFunction)oaEnumProp_tp_assign,METH_VARARGS,oaEnumProp_assign_doc},
   {NULL,NULL,0,NULL}
};


// ------------------------------------------------------------------
//  Type Object:
// ------------------------------------------------------------------

// ------------------------------------------------------------------
static char oaEnumProp_doc[] = 
"Class: oaEnumProp\n"
"  The oaEnumProp is a property that has a string value as well as an array of strings that constitute the set of allowed values. This array of \"enum values\" can be used by a generic property editor to assist a user to enter a proper value.\n"
"  Properties are application-defined values that can be added to any managed object in oaDesign , oaTech , and oaWafer databases except for the following paged objects: oaDevice , oaNode , oaParasiticNetwork , and oaSubNetwork .\n"
"  To create properties on DM Objects, create the corresponding oaDMData object (using oaLibDMData::open , oaCellDMData::open , oaViewDMData::open , or oaCellViewDMData::open ), then create properties on that oaDMData object.\n"
"  See oaProp for a general discussion of properties.\n"
"Constructors:\n"
"  Paramegers: (oaEnumProp)\n"
"    Calls: (const oaEnumProp&)\n"
"    Signature: oaEnumProp||cref-oaEnumProp,\n"
;

// ------------------------------------------------------------------
PyTypeObject PyoaEnumProp_Type = {
    PyObject_HEAD_INIT(&PyType_Type)
    0,
    "oaEnumProp",
    sizeof(PyoaEnumPropObject),
    0,
    (destructor)oaEnumProp_tp_dealloc,	/* tp_dealloc */
    0,	/* tp_print */
    0,					/* tp_getattr */
    0,					/* tp_setattr */
    (cmpfunc)oaEnumProp_tp_compare,	/* tp_compare */
    (reprfunc)oaEnumProp_tp_repr,	/* tp_repr */
    0,					/* tp_as_number */
    0,					/* tp_as_sequence */
    0,					/* tp_as_mapping */
    0,					/* tp_as_hash */
    0,					/* tp_as_call */
    0,					/* tp_str */
    0,					/* tp_getattro */
    0,					/* tp_setattro */
    0,					/* tp_as_buffer */
    Py_TPFLAGS_DEFAULT|Py_TPFLAGS_BASETYPE, /* tp_flags */
    oaEnumProp_doc,	/* tp_doc */
    0,					/* tp_traverse */
    0,					/* tp_clear */
    0,					/* tp_richcompre */
    0,					/* tp_weaklistoffset */
    0,					/* tp_iter */
    0,					/* tp_iternext */
    oaEnumProp_methodlist,	/* tp_methods */
    0,					/* tp_members */
    0,					/* tp_getset */
    &PyoaProp_Type,	/* tp_base */
    0,					/* tp_dict */
    0,					/* tp_descr_get */
    0,					/* tp_descr_set */
    0,					/* tp_dictoffset */
    0,					/* tp_init */
    PyType_GenericAlloc,	/* tp_alloc */
    oaEnumProp_new,	/* tp_new */
    _PyObject_Del,	/* tp_free */
};


// ------------------------------------------------------------------
// Static FunctionMethods:
// ------------------------------------------------------------------

// ------------------------------------------------------------------
static char oaEnumProp_static_create_doc[] = 
"Class: oaEnumProp, Function: create\n"
"  Paramegers: (oaObject,oaString,oaString,[oaString])\n"
"    Calls: oaEnumProp* create(oaObject* object,const oaString& name,const oaString& value,const oaString* enums)\n"
"    Signature: create|ptr-oaEnumProp|ptr-oaObject,cref-oaString,cref-oaString,simple-oaUInt4,cptr-oaString,\n"
"    This function creates an enumerated property with the specified attributes. The specified name is checked to verify it is unique for properties on the specified object . An exception is thrown if a property already exists on the object with the specified name . An exception is thrown if the value is not one of the strings in the array of allowed values.\n"
"    oacInvalidEnumValue\n"
"    oacInvalidObjForProp\n"
"    oacPropNameUsed\n"
;

static PyObject*
oaEnumProp_static_create(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaObject p1;
    PyParamoaString p2;
    PyParamoaString p3;
    PyParamoaString_Array p4;
    if (PyArg_ParseTuple(args,"O&O&O&O&",
          &PyoaObject_Convert,&p1,
          &PyoaString_Convert,&p2,
          &PyoaString_Convert,&p3,
          &PyoaString_Array_Convert,&p4)) {
        if (!PyValidateDbObject(p1.Data(),1)) return NULL;
        oaEnumPropp result= (oaEnumProp::create(p1.Data(),p2.Data(),p3.Data(),p4.Len(),p4.Data()));
        return PyoaEnumProp_FromoaEnumProp(result);
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static PyMethodDef oaEnumProp_staticmethodlist[] = {
    {"static_create",(PyCFunction)oaEnumProp_static_create,METH_VARARGS,oaEnumProp_static_create_doc},
   {NULL,NULL,0,NULL}
};


// ------------------------------------------------------------------
//  Type Init:
// ------------------------------------------------------------------

int
PyoaEnumProp_TypeInit(PyObject* mod_dict)
{
    if (PyType_Ready(&PyoaEnumProp_Type)<0) {
      printf("** PyType_Ready failed for: oaEnumProp\n");
      return -1;
    }

    if (PyDict_SetItemString(mod_dict,"oaEnumProp",
           (PyObject*)(&PyoaEnumProp_Type))<0) {
       printf("** Failed to add type name to module dictionary for: oaEnumProp\n");
       return -1;
    }

    PyObject *dict, *value;
    PyMethodDef *method;
    dict=PyoaEnumProp_Type.tp_dict;
    for(method=oaEnumProp_staticmethodlist;method->ml_name!=NULL;method++) {
        value=PyCFunction_New(method,NULL);
    if (value==NULL) return -1;
        if (PyDict_SetItemString(dict,method->ml_name,value)!=0) {
        Py_DECREF(value);
            printf("** Failed to add static function to module dictionary for: %s\n",
                method->ml_name);
            return -1;
        }
        Py_DECREF(value);
    }
    return 0;
}


/********************************************************************
 *   Copyright 2002-2008  LSI Corporation
 *
 *   Licensed under the Apache License, Version 2.0 (the "License");
 *   you may not use this file except in compliance with the License.
 *   You may obtain a copy of the License at
 *
 *       http://www.apache.org/licenses/LICENSE-2.0
 *
 *   Unless required by applicable law or agreed to in writing, software
 *   distributed under the License is distributed on an "AS IS" BASIS,
 *   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *   See the License for the specific language governing permissions and
 *   limitations under the License.
 *
 *******************************************************************/

#include "pyoa_header.h"


// ==================================================================
// Wrapper Implementation for Class: oaEnumPropIter
// ==================================================================


// ==================================================================
// Alloc/Dealloc Routines
// ==================================================================

// ------------------------------------------------------------------
static PyObject*
oaEnumPropIter_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
  try {
    int is_raw=(type==&PyoaEnumPropIter_Type);
    PyObject* bself = type->tp_alloc(type,0);
    if (bself == NULL) return bself;
    PyoaEnumPropIterObject* self = (PyoaEnumPropIterObject*)bself;
    self->locks = NULL;
    self->borrow = 0;
    static char *kwlist [] = { NULL } ;
    // Case: (oaEnumPropIter)
    {
        PyParamoaEnumPropIter p1;
        if (PyArg_ParseTuple(args,"O&",
              &PyoaEnumPropIter_Convert,&p1)) {
            self->value =  new oaEnumPropIter(p1.Data());
            return bself;
        }
    }
    PyErr_Clear();
    PyErr_SetString(PyExc_TypeError,
        "No Arg-Matching Constructor found for class: oaEnumPropIter, Choices are:\n"
        "    (oaEnumPropIter)\n"
    );
    Py_DECREF(self);
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static void
oaEnumPropIter_tp_dealloc(PyoaEnumPropIterObject* self)
{
    if (!self->borrow) {
        delete (self->value);
    }
    Py_XDECREF(self->locks);
    self->ob_type->tp_free((PyObject*)self);
}

// ------------------------------------------------------------------
static PyObject*
oaEnumPropIter_tp_repr(PyObject *ob)
{
    PyParamoaEnumPropIter value;
    int convert_status=PyoaEnumPropIter_Convert(ob,&value);
    assert(convert_status!=0);
    PyObject* result;

    char buffer[36];
    sprintf(buffer,"<oaEnumPropIter::" DISPLAY_FORMAT ">",POINTER_AS_DISPLAY(value.DataCall()));
    result=PyString_FromString(buffer);
    return result;
}
        
// ------------------------------------------------------------------
static int
oaEnumPropIter_tp_compare(PyObject *ob1,PyObject* ob2)
{
    PyParamoaEnumPropIter v1;
    PyParamoaEnumPropIter v2;
    int convert_status1=PyoaEnumPropIter_Convert(ob1,&v1);
    int convert_status2=PyoaEnumPropIter_Convert(ob2,&v2);
    assert(convert_status1!=0);
    assert(convert_status2!=0);
    if (v1.DataCall()==v2.DataCall()) return 0;
    return 1;
}
        
// ------------------------------------------------------------------
static PyObject*
oaEnumPropIter_getiter(PyObject *self)
{
    Py_INCREF(self);
    return self;
}

// ------------------------------------------------------------------
PyObject* oaEnumPropIter_iternext(PyObject *self);

// ------------------------------------------------------------------
int
PyoaEnumPropIter_Convert(PyObject* ob,PyParamoaEnumPropIter* result)
{
    if (ob == NULL) return 1;
    if (PyoaEnumPropIter_Check(ob)) {
        result->SetData(  ((PyoaEnumPropIterObject*)ob)->value);
        return 1;
    }
    PyErr_SetString(PyExc_TypeError,
        "Convertion of parameter to class: oaEnumPropIter Failed");
    return 0;
}
// ------------------------------------------------------------------
PyObject* PyoaEnumPropIter_FromoaEnumPropIter(oaEnumPropIter* data,int borrow,PyObject* lock)
{
    if (data) {
        PyObject* bself = PyoaEnumPropIter_Type.tp_alloc(&PyoaEnumPropIter_Type,0);
        if (bself == NULL) return bself;
        PyoaEnumPropIterObject* self = (PyoaEnumPropIterObject*)bself;
        self->value =  data;
        self->locks = NULL;
        self->borrow = borrow;
        if (lock) PyoaLockObject(self->locks,lock);
        return bself;
    }
    Py_INCREF(Py_None);
    return Py_None;
}

// ------------------------------------------------------------------
// FunctionMethods:
// ------------------------------------------------------------------

// ------------------------------------------------------------------
static char oaEnumPropIter_getNext_doc[] = 
"Class: oaEnumPropIter, Function: getNext\n"
"  Paramegers: ()\n"
"    Calls: oaBoolean getNext()\n"
"    Signature: getNext|simple-oaBoolean|ref-oaString,\n"
"    BrowseData: 1\n"
"    This function returns an oaString that contains the name of the next enumeration value in the list of valid enum values for the property. This function returns false when there are no more objects to return.\n"
"    enumV\n"
"    The name of the next enumeration value in the list of enums\n"
;

extern PyObject* oaEnumPropIter_getNext(PyObject *self, PyObject *args);

// ------------------------------------------------------------------
static char oaEnumPropIter_next_doc[] = 
"Class: oaEnumPropIter, Function: next\n"
"  Paramegers: ()\n"
"    Calls: oaBoolean* next()\n"
"    Signature: next|ptr-oaBoolean|,\n"
"    BrowseData: 1\n"
"    get next value or raise StopIteration\n"
;

extern PyObject* oaEnumPropIter_next(PyObject *self, PyObject *args);

// ------------------------------------------------------------------
static char oaEnumPropIter_reset_doc[] = 
"Class: oaEnumPropIter, Function: reset\n"
"  Paramegers: ()\n"
"    Calls: void reset()\n"
"    Signature: reset|void-void|\n"
"    BrowseData: 0\n"
"    This function restarts the iterator. The next call to getNext() for this oaEnumPropIter returns the first object in the collection.\n"
;

static PyObject*
oaEnumPropIter_reset(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaEnumPropIter data;
    int convert_status=PyoaEnumPropIter_Convert(ob,&data);
    assert(convert_status!=0);
    PyoaEnumPropIterObject* self=(PyoaEnumPropIterObject*)ob;

    if (PyArg_ParseTuple(args,"")) {
        data.DataCall()->reset();
        Py_INCREF(Py_None);
        return Py_None;
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

static char oaEnumPropIter_assign_doc[] = 
"Class: oaEnumPropIter, Function: set\n"
"  Paramegers: (oaDouble)\n"
"    This function sets the current value.\n"
;

static PyObject*
oaEnumPropIter_tp_assign(PyObject* ob, PyObject *args)
{
  PyParamoaEnumPropIter data;
  int convert_status=PyoaEnumPropIter_Convert(ob,&data);
  assert(convert_status!=0);
  try {
    PyParamoaEnumPropIter p1;
    if (PyArg_ParseTuple(args,(char*)"O&",
          &PyoaEnumPropIter_Convert,&p1)) {
        data.Data()=p1.Data();
        Py_INCREF(ob);
        return ob;
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}


// ------------------------------------------------------------------
//  Function Methods Table:
// ------------------------------------------------------------------

static PyMethodDef oaEnumPropIter_methodlist[] = {
    {"getNext",(PyCFunction)oaEnumPropIter_getNext,METH_VARARGS,oaEnumPropIter_getNext_doc},
    {"next",(PyCFunction)oaEnumPropIter_next,METH_VARARGS,oaEnumPropIter_next_doc},
    {"reset",(PyCFunction)oaEnumPropIter_reset,METH_VARARGS,oaEnumPropIter_reset_doc},
    {"assign",(PyCFunction)oaEnumPropIter_tp_assign,METH_VARARGS,oaEnumPropIter_assign_doc},
   {NULL,NULL,0,NULL}
};


// ------------------------------------------------------------------
//  Type Object:
// ------------------------------------------------------------------

// ------------------------------------------------------------------
static char oaEnumPropIter_doc[] = 
"Class: oaEnumPropIter\n"
"  The oaEnumPropIter class implements a special case iterator. This class returns enumeration values of an oaEnumProp object.\n"
"  The intended usage of oaEnumPropIter is shown in the following example:\n"
"  oaEnumPropIter iter(enumProp->getEnums()); oaString enum; while (iter.getNext(enum)) { ... }\n"
"Constructors:\n"
"  Paramegers: (oaEnumPropIter)\n"
"    Calls: oaEnumPropIter(oaEnumPropIter& iterIn)\n"
"    Signature: oaEnumPropIter||ref-oaEnumPropIter,\n"
"    This function constructs a new oaEnumPropIter class and iterates over the same set of objects as the oaEnumPropIter handed in. The new iterator starts at the beginning of the collection.\n"
"    iterIn\n"
"    The iterator value to use\n"
"  Paramegers: (oaEnumPropIter)\n"
"    Calls: (const oaEnumPropIter&)\n"
"    Signature: oaEnumPropIter||cref-oaEnumPropIter,\n"
;

// ------------------------------------------------------------------
PyTypeObject PyoaEnumPropIter_Type = {
    PyObject_HEAD_INIT(&PyType_Type)
    0,
    "oaEnumPropIter",
    sizeof(PyoaEnumPropIterObject),
    0,
    (destructor)oaEnumPropIter_tp_dealloc,	/* tp_dealloc */
    0,	/* tp_print */
    0,					/* tp_getattr */
    0,					/* tp_setattr */
    (cmpfunc)oaEnumPropIter_tp_compare,	/* tp_compare */
    (reprfunc)oaEnumPropIter_tp_repr,	/* tp_repr */
    0,					/* tp_as_number */
    0,					/* tp_as_sequence */
    0,					/* tp_as_mapping */
    0,					/* tp_as_hash */
    0,					/* tp_as_call */
    0,					/* tp_str */
    0,					/* tp_getattro */
    0,					/* tp_setattro */
    0,					/* tp_as_buffer */
    Py_TPFLAGS_DEFAULT|Py_TPFLAGS_BASETYPE, /* tp_flags */
    oaEnumPropIter_doc,	/* tp_doc */
    0,					/* tp_traverse */
    0,					/* tp_clear */
    0,					/* tp_richcompre */
    0,					/* tp_weaklistoffset */
    (getiterfunc)oaEnumPropIter_getiter,	/* tp_iter */
    (iternextfunc)oaEnumPropIter_iternext,	/* tp_iternext */
    oaEnumPropIter_methodlist,	/* tp_methods */
    0,					/* tp_members */
    0,					/* tp_getset */
    0,					/* tp_base */
    0,					/* tp_dict */
    0,					/* tp_descr_get */
    0,					/* tp_descr_set */
    0,					/* tp_dictoffset */
    0,					/* tp_init */
    PyType_GenericAlloc,	/* tp_alloc */
    oaEnumPropIter_new,	/* tp_new */
    _PyObject_Del,	/* tp_free */
};


// ------------------------------------------------------------------
//  Type Init:
// ------------------------------------------------------------------

int
PyoaEnumPropIter_TypeInit(PyObject* mod_dict)
{
    if (PyType_Ready(&PyoaEnumPropIter_Type)<0) {
      printf("** PyType_Ready failed for: oaEnumPropIter\n");
      return -1;
    }

    if (PyDict_SetItemString(mod_dict,"oaEnumPropIter",
           (PyObject*)(&PyoaEnumPropIter_Type))<0) {
       printf("** Failed to add type name to module dictionary for: oaEnumPropIter\n");
       return -1;
    }
    return 0;
}


/********************************************************************
 *   Copyright 2002-2008  LSI Corporation
 *
 *   Licensed under the Apache License, Version 2.0 (the "License");
 *   you may not use this file except in compliance with the License.
 *   You may obtain a copy of the License at
 *
 *       http://www.apache.org/licenses/LICENSE-2.0
 *
 *   Unless required by applicable law or agreed to in writing, software
 *   distributed under the License is distributed on an "AS IS" BASIS,
 *   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *   See the License for the specific language governing permissions and
 *   limitations under the License.
 *
 *******************************************************************/

#include "pyoa_header.h"


// ==================================================================
// Wrapper Implementation for Class: oaEvalText
// ==================================================================


// ==================================================================
// Alloc/Dealloc Routines
// ==================================================================

// ------------------------------------------------------------------
static PyObject*
oaEvalText_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
  try {
    int is_raw=(type==&PyoaEvalText_Type);
    PyObject* bself = type->tp_alloc(type,0);
    if (bself == NULL) return bself;
    PyoaEvalTextObject* self = (PyoaEvalTextObject*)bself;
    self->locks = NULL;
    self->borrow = 0;
    static char *kwlist [] = { NULL } ;
    // Case: (oaEvalText)
    {
        PyParamoaEvalText p1;
        if (PyArg_ParseTuple(args,(char*)"O&",
              &PyoaEvalText_Convert,&p1)) {
            self->data=p1.Data();
            self->value=&(self->data);
            return bself;
        }
    }
    PyErr_Clear();
    // Case: ()
    {
        if (PyArg_ParseTuple(args,(char*)"")) {
          self->data=NULL;
          self->value=&(self->data);
          return bself;
        }
    }
    PyErr_Clear();
    PyErr_SetString(PyExc_TypeError,
        "No Arg-Matching Constructor found for class: oaEvalText, Choices are:\n"
        "    (oaEvalText)\n"
    );
    Py_DECREF(self);
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static void
oaEvalText_tp_dealloc(PyoaEvalTextObject* self)
{
    self->ob_type->tp_free((PyObject*)self);
}

// ------------------------------------------------------------------
static PyObject*
oaEvalText_tp_repr(PyObject *ob)
{
    PyParamoaEvalText value;
    int convert_status=PyoaEvalText_Convert(ob,&value);
    assert(convert_status!=0);
    PyObject* result;

    char buffer[32];
    sprintf(buffer,"<oaEvalText::" DISPLAY_FORMAT ">",POINTER_AS_DISPLAY(value.DataCall()));
    result=PyString_FromString(buffer);
    return result;
}
        
// ------------------------------------------------------------------
static int
oaEvalText_tp_compare(PyObject *ob1,PyObject* ob2)
{
    PyParamoaEvalText v1;
    PyParamoaEvalText v2;
    int convert_status1=PyoaEvalText_Convert(ob1,&v1);
    int convert_status2=PyoaEvalText_Convert(ob2,&v2);
    assert(convert_status1!=0);
    assert(convert_status2!=0);
    if (v1.DataCall()==v2.DataCall()) return 0;
    return 1;
}
        
// ------------------------------------------------------------------
int
PyoaEvalText_Convert(PyObject* ob,PyParamoaEvalText* result)
{
    if (ob == NULL) return 1;
    if (PyoaEvalText_Check(ob)) {
        result->SetData( (oaEvalText**) ((PyoaEvalTextObject*)ob)->value);
        return 1;
    }
    PyErr_SetString(PyExc_TypeError,
        "Convertion of parameter to class: oaEvalText Failed");
    return 0;
}
// ------------------------------------------------------------------
PyObject* PyoaEvalText_FromoaEvalText(oaEvalText** value,int borrow,PyObject* lock)
{
    if (value && *value) {
        oaEvalText* data=*value;
        PyObject* bself = PyoaEvalText_Type.tp_alloc(&PyoaEvalText_Type,0);
        if (bself == NULL) return bself;
        PyoaEvalTextObject* self = (PyoaEvalTextObject*)bself;
        self->value = (oaObject**) value;
        self->data = NULL;
        self->locks = NULL;
        self->borrow = 0; // Ignore borrow flag, since we copied
       if (lock) PyoaLockObject(self->locks,lock);
        return bself;
    }
    Py_INCREF(Py_None);
    return Py_None;
}
// ------------------------------------------------------------------
PyObject* PyoaEvalText_FromoaEvalText(oaEvalText* data)
{
    if (data) {
       PyObject* bself = PyoaEvalText_Type.tp_alloc(&PyoaEvalText_Type,0);
       if (bself == NULL) return bself;
       PyoaEvalTextObject* self = (PyoaEvalTextObject*)bself;
       self->data = (oaObject*) data;
       self->value = &(self->data);
       self->borrow = 0; 
       self->locks = NULL;
       return bself;
    }
    Py_INCREF(Py_None);
    return Py_None;
}

// ------------------------------------------------------------------
// FunctionMethods:
// ------------------------------------------------------------------

// ------------------------------------------------------------------
static char oaEvalText_getEvaluatorName_doc[] = 
"Class: oaEvalText, Function: getEvaluatorName\n"
"  Paramegers: (oaString)\n"
"    Calls: void getEvaluatorName(oaString& name) const\n"
"    Signature: getEvaluatorName|void-void|ref-oaString,\n"
"    BrowseData: 0,oaString\n"
"    This function returns the name of the IEvalText used by this text object.\n"
"    name\n"
"    the returned name of this text object's evaluator.\n"
;

static PyObject*
oaEvalText_getEvaluatorName(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaEvalText data;
    int convert_status=PyoaEvalText_Convert(ob,&data);
    assert(convert_status!=0);
    PyoaEvalTextObject* self=(PyoaEvalTextObject*)ob;
    if (!PyValidateDbObject(data.Data(),0)) return NULL;

    PyParamoaString p1;
    if (PyArg_ParseTuple(args,"O&",
          &PyoaString_Convert,&p1)) {
        data.DataCall()->getEvaluatorName(p1.Data());
        Py_INCREF(Py_None);
        return Py_None;
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaEvalText_getExpression_doc[] = 
"Class: oaEvalText, Function: getExpression\n"
"  Paramegers: (oaString)\n"
"    Calls: void getExpression(oaString& text) const\n"
"    Signature: getExpression|void-void|ref-oaString,\n"
"    BrowseData: 0,oaString\n"
"    This function fills out the value text with the non-evaluated text of this oaEvalText object. To get the evaluated text, use the oaText::getText() API. The base oaText class function evaluates the text.\n"
;

static PyObject*
oaEvalText_getExpression(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaEvalText data;
    int convert_status=PyoaEvalText_Convert(ob,&data);
    assert(convert_status!=0);
    PyoaEvalTextObject* self=(PyoaEvalTextObject*)ob;
    if (!PyValidateDbObject(data.Data(),0)) return NULL;

    PyParamoaString p1;
    if (PyArg_ParseTuple(args,"O&",
          &PyoaString_Convert,&p1)) {
        data.DataCall()->getExpression(p1.Data());
        Py_INCREF(Py_None);
        return Py_None;
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaEvalText_getLink_doc[] = 
"Class: oaEvalText, Function: getLink\n"
"  Paramegers: ()\n"
"    Calls: oaEvalTextLink* getLink() const\n"
"    Signature: getLink|ptr-oaEvalTextLink|\n"
"    BrowseData: 1\n"
"    This function returns the oaEvalTextLink used by this text object if it's evaluated.\n"
;

static PyObject*
oaEvalText_getLink(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaEvalText data;
    int convert_status=PyoaEvalText_Convert(ob,&data);
    assert(convert_status!=0);
    PyoaEvalTextObject* self=(PyoaEvalTextObject*)ob;
    if (!PyValidateDbObject(data.Data(),0)) return NULL;

    if (PyArg_ParseTuple(args,"")) {
        oaEvalTextLinkp result= (data.DataCall()->getLink());
        return PyoaEvalTextLink_FromoaEvalTextLink(result);
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaEvalText_setLink_doc[] = 
"Class: oaEvalText, Function: setLink\n"
"  Paramegers: (oaEvalTextLink)\n"
"    Calls: void setLink(oaEvalTextLink* linkIn)\n"
"    Signature: setLink|void-void|ptr-oaEvalTextLink,\n"
"    This function sets the oaEvalTextLink used by this text object to interpret the text string. If the interface is NULL, the text will not be interpreted.\n"
"    linkIn\n"
"    The link to an application-provided evalText evaluator implementing the IEvalText class, which is used to interpret the text.\n"
;

static PyObject*
oaEvalText_setLink(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaEvalText data;
    int convert_status=PyoaEvalText_Convert(ob,&data);
    assert(convert_status!=0);
    PyoaEvalTextObject* self=(PyoaEvalTextObject*)ob;
    if (!PyValidateDbObject(data.Data(),0)) return NULL;

    PyParamoaEvalTextLink p1;
    if (PyArg_ParseTuple(args,"O&",
          &PyoaEvalTextLink_Convert,&p1)) {
        if (!PyValidateDbObject(p1.Data(),1)) return NULL;
        data.DataCall()->setLink(p1.Data());
        Py_INCREF(Py_None);
        return Py_None;
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaEvalText_isNull_doc[] =
"Class: oaEvalText, Function: isNull\n"
"  Parameters: () \n"
"    This functions returns 1 if the DbPointer is NULL, and 0 otherwise.\n"
;

static PyObject*
oaEvalText_tp_isNull(PyObject* ob, PyObject *args)
{
    PyParamoaEvalText data;
    int convert_status=PyoaEvalText_Convert(ob,&data);
    assert(convert_status!=0);
    if (data.DataCall()==NULL)
        return PyInt_FromLong(1);
    else
        return PyInt_FromLong(0);
}
static char oaEvalText_assign_doc[] = 
"Class: oaEvalText, Function: set\n"
"  Paramegers: (oaDouble)\n"
"    This function sets the current value.\n"
;

static PyObject*
oaEvalText_tp_assign(PyObject* ob, PyObject *args)
{
  PyParamoaEvalText data;
  int convert_status=PyoaEvalText_Convert(ob,&data);
  assert(convert_status!=0);
  try {
    PyParamoaEvalText p1;
    if (PyArg_ParseTuple(args,(char*)"O&",
          &PyoaEvalText_Convert,&p1)) {
        data.Data()=p1.Data();
        Py_INCREF(ob);
        return ob;
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}


// ------------------------------------------------------------------
//  Function Methods Table:
// ------------------------------------------------------------------

static PyMethodDef oaEvalText_methodlist[] = {
    {"getEvaluatorName",(PyCFunction)oaEvalText_getEvaluatorName,METH_VARARGS,oaEvalText_getEvaluatorName_doc},
    {"getExpression",(PyCFunction)oaEvalText_getExpression,METH_VARARGS,oaEvalText_getExpression_doc},
    {"getLink",(PyCFunction)oaEvalText_getLink,METH_VARARGS,oaEvalText_getLink_doc},
    {"setLink",(PyCFunction)oaEvalText_setLink,METH_VARARGS,oaEvalText_setLink_doc},
    {"isNull",(PyCFunction)oaEvalText_tp_isNull,METH_VARARGS,oaEvalText_isNull_doc},
    {"assign",(PyCFunction)oaEvalText_tp_assign,METH_VARARGS,oaEvalText_assign_doc},
   {NULL,NULL,0,NULL}
};


// ------------------------------------------------------------------
//  Type Object:
// ------------------------------------------------------------------

// ------------------------------------------------------------------
static char oaEvalText_doc[] = 
"Class: oaEvalText\n"
"  The oaEvalText class implements an oaEvalText shape that is used to display a piece of text. The shape is derived from oaText and is very similar. The difference is that an oaEvalText is evaluated to determine what text string it should display. The oaEvalText still has a text field, but this is evaluated to generate the actual displayed text string. To support this capability, an oaTextDataCallBack argument is used to process the evaluation.\n"
"Constructors:\n"
"  Paramegers: (oaEvalText)\n"
"    Calls: (const oaEvalText&)\n"
"    Signature: oaEvalText||cref-oaEvalText,\n"
;

// ------------------------------------------------------------------
PyTypeObject PyoaEvalText_Type = {
    PyObject_HEAD_INIT(&PyType_Type)
    0,
    "oaEvalText",
    sizeof(PyoaEvalTextObject),
    0,
    (destructor)oaEvalText_tp_dealloc,	/* tp_dealloc */
    0,	/* tp_print */
    0,					/* tp_getattr */
    0,					/* tp_setattr */
    (cmpfunc)oaEvalText_tp_compare,	/* tp_compare */
    (reprfunc)oaEvalText_tp_repr,	/* tp_repr */
    0,					/* tp_as_number */
    0,					/* tp_as_sequence */
    0,					/* tp_as_mapping */
    0,					/* tp_as_hash */
    0,					/* tp_as_call */
    0,					/* tp_str */
    0,					/* tp_getattro */
    0,					/* tp_setattro */
    0,					/* tp_as_buffer */
    Py_TPFLAGS_DEFAULT|Py_TPFLAGS_BASETYPE, /* tp_flags */
    oaEvalText_doc,	/* tp_doc */
    0,					/* tp_traverse */
    0,					/* tp_clear */
    0,					/* tp_richcompre */
    0,					/* tp_weaklistoffset */
    0,					/* tp_iter */
    0,					/* tp_iternext */
    oaEvalText_methodlist,	/* tp_methods */
    0,					/* tp_members */
    0,					/* tp_getset */
    &PyoaText_Type,	/* tp_base */
    0,					/* tp_dict */
    0,					/* tp_descr_get */
    0,					/* tp_descr_set */
    0,					/* tp_dictoffset */
    0,					/* tp_init */
    PyType_GenericAlloc,	/* tp_alloc */
    oaEvalText_new,	/* tp_new */
    _PyObject_Del,	/* tp_free */
};


// ------------------------------------------------------------------
// Static FunctionMethods:
// ------------------------------------------------------------------

// ------------------------------------------------------------------
static char oaEvalText_static_create_doc[] = 
"Class: oaEvalText, Function: create\n"
"  Paramegers: (oaBlock,oaLayerNum,oaPurposeNum,oaString,oaPoint,oaTextAlign,oaOrient,oaFont,oaDist)\n"
"    Calls: oaEvalText* create(oaBlock* block,oaLayerNum layerNum,oaPurposeNum purposeNum,const oaString& text,const oaPoint& origin,oaTextAlign alignment,oaOrient orient,oaFont font,oaDist height)\n"
"    Signature: create|ptr-oaEvalText|ptr-oaBlock,simple-oaLayerNum,simple-oaPurposeNum,cref-oaString,cref-oaPoint,simple-oaTextAlign,simple-oaOrient,simple-oaFont,simple-oaDist,ptr-oaEvalTextLink,simple-oaBoolean,simple-oaBoolean,simple-oaBoolean,\n"
"    This function creates an evaluated text object with the specified attributes.\n"
"    block\n"
"    The block in which to create the evalText\n"
"    layerNum\n"
"    The number of the layer on which the evalText is created\n"
"    purposeNum\n"
"    The purpose number with which the evalText is created\n"
"    text\n"
"    The text string to evaluate\n"
"    origin\n"
"    The location of the origin of the evalText\n"
"    alignment\n"
"    The horizontal and vertical alignment of the display text with respect to the origin\n"
"    orient\n"
"    The orientation of the text\n"
"    font\n"
"    The font style with which the text is displayed\n"
"    height\n"
"    The height of the display text in user-units\n"
"    linkIn\n"
"    This is the oaEvalTextLink for the evalText evaluator\n"
"    overbar\n"
"    A boolean value that indicates if an overbar is used in the display of this value; the default is false\n"
"    visible\n"
"    A boolean value that indicates if this evalText is displayed; the default is true (this value allows an application to turn ON or OFF the evalText display without having to delete it from the database)\n"
"    drafting\n"
"    A boolean value that indicates if the text for this evalText should always be drawn left-to-right or top-to-bottom; the default is true (if drafting is true and the orientation of this evalText is mirrored, the text is drawn backwards)\n"
"    Note: The specified oaEvalTextLink is a link to an application-provided evalText evaluator implementing the IEvalText class, which is used to interpret the text.\n"
"  Paramegers: (oaBlock,oaLayerNum,oaPurposeNum,oaString,oaPoint,oaTextAlign,oaOrient,oaFont,oaDist,oaEvalTextLink)\n"
"    Calls: oaEvalText* create(oaBlock* block,oaLayerNum layerNum,oaPurposeNum purposeNum,const oaString& text,const oaPoint& origin,oaTextAlign alignment,oaOrient orient,oaFont font,oaDist height,oaEvalTextLink* linkIn)\n"
"    Signature: create|ptr-oaEvalText|ptr-oaBlock,simple-oaLayerNum,simple-oaPurposeNum,cref-oaString,cref-oaPoint,simple-oaTextAlign,simple-oaOrient,simple-oaFont,simple-oaDist,ptr-oaEvalTextLink,simple-oaBoolean,simple-oaBoolean,simple-oaBoolean,\n"
"    This function creates an evaluated text object with the specified attributes.\n"
"    block\n"
"    The block in which to create the evalText\n"
"    layerNum\n"
"    The number of the layer on which the evalText is created\n"
"    purposeNum\n"
"    The purpose number with which the evalText is created\n"
"    text\n"
"    The text string to evaluate\n"
"    origin\n"
"    The location of the origin of the evalText\n"
"    alignment\n"
"    The horizontal and vertical alignment of the display text with respect to the origin\n"
"    orient\n"
"    The orientation of the text\n"
"    font\n"
"    The font style with which the text is displayed\n"
"    height\n"
"    The height of the display text in user-units\n"
"    linkIn\n"
"    This is the oaEvalTextLink for the evalText evaluator\n"
"    overbar\n"
"    A boolean value that indicates if an overbar is used in the display of this value; the default is false\n"
"    visible\n"
"    A boolean value that indicates if this evalText is displayed; the default is true (this value allows an application to turn ON or OFF the evalText display without having to delete it from the database)\n"
"    drafting\n"
"    A boolean value that indicates if the text for this evalText should always be drawn left-to-right or top-to-bottom; the default is true (if drafting is true and the orientation of this evalText is mirrored, the text is drawn backwards)\n"
"    Note: The specified oaEvalTextLink is a link to an application-provided evalText evaluator implementing the IEvalText class, which is used to interpret the text.\n"
"  Paramegers: (oaBlock,oaLayerNum,oaPurposeNum,oaString,oaPoint,oaTextAlign,oaOrient,oaFont,oaDist,oaEvalTextLink,oaBoolean)\n"
"    Calls: oaEvalText* create(oaBlock* block,oaLayerNum layerNum,oaPurposeNum purposeNum,const oaString& text,const oaPoint& origin,oaTextAlign alignment,oaOrient orient,oaFont font,oaDist height,oaEvalTextLink* linkIn,oaBoolean overbar)\n"
"    Signature: create|ptr-oaEvalText|ptr-oaBlock,simple-oaLayerNum,simple-oaPurposeNum,cref-oaString,cref-oaPoint,simple-oaTextAlign,simple-oaOrient,simple-oaFont,simple-oaDist,ptr-oaEvalTextLink,simple-oaBoolean,simple-oaBoolean,simple-oaBoolean,\n"
"    This function creates an evaluated text object with the specified attributes.\n"
"    block\n"
"    The block in which to create the evalText\n"
"    layerNum\n"
"    The number of the layer on which the evalText is created\n"
"    purposeNum\n"
"    The purpose number with which the evalText is created\n"
"    text\n"
"    The text string to evaluate\n"
"    origin\n"
"    The location of the origin of the evalText\n"
"    alignment\n"
"    The horizontal and vertical alignment of the display text with respect to the origin\n"
"    orient\n"
"    The orientation of the text\n"
"    font\n"
"    The font style with which the text is displayed\n"
"    height\n"
"    The height of the display text in user-units\n"
"    linkIn\n"
"    This is the oaEvalTextLink for the evalText evaluator\n"
"    overbar\n"
"    A boolean value that indicates if an overbar is used in the display of this value; the default is false\n"
"    visible\n"
"    A boolean value that indicates if this evalText is displayed; the default is true (this value allows an application to turn ON or OFF the evalText display without having to delete it from the database)\n"
"    drafting\n"
"    A boolean value that indicates if the text for this evalText should always be drawn left-to-right or top-to-bottom; the default is true (if drafting is true and the orientation of this evalText is mirrored, the text is drawn backwards)\n"
"    Note: The specified oaEvalTextLink is a link to an application-provided evalText evaluator implementing the IEvalText class, which is used to interpret the text.\n"
"  Paramegers: (oaBlock,oaLayerNum,oaPurposeNum,oaString,oaPoint,oaTextAlign,oaOrient,oaFont,oaDist,oaEvalTextLink,oaBoolean,oaBoolean)\n"
"    Calls: oaEvalText* create(oaBlock* block,oaLayerNum layerNum,oaPurposeNum purposeNum,const oaString& text,const oaPoint& origin,oaTextAlign alignment,oaOrient orient,oaFont font,oaDist height,oaEvalTextLink* linkIn,oaBoolean overbar,oaBoolean visible)\n"
"    Signature: create|ptr-oaEvalText|ptr-oaBlock,simple-oaLayerNum,simple-oaPurposeNum,cref-oaString,cref-oaPoint,simple-oaTextAlign,simple-oaOrient,simple-oaFont,simple-oaDist,ptr-oaEvalTextLink,simple-oaBoolean,simple-oaBoolean,simple-oaBoolean,\n"
"    This function creates an evaluated text object with the specified attributes.\n"
"    block\n"
"    The block in which to create the evalText\n"
"    layerNum\n"
"    The number of the layer on which the evalText is created\n"
"    purposeNum\n"
"    The purpose number with which the evalText is created\n"
"    text\n"
"    The text string to evaluate\n"
"    origin\n"
"    The location of the origin of the evalText\n"
"    alignment\n"
"    The horizontal and vertical alignment of the display text with respect to the origin\n"
"    orient\n"
"    The orientation of the text\n"
"    font\n"
"    The font style with which the text is displayed\n"
"    height\n"
"    The height of the display text in user-units\n"
"    linkIn\n"
"    This is the oaEvalTextLink for the evalText evaluator\n"
"    overbar\n"
"    A boolean value that indicates if an overbar is used in the display of this value; the default is false\n"
"    visible\n"
"    A boolean value that indicates if this evalText is displayed; the default is true (this value allows an application to turn ON or OFF the evalText display without having to delete it from the database)\n"
"    drafting\n"
"    A boolean value that indicates if the text for this evalText should always be drawn left-to-right or top-to-bottom; the default is true (if drafting is true and the orientation of this evalText is mirrored, the text is drawn backwards)\n"
"    Note: The specified oaEvalTextLink is a link to an application-provided evalText evaluator implementing the IEvalText class, which is used to interpret the text.\n"
"  Paramegers: (oaBlock,oaLayerNum,oaPurposeNum,oaString,oaPoint,oaTextAlign,oaOrient,oaFont,oaDist,oaEvalTextLink,oaBoolean,oaBoolean,oaBoolean)\n"
"    Calls: oaEvalText* create(oaBlock* block,oaLayerNum layerNum,oaPurposeNum purposeNum,const oaString& text,const oaPoint& origin,oaTextAlign alignment,oaOrient orient,oaFont font,oaDist height,oaEvalTextLink* linkIn,oaBoolean overbar,oaBoolean visible,oaBoolean drafting)\n"
"    Signature: create|ptr-oaEvalText|ptr-oaBlock,simple-oaLayerNum,simple-oaPurposeNum,cref-oaString,cref-oaPoint,simple-oaTextAlign,simple-oaOrient,simple-oaFont,simple-oaDist,ptr-oaEvalTextLink,simple-oaBoolean,simple-oaBoolean,simple-oaBoolean,\n"
"    This function creates an evaluated text object with the specified attributes.\n"
"    block\n"
"    The block in which to create the evalText\n"
"    layerNum\n"
"    The number of the layer on which the evalText is created\n"
"    purposeNum\n"
"    The purpose number with which the evalText is created\n"
"    text\n"
"    The text string to evaluate\n"
"    origin\n"
"    The location of the origin of the evalText\n"
"    alignment\n"
"    The horizontal and vertical alignment of the display text with respect to the origin\n"
"    orient\n"
"    The orientation of the text\n"
"    font\n"
"    The font style with which the text is displayed\n"
"    height\n"
"    The height of the display text in user-units\n"
"    linkIn\n"
"    This is the oaEvalTextLink for the evalText evaluator\n"
"    overbar\n"
"    A boolean value that indicates if an overbar is used in the display of this value; the default is false\n"
"    visible\n"
"    A boolean value that indicates if this evalText is displayed; the default is true (this value allows an application to turn ON or OFF the evalText display without having to delete it from the database)\n"
"    drafting\n"
"    A boolean value that indicates if the text for this evalText should always be drawn left-to-right or top-to-bottom; the default is true (if drafting is true and the orientation of this evalText is mirrored, the text is drawn backwards)\n"
"    Note: The specified oaEvalTextLink is a link to an application-provided evalText evaluator implementing the IEvalText class, which is used to interpret the text.\n"
"  Paramegers: (oaBlock,oaLayerNum,oaPurposeNum,oaString,oaPoint,oaTextAlign,oaOrient,oaFont,oaDist,oaString)\n"
"    Calls: oaEvalText* create(oaBlock* block,oaLayerNum layerNum,oaPurposeNum purposeNum,const oaString& text,const oaPoint& origin,oaTextAlign alignment,oaOrient orient,oaFont font,oaDist height,const oaString& linkName)\n"
"    Signature: create|ptr-oaEvalText|ptr-oaBlock,simple-oaLayerNum,simple-oaPurposeNum,cref-oaString,cref-oaPoint,simple-oaTextAlign,simple-oaOrient,simple-oaFont,simple-oaDist,cref-oaString,simple-oaBoolean,simple-oaBoolean,simple-oaBoolean,\n"
"    This function creates an evaluated text object with the specified attributes using a dataObserver name as input. The corresponding oaTextDataObserver object does not have to exist. The observer object can be instantiated at any time.\n"
"    block\n"
"    The block in which to create the evalText\n"
"    layerNum\n"
"    The number of the layer on which the evalText is created\n"
"    purposeNum\n"
"    The purpose number with which the evalText is created\n"
"    text\n"
"    The text string to evaluate\n"
"    origin\n"
"    The location of the origin of the evalText\n"
"    alignment\n"
"    The horizontal and vertical alignment of the display text with respect to the origin\n"
"    orient\n"
"    The orientation of the text\n"
"    font\n"
"    The font style with which the text is displayed\n"
"    height\n"
"    The height of the display text in user-units\n"
"    cbName\n"
"    The name of the dataObserver to pass to the create function\n"
"    overbar\n"
"    A boolean value that indicates if an overbar is used in the display of this value; the default is false\n"
"    visible\n"
"    A boolean value that indicates if this evalText is displayed; the default is true (this value allows an application to turn ON or OFF the evalText display without having to delete it from the database)\n"
"    drafting\n"
"    A boolean value that indicates if the text for this evalText should always be drawn left-to-right or top-to-bottom; the default is true (if drafting is true and the orientation of this evalText is mirrored, the text is drawn backwards)\n"
"  Paramegers: (oaBlock,oaLayerNum,oaPurposeNum,oaString,oaPoint,oaTextAlign,oaOrient,oaFont,oaDist,oaString,oaBoolean)\n"
"    Calls: oaEvalText* create(oaBlock* block,oaLayerNum layerNum,oaPurposeNum purposeNum,const oaString& text,const oaPoint& origin,oaTextAlign alignment,oaOrient orient,oaFont font,oaDist height,const oaString& linkName,oaBoolean overbar)\n"
"    Signature: create|ptr-oaEvalText|ptr-oaBlock,simple-oaLayerNum,simple-oaPurposeNum,cref-oaString,cref-oaPoint,simple-oaTextAlign,simple-oaOrient,simple-oaFont,simple-oaDist,cref-oaString,simple-oaBoolean,simple-oaBoolean,simple-oaBoolean,\n"
"    This function creates an evaluated text object with the specified attributes using a dataObserver name as input. The corresponding oaTextDataObserver object does not have to exist. The observer object can be instantiated at any time.\n"
"    block\n"
"    The block in which to create the evalText\n"
"    layerNum\n"
"    The number of the layer on which the evalText is created\n"
"    purposeNum\n"
"    The purpose number with which the evalText is created\n"
"    text\n"
"    The text string to evaluate\n"
"    origin\n"
"    The location of the origin of the evalText\n"
"    alignment\n"
"    The horizontal and vertical alignment of the display text with respect to the origin\n"
"    orient\n"
"    The orientation of the text\n"
"    font\n"
"    The font style with which the text is displayed\n"
"    height\n"
"    The height of the display text in user-units\n"
"    cbName\n"
"    The name of the dataObserver to pass to the create function\n"
"    overbar\n"
"    A boolean value that indicates if an overbar is used in the display of this value; the default is false\n"
"    visible\n"
"    A boolean value that indicates if this evalText is displayed; the default is true (this value allows an application to turn ON or OFF the evalText display without having to delete it from the database)\n"
"    drafting\n"
"    A boolean value that indicates if the text for this evalText should always be drawn left-to-right or top-to-bottom; the default is true (if drafting is true and the orientation of this evalText is mirrored, the text is drawn backwards)\n"
"  Paramegers: (oaBlock,oaLayerNum,oaPurposeNum,oaString,oaPoint,oaTextAlign,oaOrient,oaFont,oaDist,oaString,oaBoolean,oaBoolean)\n"
"    Calls: oaEvalText* create(oaBlock* block,oaLayerNum layerNum,oaPurposeNum purposeNum,const oaString& text,const oaPoint& origin,oaTextAlign alignment,oaOrient orient,oaFont font,oaDist height,const oaString& linkName,oaBoolean overbar,oaBoolean visible)\n"
"    Signature: create|ptr-oaEvalText|ptr-oaBlock,simple-oaLayerNum,simple-oaPurposeNum,cref-oaString,cref-oaPoint,simple-oaTextAlign,simple-oaOrient,simple-oaFont,simple-oaDist,cref-oaString,simple-oaBoolean,simple-oaBoolean,simple-oaBoolean,\n"
"    This function creates an evaluated text object with the specified attributes using a dataObserver name as input. The corresponding oaTextDataObserver object does not have to exist. The observer object can be instantiated at any time.\n"
"    block\n"
"    The block in which to create the evalText\n"
"    layerNum\n"
"    The number of the layer on which the evalText is created\n"
"    purposeNum\n"
"    The purpose number with which the evalText is created\n"
"    text\n"
"    The text string to evaluate\n"
"    origin\n"
"    The location of the origin of the evalText\n"
"    alignment\n"
"    The horizontal and vertical alignment of the display text with respect to the origin\n"
"    orient\n"
"    The orientation of the text\n"
"    font\n"
"    The font style with which the text is displayed\n"
"    height\n"
"    The height of the display text in user-units\n"
"    cbName\n"
"    The name of the dataObserver to pass to the create function\n"
"    overbar\n"
"    A boolean value that indicates if an overbar is used in the display of this value; the default is false\n"
"    visible\n"
"    A boolean value that indicates if this evalText is displayed; the default is true (this value allows an application to turn ON or OFF the evalText display without having to delete it from the database)\n"
"    drafting\n"
"    A boolean value that indicates if the text for this evalText should always be drawn left-to-right or top-to-bottom; the default is true (if drafting is true and the orientation of this evalText is mirrored, the text is drawn backwards)\n"
"  Paramegers: (oaBlock,oaLayerNum,oaPurposeNum,oaString,oaPoint,oaTextAlign,oaOrient,oaFont,oaDist,oaString,oaBoolean,oaBoolean,oaBoolean)\n"
"    Calls: oaEvalText* create(oaBlock* block,oaLayerNum layerNum,oaPurposeNum purposeNum,const oaString& text,const oaPoint& origin,oaTextAlign alignment,oaOrient orient,oaFont font,oaDist height,const oaString& linkName,oaBoolean overbar,oaBoolean visible,oaBoolean drafting)\n"
"    Signature: create|ptr-oaEvalText|ptr-oaBlock,simple-oaLayerNum,simple-oaPurposeNum,cref-oaString,cref-oaPoint,simple-oaTextAlign,simple-oaOrient,simple-oaFont,simple-oaDist,cref-oaString,simple-oaBoolean,simple-oaBoolean,simple-oaBoolean,\n"
"    This function creates an evaluated text object with the specified attributes using a dataObserver name as input. The corresponding oaTextDataObserver object does not have to exist. The observer object can be instantiated at any time.\n"
"    block\n"
"    The block in which to create the evalText\n"
"    layerNum\n"
"    The number of the layer on which the evalText is created\n"
"    purposeNum\n"
"    The purpose number with which the evalText is created\n"
"    text\n"
"    The text string to evaluate\n"
"    origin\n"
"    The location of the origin of the evalText\n"
"    alignment\n"
"    The horizontal and vertical alignment of the display text with respect to the origin\n"
"    orient\n"
"    The orientation of the text\n"
"    font\n"
"    The font style with which the text is displayed\n"
"    height\n"
"    The height of the display text in user-units\n"
"    cbName\n"
"    The name of the dataObserver to pass to the create function\n"
"    overbar\n"
"    A boolean value that indicates if an overbar is used in the display of this value; the default is false\n"
"    visible\n"
"    A boolean value that indicates if this evalText is displayed; the default is true (this value allows an application to turn ON or OFF the evalText display without having to delete it from the database)\n"
"    drafting\n"
"    A boolean value that indicates if the text for this evalText should always be drawn left-to-right or top-to-bottom; the default is true (if drafting is true and the orientation of this evalText is mirrored, the text is drawn backwards)\n"
;

static PyObject*
oaEvalText_static_create(PyObject* ob, PyObject *args)
{
  try {
    // Case: (oaBlock,oaLayerNum,oaPurposeNum,oaString,oaPoint,oaTextAlign,oaOrient,oaFont,oaDist)
    {
        PyParamoaBlock p1;
        PyParamoaLayerNum p2;
        PyParamoaPurposeNum p3;
        PyParamoaString p4;
        PyParamoaPoint p5;
        PyParamoaTextAlign p6;
        PyParamoaOrient p7;
        PyParamoaFont p8;
        PyParamoaDist p9;
        if (PyArg_ParseTuple(args,"O&O&O&O&O&O&O&O&O&",
              &PyoaBlock_Convert,&p1,
              &PyoaLayerNum_Convert,&p2,
              &PyoaPurposeNum_Convert,&p3,
              &PyoaString_Convert,&p4,
              &PyoaPoint_Convert,&p5,
              &PyoaTextAlign_Convert,&p6,
              &PyoaOrient_Convert,&p7,
              &PyoaFont_Convert,&p8,
              &PyoaDist_Convert,&p9)) {
            if (!PyValidateDbObject(p1.Data(),1)) return NULL;
            oaEvalTextp result= (oaEvalText::create(p1.Data(),p2.Data(),p3.Data(),p4.Data(),p5.Data(),p6.Data(),p7.Data(),p8.Data(),p9.Data()));
            return PyoaEvalText_FromoaEvalText(result);
        }
    }
    PyErr_Clear();
    // Case: (oaBlock,oaLayerNum,oaPurposeNum,oaString,oaPoint,oaTextAlign,oaOrient,oaFont,oaDist,oaEvalTextLink)
    {
        PyParamoaBlock p1;
        PyParamoaLayerNum p2;
        PyParamoaPurposeNum p3;
        PyParamoaString p4;
        PyParamoaPoint p5;
        PyParamoaTextAlign p6;
        PyParamoaOrient p7;
        PyParamoaFont p8;
        PyParamoaDist p9;
        PyParamoaEvalTextLink p10;
        if (PyArg_ParseTuple(args,"O&O&O&O&O&O&O&O&O&O&",
              &PyoaBlock_Convert,&p1,
              &PyoaLayerNum_Convert,&p2,
              &PyoaPurposeNum_Convert,&p3,
              &PyoaString_Convert,&p4,
              &PyoaPoint_Convert,&p5,
              &PyoaTextAlign_Convert,&p6,
              &PyoaOrient_Convert,&p7,
              &PyoaFont_Convert,&p8,
              &PyoaDist_Convert,&p9,
              &PyoaEvalTextLink_Convert,&p10)) {
            if (!PyValidateDbObject(p1.Data(),1)) return NULL;
            if (!PyValidateDbObject(p10.Data(),10)) return NULL;
            oaEvalTextp result= (oaEvalText::create(p1.Data(),p2.Data(),p3.Data(),p4.Data(),p5.Data(),p6.Data(),p7.Data(),p8.Data(),p9.Data(),p10.Data()));
            return PyoaEvalText_FromoaEvalText(result);
        }
    }
    PyErr_Clear();
    // Case: (oaBlock,oaLayerNum,oaPurposeNum,oaString,oaPoint,oaTextAlign,oaOrient,oaFont,oaDist,oaEvalTextLink,oaBoolean)
    {
        PyParamoaBlock p1;
        PyParamoaLayerNum p2;
        PyParamoaPurposeNum p3;
        PyParamoaString p4;
        PyParamoaPoint p5;
        PyParamoaTextAlign p6;
        PyParamoaOrient p7;
        PyParamoaFont p8;
        PyParamoaDist p9;
        PyParamoaEvalTextLink p10;
        PyParamoaBoolean p11;
        if (PyArg_ParseTuple(args,"O&O&O&O&O&O&O&O&O&O&O&",
              &PyoaBlock_Convert,&p1,
              &PyoaLayerNum_Convert,&p2,
              &PyoaPurposeNum_Convert,&p3,
              &PyoaString_Convert,&p4,
              &PyoaPoint_Convert,&p5,
              &PyoaTextAlign_Convert,&p6,
              &PyoaOrient_Convert,&p7,
              &PyoaFont_Convert,&p8,
              &PyoaDist_Convert,&p9,
              &PyoaEvalTextLink_Convert,&p10,
              &PyoaBoolean_Convert,&p11)) {
            if (!PyValidateDbObject(p1.Data(),1)) return NULL;
            if (!PyValidateDbObject(p10.Data(),10)) return NULL;
            oaEvalTextp result= (oaEvalText::create(p1.Data(),p2.Data(),p3.Data(),p4.Data(),p5.Data(),p6.Data(),p7.Data(),p8.Data(),p9.Data(),p10.Data(),p11.Data()));
            return PyoaEvalText_FromoaEvalText(result);
        }
    }
    PyErr_Clear();
    // Case: (oaBlock,oaLayerNum,oaPurposeNum,oaString,oaPoint,oaTextAlign,oaOrient,oaFont,oaDist,oaEvalTextLink,oaBoolean,oaBoolean)
    {
        PyParamoaBlock p1;
        PyParamoaLayerNum p2;
        PyParamoaPurposeNum p3;
        PyParamoaString p4;
        PyParamoaPoint p5;
        PyParamoaTextAlign p6;
        PyParamoaOrient p7;
        PyParamoaFont p8;
        PyParamoaDist p9;
        PyParamoaEvalTextLink p10;
        PyParamoaBoolean p11;
        PyParamoaBoolean p12;
        if (PyArg_ParseTuple(args,"O&O&O&O&O&O&O&O&O&O&O&O&",
              &PyoaBlock_Convert,&p1,
              &PyoaLayerNum_Convert,&p2,
              &PyoaPurposeNum_Convert,&p3,
              &PyoaString_Convert,&p4,
              &PyoaPoint_Convert,&p5,
              &PyoaTextAlign_Convert,&p6,
              &PyoaOrient_Convert,&p7,
              &PyoaFont_Convert,&p8,
              &PyoaDist_Convert,&p9,
              &PyoaEvalTextLink_Convert,&p10,
              &PyoaBoolean_Convert,&p11,
              &PyoaBoolean_Convert,&p12)) {
            if (!PyValidateDbObject(p1.Data(),1)) return NULL;
            if (!PyValidateDbObject(p10.Data(),10)) return NULL;
            oaEvalTextp result= (oaEvalText::create(p1.Data(),p2.Data(),p3.Data(),p4.Data(),p5.Data(),p6.Data(),p7.Data(),p8.Data(),p9.Data(),p10.Data(),p11.Data(),p12.Data()));
            return PyoaEvalText_FromoaEvalText(result);
        }
    }
    PyErr_Clear();
    // Case: (oaBlock,oaLayerNum,oaPurposeNum,oaString,oaPoint,oaTextAlign,oaOrient,oaFont,oaDist,oaEvalTextLink,oaBoolean,oaBoolean,oaBoolean)
    {
        PyParamoaBlock p1;
        PyParamoaLayerNum p2;
        PyParamoaPurposeNum p3;
        PyParamoaString p4;
        PyParamoaPoint p5;
        PyParamoaTextAlign p6;
        PyParamoaOrient p7;
        PyParamoaFont p8;
        PyParamoaDist p9;
        PyParamoaEvalTextLink p10;
        PyParamoaBoolean p11;
        PyParamoaBoolean p12;
        PyParamoaBoolean p13;
        if (PyArg_ParseTuple(args,"O&O&O&O&O&O&O&O&O&O&O&O&O&",
              &PyoaBlock_Convert,&p1,
              &PyoaLayerNum_Convert,&p2,
              &PyoaPurposeNum_Convert,&p3,
              &PyoaString_Convert,&p4,
              &PyoaPoint_Convert,&p5,
              &PyoaTextAlign_Convert,&p6,
              &PyoaOrient_Convert,&p7,
              &PyoaFont_Convert,&p8,
              &PyoaDist_Convert,&p9,
              &PyoaEvalTextLink_Convert,&p10,
              &PyoaBoolean_Convert,&p11,
              &PyoaBoolean_Convert,&p12,
              &PyoaBoolean_Convert,&p13)) {
            if (!PyValidateDbObject(p1.Data(),1)) return NULL;
            if (!PyValidateDbObject(p10.Data(),10)) return NULL;
            oaEvalTextp result= (oaEvalText::create(p1.Data(),p2.Data(),p3.Data(),p4.Data(),p5.Data(),p6.Data(),p7.Data(),p8.Data(),p9.Data(),p10.Data(),p11.Data(),p12.Data(),p13.Data()));
            return PyoaEvalText_FromoaEvalText(result);
        }
    }
    PyErr_Clear();
    // Case: (oaBlock,oaLayerNum,oaPurposeNum,oaString,oaPoint,oaTextAlign,oaOrient,oaFont,oaDist,oaString)
    {
        PyParamoaBlock p1;
        PyParamoaLayerNum p2;
        PyParamoaPurposeNum p3;
        PyParamoaString p4;
        PyParamoaPoint p5;
        PyParamoaTextAlign p6;
        PyParamoaOrient p7;
        PyParamoaFont p8;
        PyParamoaDist p9;
        PyParamoaString p10;
        if (PyArg_ParseTuple(args,"O&O&O&O&O&O&O&O&O&O&",
              &PyoaBlock_Convert,&p1,
              &PyoaLayerNum_Convert,&p2,
              &PyoaPurposeNum_Convert,&p3,
              &PyoaString_Convert,&p4,
              &PyoaPoint_Convert,&p5,
              &PyoaTextAlign_Convert,&p6,
              &PyoaOrient_Convert,&p7,
              &PyoaFont_Convert,&p8,
              &PyoaDist_Convert,&p9,
              &PyoaString_Convert,&p10)) {
            if (!PyValidateDbObject(p1.Data(),1)) return NULL;
            oaEvalTextp result= (oaEvalText::create(p1.Data(),p2.Data(),p3.Data(),p4.Data(),p5.Data(),p6.Data(),p7.Data(),p8.Data(),p9.Data(),p10.Data()));
            return PyoaEvalText_FromoaEvalText(result);
        }
    }
    PyErr_Clear();
    // Case: (oaBlock,oaLayerNum,oaPurposeNum,oaString,oaPoint,oaTextAlign,oaOrient,oaFont,oaDist,oaString,oaBoolean)
    {
        PyParamoaBlock p1;
        PyParamoaLayerNum p2;
        PyParamoaPurposeNum p3;
        PyParamoaString p4;
        PyParamoaPoint p5;
        PyParamoaTextAlign p6;
        PyParamoaOrient p7;
        PyParamoaFont p8;
        PyParamoaDist p9;
        PyParamoaString p10;
        PyParamoaBoolean p11;
        if (PyArg_ParseTuple(args,"O&O&O&O&O&O&O&O&O&O&O&",
              &PyoaBlock_Convert,&p1,
              &PyoaLayerNum_Convert,&p2,
              &PyoaPurposeNum_Convert,&p3,
              &PyoaString_Convert,&p4,
              &PyoaPoint_Convert,&p5,
              &PyoaTextAlign_Convert,&p6,
              &PyoaOrient_Convert,&p7,
              &PyoaFont_Convert,&p8,
              &PyoaDist_Convert,&p9,
              &PyoaString_Convert,&p10,
              &PyoaBoolean_Convert,&p11)) {
            if (!PyValidateDbObject(p1.Data(),1)) return NULL;
            oaEvalTextp result= (oaEvalText::create(p1.Data(),p2.Data(),p3.Data(),p4.Data(),p5.Data(),p6.Data(),p7.Data(),p8.Data(),p9.Data(),p10.Data(),p11.Data()));
            return PyoaEvalText_FromoaEvalText(result);
        }
    }
    PyErr_Clear();
    // Case: (oaBlock,oaLayerNum,oaPurposeNum,oaString,oaPoint,oaTextAlign,oaOrient,oaFont,oaDist,oaString,oaBoolean,oaBoolean)
    {
        PyParamoaBlock p1;
        PyParamoaLayerNum p2;
        PyParamoaPurposeNum p3;
        PyParamoaString p4;
        PyParamoaPoint p5;
        PyParamoaTextAlign p6;
        PyParamoaOrient p7;
        PyParamoaFont p8;
        PyParamoaDist p9;
        PyParamoaString p10;
        PyParamoaBoolean p11;
        PyParamoaBoolean p12;
        if (PyArg_ParseTuple(args,"O&O&O&O&O&O&O&O&O&O&O&O&",
              &PyoaBlock_Convert,&p1,
              &PyoaLayerNum_Convert,&p2,
              &PyoaPurposeNum_Convert,&p3,
              &PyoaString_Convert,&p4,
              &PyoaPoint_Convert,&p5,
              &PyoaTextAlign_Convert,&p6,
              &PyoaOrient_Convert,&p7,
              &PyoaFont_Convert,&p8,
              &PyoaDist_Convert,&p9,
              &PyoaString_Convert,&p10,
              &PyoaBoolean_Convert,&p11,
              &PyoaBoolean_Convert,&p12)) {
            if (!PyValidateDbObject(p1.Data(),1)) return NULL;
            oaEvalTextp result= (oaEvalText::create(p1.Data(),p2.Data(),p3.Data(),p4.Data(),p5.Data(),p6.Data(),p7.Data(),p8.Data(),p9.Data(),p10.Data(),p11.Data(),p12.Data()));
            return PyoaEvalText_FromoaEvalText(result);
        }
    }
    PyErr_Clear();
    // Case: (oaBlock,oaLayerNum,oaPurposeNum,oaString,oaPoint,oaTextAlign,oaOrient,oaFont,oaDist,oaString,oaBoolean,oaBoolean,oaBoolean)
    {
        PyParamoaBlock p1;
        PyParamoaLayerNum p2;
        PyParamoaPurposeNum p3;
        PyParamoaString p4;
        PyParamoaPoint p5;
        PyParamoaTextAlign p6;
        PyParamoaOrient p7;
        PyParamoaFont p8;
        PyParamoaDist p9;
        PyParamoaString p10;
        PyParamoaBoolean p11;
        PyParamoaBoolean p12;
        PyParamoaBoolean p13;
        if (PyArg_ParseTuple(args,"O&O&O&O&O&O&O&O&O&O&O&O&O&",
              &PyoaBlock_Convert,&p1,
              &PyoaLayerNum_Convert,&p2,
              &PyoaPurposeNum_Convert,&p3,
              &PyoaString_Convert,&p4,
              &PyoaPoint_Convert,&p5,
              &PyoaTextAlign_Convert,&p6,
              &PyoaOrient_Convert,&p7,
              &PyoaFont_Convert,&p8,
              &PyoaDist_Convert,&p9,
              &PyoaString_Convert,&p10,
              &PyoaBoolean_Convert,&p11,
              &PyoaBoolean_Convert,&p12,
              &PyoaBoolean_Convert,&p13)) {
            if (!PyValidateDbObject(p1.Data(),1)) return NULL;
            oaEvalTextp result= (oaEvalText::create(p1.Data(),p2.Data(),p3.Data(),p4.Data(),p5.Data(),p6.Data(),p7.Data(),p8.Data(),p9.Data(),p10.Data(),p11.Data(),p12.Data(),p13.Data()));
            return PyoaEvalText_FromoaEvalText(result);
        }
    }
    PyErr_Clear();
    PyErr_SetString(PyExc_TypeError,
        "No Arg-Matching Function found for class: oaEvalText, function: create, Choices are:\n"
        "    (oaBlock,oaLayerNum,oaPurposeNum,oaString,oaPoint,oaTextAlign,oaOrient,oaFont,oaDist)\n"
        "    (oaBlock,oaLayerNum,oaPurposeNum,oaString,oaPoint,oaTextAlign,oaOrient,oaFont,oaDist,oaEvalTextLink)\n"
        "    (oaBlock,oaLayerNum,oaPurposeNum,oaString,oaPoint,oaTextAlign,oaOrient,oaFont,oaDist,oaEvalTextLink,oaBoolean)\n"
        "    (oaBlock,oaLayerNum,oaPurposeNum,oaString,oaPoint,oaTextAlign,oaOrient,oaFont,oaDist,oaEvalTextLink,oaBoolean,oaBoolean)\n"
        "    (oaBlock,oaLayerNum,oaPurposeNum,oaString,oaPoint,oaTextAlign,oaOrient,oaFont,oaDist,oaEvalTextLink,oaBoolean,oaBoolean,oaBoolean)\n"
        "    (oaBlock,oaLayerNum,oaPurposeNum,oaString,oaPoint,oaTextAlign,oaOrient,oaFont,oaDist,oaString)\n"
        "    (oaBlock,oaLayerNum,oaPurposeNum,oaString,oaPoint,oaTextAlign,oaOrient,oaFont,oaDist,oaString,oaBoolean)\n"
        "    (oaBlock,oaLayerNum,oaPurposeNum,oaString,oaPoint,oaTextAlign,oaOrient,oaFont,oaDist,oaString,oaBoolean,oaBoolean)\n"
        "    (oaBlock,oaLayerNum,oaPurposeNum,oaString,oaPoint,oaTextAlign,oaOrient,oaFont,oaDist,oaString,oaBoolean,oaBoolean,oaBoolean)\n"
    );
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static PyMethodDef oaEvalText_staticmethodlist[] = {
    {"static_create",(PyCFunction)oaEvalText_static_create,METH_VARARGS,oaEvalText_static_create_doc},
   {NULL,NULL,0,NULL}
};


// ------------------------------------------------------------------
//  Type Init:
// ------------------------------------------------------------------

int
PyoaEvalText_TypeInit(PyObject* mod_dict)
{
    if (PyType_Ready(&PyoaEvalText_Type)<0) {
      printf("** PyType_Ready failed for: oaEvalText\n");
      return -1;
    }

    if (PyDict_SetItemString(mod_dict,"oaEvalText",
           (PyObject*)(&PyoaEvalText_Type))<0) {
       printf("** Failed to add type name to module dictionary for: oaEvalText\n");
       return -1;
    }

    PyObject *dict, *value;
    PyMethodDef *method;
    dict=PyoaEvalText_Type.tp_dict;
    for(method=oaEvalText_staticmethodlist;method->ml_name!=NULL;method++) {
        value=PyCFunction_New(method,NULL);
    if (value==NULL) return -1;
        if (PyDict_SetItemString(dict,method->ml_name,value)!=0) {
        Py_DECREF(value);
            printf("** Failed to add static function to module dictionary for: %s\n",
                method->ml_name);
            return -1;
        }
        Py_DECREF(value);
    }
    return 0;
}


/********************************************************************
 *   Copyright 2002-2008  LSI Corporation
 *
 *   Licensed under the Apache License, Version 2.0 (the "License");
 *   you may not use this file except in compliance with the License.
 *   You may obtain a copy of the License at
 *
 *       http://www.apache.org/licenses/LICENSE-2.0
 *
 *   Unless required by applicable law or agreed to in writing, software
 *   distributed under the License is distributed on an "AS IS" BASIS,
 *   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *   See the License for the specific language governing permissions and
 *   limitations under the License.
 *
 *******************************************************************/

#include "pyoa_header.h"


// ==================================================================
// Wrapper Implementation for Class: oaEvalTextLink
// ==================================================================


// ==================================================================
// Alloc/Dealloc Routines
// ==================================================================

// ------------------------------------------------------------------
static PyObject*
oaEvalTextLink_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
  try {
    int is_raw=(type==&PyoaEvalTextLink_Type);
    PyObject* bself = type->tp_alloc(type,0);
    if (bself == NULL) return bself;
    PyoaEvalTextLinkObject* self = (PyoaEvalTextLinkObject*)bself;
    self->locks = NULL;
    self->borrow = 0;
    static char *kwlist [] = { NULL } ;
    // Case: (oaEvalTextLink)
    {
        PyParamoaEvalTextLink p1;
        if (PyArg_ParseTuple(args,(char*)"O&",
              &PyoaEvalTextLink_Convert,&p1)) {
            self->data=p1.Data();
            self->value=&(self->data);
            return bself;
        }
    }
    PyErr_Clear();
    // Case: ()
    {
        if (PyArg_ParseTuple(args,(char*)"")) {
          self->data=NULL;
          self->value=&(self->data);
          return bself;
        }
    }
    PyErr_Clear();
    PyErr_SetString(PyExc_TypeError,
        "No Arg-Matching Constructor found for class: oaEvalTextLink, Choices are:\n"
        "    (oaEvalTextLink)\n"
    );
    Py_DECREF(self);
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static void
oaEvalTextLink_tp_dealloc(PyoaEvalTextLinkObject* self)
{
    self->ob_type->tp_free((PyObject*)self);
}

// ------------------------------------------------------------------
static PyObject*
oaEvalTextLink_tp_repr(PyObject *ob)
{
    PyParamoaEvalTextLink value;
    int convert_status=PyoaEvalTextLink_Convert(ob,&value);
    assert(convert_status!=0);
    PyObject* result;

    char buffer[36];
    sprintf(buffer,"<oaEvalTextLink::" DISPLAY_FORMAT ">",POINTER_AS_DISPLAY(value.DataCall()));
    result=PyString_FromString(buffer);
    return result;
}
        
// ------------------------------------------------------------------
static int
oaEvalTextLink_tp_compare(PyObject *ob1,PyObject* ob2)
{
    PyParamoaEvalTextLink v1;
    PyParamoaEvalTextLink v2;
    int convert_status1=PyoaEvalTextLink_Convert(ob1,&v1);
    int convert_status2=PyoaEvalTextLink_Convert(ob2,&v2);
    assert(convert_status1!=0);
    assert(convert_status2!=0);
    if (v1.DataCall()==v2.DataCall()) return 0;
    return 1;
}
        
// ------------------------------------------------------------------
int
PyoaEvalTextLink_Convert(PyObject* ob,PyParamoaEvalTextLink* result)
{
    if (ob == NULL) return 1;
    if (PyoaEvalTextLink_Check(ob)) {
        result->SetData(  ((PyoaEvalTextLinkObject*)ob)->value);
        return 1;
    }
    PyErr_SetString(PyExc_TypeError,
        "Convertion of parameter to class: oaEvalTextLink Failed");
    return 0;
}
// ------------------------------------------------------------------
PyObject* PyoaEvalTextLink_FromoaEvalTextLink(oaEvalTextLink** value,int borrow,PyObject* lock)
{
    if (value && *value) {
        oaEvalTextLink* data=*value;
        PyObject* bself = PyoaEvalTextLink_Type.tp_alloc(&PyoaEvalTextLink_Type,0);
        if (bself == NULL) return bself;
        PyoaEvalTextLinkObject* self = (PyoaEvalTextLinkObject*)bself;
        self->value = value;
        self->data = NULL;
        self->locks = NULL;
        self->borrow = 0; // Ignore borrow flag, since we copied
       if (lock) PyoaLockObject(self->locks,lock);
        return bself;
    }
    Py_INCREF(Py_None);
    return Py_None;
}
// ------------------------------------------------------------------
PyObject* PyoaEvalTextLink_FromoaEvalTextLink(oaEvalTextLink* data)
{
    if (data) {
       PyObject* bself = PyoaEvalTextLink_Type.tp_alloc(&PyoaEvalTextLink_Type,0);
       if (bself == NULL) return bself;
       PyoaEvalTextLinkObject* self = (PyoaEvalTextLinkObject*)bself;
       self->data = data;
       self->value = &(self->data);
       self->borrow = 0; 
       self->locks = NULL;
       return bself;
    }
    Py_INCREF(Py_None);
    return Py_None;
}

// ------------------------------------------------------------------
// FunctionMethods:
// ------------------------------------------------------------------

// ------------------------------------------------------------------
static char oaEvalTextLink_destroy_doc[] = 
"Class: oaEvalTextLink, Function: destroy\n"
"  Paramegers: ()\n"
"    Calls: void destroy()\n"
"    Signature: destroy|void-void|\n"
"    BrowseData: 0\n"
"    This function destroys the oaEvalTextLink object and removes the link in OpenAccess.\n"
;

static PyObject*
oaEvalTextLink_destroy(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaEvalTextLink data;
    int convert_status=PyoaEvalTextLink_Convert(ob,&data);
    assert(convert_status!=0);
    PyoaEvalTextLinkObject* self=(PyoaEvalTextLinkObject*)ob;
    if (!PyValidateDbObject(data.Data(),0)) return NULL;

    if (PyArg_ParseTuple(args,"")) {
        data.DataCall()->destroy();
        Py_INCREF(Py_None);
        return Py_None;
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaEvalTextLink_isNull_doc[] =
"Class: oaEvalTextLink, Function: isNull\n"
"  Parameters: () \n"
"    This functions returns 1 if the DbPointer is NULL, and 0 otherwise.\n"
;

static PyObject*
oaEvalTextLink_tp_isNull(PyObject* ob, PyObject *args)
{
    PyParamoaEvalTextLink data;
    int convert_status=PyoaEvalTextLink_Convert(ob,&data);
    assert(convert_status!=0);
    if (data.DataCall()==NULL)
        return PyInt_FromLong(1);
    else
        return PyInt_FromLong(0);
}
static char oaEvalTextLink_assign_doc[] = 
"Class: oaEvalTextLink, Function: set\n"
"  Paramegers: (oaDouble)\n"
"    This function sets the current value.\n"
;

static PyObject*
oaEvalTextLink_tp_assign(PyObject* ob, PyObject *args)
{
  PyParamoaEvalTextLink data;
  int convert_status=PyoaEvalTextLink_Convert(ob,&data);
  assert(convert_status!=0);
  try {
    PyParamoaEvalTextLink p1;
    if (PyArg_ParseTuple(args,(char*)"O&",
          &PyoaEvalTextLink_Convert,&p1)) {
        data.Data()=p1.Data();
        Py_INCREF(ob);
        return ob;
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}


// ------------------------------------------------------------------
//  Function Methods Table:
// ------------------------------------------------------------------

static PyMethodDef oaEvalTextLink_methodlist[] = {
    {"destroy",(PyCFunction)oaEvalTextLink_destroy,METH_VARARGS,oaEvalTextLink_destroy_doc},
    {"isNull",(PyCFunction)oaEvalTextLink_tp_isNull,METH_VARARGS,oaEvalTextLink_isNull_doc},
    {"assign",(PyCFunction)oaEvalTextLink_tp_assign,METH_VARARGS,oaEvalTextLink_assign_doc},
   {NULL,NULL,0,NULL}
};


// ------------------------------------------------------------------
//  Type Object:
// ------------------------------------------------------------------

// ------------------------------------------------------------------
static char oaEvalTextLink_doc[] = 
"Class: oaEvalTextLink\n"
"  The oaEvalTextLink class implements the link between OpenAccess and an application-provided eval text evaluator implement though the IEvalText interfaces. When the eval text evaluator is provided in memory, the application needs to create the eval text link using oaEvalTextLink::create() to register with OpenAccess. For eval text evaluator provided through a plug-in module, oaEvalTextLink::find() can be used to create the link between OpenAccess and the IEvalText plugIn.\n"
"Constructors:\n"
"  Paramegers: (oaEvalTextLink)\n"
"    Calls: (const oaEvalTextLink&)\n"
"    Signature: oaEvalTextLink||cref-oaEvalTextLink,\n"
;

// ------------------------------------------------------------------
PyTypeObject PyoaEvalTextLink_Type = {
    PyObject_HEAD_INIT(&PyType_Type)
    0,
    "oaEvalTextLink",
    sizeof(PyoaEvalTextLinkObject),
    0,
    (destructor)oaEvalTextLink_tp_dealloc,	/* tp_dealloc */
    0,	/* tp_print */
    0,					/* tp_getattr */
    0,					/* tp_setattr */
    (cmpfunc)oaEvalTextLink_tp_compare,	/* tp_compare */
    (reprfunc)oaEvalTextLink_tp_repr,	/* tp_repr */
    0,					/* tp_as_number */
    0,					/* tp_as_sequence */
    0,					/* tp_as_mapping */
    0,					/* tp_as_hash */
    0,					/* tp_as_call */
    0,					/* tp_str */
    0,					/* tp_getattro */
    0,					/* tp_setattro */
    0,					/* tp_as_buffer */
    Py_TPFLAGS_DEFAULT|Py_TPFLAGS_BASETYPE, /* tp_flags */
    oaEvalTextLink_doc,	/* tp_doc */
    0,					/* tp_traverse */
    0,					/* tp_clear */
    0,					/* tp_richcompre */
    0,					/* tp_weaklistoffset */
    0,					/* tp_iter */
    0,					/* tp_iternext */
    oaEvalTextLink_methodlist,	/* tp_methods */
    0,					/* tp_members */
    0,					/* tp_getset */
    0,					/* tp_base */
    0,					/* tp_dict */
    0,					/* tp_descr_get */
    0,					/* tp_descr_set */
    0,					/* tp_dictoffset */
    0,					/* tp_init */
    PyType_GenericAlloc,	/* tp_alloc */
    oaEvalTextLink_new,	/* tp_new */
    _PyObject_Del,	/* tp_free */
};


// ------------------------------------------------------------------
// Static FunctionMethods:
// ------------------------------------------------------------------

// ------------------------------------------------------------------
static char oaEvalTextLink_static_find_doc[] = 
"Class: oaEvalTextLink, Function: find\n"
"  Paramegers: (oaString)\n"
"    Calls: oaEvalTextLink* find(const oaString& name)\n"
"    Signature: find|ptr-oaEvalTextLink|cref-oaString,\n"
"    This function trys to find an existing link associated with an IEvalText of the same name. If no existing link is found, one will be created by trying to load the plugIn with the same name.\n"
"    name\n"
"    the name of the IEvalText\n"
;

static PyObject*
oaEvalTextLink_static_find(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaString p1;
    if (PyArg_ParseTuple(args,"O&",
          &PyoaString_Convert,&p1)) {
        oaEvalTextLinkp result= (oaEvalTextLink::find(p1.Data()));
        return PyoaEvalTextLink_FromoaEvalTextLink(result);
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static PyMethodDef oaEvalTextLink_staticmethodlist[] = {
    {"static_find",(PyCFunction)oaEvalTextLink_static_find,METH_VARARGS,oaEvalTextLink_static_find_doc},
   {NULL,NULL,0,NULL}
};


// ------------------------------------------------------------------
//  Type Init:
// ------------------------------------------------------------------

int
PyoaEvalTextLink_TypeInit(PyObject* mod_dict)
{
    if (PyType_Ready(&PyoaEvalTextLink_Type)<0) {
      printf("** PyType_Ready failed for: oaEvalTextLink\n");
      return -1;
    }

    if (PyDict_SetItemString(mod_dict,"oaEvalTextLink",
           (PyObject*)(&PyoaEvalTextLink_Type))<0) {
       printf("** Failed to add type name to module dictionary for: oaEvalTextLink\n");
       return -1;
    }

    PyObject *dict, *value;
    PyMethodDef *method;
    dict=PyoaEvalTextLink_Type.tp_dict;
    for(method=oaEvalTextLink_staticmethodlist;method->ml_name!=NULL;method++) {
        value=PyCFunction_New(method,NULL);
    if (value==NULL) return -1;
        if (PyDict_SetItemString(dict,method->ml_name,value)!=0) {
        Py_DECREF(value);
            printf("** Failed to add static function to module dictionary for: %s\n",
                method->ml_name);
            return -1;
        }
        Py_DECREF(value);
    }
    return 0;
}


/********************************************************************
 *   Copyright 2002-2008  LSI Corporation
 *
 *   Licensed under the Apache License, Version 2.0 (the "License");
 *   you may not use this file except in compliance with the License.
 *   You may obtain a copy of the License at
 *
 *       http://www.apache.org/licenses/LICENSE-2.0
 *
 *   Unless required by applicable law or agreed to in writing, software
 *   distributed under the License is distributed on an "AS IS" BASIS,
 *   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *   See the License for the specific language governing permissions and
 *   limitations under the License.
 *
 *******************************************************************/

#include "pyoa_header.h"


// ==================================================================
// Wrapper Implementation for Class: oaExtrapolateType
// ==================================================================


// ==================================================================
// Alloc/Dealloc Routines
// ==================================================================

// ------------------------------------------------------------------
static PyObject*
oaExtrapolateType_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
  try {
    int is_raw=(type==&PyoaExtrapolateType_Type);
    PyObject* bself = type->tp_alloc(type,0);
    if (bself == NULL) return bself;
    PyoaExtrapolateTypeObject* self = (PyoaExtrapolateTypeObject*)bself;
    self->locks = NULL;
    self->borrow = 0;
    static char *kwlist [] = { NULL } ;
    // Case: (oaExtrapolateTypeEnum)
    {
        PyParamoaExtrapolateTypeEnum p1;
        if (PyArg_ParseTuple(args,"O&",
              &PyoaExtrapolateTypeEnum_Convert,&p1)) {
            self->value =  new oaExtrapolateType(p1.Data());
            return bself;
        }
    }
    PyErr_Clear();
    // Case: (oaString)
    {
        PyParamoaString p1;
        if (PyArg_ParseTuple(args,"O&",
              &PyoaString_Convert,&p1)) {
            self->value =  new oaExtrapolateType(p1.Data());
            return bself;
        }
    }
    PyErr_Clear();
    // Case: (oaExtrapolateType)
    {
        PyParamoaExtrapolateType p1;
        if (PyArg_ParseTuple(args,(char*)"O&",
              &PyoaExtrapolateType_Convert,&p1)) {
            self->value= new oaExtrapolateType(p1.Data());
            return bself;
        }
    }
    PyErr_Clear();
    PyErr_SetString(PyExc_TypeError,
        "No Arg-Matching Constructor found for class: oaExtrapolateType, Choices are:\n"
        "    (oaExtrapolateTypeEnum)\n"
        "    (oaString)\n"
        "    (oaExtrapolateType)\n"
    );
    Py_DECREF(self);
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static void
oaExtrapolateType_tp_dealloc(PyoaExtrapolateTypeObject* self)
{
    if (!self->borrow) {
        delete (self->value);
    }
    Py_XDECREF(self->locks);
    self->ob_type->tp_free((PyObject*)self);
}

// ------------------------------------------------------------------
static PyObject*
oaExtrapolateType_tp_repr(PyObject *ob)
{
    PyParamoaExtrapolateType value;
    int convert_status=PyoaExtrapolateType_Convert(ob,&value);
    assert(convert_status!=0);
    PyObject* result;
    oaString sresult(value.DataCall()->getName());

    char addr[39];
    sprintf(addr,DISPLAY_FORMAT,POINTER_AS_DISPLAY(value.DataCall()));
    oaString buffer;
    buffer+=oaString("<oaExtrapolateType::");
    buffer+=oaString(addr);
    buffer+=oaString("::");
    buffer+=oaString(sresult);
    buffer+=oaString(">");
    result=PyString_FromString((char*)(const char*)buffer);
    return result;
}
        
// ------------------------------------------------------------------
static int
oaExtrapolateType_tp_compare(PyObject *ob1,PyObject* ob2)
{
    PyParamoaExtrapolateType v1;
    PyParamoaExtrapolateType v2;
    int convert_status1=PyoaExtrapolateType_Convert(ob1,&v1);
    int convert_status2=PyoaExtrapolateType_Convert(ob2,&v2);
    assert(convert_status1!=0);
    assert(convert_status2!=0);
    if (v1.DataCall()==v2.DataCall()) return 0;
    return 1;
}
        
// ------------------------------------------------------------------
int
PyoaExtrapolateType_Convert(PyObject* ob,PyParamoaExtrapolateType* result)
{
    if (ob == NULL) return 1;
    if (PyoaExtrapolateType_Check(ob)) {
        result->SetData(  ((PyoaExtrapolateTypeObject*)ob)->value);
        return 1;
    }
    PyErr_SetString(PyExc_TypeError,
        "Convertion of parameter to class: oaExtrapolateType Failed");
    return 0;
}
// ------------------------------------------------------------------
PyObject* PyoaExtrapolateType_FromoaExtrapolateType(oaExtrapolateType* data,int borrow,PyObject* lock)
{
    if (data) {
        PyObject* bself = PyoaExtrapolateType_Type.tp_alloc(&PyoaExtrapolateType_Type,0);
        if (bself == NULL) return bself;
        PyoaExtrapolateTypeObject* self = (PyoaExtrapolateTypeObject*)bself;
        self->value =  data;
        self->locks = NULL;
        self->borrow = borrow;
        if (lock) PyoaLockObject(self->locks,lock);
        return bself;
    }
    Py_INCREF(Py_None);
    return Py_None;
}

// ------------------------------------------------------------------
// FunctionMethods:
// ------------------------------------------------------------------

// ------------------------------------------------------------------
static char oaExtrapolateType_getName_doc[] = 
"Class: oaExtrapolateType, Function: getName\n"
"  Paramegers: ()\n"
"    Calls: const oaString& getName() const\n"
"    Signature: getName|cref-oaString|\n"
"    BrowseData: 1\n"
"    This function returns the name string associated with the encapsulated #oaExtrapolateTypeEnum object.\n"
;

static PyObject*
oaExtrapolateType_getName(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaExtrapolateType data;
    int convert_status=PyoaExtrapolateType_Convert(ob,&data);
    assert(convert_status!=0);
    PyoaExtrapolateTypeObject* self=(PyoaExtrapolateTypeObject*)ob;

    if (PyArg_ParseTuple(args,"")) {
        oaString result= (data.DataCall()->getName());
        return PyoaString_FromoaString(result);
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaExtrapolateType_oaExtrapolateTypeEnum_doc[] = 
"Class: oaExtrapolateType, Function: oaExtrapolateTypeEnum\n"
"  Paramegers: ()\n"
"    Calls: oaExtrapolateTypeEnum oaExtrapolateTypeEnum() const\n"
"    Signature: operator oaExtrapolateTypeEnum|simple-oaExtrapolateTypeEnum|\n"
"    BrowseData: 1\n"
"    This operator casts this oaExtrapolateType object into the corresponding #oaExtrapolateTypeEnum value.\n"
;

static PyObject*
oaExtrapolateType_oaExtrapolateTypeEnum(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaExtrapolateType data;
    int convert_status=PyoaExtrapolateType_Convert(ob,&data);
    assert(convert_status!=0);
    PyoaExtrapolateTypeObject* self=(PyoaExtrapolateTypeObject*)ob;

    if (PyArg_ParseTuple(args,"")) {
        oaExtrapolateTypeEnum result= (data.DataCall()->operator oaExtrapolateTypeEnum());
        return PyoaExtrapolateTypeEnum_FromoaExtrapolateTypeEnum(result);
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

static char oaExtrapolateType_assign_doc[] = 
"Class: oaExtrapolateType, Function: set\n"
"  Paramegers: (oaDouble)\n"
"    This function sets the current value.\n"
;

static PyObject*
oaExtrapolateType_tp_assign(PyObject* ob, PyObject *args)
{
  PyParamoaExtrapolateType data;
  int convert_status=PyoaExtrapolateType_Convert(ob,&data);
  assert(convert_status!=0);
  try {
    PyParamoaExtrapolateType p1;
    if (PyArg_ParseTuple(args,(char*)"O&",
          &PyoaExtrapolateType_Convert,&p1)) {
        data.Data()=p1.Data();
        Py_INCREF(ob);
        return ob;
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}


// ------------------------------------------------------------------
//  Function Methods Table:
// ------------------------------------------------------------------

static PyMethodDef oaExtrapolateType_methodlist[] = {
    {"getName",(PyCFunction)oaExtrapolateType_getName,METH_VARARGS,oaExtrapolateType_getName_doc},
    {"oaExtrapolateTypeEnum",(PyCFunction)oaExtrapolateType_oaExtrapolateTypeEnum,METH_VARARGS,oaExtrapolateType_oaExtrapolateTypeEnum_doc},
    {"assign",(PyCFunction)oaExtrapolateType_tp_assign,METH_VARARGS,oaExtrapolateType_assign_doc},
   {NULL,NULL,0,NULL}
};


// ------------------------------------------------------------------
//  Type Object:
// ------------------------------------------------------------------

// ------------------------------------------------------------------
static char oaExtrapolateType_doc[] = 
"Class: oaExtrapolateType\n"
"  The oaExtrapolateType class is an enum wrapper that describes how keys in a lookup table should be extrapolated if they lie outside of the range of header values for that table. See oa1DLookupTbl and oa2DLookupTbl for its usage. See Enum Wrappers in the Programmers Guide for a discussion of enum wrappers.\n"
"  oaExtrapolateTypeEnum\n"
"Constructors:\n"
"  Paramegers: (oaExtrapolateTypeEnum)\n"
"    Calls: oaExtrapolateType(oaExtrapolateTypeEnum valueIn)\n"
"    Signature: oaExtrapolateType||simple-oaExtrapolateTypeEnum,\n"
"    This function constructs an instance of an oaExtrapolateType class using the specified #oaExtrapolateTypeEnum value.\n"
"  Paramegers: (oaString)\n"
"    Calls: oaExtrapolateType(const oaString& nameIn)\n"
"    Signature: oaExtrapolateType||cref-oaString,\n"
"    This function constructs an instance of an oaExtrapolateType class using the #oaExtrapolateTypeEnum associated with the specified string name . This name must be defined in the legal set of names associated with #oaExtrapolateTypeEnum.\n"
"    oacInvalidExtrapolateTypeName\n"
"    This exception is thrown if no matching name is found\n"
"  Paramegers: (oaExtrapolateType)\n"
"    Calls: (const oaExtrapolateType&)\n"
"    Signature: oaExtrapolateType||cref-oaExtrapolateType,\n"
;

// ------------------------------------------------------------------
PyTypeObject PyoaExtrapolateType_Type = {
    PyObject_HEAD_INIT(&PyType_Type)
    0,
    "oaExtrapolateType",
    sizeof(PyoaExtrapolateTypeObject),
    0,
    (destructor)oaExtrapolateType_tp_dealloc,	/* tp_dealloc */
    0,	/* tp_print */
    0,					/* tp_getattr */
    0,					/* tp_setattr */
    (cmpfunc)oaExtrapolateType_tp_compare,	/* tp_compare */
    (reprfunc)oaExtrapolateType_tp_repr,	/* tp_repr */
    0,					/* tp_as_number */
    0,					/* tp_as_sequence */
    0,					/* tp_as_mapping */
    0,					/* tp_as_hash */
    0,					/* tp_as_call */
    0,					/* tp_str */
    0,					/* tp_getattro */
    0,					/* tp_setattro */
    0,					/* tp_as_buffer */
    Py_TPFLAGS_DEFAULT|Py_TPFLAGS_BASETYPE, /* tp_flags */
    oaExtrapolateType_doc,	/* tp_doc */
    0,					/* tp_traverse */
    0,					/* tp_clear */
    0,					/* tp_richcompre */
    0,					/* tp_weaklistoffset */
    0,					/* tp_iter */
    0,					/* tp_iternext */
    oaExtrapolateType_methodlist,	/* tp_methods */
    0,					/* tp_members */
    0,					/* tp_getset */
    0,					/* tp_base */
    0,					/* tp_dict */
    0,					/* tp_descr_get */
    0,					/* tp_descr_set */
    0,					/* tp_dictoffset */
    0,					/* tp_init */
    PyType_GenericAlloc,	/* tp_alloc */
    oaExtrapolateType_new,	/* tp_new */
    _PyObject_Del,	/* tp_free */
};


// ------------------------------------------------------------------
//  Type Init:
// ------------------------------------------------------------------

int
PyoaExtrapolateType_TypeInit(PyObject* mod_dict)
{
    if (PyType_Ready(&PyoaExtrapolateType_Type)<0) {
      printf("** PyType_Ready failed for: oaExtrapolateType\n");
      return -1;
    }

    if (PyDict_SetItemString(mod_dict,"oaExtrapolateType",
           (PyObject*)(&PyoaExtrapolateType_Type))<0) {
       printf("** Failed to add type name to module dictionary for: oaExtrapolateType\n");
       return -1;
    }
    return 0;
}


/********************************************************************
 *   Copyright 2002-2008  LSI Corporation
 *
 *   Licensed under the Apache License, Version 2.0 (the "License");
 *   you may not use this file except in compliance with the License.
 *   You may obtain a copy of the License at
 *
 *       http://www.apache.org/licenses/LICENSE-2.0
 *
 *   Unless required by applicable law or agreed to in writing, software
 *   distributed under the License is distributed on an "AS IS" BASIS,
 *   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *   See the License for the specific language governing permissions and
 *   limitations under the License.
 *
 *******************************************************************/

#include "pyoa_header.h"


// ==================================================================
// Wrapper Implementation for Class: oaExtrapolateTypeEnum
// ==================================================================

// ------------------------------------------------------------------

int
PyoaExtrapolateTypeEnum_Convert(PyObject* ob,PyParamoaExtrapolateTypeEnum* result)
{
    if (ob == NULL) return 1;
    if (PyString_Check(ob)) {
        char* str=PyString_AsString(ob);
        if (strcasecmp(str,"oacSnapDownExtrapolateType")==0) { result->SetData(oacSnapDownExtrapolateType); return 1;}
        if (strcasecmp(str,"oacSnapUpExtrapolateType")==0) { result->SetData(oacSnapUpExtrapolateType); return 1;}
        if (strcasecmp(str,"oacLinearExtrapolateType")==0) { result->SetData(oacLinearExtrapolateType); return 1;}
    }            
    if (PyInt_Check(ob)) {
        long val=PyInt_AsLong(ob);
        result->SetData((oaExtrapolateTypeEnum)val);
        return 1;
    }
    PyErr_SetString(PyExc_TypeError,
        "Convertion of parameter to class: oaExtrapolateTypeEnum Failed");
    return 0;
}
// ------------------------------------------------------------------

PyObject* PyoaExtrapolateTypeEnum_FromoaExtrapolateTypeEnum(oaExtrapolateTypeEnum ob)
{
    if (ob==oacSnapDownExtrapolateType) return PyString_FromString("oacSnapDownExtrapolateType");
    if (ob==oacSnapUpExtrapolateType) return PyString_FromString("oacSnapUpExtrapolateType");
    if (ob==oacLinearExtrapolateType) return PyString_FromString("oacLinearExtrapolateType");

    Py_INCREF(Py_None);
    return Py_None;
}

// ------------------------------------------------------------------
//  Enum Typecast function:
// ------------------------------------------------------------------

static PyObject*
PyoaExtrapolateTypeEnum_TypeFunction(PyObject* mod,PyObject* args)
{
    int v;
    oaExtrapolateTypeEnum e;
    if (PyArg_ParseTuple(args,(char*)"i",&v)) {
       return PyoaExtrapolateTypeEnum_FromoaExtrapolateTypeEnum(oaExtrapolateTypeEnum(v));
    }
    PyErr_Clear();
    if (PyArg_ParseTuple(args,(char*)"O&",&PyoaExtrapolateTypeEnum_Convert,&e)) {
       return PyInt_FromLong(long(e));
    }
    return NULL;
}
static char oaExtrapolateTypeEnum_doc[] =
"Type convert function for enum: oaExtrapolateTypeEnum";
                               
static PyMethodDef PyoaExtrapolateTypeEnum_method =
  {"oaExtrapolateTypeEnum",(PyCFunction)PyoaExtrapolateTypeEnum_TypeFunction,METH_VARARGS,oaExtrapolateTypeEnum_doc};
  

// ------------------------------------------------------------------
//  Enum Init:
// ------------------------------------------------------------------

int
PyoaExtrapolateTypeEnum_TypeInit(PyObject* mod_dict)
{
    // Put Enum values in Dictionary
    PyObject* value;
    value=PyString_FromString("oacSnapDownExtrapolateType");
    PyDict_SetItemString(mod_dict,"oacSnapDownExtrapolateType",value);
    Py_DECREF(value);
    value=PyString_FromString("oacSnapUpExtrapolateType");
    PyDict_SetItemString(mod_dict,"oacSnapUpExtrapolateType",value);
    Py_DECREF(value);
    value=PyString_FromString("oacLinearExtrapolateType");
    PyDict_SetItemString(mod_dict,"oacLinearExtrapolateType",value);
    Py_DECREF(value);

    // Put Enum name function in Dictionary
    value=PyCFunction_New(&PyoaExtrapolateTypeEnum_method,NULL);
    if (PyDict_SetItemString(mod_dict,"oaExtrapolateTypeEnum",value)!=0) {
    Py_DECREF(value);
        printf("** Failed to add enum function to module dictionary for: oaExtrapolateTypeEnum\n");
        return -1;
    }
    Py_DECREF(value);
    return 0;
}

/********************************************************************
 *   Copyright 2002-2008  LSI Corporation
 *
 *   Licensed under the Apache License, Version 2.0 (the "License");
 *   you may not use this file except in compliance with the License.
 *   You may obtain a copy of the License at
 *
 *       http://www.apache.org/licenses/LICENSE-2.0
 *
 *   Unless required by applicable law or agreed to in writing, software
 *   distributed under the License is distributed on an "AS IS" BASIS,
 *   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *   See the License for the specific language governing permissions and
 *   limitations under the License.
 *
 *******************************************************************/

#include "pyoa_header.h"


// ==================================================================
// Wrapper Implementation for Class: oaFDSet
// ==================================================================


// ==================================================================
// Alloc/Dealloc Routines
// ==================================================================

// ------------------------------------------------------------------
static PyObject*
oaFDSet_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
  try {
    int is_raw=(type==&PyoaFDSet_Type);
    PyObject* bself = type->tp_alloc(type,0);
    if (bself == NULL) return bself;
    PyoaFDSetObject* self = (PyoaFDSetObject*)bself;
    self->locks = NULL;
    self->borrow = 0;
    static char *kwlist [] = { NULL } ;
    // Case: ()
    {
        if (PyArg_ParseTuple(args,"")) {
            self->value =  new oaFDSet();
            return bself;
        }
    }
    PyErr_Clear();
    PyErr_SetString(PyExc_TypeError,
        "No Arg-Matching Constructor found for class: oaFDSet, Choices are:\n"
        "    ()\n"
    );
    Py_DECREF(self);
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static void
oaFDSet_tp_dealloc(PyoaFDSetObject* self)
{
    if (!self->borrow) {
        delete (self->value);
    }
    Py_XDECREF(self->locks);
    self->ob_type->tp_free((PyObject*)self);
}

// ------------------------------------------------------------------
static PyObject*
oaFDSet_tp_repr(PyObject *ob)
{
    PyParamoaFDSet value;
    int convert_status=PyoaFDSet_Convert(ob,&value);
    assert(convert_status!=0);
    PyObject* result;

    char buffer[29];
    sprintf(buffer,"<oaFDSet::" DISPLAY_FORMAT ">",POINTER_AS_DISPLAY(value.DataCall()));
    result=PyString_FromString(buffer);
    return result;
}
        
// ------------------------------------------------------------------
static int
oaFDSet_tp_compare(PyObject *ob1,PyObject* ob2)
{
    PyParamoaFDSet v1;
    PyParamoaFDSet v2;
    int convert_status1=PyoaFDSet_Convert(ob1,&v1);
    int convert_status2=PyoaFDSet_Convert(ob2,&v2);
    assert(convert_status1!=0);
    assert(convert_status2!=0);
    if (v1.DataCall()==v2.DataCall()) return 0;
    return 1;
}
        
// ------------------------------------------------------------------
int
PyoaFDSet_Convert(PyObject* ob,PyParamoaFDSet* result)
{
    if (ob == NULL) return 1;
    if (PyoaFDSet_Check(ob)) {
        result->SetData(  ((PyoaFDSetObject*)ob)->value);
        return 1;
    }
    PyErr_SetString(PyExc_TypeError,
        "Convertion of parameter to class: oaFDSet Failed");
    return 0;
}
// ------------------------------------------------------------------
PyObject* PyoaFDSet_FromoaFDSet(oaFDSet* data,int borrow,PyObject* lock)
{
    if (data) {
        PyObject* bself = PyoaFDSet_Type.tp_alloc(&PyoaFDSet_Type,0);
        if (bself == NULL) return bself;
        PyoaFDSetObject* self = (PyoaFDSetObject*)bself;
        self->value =  data;
        self->locks = NULL;
        self->borrow = borrow;
        if (lock) PyoaLockObject(self->locks,lock);
        return bself;
    }
    Py_INCREF(Py_None);
    return Py_None;
}

// ------------------------------------------------------------------
// FunctionMethods:
// ------------------------------------------------------------------

// ------------------------------------------------------------------
static char oaFDSet_add_doc[] = 
"Class: oaFDSet, Function: add\n"
"  Paramegers: (oaUInt4)\n"
"    Calls: void add(oaUInt4 fd)\n"
"    Signature: add|void-void|simple-oaUInt4,\n"
"    Function add\n"
;

static PyObject*
oaFDSet_add(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaFDSet data;
    int convert_status=PyoaFDSet_Convert(ob,&data);
    assert(convert_status!=0);
    PyoaFDSetObject* self=(PyoaFDSetObject*)ob;

    PyParamoaUInt4 p1;
    if (PyArg_ParseTuple(args,"O&",
          &PyoaUInt4_Convert,&p1)) {
        data.DataCall()->add(p1.Data());
        Py_INCREF(Py_None);
        return Py_None;
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaFDSet_getNextReady_doc[] = 
"Class: oaFDSet, Function: getNextReady\n"
"  Paramegers: ()\n"
"    Calls: oaUInt4 getNextReady()\n"
"    Signature: getNextReady|simple-oaUInt4|\n"
"    BrowseData: 1\n"
"    Function getNextReady\n"
;

static PyObject*
oaFDSet_getNextReady(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaFDSet data;
    int convert_status=PyoaFDSet_Convert(ob,&data);
    assert(convert_status!=0);
    PyoaFDSetObject* self=(PyoaFDSetObject*)ob;

    if (PyArg_ParseTuple(args,"")) {
        oaUInt4 result= (data.DataCall()->getNextReady());
        return PyoaUInt4_FromoaUInt4(result);
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaFDSet_remove_doc[] = 
"Class: oaFDSet, Function: remove\n"
"  Paramegers: (oaUInt4)\n"
"    Calls: void remove(oaUInt4 fd)\n"
"    Signature: remove|void-void|simple-oaUInt4,\n"
"    Function remove\n"
;

static PyObject*
oaFDSet_remove(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaFDSet data;
    int convert_status=PyoaFDSet_Convert(ob,&data);
    assert(convert_status!=0);
    PyoaFDSetObject* self=(PyoaFDSetObject*)ob;

    PyParamoaUInt4 p1;
    if (PyArg_ParseTuple(args,"O&",
          &PyoaUInt4_Convert,&p1)) {
        data.DataCall()->remove(p1.Data());
        Py_INCREF(Py_None);
        return Py_None;
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaFDSet_select_doc[] = 
"Class: oaFDSet, Function: select\n"
"  Paramegers: (oaUInt4)\n"
"    Calls: oaUInt4 select(oaUInt4 sec)\n"
"    Signature: select|simple-oaUInt4|simple-oaUInt4,\n"
"    Function select\n"
;

static PyObject*
oaFDSet_select(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaFDSet data;
    int convert_status=PyoaFDSet_Convert(ob,&data);
    assert(convert_status!=0);
    PyoaFDSetObject* self=(PyoaFDSetObject*)ob;

    PyParamoaUInt4 p1;
    if (PyArg_ParseTuple(args,"O&",
          &PyoaUInt4_Convert,&p1)) {
        oaUInt4 result= (data.DataCall()->select(p1.Data()));
        return PyoaUInt4_FromoaUInt4(result);
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

static char oaFDSet_assign_doc[] = 
"Class: oaFDSet, Function: set\n"
"  Paramegers: (oaDouble)\n"
"    This function sets the current value.\n"
;

static PyObject*
oaFDSet_tp_assign(PyObject* ob, PyObject *args)
{
  PyParamoaFDSet data;
  int convert_status=PyoaFDSet_Convert(ob,&data);
  assert(convert_status!=0);
  try {
    PyParamoaFDSet p1;
    if (PyArg_ParseTuple(args,(char*)"O&",
          &PyoaFDSet_Convert,&p1)) {
        data.Data()=p1.Data();
        Py_INCREF(ob);
        return ob;
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}


// ------------------------------------------------------------------
//  Function Methods Table:
// ------------------------------------------------------------------

static PyMethodDef oaFDSet_methodlist[] = {
    {"add",(PyCFunction)oaFDSet_add,METH_VARARGS,oaFDSet_add_doc},
    {"getNextReady",(PyCFunction)oaFDSet_getNextReady,METH_VARARGS,oaFDSet_getNextReady_doc},
    {"remove",(PyCFunction)oaFDSet_remove,METH_VARARGS,oaFDSet_remove_doc},
    {"select",(PyCFunction)oaFDSet_select,METH_VARARGS,oaFDSet_select_doc},
    {"assign",(PyCFunction)oaFDSet_tp_assign,METH_VARARGS,oaFDSet_assign_doc},
   {NULL,NULL,0,NULL}
};


// ------------------------------------------------------------------
//  Type Object:
// ------------------------------------------------------------------

// ------------------------------------------------------------------
static char oaFDSet_doc[] = 
"Class: oaFDSet\n"
"  Class type oaFDSet\n"
"Constructors:\n"
"  Paramegers: ()\n"
"    Calls: oaFDSet()\n"
"    Signature: oaFDSet||\n"
"    Constructor oaFDSet\n"
;

// ------------------------------------------------------------------
PyTypeObject PyoaFDSet_Type = {
    PyObject_HEAD_INIT(&PyType_Type)
    0,
    "oaFDSet",
    sizeof(PyoaFDSetObject),
    0,
    (destructor)oaFDSet_tp_dealloc,	/* tp_dealloc */
    0,	/* tp_print */
    0,					/* tp_getattr */
    0,					/* tp_setattr */
    (cmpfunc)oaFDSet_tp_compare,	/* tp_compare */
    (reprfunc)oaFDSet_tp_repr,	/* tp_repr */
    0,					/* tp_as_number */
    0,					/* tp_as_sequence */
    0,					/* tp_as_mapping */
    0,					/* tp_as_hash */
    0,					/* tp_as_call */
    0,					/* tp_str */
    0,					/* tp_getattro */
    0,					/* tp_setattro */
    0,					/* tp_as_buffer */
    Py_TPFLAGS_DEFAULT|Py_TPFLAGS_BASETYPE, /* tp_flags */
    oaFDSet_doc,	/* tp_doc */
    0,					/* tp_traverse */
    0,					/* tp_clear */
    0,					/* tp_richcompre */
    0,					/* tp_weaklistoffset */
    0,					/* tp_iter */
    0,					/* tp_iternext */
    oaFDSet_methodlist,	/* tp_methods */
    0,					/* tp_members */
    0,					/* tp_getset */
    0,					/* tp_base */
    0,					/* tp_dict */
    0,					/* tp_descr_get */
    0,					/* tp_descr_set */
    0,					/* tp_dictoffset */
    0,					/* tp_init */
    PyType_GenericAlloc,	/* tp_alloc */
    oaFDSet_new,	/* tp_new */
    _PyObject_Del,	/* tp_free */
};


// ------------------------------------------------------------------
//  Type Init:
// ------------------------------------------------------------------

int
PyoaFDSet_TypeInit(PyObject* mod_dict)
{
    if (PyType_Ready(&PyoaFDSet_Type)<0) {
      printf("** PyType_Ready failed for: oaFDSet\n");
      return -1;
    }

    if (PyDict_SetItemString(mod_dict,"oaFDSet",
           (PyObject*)(&PyoaFDSet_Type))<0) {
       printf("** Failed to add type name to module dictionary for: oaFDSet\n");
       return -1;
    }
    return 0;
}


/********************************************************************
 *   Copyright 2002-2008  LSI Corporation
 *
 *   Licensed under the Apache License, Version 2.0 (the "License");
 *   you may not use this file except in compliance with the License.
 *   You may obtain a copy of the License at
 *
 *       http://www.apache.org/licenses/LICENSE-2.0
 *
 *   Unless required by applicable law or agreed to in writing, software
 *   distributed under the License is distributed on an "AS IS" BASIS,
 *   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *   See the License for the specific language governing permissions and
 *   limitations under the License.
 *
 *******************************************************************/

#include "pyoa_header.h"


// ==================================================================
// Wrapper Implementation for Class: oaFSComponent
// ==================================================================


// ==================================================================
// Alloc/Dealloc Routines
// ==================================================================

// ------------------------------------------------------------------
static PyObject*
oaFSComponent_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
  try {
    int is_raw=(type==&PyoaFSComponent_Type);
    PyObject* bself = type->tp_alloc(type,0);
    if (bself == NULL) return bself;
    PyoaFSComponentObject* self = (PyoaFSComponentObject*)bself;
    self->locks = NULL;
    self->borrow = 0;
    static char *kwlist [] = { NULL } ;
    // Case: (oaString)
    {
        PyParamoaString p1;
        if (PyArg_ParseTuple(args,"O&",
              &PyoaString_Convert,&p1)) {
            self->value =  new oaFSComponent(p1.Data());
            return bself;
        }
    }
    PyErr_Clear();
    // Case: (oaFSComponent)
    {
        PyParamoaFSComponent p1;
        if (PyArg_ParseTuple(args,(char*)"O&",
              &PyoaFSComponent_Convert,&p1)) {
            self->value= new oaFSComponent(p1.Data());
            return bself;
        }
    }
    PyErr_Clear();
    PyErr_SetString(PyExc_TypeError,
        "No Arg-Matching Constructor found for class: oaFSComponent, Choices are:\n"
        "    (oaString)\n"
        "    (oaFSComponent)\n"
    );
    Py_DECREF(self);
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static void
oaFSComponent_tp_dealloc(PyoaFSComponentObject* self)
{
    if (!self->borrow) {
        delete (self->value);
    }
    Py_XDECREF(self->locks);
    self->ob_type->tp_free((PyObject*)self);
}

// ------------------------------------------------------------------
static PyObject*
oaFSComponent_tp_repr(PyObject *ob)
{
    PyParamoaFSComponent value;
    int convert_status=PyoaFSComponent_Convert(ob,&value);
    assert(convert_status!=0);
    PyObject* result;

    char buffer[35];
    sprintf(buffer,"<oaFSComponent::" DISPLAY_FORMAT ">",POINTER_AS_DISPLAY(value.DataCall()));
    result=PyString_FromString(buffer);
    return result;
}
        
// ------------------------------------------------------------------
static int
oaFSComponent_tp_compare(PyObject *ob1,PyObject* ob2)
{
    PyParamoaFSComponent v1;
    PyParamoaFSComponent v2;
    int convert_status1=PyoaFSComponent_Convert(ob1,&v1);
    int convert_status2=PyoaFSComponent_Convert(ob2,&v2);
    assert(convert_status1!=0);
    assert(convert_status2!=0);
    if (v1.DataCall()==v2.DataCall()) return 0;
    return 1;
}
        
// ------------------------------------------------------------------
int
PyoaFSComponent_Convert(PyObject* ob,PyParamoaFSComponent* result)
{
    if (ob == NULL) return 1;
    if (PyoaFSComponent_Check(ob)) {
        result->SetData(  ((PyoaFSComponentObject*)ob)->value);
        return 1;
    }
    PyErr_SetString(PyExc_TypeError,
        "Convertion of parameter to class: oaFSComponent Failed");
    return 0;
}
// ------------------------------------------------------------------
PyObject* PyoaFSComponent_FromoaFSComponent(oaFSComponent* data,int borrow,PyObject* lock)
{
    if (data) {
        PyObject* bself = PyoaFSComponent_Type.tp_alloc(&PyoaFSComponent_Type,0);
        if (bself == NULL) return bself;
        PyoaFSComponentObject* self = (PyoaFSComponentObject*)bself;
        self->value =  data;
        self->locks = NULL;
        self->borrow = borrow;
        if (lock) PyoaLockObject(self->locks,lock);
        return bself;
    }
    Py_INCREF(Py_None);
    return Py_None;
}

// ------------------------------------------------------------------
// FunctionMethods:
// ------------------------------------------------------------------

// ------------------------------------------------------------------
static char oaFSComponent_destroy_doc[] = 
"Class: oaFSComponent, Function: destroy\n"
"  Paramegers: ()\n"
"    Calls: void destroy()\n"
"    Signature: destroy|void-void|\n"
"    BrowseData: 0\n"
"    This function removes this file system component from the disk. If the component is a directory, it will remove the contents of the directory and then delete the directory itself.\n"
"    oacUnableToRemove\n"
;

static PyObject*
oaFSComponent_destroy(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaFSComponent data;
    int convert_status=PyoaFSComponent_Convert(ob,&data);
    assert(convert_status!=0);
    PyoaFSComponentObject* self=(PyoaFSComponentObject*)ob;

    if (PyArg_ParseTuple(args,"")) {
        data.DataCall()->destroy();
        Py_INCREF(Py_None);
        return Py_None;
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaFSComponent_exists_doc[] = 
"Class: oaFSComponent, Function: exists\n"
"  Paramegers: ()\n"
"    Calls: oaBoolean exists() const\n"
"    Signature: exists|simple-oaBoolean|\n"
"    BrowseData: 1\n"
"    This function returns true if the file system component associated with the name exists on disk.\n"
;

static PyObject*
oaFSComponent_exists(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaFSComponent data;
    int convert_status=PyoaFSComponent_Convert(ob,&data);
    assert(convert_status!=0);
    PyoaFSComponentObject* self=(PyoaFSComponentObject*)ob;

    if (PyArg_ParseTuple(args,"")) {
        oaBoolean result= (data.DataCall()->exists());
        return PyoaBoolean_FromoaBoolean(result);
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaFSComponent_getFullName_doc[] = 
"Class: oaFSComponent, Function: getFullName\n"
"  Paramegers: (oaString)\n"
"    Calls: void getFullName(oaString& pathName) const\n"
"    Signature: getFullName|void-void|ref-oaString,\n"
"    BrowseData: 0,oaString\n"
"    This function returns the full path to the library relative to the local host. This is also called the \"real\" name or the \"canonicalized\" name.\n"
"    pathName\n"
"    Reference to string to return the pathName in.\n"
"    oacGetFullPathFailed\n"
;

static PyObject*
oaFSComponent_getFullName(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaFSComponent data;
    int convert_status=PyoaFSComponent_Convert(ob,&data);
    assert(convert_status!=0);
    PyoaFSComponentObject* self=(PyoaFSComponentObject*)ob;

    PyParamoaString p1;
    if (PyArg_ParseTuple(args,"O&",
          &PyoaString_Convert,&p1)) {
        data.DataCall()->getFullName(p1.Data());
        Py_INCREF(Py_None);
        return Py_None;
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaFSComponent_getName_doc[] = 
"Class: oaFSComponent, Function: getName\n"
"  Paramegers: ()\n"
"    Calls: const oaString& getName() const\n"
"    Signature: getName|cref-oaString|\n"
"    BrowseData: 1\n"
"    This function returns the name (path) of this file system component.\n"
;

static PyObject*
oaFSComponent_getName(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaFSComponent data;
    int convert_status=PyoaFSComponent_Convert(ob,&data);
    assert(convert_status!=0);
    PyoaFSComponentObject* self=(PyoaFSComponentObject*)ob;

    if (PyArg_ParseTuple(args,"")) {
        oaString result= (data.DataCall()->getName());
        return PyoaString_FromoaString(result);
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaFSComponent_getRefCount_doc[] = 
"Class: oaFSComponent, Function: getRefCount\n"
"  Paramegers: ()\n"
"    Calls: oaUInt4 getRefCount() const\n"
"    Signature: getRefCount|simple-oaUInt4|\n"
"    BrowseData: 1\n"
"    Function getRefCount\n"
;

static PyObject*
oaFSComponent_getRefCount(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaFSComponent data;
    int convert_status=PyoaFSComponent_Convert(ob,&data);
    assert(convert_status!=0);
    PyoaFSComponentObject* self=(PyoaFSComponentObject*)ob;

    if (PyArg_ParseTuple(args,"")) {
        oaUInt4 result= (data.DataCall()->getRefCount());
        return PyoaUInt4_FromoaUInt4(result);
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaFSComponent_isAFSFileSystem_doc[] = 
"Class: oaFSComponent, Function: isAFSFileSystem\n"
"  Paramegers: ()\n"
"    Calls: oaBoolean isAFSFileSystem() const\n"
"    Signature: isAFSFileSystem|simple-oaBoolean|\n"
"    BrowseData: 1\n"
"    Function isAFSFileSystem\n"
;

static PyObject*
oaFSComponent_isAFSFileSystem(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaFSComponent data;
    int convert_status=PyoaFSComponent_Convert(ob,&data);
    assert(convert_status!=0);
    PyoaFSComponentObject* self=(PyoaFSComponentObject*)ob;

    if (PyArg_ParseTuple(args,"")) {
        oaBoolean result= (data.DataCall()->isAFSFileSystem());
        return PyoaBoolean_FromoaBoolean(result);
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaFSComponent_isDir_doc[] = 
"Class: oaFSComponent, Function: isDir\n"
"  Paramegers: ()\n"
"    Calls: oaBoolean isDir() const\n"
"    Signature: isDir|simple-oaBoolean|\n"
"    BrowseData: 1\n"
"    This function returns true if this file system component is a directory.\n"
;

static PyObject*
oaFSComponent_isDir(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaFSComponent data;
    int convert_status=PyoaFSComponent_Convert(ob,&data);
    assert(convert_status!=0);
    PyoaFSComponentObject* self=(PyoaFSComponentObject*)ob;

    if (PyArg_ParseTuple(args,"")) {
        oaBoolean result= (data.DataCall()->isDir());
        return PyoaBoolean_FromoaBoolean(result);
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaFSComponent_isFile_doc[] = 
"Class: oaFSComponent, Function: isFile\n"
"  Paramegers: ()\n"
"    Calls: oaBoolean isFile() const\n"
"    Signature: isFile|simple-oaBoolean|\n"
"    BrowseData: 1\n"
"    This function returns true if this file system component is a file (not a directory).\n"
;

static PyObject*
oaFSComponent_isFile(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaFSComponent data;
    int convert_status=PyoaFSComponent_Convert(ob,&data);
    assert(convert_status!=0);
    PyoaFSComponentObject* self=(PyoaFSComponentObject*)ob;

    if (PyArg_ParseTuple(args,"")) {
        oaBoolean result= (data.DataCall()->isFile());
        return PyoaBoolean_FromoaBoolean(result);
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaFSComponent_isInCWD_doc[] = 
"Class: oaFSComponent, Function: isInCWD\n"
"  Paramegers: ()\n"
"    Calls: oaBoolean isInCWD() const\n"
"    Signature: isInCWD|simple-oaBoolean|\n"
"    BrowseData: 1\n"
"    This function checks the file system component given by path to see if it is in the current working directory. Note that a file that is a link in the CWD will return true.\n"
"    This is the algorithm used:\n"
"    1) Remove the file portion of the oaFSComponent name in order to get the directory. 2) Get the current working directory. 3) Use isSameDiskFile() to compare the two directories.\n"
;

static PyObject*
oaFSComponent_isInCWD(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaFSComponent data;
    int convert_status=PyoaFSComponent_Convert(ob,&data);
    assert(convert_status!=0);
    PyoaFSComponentObject* self=(PyoaFSComponentObject*)ob;

    if (PyArg_ParseTuple(args,"")) {
        oaBoolean result= (data.DataCall()->isInCWD());
        return PyoaBoolean_FromoaBoolean(result);
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaFSComponent_isNFSFileSystem_doc[] = 
"Class: oaFSComponent, Function: isNFSFileSystem\n"
"  Paramegers: ()\n"
"    Calls: oaBoolean isNFSFileSystem() const\n"
"    Signature: isNFSFileSystem|simple-oaBoolean|\n"
"    BrowseData: 1\n"
"    Function isNFSFileSystem\n"
;

static PyObject*
oaFSComponent_isNFSFileSystem(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaFSComponent data;
    int convert_status=PyoaFSComponent_Convert(ob,&data);
    assert(convert_status!=0);
    PyoaFSComponentObject* self=(PyoaFSComponentObject*)ob;

    if (PyArg_ParseTuple(args,"")) {
        oaBoolean result= (data.DataCall()->isNFSFileSystem());
        return PyoaBoolean_FromoaBoolean(result);
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaFSComponent_isReadable_doc[] = 
"Class: oaFSComponent, Function: isReadable\n"
"  Paramegers: ()\n"
"    Calls: oaBoolean isReadable() const\n"
"    Signature: isReadable|simple-oaBoolean|\n"
"    BrowseData: 1\n"
"    This function returns true if the file system component is readable by the calling application.\n"
;

static PyObject*
oaFSComponent_isReadable(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaFSComponent data;
    int convert_status=PyoaFSComponent_Convert(ob,&data);
    assert(convert_status!=0);
    PyoaFSComponentObject* self=(PyoaFSComponentObject*)ob;

    if (PyArg_ParseTuple(args,"")) {
        oaBoolean result= (data.DataCall()->isReadable());
        return PyoaBoolean_FromoaBoolean(result);
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaFSComponent_isSameDiskFile_doc[] = 
"Class: oaFSComponent, Function: isSameDiskFile\n"
"  Paramegers: (oaFSComponent)\n"
"    Calls: oaBoolean isSameDiskFile(const oaFSComponent& file) const\n"
"    Signature: isSameDiskFile|simple-oaBoolean|cref-oaFSComponent,\n"
"    This function compares the current file system component to the given system file component in order to determine if they point to the same device and inode and therefore refer to the same file. Returns true if the device and inode of each component are the same. Returns false if the device or inode are not the same, or if either component cannot be opened.\n"
"    fileComponent\n"
"    File system component to check this one against.\n"
;

static PyObject*
oaFSComponent_isSameDiskFile(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaFSComponent data;
    int convert_status=PyoaFSComponent_Convert(ob,&data);
    assert(convert_status!=0);
    PyoaFSComponentObject* self=(PyoaFSComponentObject*)ob;

    PyParamoaFSComponent p1;
    if (PyArg_ParseTuple(args,"O&",
          &PyoaFSComponent_Convert,&p1)) {
        oaBoolean result= (data.DataCall()->isSameDiskFile(p1.Data()));
        return PyoaBoolean_FromoaBoolean(result);
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaFSComponent_isWritable_doc[] = 
"Class: oaFSComponent, Function: isWritable\n"
"  Paramegers: ()\n"
"    Calls: oaBoolean isWritable() const\n"
"    Signature: isWritable|simple-oaBoolean|\n"
"    BrowseData: 1\n"
"    This function returns true if the file system component is writable, respectively. Note that the isWritable check requires the component to exist on disk.\n"
;

static PyObject*
oaFSComponent_isWritable(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaFSComponent data;
    int convert_status=PyoaFSComponent_Convert(ob,&data);
    assert(convert_status!=0);
    PyoaFSComponentObject* self=(PyoaFSComponentObject*)ob;

    if (PyArg_ParseTuple(args,"")) {
        oaBoolean result= (data.DataCall()->isWritable());
        return PyoaBoolean_FromoaBoolean(result);
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaFSComponent_rename_doc[] = 
"Class: oaFSComponent, Function: rename\n"
"  Paramegers: (oaString)\n"
"    Calls: void rename(const oaString& newName)\n"
"    Signature: rename|void-void|cref-oaString,\n"
"    This function renames this file system component to the specified newName . If the object is a file, the file must not be open at the time, since the handles will still point to the old file. If running on Windows OS, an exception is thrown if a file system component with the new name already exists.\n"
"    newName\n"
"    New name path. The path may be relative to the current working directory, or a fully qualified path name.\n"
"    oacUnableToRemove\n"
;

static PyObject*
oaFSComponent_rename(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaFSComponent data;
    int convert_status=PyoaFSComponent_Convert(ob,&data);
    assert(convert_status!=0);
    PyoaFSComponentObject* self=(PyoaFSComponentObject*)ob;

    PyParamoaString p1;
    if (PyArg_ParseTuple(args,"O&",
          &PyoaString_Convert,&p1)) {
        data.DataCall()->rename(p1.Data());
        Py_INCREF(Py_None);
        return Py_None;
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

static char oaFSComponent_assign_doc[] = 
"Class: oaFSComponent, Function: set\n"
"  Paramegers: (oaDouble)\n"
"    This function sets the current value.\n"
;

static PyObject*
oaFSComponent_tp_assign(PyObject* ob, PyObject *args)
{
  PyParamoaFSComponent data;
  int convert_status=PyoaFSComponent_Convert(ob,&data);
  assert(convert_status!=0);
  try {
    PyParamoaFSComponent p1;
    if (PyArg_ParseTuple(args,(char*)"O&",
          &PyoaFSComponent_Convert,&p1)) {
        data.Data()=p1.Data();
        Py_INCREF(ob);
        return ob;
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}


// ------------------------------------------------------------------
//  Function Methods Table:
// ------------------------------------------------------------------

static PyMethodDef oaFSComponent_methodlist[] = {
    {"destroy",(PyCFunction)oaFSComponent_destroy,METH_VARARGS,oaFSComponent_destroy_doc},
    {"exists",(PyCFunction)oaFSComponent_exists,METH_VARARGS,oaFSComponent_exists_doc},
    {"getFullName",(PyCFunction)oaFSComponent_getFullName,METH_VARARGS,oaFSComponent_getFullName_doc},
    {"getName",(PyCFunction)oaFSComponent_getName,METH_VARARGS,oaFSComponent_getName_doc},
    {"getRefCount",(PyCFunction)oaFSComponent_getRefCount,METH_VARARGS,oaFSComponent_getRefCount_doc},
    {"isAFSFileSystem",(PyCFunction)oaFSComponent_isAFSFileSystem,METH_VARARGS,oaFSComponent_isAFSFileSystem_doc},
    {"isDir",(PyCFunction)oaFSComponent_isDir,METH_VARARGS,oaFSComponent_isDir_doc},
    {"isFile",(PyCFunction)oaFSComponent_isFile,METH_VARARGS,oaFSComponent_isFile_doc},
    {"isInCWD",(PyCFunction)oaFSComponent_isInCWD,METH_VARARGS,oaFSComponent_isInCWD_doc},
    {"isNFSFileSystem",(PyCFunction)oaFSComponent_isNFSFileSystem,METH_VARARGS,oaFSComponent_isNFSFileSystem_doc},
    {"isReadable",(PyCFunction)oaFSComponent_isReadable,METH_VARARGS,oaFSComponent_isReadable_doc},
    {"isSameDiskFile",(PyCFunction)oaFSComponent_isSameDiskFile,METH_VARARGS,oaFSComponent_isSameDiskFile_doc},
    {"isWritable",(PyCFunction)oaFSComponent_isWritable,METH_VARARGS,oaFSComponent_isWritable_doc},
    {"rename",(PyCFunction)oaFSComponent_rename,METH_VARARGS,oaFSComponent_rename_doc},
    {"assign",(PyCFunction)oaFSComponent_tp_assign,METH_VARARGS,oaFSComponent_assign_doc},
   {NULL,NULL,0,NULL}
};


// ------------------------------------------------------------------
//  Type Object:
// ------------------------------------------------------------------

// ------------------------------------------------------------------
static char oaFSComponent_doc[] = 
"Class: oaFSComponent\n"
"  The FSComponent class implements a file system component, which may be either a file or a directory.\n"
"Constructors:\n"
"  Paramegers: (oaString)\n"
"    Calls: oaFSComponent(const oaString& nameIn)\n"
"    Signature: oaFSComponent||cref-oaString,\n"
"    This is the constructor for the oaFSComponent class.\n"
"    nameIn\n"
"    Path to the file system component. The path may be relative to the current working directory, or a fully qualified path name.\n"
"  Paramegers: (oaFSComponent)\n"
"    Calls: (const oaFSComponent&)\n"
"    Signature: oaFSComponent||cref-oaFSComponent,\n"
;

// ------------------------------------------------------------------
PyTypeObject PyoaFSComponent_Type = {
    PyObject_HEAD_INIT(&PyType_Type)
    0,
    "oaFSComponent",
    sizeof(PyoaFSComponentObject),
    0,
    (destructor)oaFSComponent_tp_dealloc,	/* tp_dealloc */
    0,	/* tp_print */
    0,					/* tp_getattr */
    0,					/* tp_setattr */
    (cmpfunc)oaFSComponent_tp_compare,	/* tp_compare */
    (reprfunc)oaFSComponent_tp_repr,	/* tp_repr */
    0,					/* tp_as_number */
    0,					/* tp_as_sequence */
    0,					/* tp_as_mapping */
    0,					/* tp_as_hash */
    0,					/* tp_as_call */
    0,					/* tp_str */
    0,					/* tp_getattro */
    0,					/* tp_setattro */
    0,					/* tp_as_buffer */
    Py_TPFLAGS_DEFAULT|Py_TPFLAGS_BASETYPE, /* tp_flags */
    oaFSComponent_doc,	/* tp_doc */
    0,					/* tp_traverse */
    0,					/* tp_clear */
    0,					/* tp_richcompre */
    0,					/* tp_weaklistoffset */
    0,					/* tp_iter */
    0,					/* tp_iternext */
    oaFSComponent_methodlist,	/* tp_methods */
    0,					/* tp_members */
    0,					/* tp_getset */
    0,					/* tp_base */
    0,					/* tp_dict */
    0,					/* tp_descr_get */
    0,					/* tp_descr_set */
    0,					/* tp_dictoffset */
    0,					/* tp_init */
    PyType_GenericAlloc,	/* tp_alloc */
    oaFSComponent_new,	/* tp_new */
    _PyObject_Del,	/* tp_free */
};


// ------------------------------------------------------------------
//  Type Init:
// ------------------------------------------------------------------

int
PyoaFSComponent_TypeInit(PyObject* mod_dict)
{
    if (PyType_Ready(&PyoaFSComponent_Type)<0) {
      printf("** PyType_Ready failed for: oaFSComponent\n");
      return -1;
    }

    if (PyDict_SetItemString(mod_dict,"oaFSComponent",
           (PyObject*)(&PyoaFSComponent_Type))<0) {
       printf("** Failed to add type name to module dictionary for: oaFSComponent\n");
       return -1;
    }
    return 0;
}


/********************************************************************
 *   Copyright 2002-2008  LSI Corporation
 *
 *   Licensed under the Apache License, Version 2.0 (the "License");
 *   you may not use this file except in compliance with the License.
 *   You may obtain a copy of the License at
 *
 *       http://www.apache.org/licenses/LICENSE-2.0
 *
 *   Unless required by applicable law or agreed to in writing, software
 *   distributed under the License is distributed on an "AS IS" BASIS,
 *   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *   See the License for the specific language governing permissions and
 *   limitations under the License.
 *
 *******************************************************************/

#include "pyoa_header.h"


// ==================================================================
// Wrapper Implementation for Class: oaFeature
// ==================================================================


// ==================================================================
// Alloc/Dealloc Routines
// ==================================================================

// ------------------------------------------------------------------
static PyObject*
oaFeature_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
  try {
    int is_raw=(type==&PyoaFeature_Type);
    PyObject* bself = type->tp_alloc(type,0);
    if (bself == NULL) return bself;
    PyoaFeatureObject* self = (PyoaFeatureObject*)bself;
    self->locks = NULL;
    self->borrow = 0;
    static char *kwlist [] = { NULL } ;
    // Case: (oaFeature)
    {
        PyParamoaFeature p1;
        if (PyArg_ParseTuple(args,(char*)"O&",
              &PyoaFeature_Convert,&p1)) {
            self->data=p1.Data();
            self->value=&(self->data);
            return bself;
        }
    }
    PyErr_Clear();
    // Case: ()
    {
        if (PyArg_ParseTuple(args,(char*)"")) {
          self->data=NULL;
          self->value=&(self->data);
          return bself;
        }
    }
    PyErr_Clear();
    PyErr_SetString(PyExc_TypeError,
        "No Arg-Matching Constructor found for class: oaFeature, Choices are:\n"
        "    (oaFeature)\n"
    );
    Py_DECREF(self);
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static void
oaFeature_tp_dealloc(PyoaFeatureObject* self)
{
    self->ob_type->tp_free((PyObject*)self);
}

// ------------------------------------------------------------------
static PyObject*
oaFeature_tp_repr(PyObject *ob)
{
    PyParamoaFeature value;
    int convert_status=PyoaFeature_Convert(ob,&value);
    assert(convert_status!=0);
    PyObject* result;

    char buffer[31];
    sprintf(buffer,"<oaFeature::" DISPLAY_FORMAT ">",POINTER_AS_DISPLAY(value.DataCall()));
    result=PyString_FromString(buffer);
    return result;
}
        
// ------------------------------------------------------------------
static int
oaFeature_tp_compare(PyObject *ob1,PyObject* ob2)
{
    PyParamoaFeature v1;
    PyParamoaFeature v2;
    int convert_status1=PyoaFeature_Convert(ob1,&v1);
    int convert_status2=PyoaFeature_Convert(ob2,&v2);
    assert(convert_status1!=0);
    assert(convert_status2!=0);
    if (v1.DataCall()==v2.DataCall()) return 0;
    return 1;
}
        
// ------------------------------------------------------------------
int
PyoaFeature_Convert(PyObject* ob,PyParamoaFeature* result)
{
    if (ob == NULL) return 1;
    if (PyoaFeature_Check(ob)) {
        result->SetData( (oaFeature**) ((PyoaFeatureObject*)ob)->value);
        return 1;
    }
    PyErr_SetString(PyExc_TypeError,
        "Convertion of parameter to class: oaFeature Failed");
    return 0;
}
// ------------------------------------------------------------------
PyObject* PyoaFeature_FromoaFeature(oaFeature** value,int borrow,PyObject* lock)
{
    if (value && *value) {
        oaFeature* data=*value;
        PyObject* bself = PyoaFeature_Type.tp_alloc(&PyoaFeature_Type,0);
        if (bself == NULL) return bself;
        PyoaFeatureObject* self = (PyoaFeatureObject*)bself;
        self->value = (oaObject**) value;
        self->data = NULL;
        self->locks = NULL;
        self->borrow = 0; // Ignore borrow flag, since we copied
       if (lock) PyoaLockObject(self->locks,lock);
        return bself;
    }
    Py_INCREF(Py_None);
    return Py_None;
}
// ------------------------------------------------------------------
PyObject* PyoaFeature_FromoaFeature(oaFeature* data)
{
    if (data) {
       PyObject* bself = PyoaFeature_Type.tp_alloc(&PyoaFeature_Type,0);
       if (bself == NULL) return bself;
       PyoaFeatureObject* self = (PyoaFeatureObject*)bself;
       self->data = (oaObject*) data;
       self->value = &(self->data);
       self->borrow = 0; 
       self->locks = NULL;
       return bself;
    }
    Py_INCREF(Py_None);
    return Py_None;
}

// ------------------------------------------------------------------
// FunctionMethods:
// ------------------------------------------------------------------

// ------------------------------------------------------------------
static char oaFeature_getCategory_doc[] = 
"Class: oaFeature, Function: getCategory\n"
"  Paramegers: ()\n"
"    Calls: oaCategory getCategory() const\n"
"    Signature: getCategory|simple-oaCategory|\n"
"    BrowseData: 1\n"
"    This function returns the category, which is the relevant portion of the data model, for this feature object.\n"
;

static PyObject*
oaFeature_getCategory(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaFeature data;
    int convert_status=PyoaFeature_Convert(ob,&data);
    assert(convert_status!=0);
    PyoaFeatureObject* self=(PyoaFeatureObject*)ob;
    if (!PyValidateDbObject(data.Data(),0)) return NULL;

    if (PyArg_ParseTuple(args,"")) {
        oaCategory* result= new oaCategory(data.DataCall()->getCategory());
        return PyoaCategory_FromoaCategory(result,0,NULL);
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaFeature_getDBType_doc[] = 
"Class: oaFeature, Function: getDBType\n"
"  Paramegers: ()\n"
"    Calls: oaDBType getDBType() const\n"
"    Signature: getDBType|simple-oaDBType|\n"
"    BrowseData: 1\n"
"    This function returns the DBType of this feature object.\n"
;

static PyObject*
oaFeature_getDBType(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaFeature data;
    int convert_status=PyoaFeature_Convert(ob,&data);
    assert(convert_status!=0);
    PyoaFeatureObject* self=(PyoaFeatureObject*)ob;
    if (!PyValidateDbObject(data.Data(),0)) return NULL;

    if (PyArg_ParseTuple(args,"")) {
        oaDBType* result= new oaDBType(data.DataCall()->getDBType());
        return PyoaDBType_FromoaDBType(result,0,NULL);
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaFeature_getDataModelModType_doc[] = 
"Class: oaFeature, Function: getDataModelModType\n"
"  Paramegers: ()\n"
"    Calls: oaDataModelModType getDataModelModType() const\n"
"    Signature: getDataModelModType|simple-oaDataModelModType|\n"
"    BrowseData: 1\n"
"    This function returns a value indicating the type of modification to the data model that this feature represents. For example, was this feature a change to, addition to, or removal from the data model?\n"
;

static PyObject*
oaFeature_getDataModelModType(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaFeature data;
    int convert_status=PyoaFeature_Convert(ob,&data);
    assert(convert_status!=0);
    PyoaFeatureObject* self=(PyoaFeatureObject*)ob;
    if (!PyValidateDbObject(data.Data(),0)) return NULL;

    if (PyArg_ParseTuple(args,"")) {
        oaDataModelModType* result= new oaDataModelModType(data.DataCall()->getDataModelModType());
        return PyoaDataModelModType_FromoaDataModelModType(result,0,NULL);
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaFeature_getDomain_doc[] = 
"Class: oaFeature, Function: getDomain\n"
"  Paramegers: ()\n"
"    Calls: oaDomain getDomain() const\n"
"    Signature: getDomain|simple-oaDomain|\n"
"    BrowseData: 1\n"
"    This function returns the domain of this feature object.\n"
;

static PyObject*
oaFeature_getDomain(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaFeature data;
    int convert_status=PyoaFeature_Convert(ob,&data);
    assert(convert_status!=0);
    PyoaFeatureObject* self=(PyoaFeatureObject*)ob;
    if (!PyValidateDbObject(data.Data(),0)) return NULL;

    if (PyArg_ParseTuple(args,"")) {
        oaDomain* result= new oaDomain(data.DataCall()->getDomain());
        return PyoaDomain_FromoaDomain(result,0,NULL);
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaFeature_getID_doc[] = 
"Class: oaFeature, Function: getID\n"
"  Paramegers: ()\n"
"    Calls: oaUInt4 getID() const\n"
"    Signature: getID|simple-oaUInt4|\n"
"    BrowseData: 1\n"
"    This function returns the ID of this feature object.\n"
;

static PyObject*
oaFeature_getID(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaFeature data;
    int convert_status=PyoaFeature_Convert(ob,&data);
    assert(convert_status!=0);
    PyoaFeatureObject* self=(PyoaFeatureObject*)ob;
    if (!PyValidateDbObject(data.Data(),0)) return NULL;

    if (PyArg_ParseTuple(args,"")) {
        oaUInt4 result= (data.DataCall()->getID());
        return PyoaUInt4_FromoaUInt4(result);
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaFeature_getName_doc[] = 
"Class: oaFeature, Function: getName\n"
"  Paramegers: (oaString)\n"
"    Calls: void getName(oaString& name) const\n"
"    Signature: getName|void-void|ref-oaString,\n"
"    BrowseData: 0,oaString\n"
"    This function returns the name of this feature object.\n"
"    name\n"
"    The name of this feature\n"
;

static PyObject*
oaFeature_getName(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaFeature data;
    int convert_status=PyoaFeature_Convert(ob,&data);
    assert(convert_status!=0);
    PyoaFeatureObject* self=(PyoaFeatureObject*)ob;
    if (!PyValidateDbObject(data.Data(),0)) return NULL;

    PyParamoaString p1;
    if (PyArg_ParseTuple(args,"O&",
          &PyoaString_Convert,&p1)) {
        data.DataCall()->getName(p1.Data());
        Py_INCREF(Py_None);
        return Py_None;
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaFeature_getObjectType_doc[] = 
"Class: oaFeature, Function: getObjectType\n"
"  Paramegers: ()\n"
"    Calls: oaType getObjectType() const\n"
"    Signature: getObjectType|simple-oaType|\n"
"    BrowseData: 1\n"
"    This function returns the objectType of this feature object.\n"
;

static PyObject*
oaFeature_getObjectType(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaFeature data;
    int convert_status=PyoaFeature_Convert(ob,&data);
    assert(convert_status!=0);
    PyoaFeatureObject* self=(PyoaFeatureObject*)ob;
    if (!PyValidateDbObject(data.Data(),0)) return NULL;

    if (PyArg_ParseTuple(args,"")) {
        oaType* result= new oaType(data.DataCall()->getObjectType());
        return PyoaType_FromoaType(result,0,NULL);
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaFeature_isNull_doc[] =
"Class: oaFeature, Function: isNull\n"
"  Parameters: () \n"
"    This functions returns 1 if the DbPointer is NULL, and 0 otherwise.\n"
;

static PyObject*
oaFeature_tp_isNull(PyObject* ob, PyObject *args)
{
    PyParamoaFeature data;
    int convert_status=PyoaFeature_Convert(ob,&data);
    assert(convert_status!=0);
    if (data.DataCall()==NULL)
        return PyInt_FromLong(1);
    else
        return PyInt_FromLong(0);
}
static char oaFeature_assign_doc[] = 
"Class: oaFeature, Function: set\n"
"  Paramegers: (oaDouble)\n"
"    This function sets the current value.\n"
;

static PyObject*
oaFeature_tp_assign(PyObject* ob, PyObject *args)
{
  PyParamoaFeature data;
  int convert_status=PyoaFeature_Convert(ob,&data);
  assert(convert_status!=0);
  try {
    PyParamoaFeature p1;
    if (PyArg_ParseTuple(args,(char*)"O&",
          &PyoaFeature_Convert,&p1)) {
        data.Data()=p1.Data();
        Py_INCREF(ob);
        return ob;
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}


// ------------------------------------------------------------------
//  Function Methods Table:
// ------------------------------------------------------------------

static PyMethodDef oaFeature_methodlist[] = {
    {"getCategory",(PyCFunction)oaFeature_getCategory,METH_VARARGS,oaFeature_getCategory_doc},
    {"getDBType",(PyCFunction)oaFeature_getDBType,METH_VARARGS,oaFeature_getDBType_doc},
    {"getDataModelModType",(PyCFunction)oaFeature_getDataModelModType,METH_VARARGS,oaFeature_getDataModelModType_doc},
    {"getDomain",(PyCFunction)oaFeature_getDomain,METH_VARARGS,oaFeature_getDomain_doc},
    {"getID",(PyCFunction)oaFeature_getID,METH_VARARGS,oaFeature_getID_doc},
    {"getName",(PyCFunction)oaFeature_getName,METH_VARARGS,oaFeature_getName_doc},
    {"getObjectType",(PyCFunction)oaFeature_getObjectType,METH_VARARGS,oaFeature_getObjectType_doc},
    {"isNull",(PyCFunction)oaFeature_tp_isNull,METH_VARARGS,oaFeature_isNull_doc},
    {"assign",(PyCFunction)oaFeature_tp_assign,METH_VARARGS,oaFeature_assign_doc},
   {NULL,NULL,0,NULL}
};


// ------------------------------------------------------------------
//  Type Object:
// ------------------------------------------------------------------

// ------------------------------------------------------------------
static char oaFeature_doc[] = 
"Class: oaFeature\n"
"  The oaFeature class contains the information about the type of data in a database that might prevent an older application from opening it. An oaFeature is a session object that categorizes and gives names for new types of data in OpenAccess databases.\n"
"Constructors:\n"
"  Paramegers: (oaFeature)\n"
"    Calls: (const oaFeature&)\n"
"    Signature: oaFeature||cref-oaFeature,\n"
;

// ------------------------------------------------------------------
PyTypeObject PyoaFeature_Type = {
    PyObject_HEAD_INIT(&PyType_Type)
    0,
    "oaFeature",
    sizeof(PyoaFeatureObject),
    0,
    (destructor)oaFeature_tp_dealloc,	/* tp_dealloc */
    0,	/* tp_print */
    0,					/* tp_getattr */
    0,					/* tp_setattr */
    (cmpfunc)oaFeature_tp_compare,	/* tp_compare */
    (reprfunc)oaFeature_tp_repr,	/* tp_repr */
    0,					/* tp_as_number */
    0,					/* tp_as_sequence */
    0,					/* tp_as_mapping */
    0,					/* tp_as_hash */
    0,					/* tp_as_call */
    0,					/* tp_str */
    0,					/* tp_getattro */
    0,					/* tp_setattro */
    0,					/* tp_as_buffer */
    Py_TPFLAGS_DEFAULT|Py_TPFLAGS_BASETYPE, /* tp_flags */
    oaFeature_doc,	/* tp_doc */
    0,					/* tp_traverse */
    0,					/* tp_clear */
    0,					/* tp_richcompre */
    0,					/* tp_weaklistoffset */
    0,					/* tp_iter */
    0,					/* tp_iternext */
    oaFeature_methodlist,	/* tp_methods */
    0,					/* tp_members */
    0,					/* tp_getset */
    &PyoaSessionObject_Type,	/* tp_base */
    0,					/* tp_dict */
    0,					/* tp_descr_get */
    0,					/* tp_descr_set */
    0,					/* tp_dictoffset */
    0,					/* tp_init */
    PyType_GenericAlloc,	/* tp_alloc */
    oaFeature_new,	/* tp_new */
    _PyObject_Del,	/* tp_free */
};


// ------------------------------------------------------------------
//  Type Init:
// ------------------------------------------------------------------

int
PyoaFeature_TypeInit(PyObject* mod_dict)
{
    if (PyType_Ready(&PyoaFeature_Type)<0) {
      printf("** PyType_Ready failed for: oaFeature\n");
      return -1;
    }

    if (PyDict_SetItemString(mod_dict,"oaFeature",
           (PyObject*)(&PyoaFeature_Type))<0) {
       printf("** Failed to add type name to module dictionary for: oaFeature\n");
       return -1;
    }
    return 0;
}


// ==================================================================
// Array for class: oaFeature
// ==================================================================

// ------------------------------------------------------------------
static PyObject*
oaFeature_Array_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
  try {
    int is_raw=(type==&PyoaFeature_Array_Type);
    PyObject* gself = type->tp_alloc(type,0);
    if (gself == NULL) return gself;
    PyoaFeature_ArrayObject* self = (PyoaFeature_ArrayObject*)gself;
    self->borrow = 0;
    self->locks=NULL;
    static char *kwlist [] = { NULL } ;
    /* Case: () */ 
    {
        if (PyArg_ParseTuple(args,"")) {
            return gself;
        }
    }
    PyErr_Clear();
    /* Case: (int) */
    {
        int p1;
        if (PyArg_ParseTuple(args,(char*)"i",&p1)) {
            self->data.SetLen(p1);
            return gself;
        }
    }
    PyErr_Clear();
    /* Case: (oaFeature_Array) */
    {
        PyParamoaFeature_Array p1;
        if (PyArg_ParseTuple(args,(char*)"O&",
              &PyoaFeature_Array_Convert,&p1)) {
            self->data.TakeAway(p1);
            return gself;
        }
    }
    /* Error */
    PyErr_Clear();
    PyErr_SetString(PyExc_TypeError,
        "No Arg-Matching Constructor found for class: oaFeature_Array, Choices are:\n"
        "    ()\n"
        "    (int)\n"
        "    (oaFeature_Array)\n"
    );
    Py_DECREF(gself);
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static void
oaFeature_Array_dealloc(PyObject* gself)
{
    PyoaFeature_ArrayObject* self = (PyoaFeature_ArrayObject*)gself;
    Py_XDECREF(self->locks);
    self->ob_type->tp_free(gself);
}

// ------------------------------------------------------------------
static PyObject*
oaFeature_Array_str(PyObject *ob)
{
    PyParamoaFeature_Array value;
    int convert_status=PyoaFeature_Array_Convert(ob,&value);
    assert(convert_status!=0);
    PyObject* lst=PyoaFeature_Array_CreateList(value);
    PyObject* result=PyObject_Str(lst);
    Py_DECREF(lst);
    return result;
}

// ------------------------------------------------------------------
static PyObject*
oaFeature_Array_repr(PyObject *ob)
{
    PyParamoaFeature_Array value;
    int convert_status=PyoaFeature_Array_Convert(ob,&value);
    assert(convert_status!=0);
    PyObject* lst=PyoaFeature_Array_CreateList(value);
    PyObject* result=PyObject_Repr(lst);
    Py_DECREF(lst);
    return result;
}

// ------------------------------------------------------------------
static int
oaFeature_Array_compare(PyObject *ob1,PyObject* ob2)
{
    PyParamoaFeature_Array p1;
    PyParamoaFeature_Array p2;
    int s1=PyoaFeature_Array_Convert(ob1,&p1);
    int s2=PyoaFeature_Array_Convert(ob2,&p2);
    assert(s1!=0);
    assert(s2!=0);
    PyObject* l1=PyoaFeature_Array_CreateList(p1);
    PyObject* l2=PyoaFeature_Array_CreateList(p2);
    int result=PyObject_Compare(l1,l2);
    Py_DECREF(l1);
    Py_DECREF(l2);
    return result;
}

// ------------------------------------------------------------------
int
PyoaFeature_Array_Convert(PyObject* ob,PyParamoaFeature_Array* result)
{
  Pyoa_ssize_t len,i;
  if (PyoaFeature_Array_Check(ob)) {
    PyoaFeature_ArrayObject* self = (PyoaFeature_ArrayObject*)ob;
    result->Borrow(self->data);
  }
  else if (PyList_Check(ob)) {
    len=PyList_Size(ob);
    result->SetLen(len);
    PyParamoaFeature data;
    for(i=0;i<len;i++) {
      PyObject* a=PyList_GetItem(ob,i);
      if (!PyoaFeature_Convert(a,&data)) return 0;
      result->SetItem(i,data.Data());
    }
  }
  else if (PyTuple_Check(ob)) {
    len=PyTuple_Size(ob);
    result->SetLen(len);
    PyParamoaFeature data;
    for(i=0;i<len;i++) {
      PyObject* a=PyTuple_GetItem(ob,i);
      if (!PyoaFeature_Convert(a,&data)) return 0;
      result->SetItem(i,data.Data());
    }
  }
  else {
    PyErr_SetString(PyExc_TypeError,
      "Convertion of parameter to class: oaFeature_Array Failed");
    return 0;
  }
  return 1;
}

// ------------------------------------------------------------------
PyObject* PyoaFeature_Array_FromoaFeature_Array(const oaFeature_Array& value)
{
  PyObject* gself = PyoaFeature_Array_Type.tp_alloc(&PyoaFeature_Array_Type,0);
  if (gself == NULL) return gself;
  PyoaFeature_ArrayObject* self = (PyoaFeature_ArrayObject*)gself;
  self->data = value;
  self->borrow = 0;
  self->locks=NULL;
  return gself;
}

// ------------------------------------------------------------------
PyObject* PyoaFeature_Array_FromoaFeature_Array(PyTypeoaFeature* data,Pyoa_ssize_t len,PyObject* lock)
{
  PyObject* gself = PyoaFeature_Array_Type.tp_alloc(&PyoaFeature_Array_Type,0);
  if (gself == NULL) return gself;
  PyoaFeature_ArrayObject* self = (PyoaFeature_ArrayObject*)gself;
  self->data.Borrow(data,len);
  self->borrow = 1;
  self->locks=NULL;
  if (lock) PyoaLockObject(self->locks,lock);
  return gself;
}

// ------------------------------------------------------------------
PyObject* PyoaFeature_Array_CreateList(PyParamoaFeature_Array& value)
{
  Pyoa_ssize_t i;
  PyObject* lst=PyList_New(value.Len());
  for(i=0;i<value.Len();i++) {
    PyObject* ob=PyoaFeature_FromoaFeature(value.Data()[i]);
    PyList_SetItem(lst,i,ob);
  }
  return lst;
}

// ------------------------------------------------------------------
// Methods
// ------------------------------------------------------------------
static char oaFeature_Array_assign_doc[] = 
"Class: oaFeature_Array, Function: assign\n"
"  Paramegers: (oaFeature_Array)\n"
"    This function assigns the current value.\n"
;

static PyObject*
oaFeature_Array_assign(PyObject* ob, PyObject *args)
{
  PyoaFeature_ArrayObject* self=(PyoaFeature_ArrayObject*)ob;
  try {
    PyParamoaFeature_Array p1;
    if (PyArg_ParseTuple(args,(char*)"O&",
          &PyoaFeature_Array_Convert,&p1)) {
        self->data=p1;
        Py_INCREF(ob);
        return ob;
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}
// ------------------------------------------------------------------
static char oaFeature_Array_list_doc[] = 
"Class: oaFeature_Array, Function: list\n"
"  Paramegers: ()\n"
"    This function returns the current value as a list.\n"
;

static PyObject*
oaFeature_Array_list(PyObject* ob, PyObject *args)
{
  PyoaFeature_ArrayObject* self=(PyoaFeature_ArrayObject*)ob;
  try {
    if (PyArg_ParseTuple(args,(char*)"")) {
      return PyoaFeature_Array_CreateList(self->data);
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}
// ------------------------------------------------------------------
//  Function Methods Table:
// ------------------------------------------------------------------
static PyMethodDef oaFeature_Array_methodlist[] = {
    {"assign",(PyCFunction)oaFeature_Array_assign,METH_VARARGS,oaFeature_Array_assign_doc},
    {"list",(PyCFunction)oaFeature_Array_list,METH_VARARGS,oaFeature_Array_list_doc},
   {NULL,NULL,0,NULL}
};

// ------------------------------------------------------------------
static PyObject*
oaFeature_Array_index_get(PyObject* ob,Pyoa_ssize_t index)
{
  PyoaFeature_ArrayObject* self=(PyoaFeature_ArrayObject*)ob;
  try {
    PyParamoaFeature_Array data;
    int convert_status=PyoaFeature_Array_Convert(ob,&data);
    assert(convert_status!=0);
    if (index<0 || index>=data.Len()) {
        PyObject* err=PyString_FromString("index out of range");
        PyErr_SetObject(PyExc_IndexError, err);
        Py_DECREF(err);
        return NULL;
    }
    return PyoaFeature_FromoaFeature(data.GetItemPtr(index),1,self->locks);
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static Pyoa_ssize_t
oaFeature_Array_index_get_length(PyObject* ob)
{
    PyParamoaFeature_Array data;
    int convert_status=PyoaFeature_Array_Convert(ob,&data);
    assert(convert_status!=0);
    return data.Len();
}

// ------------------------------------------------------------------
static int
oaFeature_Array_index_set(PyObject *ob, Pyoa_ssize_t index, PyObject* value)
{
  try {
    PyParamoaFeature_Array data;
    PyParamoaFeature dataitem;
    int convert_status=PyoaFeature_Array_Convert(ob,&data);
    assert(convert_status!=0);
    if (index<0 || index>=data.Len()) {
        PyObject* err=PyString_FromString("index out of range");
        PyErr_SetObject(PyExc_IndexError, err);
        Py_DECREF(err);
        return -1;
    }
    if (PyoaFeature_Convert(value,&dataitem)==0) return -1;
    data.SetItem(index,dataitem.Data());
    return 0;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return 0;
  }
}

// ------------------------------------------------------------------
static char oaFeature_Array_doc[] =
"Class: oaFeature_Array\n"
"  The oaFeature_Array utility class provides an array of oaFeature.\n"
"Constructors:\n"
"  Paramegers: ()\n"
"    Calls: oaFeature_Array()\n"
"    Signature: oaFeature_Array||\n"
"    This is the default constructor for the oaFeature_Array class. This constructor creates an empty oaFeature_Array.\n"
"  Paramegers: (oaFeature_Array)\n"
"    Calls: (const oaFeature_Array&)\n"
"    Signature: oaFeature_Array||cref-oaFeature_Array,\n"
;

// ------------------------------------------------------------------
static PySequenceMethods oaFeature_Array_as_sequence = {
    (Pyoa_inquiry)oaFeature_Array_index_get_length, /* sq_length */
    (Pyoa_binaryfunc)0,              /* sq_concat */
    (Pyoa_intargfunc)0,              /* sq_repeat */
    (Pyoa_intargfunc)oaFeature_Array_index_get, /* sq_item */
    (Pyoa_intintargfunc)0,           /* sq_slice */
    (Pyoa_intobjargproc)oaFeature_Array_index_set,      /* sq_ass_item */
};

// ------------------------------------------------------------------
PyTypeObject PyoaFeature_Array_Type = {
    PyObject_HEAD_INIT(&PyType_Type)
    0,
    "oaFeature_Array",
    sizeof(PyoaFeature_ArrayObject),
    0,
    oaFeature_Array_dealloc, /* tp_dealloc */
    0,  /* tp_print */
    0,                                  /* tp_getattr */
    0,                                  /* tp_setattr */
    oaFeature_Array_compare,    /* tp_compare */
    oaFeature_Array_repr,      /* tp_repr */
    0,                                  /* tp_as_number */
    &oaFeature_Array_as_sequence,  /* tp_as_sequence */
    0,                                  /* tp_as_mapping */
    0,                                  /* tp_as_hash */
    0,                                  /* tp_as_call */
    oaFeature_Array_str,               /* tp_str */
    0,                                  /* tp_getattro */
    0,                                  /* tp_setattro */
    0,                                  /* tp_as_buffer */
    Py_TPFLAGS_DEFAULT|Py_TPFLAGS_BASETYPE, /* tp_flags */
    oaFeature_Array_doc, /* tp_doc */
    0,                                  /* tp_traverse */
    0,                                  /* tp_clear */
    0,                                  /* tp_richcompre */
    0,                                  /* tp_weaklistoffset */
    0,                                  /* tp_iter */
    0,                                  /* tp_iternext */
    oaFeature_Array_methodlist, /* tp_methods */
    0,                                  /* tp_members */
    0,                                  /* tp_getset */
    0,                                  /* tp_base */
    0,                                  /* tp_dict */
    0,                                  /* tp_descr_get */
    0,                                  /* tp_descr_set */
    0,                                  /* tp_dictoffset */
    0,                                  /* tp_init */
    PyType_GenericAlloc,        /* tp_alloc */
    oaFeature_Array_new, /* tp_new */
    _PyObject_Del,      /* tp_free */
};


// ------------------------------------------------------------------
int
PyoaFeature_Array_TypeInit(PyObject* mod_dict)
{
    if (PyType_Ready(&PyoaFeature_Array_Type)<0) {
      printf("** PyType_Ready failed for: oaFeature_Array\n");
      return -1;
    }
    if (PyDict_SetItemString(mod_dict,"oaFeature_Array",
           (PyObject*)(&PyoaFeature_Array_Type))<0) {
       printf("** Failed to add type name to module dictionary for: oaFeature_Array\n");
       return -1;
    }
    return 0;
}


/********************************************************************
 *   Copyright 2002-2008  LSI Corporation
 *
 *   Licensed under the Apache License, Version 2.0 (the "License");
 *   you may not use this file except in compliance with the License.
 *   You may obtain a copy of the License at
 *
 *       http://www.apache.org/licenses/LICENSE-2.0
 *
 *   Unless required by applicable law or agreed to in writing, software
 *   distributed under the License is distributed on an "AS IS" BASIS,
 *   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *   See the License for the specific language governing permissions and
 *   limitations under the License.
 *
 *******************************************************************/

#include "pyoa_header.h"


// ==================================================================
// Wrapper Implementation for Class: oaFeatureArray
// ==================================================================


// ==================================================================
// Alloc/Dealloc Routines
// ==================================================================

// ------------------------------------------------------------------
static PyObject*
oaFeatureArray_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
  try {
    int is_raw=(type==&PyoaFeatureArray_Type);
    PyObject* bself = type->tp_alloc(type,0);
    if (bself == NULL) return bself;
    PyoaFeatureArrayObject* self = (PyoaFeatureArrayObject*)bself;
    self->locks = NULL;
    self->borrow = 0;
    static char *kwlist [] = { NULL } ;
    // Case: ()
    {
        if (PyArg_ParseTuple(args,"")) {
            self->value = (oaArrayBase_oaFeature*)  new oaFeatureArray();
            return bself;
        }
    }
    PyErr_Clear();
    // Case: (oaUInt4)
    {
        PyParamoaUInt4 p1;
        if (PyArg_ParseTuple(args,"O&",
              &PyoaUInt4_Convert,&p1)) {
            self->value = (oaArrayBase_oaFeature*)  new oaFeatureArray(p1.Data());
            return bself;
        }
    }
    PyErr_Clear();
    // Case: (oaFeatureArray)
    {
        PyParamoaFeatureArray p1;
        if (PyArg_ParseTuple(args,(char*)"O&",
              &PyoaFeatureArray_Convert,&p1)) {
            self->value=(oaArrayBase_oaFeature*)  new oaFeatureArray(p1.Data());
            return bself;
        }
    }
    PyErr_Clear();
    PyErr_SetString(PyExc_TypeError,
        "No Arg-Matching Constructor found for class: oaFeatureArray, Choices are:\n"
        "    ()\n"
        "    (oaUInt4)\n"
        "    (oaFeatureArray)\n"
    );
    Py_DECREF(self);
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static void
oaFeatureArray_tp_dealloc(PyoaFeatureArrayObject* self)
{
    if (!self->borrow) {
        delete (oaFeatureArray*)(self->value);
    }
    Py_XDECREF(self->locks);
    self->ob_type->tp_free((PyObject*)self);
}

// ------------------------------------------------------------------
static PyObject*
oaFeatureArray_tp_repr(PyObject *ob)
{
    PyParamoaFeatureArray value;
    int convert_status=PyoaFeatureArray_Convert(ob,&value);
    assert(convert_status!=0);
    PyObject* result;

    char buffer[36];
    sprintf(buffer,"<oaFeatureArray::" DISPLAY_FORMAT ">",POINTER_AS_DISPLAY(value.DataCall()));
    result=PyString_FromString(buffer);
    return result;
}
        
// ------------------------------------------------------------------
static int
oaFeatureArray_tp_compare(PyObject *ob1,PyObject* ob2)
{
    PyParamoaFeatureArray v1;
    PyParamoaFeatureArray v2;
    int convert_status1=PyoaFeatureArray_Convert(ob1,&v1);
    int convert_status2=PyoaFeatureArray_Convert(ob2,&v2);
    assert(convert_status1!=0);
    assert(convert_status2!=0);
    if (v1.DataCall()==v2.DataCall()) return 0;
    return 1;
}
        
// ------------------------------------------------------------------
int
PyoaFeatureArray_Convert(PyObject* ob,PyParamoaFeatureArray* result)
{
    if (ob == NULL) return 1;
    if (PyoaFeatureArray_Check(ob)) {
        result->SetData( (oaFeatureArray*) ((PyoaFeatureArrayObject*)ob)->value);
        return 1;
    }
    PyErr_SetString(PyExc_TypeError,
        "Convertion of parameter to class: oaFeatureArray Failed");
    return 0;
}
// ------------------------------------------------------------------
PyObject* PyoaFeatureArray_FromoaFeatureArray(oaFeatureArray* data,int borrow,PyObject* lock)
{
    if (data) {
        PyObject* bself = PyoaFeatureArray_Type.tp_alloc(&PyoaFeatureArray_Type,0);
        if (bself == NULL) return bself;
        PyoaFeatureArrayObject* self = (PyoaFeatureArrayObject*)bself;
        self->value = (oaArrayBase_oaFeature*)  data;
        self->locks = NULL;
        self->borrow = borrow;
        if (lock) PyoaLockObject(self->locks,lock);
        return bself;
    }
    Py_INCREF(Py_None);
    return Py_None;
}

// ------------------------------------------------------------------
//  Type Object:
// ------------------------------------------------------------------

// ------------------------------------------------------------------
static char oaFeatureArray_doc[] = 
"Class: oaFeatureArray\n"
"  The oaFeatureArray class implements an array of oaFeature objects. This array is used to hold the list of features that are included in a particular version of OpenAccess and is part of the support for feature-based compatibility. For more information, refer to Compatibility for OpenAccess Applications and Data .\n"
"Constructors:\n"
"  Paramegers: ()\n"
"    Calls: oaFeatureArray()\n"
"    Signature: oaFeatureArray||simple-oaUInt4,\n"
"    This is the constructor for the oaFeatureArray class.\n"
"    sizeIn\n"
"    The initial size of the array\n"
"  Paramegers: (oaUInt4)\n"
"    Calls: oaFeatureArray(oaUInt4 sizeIn)\n"
"    Signature: oaFeatureArray||simple-oaUInt4,\n"
"    This is the constructor for the oaFeatureArray class.\n"
"    sizeIn\n"
"    The initial size of the array\n"
"  Paramegers: (oaFeatureArray)\n"
"    Calls: (const oaFeatureArray&)\n"
"    Signature: oaFeatureArray||cref-oaFeatureArray,\n"
;

// ------------------------------------------------------------------
PyTypeObject PyoaFeatureArray_Type = {
    PyObject_HEAD_INIT(&PyType_Type)
    0,
    "oaFeatureArray",
    sizeof(PyoaFeatureArrayObject),
    0,
    (destructor)oaFeatureArray_tp_dealloc,	/* tp_dealloc */
    0,	/* tp_print */
    0,					/* tp_getattr */
    0,					/* tp_setattr */
    (cmpfunc)oaFeatureArray_tp_compare,	/* tp_compare */
    (reprfunc)oaFeatureArray_tp_repr,	/* tp_repr */
    0,					/* tp_as_number */
    0,					/* tp_as_sequence */
    0,					/* tp_as_mapping */
    0,					/* tp_as_hash */
    0,					/* tp_as_call */
    0,					/* tp_str */
    0,					/* tp_getattro */
    0,					/* tp_setattro */
    0,					/* tp_as_buffer */
    Py_TPFLAGS_DEFAULT|Py_TPFLAGS_BASETYPE, /* tp_flags */
    oaFeatureArray_doc,	/* tp_doc */
    0,					/* tp_traverse */
    0,					/* tp_clear */
    0,					/* tp_richcompre */
    0,					/* tp_weaklistoffset */
    0,					/* tp_iter */
    0,					/* tp_iternext */
    0,					/* tp_methods */
    0,					/* tp_members */
    0,					/* tp_getset */
    &PyoaArray_oaFeature_Type,	/* tp_base */
    0,					/* tp_dict */
    0,					/* tp_descr_get */
    0,					/* tp_descr_set */
    0,					/* tp_dictoffset */
    0,					/* tp_init */
    PyType_GenericAlloc,	/* tp_alloc */
    oaFeatureArray_new,	/* tp_new */
    _PyObject_Del,	/* tp_free */
};


// ------------------------------------------------------------------
//  Type Init:
// ------------------------------------------------------------------

int
PyoaFeatureArray_TypeInit(PyObject* mod_dict)
{
    if (PyType_Ready(&PyoaFeatureArray_Type)<0) {
      printf("** PyType_Ready failed for: oaFeatureArray\n");
      return -1;
    }

    if (PyDict_SetItemString(mod_dict,"oaFeatureArray",
           (PyObject*)(&PyoaFeatureArray_Type))<0) {
       printf("** Failed to add type name to module dictionary for: oaFeatureArray\n");
       return -1;
    }
    return 0;
}


/********************************************************************
 *   Copyright 2002-2008  LSI Corporation
 *
 *   Licensed under the Apache License, Version 2.0 (the "License");
 *   you may not use this file except in compliance with the License.
 *   You may obtain a copy of the License at
 *
 *       http://www.apache.org/licenses/LICENSE-2.0
 *
 *   Unless required by applicable law or agreed to in writing, software
 *   distributed under the License is distributed on an "AS IS" BASIS,
 *   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *   See the License for the specific language governing permissions and
 *   limitations under the License.
 *
 *******************************************************************/

#include "pyoa_header.h"


// ==================================================================
// Wrapper Implementation for Class: oaFig
// ==================================================================


// ==================================================================
// Alloc/Dealloc Routines
// ==================================================================

// ------------------------------------------------------------------
static PyObject*
oaFig_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
  try {
    int is_raw=(type==&PyoaFig_Type);
    PyObject* bself = type->tp_alloc(type,0);
    if (bself == NULL) return bself;
    PyoaFigObject* self = (PyoaFigObject*)bself;
    self->locks = NULL;
    self->borrow = 0;
    static char *kwlist [] = { NULL } ;
    // Case: (oaFig)
    {
        PyParamoaFig p1;
        if (PyArg_ParseTuple(args,(char*)"O&",
              &PyoaFig_Convert,&p1)) {
            self->data=p1.Data();
            self->value=&(self->data);
            return bself;
        }
    }
    PyErr_Clear();
    // Case: ()
    {
        if (PyArg_ParseTuple(args,(char*)"")) {
          self->data=NULL;
          self->value=&(self->data);
          return bself;
        }
    }
    PyErr_Clear();
    PyErr_SetString(PyExc_TypeError,
        "No Arg-Matching Constructor found for class: oaFig, Choices are:\n"
        "    (oaFig)\n"
    );
    Py_DECREF(self);
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static void
oaFig_tp_dealloc(PyoaFigObject* self)
{
    self->ob_type->tp_free((PyObject*)self);
}

// ------------------------------------------------------------------
static PyObject*
oaFig_tp_repr(PyObject *ob)
{
    PyParamoaFig value;
    int convert_status=PyoaFig_Convert(ob,&value);
    assert(convert_status!=0);
    PyObject* result;

    char buffer[27];
    sprintf(buffer,"<oaFig::" DISPLAY_FORMAT ">",POINTER_AS_DISPLAY(value.DataCall()));
    result=PyString_FromString(buffer);
    return result;
}
        
// ------------------------------------------------------------------
static int
oaFig_tp_compare(PyObject *ob1,PyObject* ob2)
{
    PyParamoaFig v1;
    PyParamoaFig v2;
    int convert_status1=PyoaFig_Convert(ob1,&v1);
    int convert_status2=PyoaFig_Convert(ob2,&v2);
    assert(convert_status1!=0);
    assert(convert_status2!=0);
    if (v1.DataCall()==v2.DataCall()) return 0;
    return 1;
}
        
// ------------------------------------------------------------------
int
PyoaFig_Convert(PyObject* ob,PyParamoaFig* result)
{
    if (ob == NULL) return 1;
    if (PyoaFig_Check(ob)) {
        result->SetData( (oaFig**) ((PyoaFigObject*)ob)->value);
        return 1;
    }
    PyErr_SetString(PyExc_TypeError,
        "Convertion of parameter to class: oaFig Failed");
    return 0;
}
// ------------------------------------------------------------------
PyObject* PyoaFig_FromoaFig(oaFig** value,int borrow,PyObject* lock)
{
    if (value && *value) {
        oaFig* data=*value;
        if (data->isConnFig()) return PyoaConnFig_FromoaConnFig((oaConnFig**)value,borrow,lock);
        if (data->getType()==oacFigGroupType) return PyoaFigGroup_FromoaFigGroup((oaFigGroup**)value,borrow,lock);
        if (data->getType()==oacMarkerType) return PyoaMarker_FromoaMarker((oaMarker**)value,borrow,lock);
        if (data->isBoundary()) return PyoaBoundary_FromoaBoundary((oaBoundary**)value,borrow,lock);
        if (data->getType()==oacRowType) return PyoaRow_FromoaRow((oaRow**)value,borrow,lock);
        if (data->isBlockage()) return PyoaBlockage_FromoaBlockage((oaBlockage**)value,borrow,lock);
        PyObject* bself = PyoaFig_Type.tp_alloc(&PyoaFig_Type,0);
        if (bself == NULL) return bself;
        PyoaFigObject* self = (PyoaFigObject*)bself;
        self->value = (oaObject**) value;
        self->data = NULL;
        self->locks = NULL;
        self->borrow = 0; // Ignore borrow flag, since we copied
       if (lock) PyoaLockObject(self->locks,lock);
        return bself;
    }
    Py_INCREF(Py_None);
    return Py_None;
}
// ------------------------------------------------------------------
PyObject* PyoaFig_FromoaFig(oaFig* data)
{
    if (data) {
        if (data->isConnFig()) return PyoaConnFig_FromoaConnFig((oaConnFig*)data);
        if (data->getType()==oacFigGroupType) return PyoaFigGroup_FromoaFigGroup((oaFigGroup*)data);
        if (data->getType()==oacMarkerType) return PyoaMarker_FromoaMarker((oaMarker*)data);
        if (data->isBoundary()) return PyoaBoundary_FromoaBoundary((oaBoundary*)data);
        if (data->getType()==oacRowType) return PyoaRow_FromoaRow((oaRow*)data);
        if (data->isBlockage()) return PyoaBlockage_FromoaBlockage((oaBlockage*)data);
       PyObject* bself = PyoaFig_Type.tp_alloc(&PyoaFig_Type,0);
       if (bself == NULL) return bself;
       PyoaFigObject* self = (PyoaFigObject*)bself;
       self->data = (oaObject*) data;
       self->value = &(self->data);
       self->borrow = 0; 
       self->locks = NULL;
       return bself;
    }
    Py_INCREF(Py_None);
    return Py_None;
}

// ------------------------------------------------------------------
// FunctionMethods:
// ------------------------------------------------------------------

// ------------------------------------------------------------------
static char oaFig_copy_doc[] = 
"Class: oaFig, Function: copy\n"
"  Paramegers: (oaTransform)\n"
"    Calls: oaFig* copy(const oaTransform& xform) const\n"
"    Signature: copy|ptr-oaFig|cref-oaTransform,\n"
"    This function creates a copy of this figure within the same block as this figure. The new figure is moved from the location of the original by the specified transform.\n"
"  Paramegers: (oaTransform,oaBlock)\n"
"    Calls: oaFig* copy(const oaTransform& xform,oaBlock* block) const\n"
"    Signature: copy|ptr-oaFig|cref-oaTransform,ptr-oaBlock,\n"
"    This function creates a copy of this figure in the specified block , which may be in a different design. The new figure is moved by the specified transform.\n"
"    figcopy\n"
"    When Figures are copied any parameters they have are copied with them. Their AppDefs and other associated objects are not copied with the exceptions for specific classes as listed below. If the specified Figure is the leader of an oaGroup , all the other members of the group are copied as well. Note that when followers in a group are copied, they are not updated to relate to the copied objects. For example, if you copy an oaInst that is the leader of a group with an oaInstAttrDisplay that has the oaInst as its owner, the copied oaInstAttrDisplay will still refer to the original oaInst .\n"
"    Considerations for specific Figure classes\n"
"    oaInst : When an oaInst is copied, certain objects that depend on that Inst are copied with it. In addition to its parameters and followers, any oaAssignment or oaBlockage with the oaInst as an owner is copied. Note that parameters on such oaAssignments or oaBlockages are not copied.\n"
"    Copying a figure that is a pcell instance into another oaBlock requires that the superMaster of the instance be open. If the superMaster cannot be found, the copy will throw an oacCannotCopyPcellInst exception.\n"
"    oaFigGroup : When a FigGroup is copied, the figures contained in the FigGroup also are copied. Those figures follow the general rules with respect to what associated objects are copied.\n"
"    oaRoute : When a Route is copied the PathSegs, Vias, and Guides contained in the Route also are copied. Those figures follow the general rules with respect to what associated objects are copied.\n"
"    oaVia and oaRow copy restrictions:\n"
"    If no tech is available for the source design, the copy is prohibited (Exceptions: oacCannotCopyMoveUnboundViaToStrangerDesign and oacCannotCopyMoveUnboundRowToStrangerDesign ).\n"
"    If the object to be bound to (ViaDef, SiteDef) is or might be different in the destination block, the copy is prohibited.\n"
"    If the techs are different for the source and destination designs, if the source object is bound to a tech object, the destination object must bind to the same tech object -- otherwise, the copy is prohibited. (Exceptions: oacBindViaToIncorrectViaDefOnCopy and oacBindViaToIncorrectSiteDefOnCopy ).\n"
"    If the techs are different for the source and destination designs, if the destination tech object to be bound to has conflicts, the copy is prohibited. (Exceptions: oacBindViaToIncorrectViaDefOnCopy and oacBindViaToIncorrectSiteDefOnCopy ).\n"
"    If the techs are different for the source and destination designs, if the source object is not bound, the copy is prohibited. (Exceptions: oacCannotCopyMoveUnboundViaToStrangerDesign and oacCannotCopyMoveUnboundRowToStrangerDesign ).\n"
"    oacDesignHasNoTopBlock\n"
"    oacCannotCopyPcellInst\n"
"  Paramegers: (oaTransform,oaDesign)\n"
"    Calls: oaFig* copy(const oaTransform& xform,oaDesign* design) const\n"
"    Signature: copy|ptr-oaFig|cref-oaTransform,ptr-oaDesign,\n"
"    This function creates a copy of this figure in the top block of the specified design . The new figure is moved from the location of the original by the specified transform. An exception is thrown if the specified design does not have a top block.\n"
"    oacDesignHasNoTopBlock\n"
"    oacCannotCopyPcellInst\n"
;

static PyObject*
oaFig_copy(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaFig data;
    int convert_status=PyoaFig_Convert(ob,&data);
    assert(convert_status!=0);
    PyoaFigObject* self=(PyoaFigObject*)ob;
    if (!PyValidateDbObject(data.Data(),0)) return NULL;

    // Case: (oaTransform)
    {
        PyParamoaTransform p1;
        if (PyArg_ParseTuple(args,"O&",
              &PyoaTransform_Convert,&p1)) {
            oaFigp result= (data.DataCall()->copy(p1.Data()));
            return PyoaFig_FromoaFig(result);
        }
    }
    PyErr_Clear();
    // Case: (oaTransform,oaBlock)
    {
        PyParamoaTransform p1;
        PyParamoaBlock p2;
        if (PyArg_ParseTuple(args,"O&O&",
              &PyoaTransform_Convert,&p1,
              &PyoaBlock_Convert,&p2)) {
            if (!PyValidateDbObject(p2.Data(),2)) return NULL;
            oaFigp result= (data.DataCall()->copy(p1.Data(),p2.Data()));
            return PyoaFig_FromoaFig(result);
        }
    }
    PyErr_Clear();
    // Case: (oaTransform,oaDesign)
    {
        PyParamoaTransform p1;
        PyParamoaDesign p2;
        if (PyArg_ParseTuple(args,"O&O&",
              &PyoaTransform_Convert,&p1,
              &PyoaDesign_Convert,&p2)) {
            if (!PyValidateDbObject(p2.Data(),2)) return NULL;
            oaFigp result= (data.DataCall()->copy(p1.Data(),p2.Data()));
            return PyoaFig_FromoaFig(result);
        }
    }
    PyErr_Clear();
    PyErr_SetString(PyExc_TypeError,
        "No Arg-Matching Function found for class: oaFig, function: copy, Choices are:\n"
        "    (oaTransform)\n"
        "    (oaTransform,oaBlock)\n"
        "    (oaTransform,oaDesign)\n"
    );
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaFig_destroy_doc[] = 
"Class: oaFig, Function: destroy\n"
"  Paramegers: ()\n"
"    Calls: void destroy()\n"
"    Signature: destroy|void-void|\n"
"    BrowseData: 0\n"
"    This function destroys this figure, removing it from the database.\n"
"    Note: If this function is called on an instance, it throws an oacCannotDestroyImplicitInst exception if an attempt is made to destroy an instance that was implicitly created. This function will throw an oacInstMustBeInUniqueOccHier exception if an attempt is made to destroy an instance where the instance is in a hierarchy of occurrences that are not unique.\n"
"    When a Figure is destroyed, it has the side effect of destroying its properties and AppDefs and destroying all members of any group of which it is the leader. In addition, there are some class-specific side-effects as listed below.\n"
"    Considerations for specific Figure classes\n"
"    oaInst : When an oaInst is destroyed any oaAssignment or oaBlockage with the oaInst as an owner is destroyed.\n"
"    oaFigGroup : When a FigGroup is destroyed, the figures contained in the FigGroup also are destroyed.\n"
"    oaRoute : When a Route is destroyed, the PathSegs, Vias, and Guides contained in the Route are not destroyed. Those figures remain attached to the oaNet that the Route is on.\n"
"    oacCannotDestroyImplicitInst\n"
"    oacInstMustBeInUniqueOccHier\n"
;

static PyObject*
oaFig_destroy(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaFig data;
    int convert_status=PyoaFig_Convert(ob,&data);
    assert(convert_status!=0);
    PyoaFigObject* self=(PyoaFigObject*)ob;
    if (!PyValidateDbObject(data.Data(),0)) return NULL;

    if (PyArg_ParseTuple(args,"")) {
        data.DataCall()->destroy();
        Py_INCREF(Py_None);
        return Py_None;
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaFig_getBBox_doc[] = 
"Class: oaFig, Function: getBBox\n"
"  Paramegers: (oaBox)\n"
"    Calls: void getBBox(oaBox& bBox) const\n"
"    Signature: getBBox|void-void|ref-oaBox,\n"
"    BrowseData: 0,oaBox\n"
"    This function returns the bounding box of this figure.\n"
;

static PyObject*
oaFig_getBBox(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaFig data;
    int convert_status=PyoaFig_Convert(ob,&data);
    assert(convert_status!=0);
    PyoaFigObject* self=(PyoaFigObject*)ob;
    if (!PyValidateDbObject(data.Data(),0)) return NULL;

    PyParamoaBox p1;
    if (PyArg_ParseTuple(args,"O&",
          &PyoaBox_Convert,&p1)) {
        data.DataCall()->getBBox(p1.Data());
        Py_INCREF(Py_None);
        return Py_None;
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaFig_getFigGroupMem_doc[] = 
"Class: oaFig, Function: getFigGroupMem\n"
"  Paramegers: ()\n"
"    Calls: oaFigGroupMem* getFigGroupMem() const\n"
"    Signature: getFigGroupMem|ptr-oaFigGroupMem|\n"
"    BrowseData: 1\n"
"    This function gets the oaFigGroupMem that references this oaFig, if any, or returns NULL if the oaFig is not referenced by an oaFigGroupMem .\n"
;

static PyObject*
oaFig_getFigGroupMem(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaFig data;
    int convert_status=PyoaFig_Convert(ob,&data);
    assert(convert_status!=0);
    PyoaFigObject* self=(PyoaFigObject*)ob;
    if (!PyValidateDbObject(data.Data(),0)) return NULL;

    if (PyArg_ParseTuple(args,"")) {
        oaFigGroupMemp result= (data.DataCall()->getFigGroupMem());
        return PyoaFigGroupMem_FromoaFigGroupMem(result);
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaFig_move_doc[] = 
"Class: oaFig, Function: move\n"
"  Paramegers: (oaTransform)\n"
"    Calls: void move(const oaTransform& xform)\n"
"    Signature: move|void-void|cref-oaTransform,\n"
"    This function moves this figure within the same block as this figure, using the specified transform.\n"
"  Paramegers: (oaTransform,oaBlock)\n"
"    Calls: oaFig* move(const oaTransform& xform,oaBlock* block)\n"
"    Signature: move|ptr-oaFig|cref-oaTransform,ptr-oaBlock,\n"
"    This function moves this figure by the specified transform to the specified block, which may be in a different design. A pointer to the new oaFig is returned, and the original figure pointer is no longer valid since the original figure is destroyed.\n"
"    figmove\n"
"    When a Figure is moved, OpenAccess also moves members of any group of which the figure is a leader. In addition, there are some class-specific side-effects as listed below.\n"
"    Considerations for specific Figure classes\n"
"    oaInst : When an oaInst is moved, any oaBlockage with the oaInst as an owner is moved.\n"
"    Moving a figure that is a pcell instance into another oaBlock requires that the superMaster of the instance be open. If the superMaster cannot be found, the move throws an oacCannotMovePcellInst exception.\n"
"    oaFigGroup : When a FigGroup is moved, the figures contained in the FigGroup also are moved. Those figures follow the general rules with respect to what associated objects are moved.\n"
"    oaRoute : When a Route is moved, the PathSegs, Vias, and Guides contained in the Route are moved.\n"
"    oaVia and oaRow move restrictions:\n"
"    If no tech is available for the source design, the move is prohibited. (Exceptions: oacCannotCopyMoveUnboundViaToStrangerDesign and oacCannotCopyMoveUnboundRowToStrangerDesign ).\n"
"    If the object to be bound to (ViaDef, SiteDef) is or might be different in the destination block, the move is prohibited.\n"
"    If the techs are different for the source and destination designs, if the source object is bound to a tech object, the destination object must bind to the same tech object -- otherwise, the move is prohibited. (Exceptions: oacBindViaToIncorrectViaDefOnMove and oacBindViaToIncorrectSiteDefOnMove ).\n"
"    If the techs are different for the source and destination designs, if the destination tech object to be bound to has conflicts, the move is prohibited. (Exceptions: oacBindViaToIncorrectViaDefOnMove and oacBindViaToIncorrectSiteDefOnMove ).\n"
"    If the techs are different for the source and destination designs, if the source object is not bound, the move is prohibited. (Exceptions: oacCannotCopyMoveUnboundViaToStrangerDesign and oacCannotCopyMoveUnboundRowToStrangerDesign ).\n"
"    oacCannotMovePcellInst\n"
"    oacDesignHasNoTopBlock\n"
"  Paramegers: (oaTransform,oaDesign)\n"
"    Calls: oaFig* move(const oaTransform& xform,oaDesign* design)\n"
"    Signature: move|ptr-oaFig|cref-oaTransform,ptr-oaDesign,\n"
"    This function uses the specified transform to move this figure into the top block of the specified design . An exception is thrown if the specified design does not have a top block.\n"
"    oacDesignHasNoTopBlock\n"
"    oacCannotMovePcellInst\n"
;

static PyObject*
oaFig_move(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaFig data;
    int convert_status=PyoaFig_Convert(ob,&data);
    assert(convert_status!=0);
    PyoaFigObject* self=(PyoaFigObject*)ob;
    if (!PyValidateDbObject(data.Data(),0)) return NULL;

    // Case: (oaTransform)
    {
        PyParamoaTransform p1;
        if (PyArg_ParseTuple(args,"O&",
              &PyoaTransform_Convert,&p1)) {
            data.DataCall()->move(p1.Data());
            Py_INCREF(Py_None);
            return Py_None;
        }
    }
    PyErr_Clear();
    // Case: (oaTransform,oaBlock)
    {
        PyParamoaTransform p1;
        PyParamoaBlock p2;
        if (PyArg_ParseTuple(args,"O&O&",
              &PyoaTransform_Convert,&p1,
              &PyoaBlock_Convert,&p2)) {
            if (!PyValidateDbObject(p2.Data(),2)) return NULL;
            oaFigp result= (data.DataCall()->move(p1.Data(),p2.Data()));
            return PyoaFig_FromoaFig(result);
        }
    }
    PyErr_Clear();
    // Case: (oaTransform,oaDesign)
    {
        PyParamoaTransform p1;
        PyParamoaDesign p2;
        if (PyArg_ParseTuple(args,"O&O&",
              &PyoaTransform_Convert,&p1,
              &PyoaDesign_Convert,&p2)) {
            if (!PyValidateDbObject(p2.Data(),2)) return NULL;
            oaFigp result= (data.DataCall()->move(p1.Data(),p2.Data()));
            return PyoaFig_FromoaFig(result);
        }
    }
    PyErr_Clear();
    PyErr_SetString(PyExc_TypeError,
        "No Arg-Matching Function found for class: oaFig, function: move, Choices are:\n"
        "    (oaTransform)\n"
        "    (oaTransform,oaBlock)\n"
        "    (oaTransform,oaDesign)\n"
    );
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaFig_overlaps_doc[] = 
"Class: oaFig, Function: overlaps\n"
"  Paramegers: (oaBox)\n"
"    Calls: oaBoolean overlaps(const oaBox& box) const\n"
"    Signature: overlaps|simple-oaBoolean|cref-oaBox,\n"
"    This function determines whether the figure overlaps with the given oaBox .\n"
"    box\n"
"    the oaBox to test against\n"
;

static PyObject*
oaFig_overlaps(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaFig data;
    int convert_status=PyoaFig_Convert(ob,&data);
    assert(convert_status!=0);
    PyoaFigObject* self=(PyoaFigObject*)ob;
    if (!PyValidateDbObject(data.Data(),0)) return NULL;

    PyParamoaBox p1;
    if (PyArg_ParseTuple(args,"O&",
          &PyoaBox_Convert,&p1)) {
        oaBoolean result= (data.DataCall()->overlaps(p1.Data()));
        return PyoaBoolean_FromoaBoolean(result);
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaFig_isNull_doc[] =
"Class: oaFig, Function: isNull\n"
"  Parameters: () \n"
"    This functions returns 1 if the DbPointer is NULL, and 0 otherwise.\n"
;

static PyObject*
oaFig_tp_isNull(PyObject* ob, PyObject *args)
{
    PyParamoaFig data;
    int convert_status=PyoaFig_Convert(ob,&data);
    assert(convert_status!=0);
    if (data.DataCall()==NULL)
        return PyInt_FromLong(1);
    else
        return PyInt_FromLong(0);
}
static char oaFig_assign_doc[] = 
"Class: oaFig, Function: set\n"
"  Paramegers: (oaDouble)\n"
"    This function sets the current value.\n"
;

static PyObject*
oaFig_tp_assign(PyObject* ob, PyObject *args)
{
  PyParamoaFig data;
  int convert_status=PyoaFig_Convert(ob,&data);
  assert(convert_status!=0);
  try {
    PyParamoaFig p1;
    if (PyArg_ParseTuple(args,(char*)"O&",
          &PyoaFig_Convert,&p1)) {
        data.Data()=p1.Data();
        Py_INCREF(ob);
        return ob;
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}


// ------------------------------------------------------------------
//  Function Methods Table:
// ------------------------------------------------------------------

static PyMethodDef oaFig_methodlist[] = {
    {"copy",(PyCFunction)oaFig_copy,METH_VARARGS,oaFig_copy_doc},
    {"destroy",(PyCFunction)oaFig_destroy,METH_VARARGS,oaFig_destroy_doc},
    {"getBBox",(PyCFunction)oaFig_getBBox,METH_VARARGS,oaFig_getBBox_doc},
    {"getFigGroupMem",(PyCFunction)oaFig_getFigGroupMem,METH_VARARGS,oaFig_getFigGroupMem_doc},
    {"move",(PyCFunction)oaFig_move,METH_VARARGS,oaFig_move_doc},
    {"overlaps",(PyCFunction)oaFig_overlaps,METH_VARARGS,oaFig_overlaps_doc},
    {"isNull",(PyCFunction)oaFig_tp_isNull,METH_VARARGS,oaFig_isNull_doc},
    {"assign",(PyCFunction)oaFig_tp_assign,METH_VARARGS,oaFig_assign_doc},
   {NULL,NULL,0,NULL}
};


// ------------------------------------------------------------------
//  Type Object:
// ------------------------------------------------------------------

// ------------------------------------------------------------------
static char oaFig_doc[] = 
"Class: oaFig\n"
"  The oaFig class is an abstract class that is the base for all OpenAccess database figures, including instances, arrays, markers, boundaries, rows, shapes, and routes.\n"
"Constructors:\n"
"  Paramegers: (oaFig)\n"
"    Calls: (const oaFig&)\n"
"    Signature: oaFig||cref-oaFig,\n"
;

// ------------------------------------------------------------------
PyTypeObject PyoaFig_Type = {
    PyObject_HEAD_INIT(&PyType_Type)
    0,
    "oaFig",
    sizeof(PyoaFigObject),
    0,
    (destructor)oaFig_tp_dealloc,	/* tp_dealloc */
    0,	/* tp_print */
    0,					/* tp_getattr */
    0,					/* tp_setattr */
    (cmpfunc)oaFig_tp_compare,	/* tp_compare */
    (reprfunc)oaFig_tp_repr,	/* tp_repr */
    0,					/* tp_as_number */
    0,					/* tp_as_sequence */
    0,					/* tp_as_mapping */
    0,					/* tp_as_hash */
    0,					/* tp_as_call */
    0,					/* tp_str */
    0,					/* tp_getattro */
    0,					/* tp_setattro */
    0,					/* tp_as_buffer */
    Py_TPFLAGS_DEFAULT|Py_TPFLAGS_BASETYPE, /* tp_flags */
    oaFig_doc,	/* tp_doc */
    0,					/* tp_traverse */
    0,					/* tp_clear */
    0,					/* tp_richcompre */
    0,					/* tp_weaklistoffset */
    0,					/* tp_iter */
    0,					/* tp_iternext */
    oaFig_methodlist,	/* tp_methods */
    0,					/* tp_members */
    0,					/* tp_getset */
    &PyoaBlockObject_Type,	/* tp_base */
    0,					/* tp_dict */
    0,					/* tp_descr_get */
    0,					/* tp_descr_set */
    0,					/* tp_dictoffset */
    0,					/* tp_init */
    PyType_GenericAlloc,	/* tp_alloc */
    oaFig_new,	/* tp_new */
    _PyObject_Del,	/* tp_free */
};


// ------------------------------------------------------------------
//  Type Init:
// ------------------------------------------------------------------

int
PyoaFig_TypeInit(PyObject* mod_dict)
{
    if (PyType_Ready(&PyoaFig_Type)<0) {
      printf("** PyType_Ready failed for: oaFig\n");
      return -1;
    }

    if (PyDict_SetItemString(mod_dict,"oaFig",
           (PyObject*)(&PyoaFig_Type))<0) {
       printf("** Failed to add type name to module dictionary for: oaFig\n");
       return -1;
    }
    return 0;
}


// ==================================================================
// Array for class: oaFig
// ==================================================================

// ------------------------------------------------------------------
static PyObject*
oaFig_Array_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
  try {
    int is_raw=(type==&PyoaFig_Array_Type);
    PyObject* gself = type->tp_alloc(type,0);
    if (gself == NULL) return gself;
    PyoaFig_ArrayObject* self = (PyoaFig_ArrayObject*)gself;
    self->borrow = 0;
    self->locks=NULL;
    static char *kwlist [] = { NULL } ;
    /* Case: () */ 
    {
        if (PyArg_ParseTuple(args,"")) {
            return gself;
        }
    }
    PyErr_Clear();
    /* Case: (int) */
    {
        int p1;
        if (PyArg_ParseTuple(args,(char*)"i",&p1)) {
            self->data.SetLen(p1);
            return gself;
        }
    }
    PyErr_Clear();
    /* Case: (oaFig_Array) */
    {
        PyParamoaFig_Array p1;
        if (PyArg_ParseTuple(args,(char*)"O&",
              &PyoaFig_Array_Convert,&p1)) {
            self->data.TakeAway(p1);
            return gself;
        }
    }
    /* Error */
    PyErr_Clear();
    PyErr_SetString(PyExc_TypeError,
        "No Arg-Matching Constructor found for class: oaFig_Array, Choices are:\n"
        "    ()\n"
        "    (int)\n"
        "    (oaFig_Array)\n"
    );
    Py_DECREF(gself);
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static void
oaFig_Array_dealloc(PyObject* gself)
{
    PyoaFig_ArrayObject* self = (PyoaFig_ArrayObject*)gself;
    Py_XDECREF(self->locks);
    self->ob_type->tp_free(gself);
}

// ------------------------------------------------------------------
static PyObject*
oaFig_Array_str(PyObject *ob)
{
    PyParamoaFig_Array value;
    int convert_status=PyoaFig_Array_Convert(ob,&value);
    assert(convert_status!=0);
    PyObject* lst=PyoaFig_Array_CreateList(value);
    PyObject* result=PyObject_Str(lst);
    Py_DECREF(lst);
    return result;
}

// ------------------------------------------------------------------
static PyObject*
oaFig_Array_repr(PyObject *ob)
{
    PyParamoaFig_Array value;
    int convert_status=PyoaFig_Array_Convert(ob,&value);
    assert(convert_status!=0);
    PyObject* lst=PyoaFig_Array_CreateList(value);
    PyObject* result=PyObject_Repr(lst);
    Py_DECREF(lst);
    return result;
}

// ------------------------------------------------------------------
static int
oaFig_Array_compare(PyObject *ob1,PyObject* ob2)
{
    PyParamoaFig_Array p1;
    PyParamoaFig_Array p2;
    int s1=PyoaFig_Array_Convert(ob1,&p1);
    int s2=PyoaFig_Array_Convert(ob2,&p2);
    assert(s1!=0);
    assert(s2!=0);
    PyObject* l1=PyoaFig_Array_CreateList(p1);
    PyObject* l2=PyoaFig_Array_CreateList(p2);
    int result=PyObject_Compare(l1,l2);
    Py_DECREF(l1);
    Py_DECREF(l2);
    return result;
}

// ------------------------------------------------------------------
int
PyoaFig_Array_Convert(PyObject* ob,PyParamoaFig_Array* result)
{
  Pyoa_ssize_t len,i;
  if (PyoaFig_Array_Check(ob)) {
    PyoaFig_ArrayObject* self = (PyoaFig_ArrayObject*)ob;
    result->Borrow(self->data);
  }
  else if (PyList_Check(ob)) {
    len=PyList_Size(ob);
    result->SetLen(len);
    PyParamoaFig data;
    for(i=0;i<len;i++) {
      PyObject* a=PyList_GetItem(ob,i);
      if (!PyoaFig_Convert(a,&data)) return 0;
      result->SetItem(i,data.Data());
    }
  }
  else if (PyTuple_Check(ob)) {
    len=PyTuple_Size(ob);
    result->SetLen(len);
    PyParamoaFig data;
    for(i=0;i<len;i++) {
      PyObject* a=PyTuple_GetItem(ob,i);
      if (!PyoaFig_Convert(a,&data)) return 0;
      result->SetItem(i,data.Data());
    }
  }
  else {
    PyErr_SetString(PyExc_TypeError,
      "Convertion of parameter to class: oaFig_Array Failed");
    return 0;
  }
  return 1;
}

// ------------------------------------------------------------------
PyObject* PyoaFig_Array_FromoaFig_Array(const oaFig_Array& value)
{
  PyObject* gself = PyoaFig_Array_Type.tp_alloc(&PyoaFig_Array_Type,0);
  if (gself == NULL) return gself;
  PyoaFig_ArrayObject* self = (PyoaFig_ArrayObject*)gself;
  self->data = value;
  self->borrow = 0;
  self->locks=NULL;
  return gself;
}

// ------------------------------------------------------------------
PyObject* PyoaFig_Array_FromoaFig_Array(PyTypeoaFig* data,Pyoa_ssize_t len,PyObject* lock)
{
  PyObject* gself = PyoaFig_Array_Type.tp_alloc(&PyoaFig_Array_Type,0);
  if (gself == NULL) return gself;
  PyoaFig_ArrayObject* self = (PyoaFig_ArrayObject*)gself;
  self->data.Borrow(data,len);
  self->borrow = 1;
  self->locks=NULL;
  if (lock) PyoaLockObject(self->locks,lock);
  return gself;
}

// ------------------------------------------------------------------
PyObject* PyoaFig_Array_CreateList(PyParamoaFig_Array& value)
{
  Pyoa_ssize_t i;
  PyObject* lst=PyList_New(value.Len());
  for(i=0;i<value.Len();i++) {
    PyObject* ob=PyoaFig_FromoaFig(value.Data()[i]);
    PyList_SetItem(lst,i,ob);
  }
  return lst;
}

// ------------------------------------------------------------------
// Methods
// ------------------------------------------------------------------
static char oaFig_Array_assign_doc[] = 
"Class: oaFig_Array, Function: assign\n"
"  Paramegers: (oaFig_Array)\n"
"    This function assigns the current value.\n"
;

static PyObject*
oaFig_Array_assign(PyObject* ob, PyObject *args)
{
  PyoaFig_ArrayObject* self=(PyoaFig_ArrayObject*)ob;
  try {
    PyParamoaFig_Array p1;
    if (PyArg_ParseTuple(args,(char*)"O&",
          &PyoaFig_Array_Convert,&p1)) {
        self->data=p1;
        Py_INCREF(ob);
        return ob;
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}
// ------------------------------------------------------------------
static char oaFig_Array_list_doc[] = 
"Class: oaFig_Array, Function: list\n"
"  Paramegers: ()\n"
"    This function returns the current value as a list.\n"
;

static PyObject*
oaFig_Array_list(PyObject* ob, PyObject *args)
{
  PyoaFig_ArrayObject* self=(PyoaFig_ArrayObject*)ob;
  try {
    if (PyArg_ParseTuple(args,(char*)"")) {
      return PyoaFig_Array_CreateList(self->data);
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}
// ------------------------------------------------------------------
//  Function Methods Table:
// ------------------------------------------------------------------
static PyMethodDef oaFig_Array_methodlist[] = {
    {"assign",(PyCFunction)oaFig_Array_assign,METH_VARARGS,oaFig_Array_assign_doc},
    {"list",(PyCFunction)oaFig_Array_list,METH_VARARGS,oaFig_Array_list_doc},
   {NULL,NULL,0,NULL}
};

// ------------------------------------------------------------------
static PyObject*
oaFig_Array_index_get(PyObject* ob,Pyoa_ssize_t index)
{
  PyoaFig_ArrayObject* self=(PyoaFig_ArrayObject*)ob;
  try {
    PyParamoaFig_Array data;
    int convert_status=PyoaFig_Array_Convert(ob,&data);
    assert(convert_status!=0);
    if (index<0 || index>=data.Len()) {
        PyObject* err=PyString_FromString("index out of range");
        PyErr_SetObject(PyExc_IndexError, err);
        Py_DECREF(err);
        return NULL;
    }
    return PyoaFig_FromoaFig(data.GetItemPtr(index),1,self->locks);
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static Pyoa_ssize_t
oaFig_Array_index_get_length(PyObject* ob)
{
    PyParamoaFig_Array data;
    int convert_status=PyoaFig_Array_Convert(ob,&data);
    assert(convert_status!=0);
    return data.Len();
}

// ------------------------------------------------------------------
static int
oaFig_Array_index_set(PyObject *ob, Pyoa_ssize_t index, PyObject* value)
{
  try {
    PyParamoaFig_Array data;
    PyParamoaFig dataitem;
    int convert_status=PyoaFig_Array_Convert(ob,&data);
    assert(convert_status!=0);
    if (index<0 || index>=data.Len()) {
        PyObject* err=PyString_FromString("index out of range");
        PyErr_SetObject(PyExc_IndexError, err);
        Py_DECREF(err);
        return -1;
    }
    if (PyoaFig_Convert(value,&dataitem)==0) return -1;
    data.SetItem(index,dataitem.Data());
    return 0;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return 0;
  }
}

// ------------------------------------------------------------------
static char oaFig_Array_doc[] =
"Class: oaFig_Array\n"
"  The oaFig_Array utility class provides an array of oaFig.\n"
"Constructors:\n"
"  Paramegers: ()\n"
"    Calls: oaFig_Array()\n"
"    Signature: oaFig_Array||\n"
"    This is the default constructor for the oaFig_Array class. This constructor creates an empty oaFig_Array.\n"
"  Paramegers: (oaFig_Array)\n"
"    Calls: (const oaFig_Array&)\n"
"    Signature: oaFig_Array||cref-oaFig_Array,\n"
;

// ------------------------------------------------------------------
static PySequenceMethods oaFig_Array_as_sequence = {
    (Pyoa_inquiry)oaFig_Array_index_get_length, /* sq_length */
    (Pyoa_binaryfunc)0,              /* sq_concat */
    (Pyoa_intargfunc)0,              /* sq_repeat */
    (Pyoa_intargfunc)oaFig_Array_index_get, /* sq_item */
    (Pyoa_intintargfunc)0,           /* sq_slice */
    (Pyoa_intobjargproc)oaFig_Array_index_set,      /* sq_ass_item */
};

// ------------------------------------------------------------------
PyTypeObject PyoaFig_Array_Type = {
    PyObject_HEAD_INIT(&PyType_Type)
    0,
    "oaFig_Array",
    sizeof(PyoaFig_ArrayObject),
    0,
    oaFig_Array_dealloc, /* tp_dealloc */
    0,  /* tp_print */
    0,                                  /* tp_getattr */
    0,                                  /* tp_setattr */
    oaFig_Array_compare,    /* tp_compare */
    oaFig_Array_repr,      /* tp_repr */
    0,                                  /* tp_as_number */
    &oaFig_Array_as_sequence,  /* tp_as_sequence */
    0,                                  /* tp_as_mapping */
    0,                                  /* tp_as_hash */
    0,                                  /* tp_as_call */
    oaFig_Array_str,               /* tp_str */
    0,                                  /* tp_getattro */
    0,                                  /* tp_setattro */
    0,                                  /* tp_as_buffer */
    Py_TPFLAGS_DEFAULT|Py_TPFLAGS_BASETYPE, /* tp_flags */
    oaFig_Array_doc, /* tp_doc */
    0,                                  /* tp_traverse */
    0,                                  /* tp_clear */
    0,                                  /* tp_richcompre */
    0,                                  /* tp_weaklistoffset */
    0,                                  /* tp_iter */
    0,                                  /* tp_iternext */
    oaFig_Array_methodlist, /* tp_methods */
    0,                                  /* tp_members */
    0,                                  /* tp_getset */
    0,                                  /* tp_base */
    0,                                  /* tp_dict */
    0,                                  /* tp_descr_get */
    0,                                  /* tp_descr_set */
    0,                                  /* tp_dictoffset */
    0,                                  /* tp_init */
    PyType_GenericAlloc,        /* tp_alloc */
    oaFig_Array_new, /* tp_new */
    _PyObject_Del,      /* tp_free */
};


// ------------------------------------------------------------------
int
PyoaFig_Array_TypeInit(PyObject* mod_dict)
{
    if (PyType_Ready(&PyoaFig_Array_Type)<0) {
      printf("** PyType_Ready failed for: oaFig_Array\n");
      return -1;
    }
    if (PyDict_SetItemString(mod_dict,"oaFig_Array",
           (PyObject*)(&PyoaFig_Array_Type))<0) {
       printf("** Failed to add type name to module dictionary for: oaFig_Array\n");
       return -1;
    }
    return 0;
}


/********************************************************************
 *   Copyright 2002-2008  LSI Corporation
 *
 *   Licensed under the Apache License, Version 2.0 (the "License");
 *   you may not use this file except in compliance with the License.
 *   You may obtain a copy of the License at
 *
 *       http://www.apache.org/licenses/LICENSE-2.0
 *
 *   Unless required by applicable law or agreed to in writing, software
 *   distributed under the License is distributed on an "AS IS" BASIS,
 *   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *   See the License for the specific language governing permissions and
 *   limitations under the License.
 *
 *******************************************************************/

#include "pyoa_header.h"


// ==================================================================
// Wrapper Implementation for Class: oaFigGroup
// ==================================================================


// ==================================================================
// Alloc/Dealloc Routines
// ==================================================================

// ------------------------------------------------------------------
static PyObject*
oaFigGroup_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
  try {
    int is_raw=(type==&PyoaFigGroup_Type);
    PyObject* bself = type->tp_alloc(type,0);
    if (bself == NULL) return bself;
    PyoaFigGroupObject* self = (PyoaFigGroupObject*)bself;
    self->locks = NULL;
    self->borrow = 0;
    static char *kwlist [] = { NULL } ;
    // Case: (oaFigGroup)
    {
        PyParamoaFigGroup p1;
        if (PyArg_ParseTuple(args,(char*)"O&",
              &PyoaFigGroup_Convert,&p1)) {
            self->data=p1.Data();
            self->value=&(self->data);
            return bself;
        }
    }
    PyErr_Clear();
    // Case: ()
    {
        if (PyArg_ParseTuple(args,(char*)"")) {
          self->data=NULL;
          self->value=&(self->data);
          return bself;
        }
    }
    PyErr_Clear();
    PyErr_SetString(PyExc_TypeError,
        "No Arg-Matching Constructor found for class: oaFigGroup, Choices are:\n"
        "    (oaFigGroup)\n"
    );
    Py_DECREF(self);
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static void
oaFigGroup_tp_dealloc(PyoaFigGroupObject* self)
{
    self->ob_type->tp_free((PyObject*)self);
}

// ------------------------------------------------------------------
static PyObject*
oaFigGroup_tp_repr(PyObject *ob)
{
    PyParamoaFigGroup value;
    int convert_status=PyoaFigGroup_Convert(ob,&value);
    assert(convert_status!=0);
    PyObject* result;

    char buffer[32];
    sprintf(buffer,"<oaFigGroup::" DISPLAY_FORMAT ">",POINTER_AS_DISPLAY(value.DataCall()));
    result=PyString_FromString(buffer);
    return result;
}
        
// ------------------------------------------------------------------
static int
oaFigGroup_tp_compare(PyObject *ob1,PyObject* ob2)
{
    PyParamoaFigGroup v1;
    PyParamoaFigGroup v2;
    int convert_status1=PyoaFigGroup_Convert(ob1,&v1);
    int convert_status2=PyoaFigGroup_Convert(ob2,&v2);
    assert(convert_status1!=0);
    assert(convert_status2!=0);
    if (v1.DataCall()==v2.DataCall()) return 0;
    return 1;
}
        
// ------------------------------------------------------------------
int
PyoaFigGroup_Convert(PyObject* ob,PyParamoaFigGroup* result)
{
    if (ob == NULL) return 1;
    if (PyoaFigGroup_Check(ob)) {
        result->SetData( (oaFigGroup**) ((PyoaFigGroupObject*)ob)->value);
        return 1;
    }
    PyErr_SetString(PyExc_TypeError,
        "Convertion of parameter to class: oaFigGroup Failed");
    return 0;
}
// ------------------------------------------------------------------
PyObject* PyoaFigGroup_FromoaFigGroup(oaFigGroup** value,int borrow,PyObject* lock)
{
    if (value && *value) {
        oaFigGroup* data=*value;
        PyObject* bself = PyoaFigGroup_Type.tp_alloc(&PyoaFigGroup_Type,0);
        if (bself == NULL) return bself;
        PyoaFigGroupObject* self = (PyoaFigGroupObject*)bself;
        self->value = (oaObject**) value;
        self->data = NULL;
        self->locks = NULL;
        self->borrow = 0; // Ignore borrow flag, since we copied
       if (lock) PyoaLockObject(self->locks,lock);
        return bself;
    }
    Py_INCREF(Py_None);
    return Py_None;
}
// ------------------------------------------------------------------
PyObject* PyoaFigGroup_FromoaFigGroup(oaFigGroup* data)
{
    if (data) {
       PyObject* bself = PyoaFigGroup_Type.tp_alloc(&PyoaFigGroup_Type,0);
       if (bself == NULL) return bself;
       PyoaFigGroupObject* self = (PyoaFigGroupObject*)bself;
       self->data = (oaObject*) data;
       self->value = &(self->data);
       self->borrow = 0; 
       self->locks = NULL;
       return bself;
    }
    Py_INCREF(Py_None);
    return Py_None;
}

// ------------------------------------------------------------------
// FunctionMethods:
// ------------------------------------------------------------------

// ------------------------------------------------------------------
static char oaFigGroup_destroyFigs_doc[] = 
"Class: oaFigGroup, Function: destroyFigs\n"
"  Paramegers: ()\n"
"    Calls: void destroyFigs()\n"
"    Signature: destroyFigs|void-void|simple-oaBoolean,\n"
"    BrowseData: 0\n"
"    This function destroys the constituent oaFigs of this oaFigGroup but does not destroy the FigGroup itself.\n"
"  Paramegers: (oaBoolean)\n"
"    Calls: void destroyFigs(oaBoolean recurse)\n"
"    Signature: destroyFigs|void-void|simple-oaBoolean,\n"
"    This function destroys the constituent oaFigs of this oaFigGroup but does not destroy the FigGroup itself.\n"
;

static PyObject*
oaFigGroup_destroyFigs(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaFigGroup data;
    int convert_status=PyoaFigGroup_Convert(ob,&data);
    assert(convert_status!=0);
    PyoaFigGroupObject* self=(PyoaFigGroupObject*)ob;
    if (!PyValidateDbObject(data.Data(),0)) return NULL;

    // Case: ()
    {
        if (PyArg_ParseTuple(args,"")) {
            data.DataCall()->destroyFigs();
            Py_INCREF(Py_None);
            return Py_None;
        }
    }
    PyErr_Clear();
    // Case: (oaBoolean)
    {
        PyParamoaBoolean p1;
        if (PyArg_ParseTuple(args,"O&",
              &PyoaBoolean_Convert,&p1)) {
            data.DataCall()->destroyFigs(p1.Data());
            Py_INCREF(Py_None);
            return Py_None;
        }
    }
    PyErr_Clear();
    PyErr_SetString(PyExc_TypeError,
        "No Arg-Matching Function found for class: oaFigGroup, function: destroyFigs, Choices are:\n"
        "    ()\n"
        "    (oaBoolean)\n"
    );
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaFigGroup_getDefaultConstraintGroup_doc[] = 
"Class: oaFigGroup, Function: getDefaultConstraintGroup\n"
"  Paramegers: ()\n"
"    Calls: oaConstraintGroup* getDefaultConstraintGroup() const\n"
"    Signature: getDefaultConstraintGroup|ptr-oaConstraintGroup|\n"
"    BrowseData: 1\n"
"    This function retrieves the default constraint group for this FigGroup. It returns NULL if this FigGroup does not have a default constraint group. The default constraint group contains constraints that apply as a default to the figs that are contained within this figGroup, including any figs within nested figGroups.\n"
;

static PyObject*
oaFigGroup_getDefaultConstraintGroup(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaFigGroup data;
    int convert_status=PyoaFigGroup_Convert(ob,&data);
    assert(convert_status!=0);
    PyoaFigGroupObject* self=(PyoaFigGroupObject*)ob;
    if (!PyValidateDbObject(data.Data(),0)) return NULL;

    if (PyArg_ParseTuple(args,"")) {
        oaConstraintGroupp result= (data.DataCall()->getDefaultConstraintGroup());
        return PyoaConstraintGroup_FromoaConstraintGroup(result);
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaFigGroup_getFigGroupStatus_doc[] = 
"Class: oaFigGroup, Function: getFigGroupStatus\n"
"  Paramegers: ()\n"
"    Calls: oaFigGroupStatus getFigGroupStatus() const\n"
"    Signature: getFigGroupStatus|simple-oaFigGroupStatus|\n"
"    BrowseData: 1\n"
"    This function returns the status of the oaFigGroup, which represents one of three states: normal, fixed, or locked. The status is not enforced by OpenAccess but is used by applications to indicate whether the contents of the FigGroup can be modified by both manual or automatic tools (normal), only by manual tools, (fixed), or cannot be modified by any tools (locked).\n"
;

static PyObject*
oaFigGroup_getFigGroupStatus(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaFigGroup data;
    int convert_status=PyoaFigGroup_Convert(ob,&data);
    assert(convert_status!=0);
    PyoaFigGroupObject* self=(PyoaFigGroupObject*)ob;
    if (!PyValidateDbObject(data.Data(),0)) return NULL;

    if (PyArg_ParseTuple(args,"")) {
        oaFigGroupStatus* result= new oaFigGroupStatus(data.DataCall()->getFigGroupStatus());
        return PyoaFigGroupStatus_FromoaFigGroupStatus(result,0,NULL);
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaFigGroup_getMembers_doc[] = 
"Class: oaFigGroup, Function: getMembers\n"
"  Paramegers: ()\n"
"    Calls: oaCollection_oaFigGroupMem_oaFigGroup getMembers() const\n"
"    Signature: getMembers|simple-oaCollection_oaFigGroupMem_oaFigGroup|\n"
"    BrowseData: 1\n"
"    This function returns a collection containing the oaFigGroupMem members of an oaFigGroup. Each oaFigGroupMem references one oaFig that belongs to the oaFigGroup.\n"
;

static PyObject*
oaFigGroup_getMembers(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaFigGroup data;
    int convert_status=PyoaFigGroup_Convert(ob,&data);
    assert(convert_status!=0);
    PyoaFigGroupObject* self=(PyoaFigGroupObject*)ob;
    if (!PyValidateDbObject(data.Data(),0)) return NULL;

    if (PyArg_ParseTuple(args,"")) {
        oaCollection_oaFigGroupMem_oaFigGroup* result= new oaCollection_oaFigGroupMem_oaFigGroup(data.DataCall()->getMembers());
        return PyoaCollection_oaFigGroupMem_oaFigGroup_FromoaCollection_oaFigGroupMem_oaFigGroup(result,0,NULL);
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaFigGroup_getMembersIter_doc[] = 
"Class: oaFigGroup, Function: getMembersIter\n"
"  Paramegers: ()\n"
"    Calls: oaIter_oaFigGroupMem getMembersIter() const\n"
"    Signature: getMembersIter|simple-oaIter_oaFigGroupMem|\n"
"    BrowseData: 1\n"
"    This function returns an Iterator over the following collection: This function returns a collection containing the oaFigGroupMem members of an oaFigGroup. Each oaFigGroupMem references one oaFig that belongs to the oaFigGroup.\n"
;

static PyObject*
oaFigGroup_getMembersIter(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaFigGroup data;
    int convert_status=PyoaFigGroup_Convert(ob,&data);
    assert(convert_status!=0);
    PyoaFigGroupObject* self=(PyoaFigGroupObject*)ob;
    if (!PyValidateDbObject(data.Data(),0)) return NULL;

    if (PyArg_ParseTuple(args,"")) {
        oaIter_oaFigGroupMem* result= new oaIter_oaFigGroupMem(data.DataCall()->getMembers());
        return PyoaIter_oaFigGroupMem_FromoaIter_oaFigGroupMem(result,0,NULL);
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaFigGroup_getName_doc[] = 
"Class: oaFigGroup, Function: getName\n"
"  Paramegers: (oaSimpleName)\n"
"    Calls: void getName(oaSimpleName& name) const\n"
"    Signature: getName|void-void|ref-oaSimpleName,\n"
"    BrowseData: 0,oaSimpleName\n"
"    This function retrieves the name of this oaFigGroup.\n"
"    name\n"
"    The retrieved name of this FigGroup.\n"
"  Paramegers: (oaNameSpace,oaString)\n"
"    Calls: void getName(const oaNameSpace& ns,oaString& name) const\n"
"    Signature: getName|void-void|cref-oaNameSpace,ref-oaString,\n"
"    This function retrieves the name of this oaFigGroup in the specified nameSpace.\n"
"    ns\n"
"    The nameSpace in which the FigGroup name is retrieved.\n"
"    name\n"
"    The name of this FigGroup in the nameSpace specified by ns .\n"
;

static PyObject*
oaFigGroup_getName(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaFigGroup data;
    int convert_status=PyoaFigGroup_Convert(ob,&data);
    assert(convert_status!=0);
    PyoaFigGroupObject* self=(PyoaFigGroupObject*)ob;
    if (!PyValidateDbObject(data.Data(),0)) return NULL;

    // Case: (oaSimpleName)
    {
        PyParamoaSimpleName p1;
        if (PyArg_ParseTuple(args,"O&",
              &PyoaSimpleName_Convert,&p1)) {
            data.DataCall()->getName(p1.Data());
            Py_INCREF(Py_None);
            return Py_None;
        }
    }
    PyErr_Clear();
    // Case: (oaNameSpace,oaString)
    {
        PyParamoaNameSpace p1;
        PyParamoaString p2;
        if (PyArg_ParseTuple(args,"O&O&",
              &PyoaNameSpace_Convert,&p1,
              &PyoaString_Convert,&p2)) {
            data.DataCall()->getName(p1.Data(),p2.Data());
            Py_INCREF(Py_None);
            return Py_None;
        }
    }
    PyErr_Clear();
    PyErr_SetString(PyExc_TypeError,
        "No Arg-Matching Function found for class: oaFigGroup, function: getName, Choices are:\n"
        "    (oaSimpleName)\n"
        "    (oaNameSpace,oaString)\n"
    );
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaFigGroup_getOrient_doc[] = 
"Class: oaFigGroup, Function: getOrient\n"
"  Paramegers: ()\n"
"    Calls: oaOrient getOrient() const\n"
"    Signature: getOrient|simple-oaOrient|\n"
"    BrowseData: 1\n"
"    This function returns the orientation of this FigGroup.\n"
;

static PyObject*
oaFigGroup_getOrient(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaFigGroup data;
    int convert_status=PyoaFigGroup_Convert(ob,&data);
    assert(convert_status!=0);
    PyoaFigGroupObject* self=(PyoaFigGroupObject*)ob;
    if (!PyValidateDbObject(data.Data(),0)) return NULL;

    if (PyArg_ParseTuple(args,"")) {
        oaOrient* result= new oaOrient(data.DataCall()->getOrient());
        return PyoaOrient_FromoaOrient(result,0,NULL);
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaFigGroup_getOrigin_doc[] = 
"Class: oaFigGroup, Function: getOrigin\n"
"  Paramegers: (oaPoint)\n"
"    Calls: void getOrigin(oaPoint& origin) const\n"
"    Signature: getOrigin|void-void|ref-oaPoint,\n"
"    BrowseData: 0,oaPoint\n"
"    This function gets the origin of this FigGroup.\n"
"    origin\n"
"    The origin of this FigGroup.\n"
;

static PyObject*
oaFigGroup_getOrigin(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaFigGroup data;
    int convert_status=PyoaFigGroup_Convert(ob,&data);
    assert(convert_status!=0);
    PyoaFigGroupObject* self=(PyoaFigGroupObject*)ob;
    if (!PyValidateDbObject(data.Data(),0)) return NULL;

    PyParamoaPoint p1;
    if (PyArg_ParseTuple(args,"O&",
          &PyoaPoint_Convert,&p1)) {
        data.DataCall()->getOrigin(p1.Data());
        Py_INCREF(Py_None);
        return Py_None;
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaFigGroup_getTransform_doc[] = 
"Class: oaFigGroup, Function: getTransform\n"
"  Paramegers: (oaTransform)\n"
"    Calls: void getTransform(oaTransform& xform) const\n"
"    Signature: getTransform|void-void|ref-oaTransform,\n"
"    BrowseData: 0,oaTransform\n"
"    This function gets the transform of this oaFigGroup. The transform contains both the origin and the orientation for the FigGroup.\n"
"    xform\n"
"    The transform of this FigGroup.\n"
;

static PyObject*
oaFigGroup_getTransform(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaFigGroup data;
    int convert_status=PyoaFigGroup_Convert(ob,&data);
    assert(convert_status!=0);
    PyoaFigGroupObject* self=(PyoaFigGroupObject*)ob;
    if (!PyValidateDbObject(data.Data(),0)) return NULL;

    PyParamoaTransform p1;
    if (PyArg_ParseTuple(args,"O&",
          &PyoaTransform_Convert,&p1)) {
        data.DataCall()->getTransform(p1.Data());
        Py_INCREF(Py_None);
        return Py_None;
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaFigGroup_hasDefaultConstraintGroup_doc[] = 
"Class: oaFigGroup, Function: hasDefaultConstraintGroup\n"
"  Paramegers: ()\n"
"    Calls: oaBoolean hasDefaultConstraintGroup() const\n"
"    Signature: hasDefaultConstraintGroup|simple-oaBoolean|\n"
"    BrowseData: 1\n"
"    This function returns a boolean value representing whether this FigGroup has a default constraint group.\n"
;

static PyObject*
oaFigGroup_hasDefaultConstraintGroup(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaFigGroup data;
    int convert_status=PyoaFigGroup_Convert(ob,&data);
    assert(convert_status!=0);
    PyoaFigGroupObject* self=(PyoaFigGroupObject*)ob;
    if (!PyValidateDbObject(data.Data(),0)) return NULL;

    if (PyArg_ParseTuple(args,"")) {
        oaBoolean result= (data.DataCall()->hasDefaultConstraintGroup());
        return PyoaBoolean_FromoaBoolean(result);
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaFigGroup_isOrdered_doc[] = 
"Class: oaFigGroup, Function: isOrdered\n"
"  Paramegers: ()\n"
"    Calls: oaBoolean isOrdered() const\n"
"    Signature: isOrdered|simple-oaBoolean|\n"
"    BrowseData: 1\n"
"    This function returns true if FigGroup is ordered; otherwise, false is returned.\n"
;

static PyObject*
oaFigGroup_isOrdered(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaFigGroup data;
    int convert_status=PyoaFigGroup_Convert(ob,&data);
    assert(convert_status!=0);
    PyoaFigGroupObject* self=(PyoaFigGroupObject*)ob;
    if (!PyValidateDbObject(data.Data(),0)) return NULL;

    if (PyArg_ParseTuple(args,"")) {
        oaBoolean result= (data.DataCall()->isOrdered());
        return PyoaBoolean_FromoaBoolean(result);
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaFigGroup_setFigGroupStatus_doc[] = 
"Class: oaFigGroup, Function: setFigGroupStatus\n"
"  Paramegers: (oaFigGroupStatus)\n"
"    Calls: void setFigGroupStatus(oaFigGroupStatus status)\n"
"    Signature: setFigGroupStatus|void-void|simple-oaFigGroupStatus,\n"
"    This function sets the status of the oaFigGroup to one of three values, which are normal, fixed, or locked. The status is not enforced by OpenAccess but is used by applications to indicate whether the contents of the FigGroup can be modified by both manual or automatic tools (normal), only by manual tools, (fixed), or cannot be modified by any tools (locked).\n"
"    status\n"
"    One of three values to represent normal, fixed, or locked.\n"
;

static PyObject*
oaFigGroup_setFigGroupStatus(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaFigGroup data;
    int convert_status=PyoaFigGroup_Convert(ob,&data);
    assert(convert_status!=0);
    PyoaFigGroupObject* self=(PyoaFigGroupObject*)ob;
    if (!PyValidateDbObject(data.Data(),0)) return NULL;

    PyParamoaFigGroupStatus p1;
    if (PyArg_ParseTuple(args,"O&",
          &PyoaFigGroupStatus_Convert,&p1)) {
        data.DataCall()->setFigGroupStatus(p1.Data());
        Py_INCREF(Py_None);
        return Py_None;
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaFigGroup_setName_doc[] = 
"Class: oaFigGroup, Function: setName\n"
"  Paramegers: (oaSimpleName)\n"
"    Calls: void setName(const oaSimpleName& name)\n"
"    Signature: setName|void-void|cref-oaSimpleName,\n"
"    This function sets this oaFigGroup's name.\n"
"    name\n"
"    The name to set on this FigGroup.\n"
"    oacFigGroupNameExists\n"
;

static PyObject*
oaFigGroup_setName(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaFigGroup data;
    int convert_status=PyoaFigGroup_Convert(ob,&data);
    assert(convert_status!=0);
    PyoaFigGroupObject* self=(PyoaFigGroupObject*)ob;
    if (!PyValidateDbObject(data.Data(),0)) return NULL;

    PyParamoaSimpleName p1;
    if (PyArg_ParseTuple(args,"O&",
          &PyoaSimpleName_Convert,&p1)) {
        data.DataCall()->setName(p1.Data());
        Py_INCREF(Py_None);
        return Py_None;
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaFigGroup_setOrdered_doc[] = 
"Class: oaFigGroup, Function: setOrdered\n"
"  Paramegers: ()\n"
"    Calls: void setOrdered()\n"
"    Signature: setOrdered|void-void|simple-oaBoolean,\n"
"    BrowseData: 0\n"
"    This function sets whether the FigGroup is ordered.\n"
"    ordered\n"
"    A Boolean value of true if this FigGroup is ordered, or false, if this FigGroup is not ordered.\n"
"  Paramegers: (oaBoolean)\n"
"    Calls: void setOrdered(oaBoolean ordered)\n"
"    Signature: setOrdered|void-void|simple-oaBoolean,\n"
"    This function sets whether the FigGroup is ordered.\n"
"    ordered\n"
"    A Boolean value of true if this FigGroup is ordered, or false, if this FigGroup is not ordered.\n"
;

static PyObject*
oaFigGroup_setOrdered(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaFigGroup data;
    int convert_status=PyoaFigGroup_Convert(ob,&data);
    assert(convert_status!=0);
    PyoaFigGroupObject* self=(PyoaFigGroupObject*)ob;
    if (!PyValidateDbObject(data.Data(),0)) return NULL;

    // Case: ()
    {
        if (PyArg_ParseTuple(args,"")) {
            data.DataCall()->setOrdered();
            Py_INCREF(Py_None);
            return Py_None;
        }
    }
    PyErr_Clear();
    // Case: (oaBoolean)
    {
        PyParamoaBoolean p1;
        if (PyArg_ParseTuple(args,"O&",
              &PyoaBoolean_Convert,&p1)) {
            data.DataCall()->setOrdered(p1.Data());
            Py_INCREF(Py_None);
            return Py_None;
        }
    }
    PyErr_Clear();
    PyErr_SetString(PyExc_TypeError,
        "No Arg-Matching Function found for class: oaFigGroup, function: setOrdered, Choices are:\n"
        "    ()\n"
        "    (oaBoolean)\n"
    );
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaFigGroup_setOrient_doc[] = 
"Class: oaFigGroup, Function: setOrient\n"
"  Paramegers: (oaOrient)\n"
"    Calls: void setOrient(oaOrient orient)\n"
"    Signature: setOrient|void-void|simple-oaOrient,\n"
"    This function sets the orientation of this FigGroup, but has no effect on the oaFigs that belong to this group.\n"
"    orient\n"
"    The orientation to set on this FigGroup.\n"
;

static PyObject*
oaFigGroup_setOrient(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaFigGroup data;
    int convert_status=PyoaFigGroup_Convert(ob,&data);
    assert(convert_status!=0);
    PyoaFigGroupObject* self=(PyoaFigGroupObject*)ob;
    if (!PyValidateDbObject(data.Data(),0)) return NULL;

    PyParamoaOrient p1;
    if (PyArg_ParseTuple(args,"O&",
          &PyoaOrient_Convert,&p1)) {
        data.DataCall()->setOrient(p1.Data());
        Py_INCREF(Py_None);
        return Py_None;
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaFigGroup_setOrigin_doc[] = 
"Class: oaFigGroup, Function: setOrigin\n"
"  Paramegers: (oaPoint)\n"
"    Calls: void setOrigin(const oaPoint& origin)\n"
"    Signature: setOrigin|void-void|cref-oaPoint,\n"
"    This function sets the origin of this oaFigGroup, but has no effect on the oaFigs that belong to this group. The origin is defined relative to the origin of the oaBlock in which this oaFigGroup is defined.\n"
"    origin\n"
"    The origin to set on this FigGroup.\n"
;

static PyObject*
oaFigGroup_setOrigin(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaFigGroup data;
    int convert_status=PyoaFigGroup_Convert(ob,&data);
    assert(convert_status!=0);
    PyoaFigGroupObject* self=(PyoaFigGroupObject*)ob;
    if (!PyValidateDbObject(data.Data(),0)) return NULL;

    PyParamoaPoint p1;
    if (PyArg_ParseTuple(args,"O&",
          &PyoaPoint_Convert,&p1)) {
        data.DataCall()->setOrigin(p1.Data());
        Py_INCREF(Py_None);
        return Py_None;
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaFigGroup_setTransform_doc[] = 
"Class: oaFigGroup, Function: setTransform\n"
"  Paramegers: (oaTransform)\n"
"    Calls: void setTransform(const oaTransform& xform)\n"
"    Signature: setTransform|void-void|cref-oaTransform,\n"
"    This function sets the transform of this oaFigGroup, but has no effect on the oaFigs that belong to this group.\n"
"    xform\n"
"    The transform to set on this FigGroup.\n"
;

static PyObject*
oaFigGroup_setTransform(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaFigGroup data;
    int convert_status=PyoaFigGroup_Convert(ob,&data);
    assert(convert_status!=0);
    PyoaFigGroupObject* self=(PyoaFigGroupObject*)ob;
    if (!PyValidateDbObject(data.Data(),0)) return NULL;

    PyParamoaTransform p1;
    if (PyArg_ParseTuple(args,"O&",
          &PyoaTransform_Convert,&p1)) {
        data.DataCall()->setTransform(p1.Data());
        Py_INCREF(Py_None);
        return Py_None;
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaFigGroup_isNull_doc[] =
"Class: oaFigGroup, Function: isNull\n"
"  Parameters: () \n"
"    This functions returns 1 if the DbPointer is NULL, and 0 otherwise.\n"
;

static PyObject*
oaFigGroup_tp_isNull(PyObject* ob, PyObject *args)
{
    PyParamoaFigGroup data;
    int convert_status=PyoaFigGroup_Convert(ob,&data);
    assert(convert_status!=0);
    if (data.DataCall()==NULL)
        return PyInt_FromLong(1);
    else
        return PyInt_FromLong(0);
}
static char oaFigGroup_assign_doc[] = 
"Class: oaFigGroup, Function: set\n"
"  Paramegers: (oaDouble)\n"
"    This function sets the current value.\n"
;

static PyObject*
oaFigGroup_tp_assign(PyObject* ob, PyObject *args)
{
  PyParamoaFigGroup data;
  int convert_status=PyoaFigGroup_Convert(ob,&data);
  assert(convert_status!=0);
  try {
    PyParamoaFigGroup p1;
    if (PyArg_ParseTuple(args,(char*)"O&",
          &PyoaFigGroup_Convert,&p1)) {
        data.Data()=p1.Data();
        Py_INCREF(ob);
        return ob;
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}


// ------------------------------------------------------------------
//  Function Methods Table:
// ------------------------------------------------------------------

static PyMethodDef oaFigGroup_methodlist[] = {
    {"destroyFigs",(PyCFunction)oaFigGroup_destroyFigs,METH_VARARGS,oaFigGroup_destroyFigs_doc},
    {"getDefaultConstraintGroup",(PyCFunction)oaFigGroup_getDefaultConstraintGroup,METH_VARARGS,oaFigGroup_getDefaultConstraintGroup_doc},
    {"getFigGroupStatus",(PyCFunction)oaFigGroup_getFigGroupStatus,METH_VARARGS,oaFigGroup_getFigGroupStatus_doc},
    {"getMembers",(PyCFunction)oaFigGroup_getMembers,METH_VARARGS,oaFigGroup_getMembers_doc},
    {"getMembersIter",(PyCFunction)oaFigGroup_getMembersIter,METH_VARARGS,oaFigGroup_getMembersIter_doc},
    {"getName",(PyCFunction)oaFigGroup_getName,METH_VARARGS,oaFigGroup_getName_doc},
    {"getOrient",(PyCFunction)oaFigGroup_getOrient,METH_VARARGS,oaFigGroup_getOrient_doc},
    {"getOrigin",(PyCFunction)oaFigGroup_getOrigin,METH_VARARGS,oaFigGroup_getOrigin_doc},
    {"getTransform",(PyCFunction)oaFigGroup_getTransform,METH_VARARGS,oaFigGroup_getTransform_doc},
    {"hasDefaultConstraintGroup",(PyCFunction)oaFigGroup_hasDefaultConstraintGroup,METH_VARARGS,oaFigGroup_hasDefaultConstraintGroup_doc},
    {"isOrdered",(PyCFunction)oaFigGroup_isOrdered,METH_VARARGS,oaFigGroup_isOrdered_doc},
    {"setFigGroupStatus",(PyCFunction)oaFigGroup_setFigGroupStatus,METH_VARARGS,oaFigGroup_setFigGroupStatus_doc},
    {"setName",(PyCFunction)oaFigGroup_setName,METH_VARARGS,oaFigGroup_setName_doc},
    {"setOrdered",(PyCFunction)oaFigGroup_setOrdered,METH_VARARGS,oaFigGroup_setOrdered_doc},
    {"setOrient",(PyCFunction)oaFigGroup_setOrient,METH_VARARGS,oaFigGroup_setOrient_doc},
    {"setOrigin",(PyCFunction)oaFigGroup_setOrigin,METH_VARARGS,oaFigGroup_setOrigin_doc},
    {"setTransform",(PyCFunction)oaFigGroup_setTransform,METH_VARARGS,oaFigGroup_setTransform_doc},
    {"isNull",(PyCFunction)oaFigGroup_tp_isNull,METH_VARARGS,oaFigGroup_isNull_doc},
    {"assign",(PyCFunction)oaFigGroup_tp_assign,METH_VARARGS,oaFigGroup_assign_doc},
   {NULL,NULL,0,NULL}
};


// ------------------------------------------------------------------
//  Type Object:
// ------------------------------------------------------------------

// ------------------------------------------------------------------
static char oaFigGroup_doc[] = 
"Class: oaFigGroup\n"
"  The FigGroup represents a collection of figures that can be used by graphical design-entry tools to hold a set of figures that can be easily replicated and reused. For example, a FigGroup can be used to treat a number of figures as a single figure, where the FigGroup behaves in many ways like an instance but without the overhead of referring to an external master, and yet it is still transparently accessible as flat geometry. Since FigGroups can be nested, they provide a general way to add hierarchy to a design s geometry. FigGroups are also designed to support the creation of multiple copies of a group of figures, and they allow applications to maintain the correspondence between those copies. A FigGroup is purely geometric and does not contain connectivity objects or anything else that is not a figure. Any figure can belong to a FigGroup, and a FigGroup can be a member of another FigGroup. However, each figure can belong to, at most, a single FigGroup.\n"
"  When a figure belongs to a FigGroup, it does not affect the caller s ability to access, move, and change the figure as an individual object. It simply adds the ability to manipulate an entire set of figures together; functions including oaFig::move and oaFig::copy can be used for this purpose.\n"
"  When a FigGroup is created its transform is set to an origin of (0,0) and an orientation of oacR0. When oaFig::move or oaFig::copy is called on a FigGroup, the transform specified is applied to each oaFig in the oaFigGroup and to the existing transform attribute of the FigGroup. See Using Transforms in the Programmers Guide for more information about applying transforms.\n"
"  The bounding box of a FigGroup is the smallest rectangle that contains the bounding boxes of all of its constituent figures. FigGroups have an origin and an orientation much like instances. The use of these attributes is the responsibility of the application. For example, an application can use the origin of a FigGroup to determine what point to rotate the group around if a user requests a rotation. Modifying a FigGroups s transform with setTransform() , setOrigin() , or setOrient() has no affect on the members of the FigGroup. When there are multiple copies of a FigGroup, these transform attributes are used to keep track of the geometric relationships between the copies. However, OpenAccess does not directly track which FigGroups are copies of each other, or if a FigGroup was modified since it was copied.\n"
"  There are similarities between FigGroups and oaGroups that have leaders, but these are independent constructs. If a leader of an oaGroup is placed in a FigGroup, all of the followers that are oaFigs are also added to the FigGroup. When a group leader is removed from a FigGroup, its followers are also automatically removed. When a leader is moved, its followers are moved, and this is true whether the move is due to moving the leader itself, or due to moving a FigGroup that the leader belongs to. Similarly, when a leader is destroyed, all its followers are destroyed whether the action started with a destruction of the leader or started by calling destroyFigs() on a FigGroup that the leader belongs to. It should also be noted that not all of a leader's followers must be in the leader's FigGroup at all times. Although the followers are added as a leader is added to a FigGroup, it is possible to remove a follower from a FigGroup.\n"
"  A FigGroup can optionally be ordered; this option can be set by the ordered argument to create() , or by calling setOrdered() after creation. If a FigGroup is ordered, an iteration is guaranteed to produce its members in its defined order. The order starts as the order that members are added, and the order is manipulated using the moveAfter() and moveToFirst() functions on oaFigGroupMem . Note that while copy in most cases preserves ordering, in some cases it might fail to preserve ordering if the FigGroup contains both the leader and one or more followers from the same oaGroup .\n"
"  A region query can be performed to produce the FigGroups that overlap a certain area by using the oaFigGroupQuery class.\n"
"Constructors:\n"
"  Paramegers: (oaFigGroup)\n"
"    Calls: (const oaFigGroup&)\n"
"    Signature: oaFigGroup||cref-oaFigGroup,\n"
;

// ------------------------------------------------------------------
PyTypeObject PyoaFigGroup_Type = {
    PyObject_HEAD_INIT(&PyType_Type)
    0,
    "oaFigGroup",
    sizeof(PyoaFigGroupObject),
    0,
    (destructor)oaFigGroup_tp_dealloc,	/* tp_dealloc */
    0,	/* tp_print */
    0,					/* tp_getattr */
    0,					/* tp_setattr */
    (cmpfunc)oaFigGroup_tp_compare,	/* tp_compare */
    (reprfunc)oaFigGroup_tp_repr,	/* tp_repr */
    0,					/* tp_as_number */
    0,					/* tp_as_sequence */
    0,					/* tp_as_mapping */
    0,					/* tp_as_hash */
    0,					/* tp_as_call */
    0,					/* tp_str */
    0,					/* tp_getattro */
    0,					/* tp_setattro */
    0,					/* tp_as_buffer */
    Py_TPFLAGS_DEFAULT|Py_TPFLAGS_BASETYPE, /* tp_flags */
    oaFigGroup_doc,	/* tp_doc */
    0,					/* tp_traverse */
    0,					/* tp_clear */
    0,					/* tp_richcompre */
    0,					/* tp_weaklistoffset */
    0,					/* tp_iter */
    0,					/* tp_iternext */
    oaFigGroup_methodlist,	/* tp_methods */
    0,					/* tp_members */
    0,					/* tp_getset */
    &PyoaFig_Type,	/* tp_base */
    0,					/* tp_dict */
    0,					/* tp_descr_get */
    0,					/* tp_descr_set */
    0,					/* tp_dictoffset */
    0,					/* tp_init */
    PyType_GenericAlloc,	/* tp_alloc */
    oaFigGroup_new,	/* tp_new */
    _PyObject_Del,	/* tp_free */
};


// ------------------------------------------------------------------
// Static FunctionMethods:
// ------------------------------------------------------------------

// ------------------------------------------------------------------
static char oaFigGroup_static_create_doc[] = 
"Class: oaFigGroup, Function: create\n"
"  Paramegers: (oaBlock,oaSimpleName)\n"
"    Calls: oaFigGroup* create(const oaBlock* block,const oaSimpleName& name)\n"
"    Signature: create|ptr-oaFigGroup|cptr-oaBlock,cref-oaSimpleName,simple-oaBoolean,\n"
"    This function creates a new oaFigGroup in the given block with the specified name.\n"
"    block\n"
"    The block in which the FigGroup is created.\n"
"    name\n"
"    The name of the FigGroup to be created.\n"
"    ordered\n"
"    A Boolean value of true if this FigGroup is ordered, or false, if this FigGroup is not ordered.\n"
"    oacInvalidName\n"
"  Paramegers: (oaBlock,oaSimpleName,oaBoolean)\n"
"    Calls: oaFigGroup* create(const oaBlock* block,const oaSimpleName& name,oaBoolean ordered)\n"
"    Signature: create|ptr-oaFigGroup|cptr-oaBlock,cref-oaSimpleName,simple-oaBoolean,\n"
"    This function creates a new oaFigGroup in the given block with the specified name.\n"
"    block\n"
"    The block in which the FigGroup is created.\n"
"    name\n"
"    The name of the FigGroup to be created.\n"
"    ordered\n"
"    A Boolean value of true if this FigGroup is ordered, or false, if this FigGroup is not ordered.\n"
"    oacInvalidName\n"
"  Paramegers: (oaBlock)\n"
"    Calls: oaFigGroup* create(const oaBlock* block)\n"
"    Signature: create|ptr-oaFigGroup|cptr-oaBlock,simple-oaBoolean,\n"
"    This function creates a new oaFigGroup in the given block.\n"
"    block\n"
"    The block in which the FigGroup is created.\n"
"    ordered\n"
"    A Boolean value of true if this FigGroup is ordered, or false, if this FigGroup is not ordered.\n"
"    oacFigGroupNameExists\n"
"  Paramegers: (oaBlock,oaBoolean)\n"
"    Calls: oaFigGroup* create(const oaBlock* block,oaBoolean ordered)\n"
"    Signature: create|ptr-oaFigGroup|cptr-oaBlock,simple-oaBoolean,\n"
"    This function creates a new oaFigGroup in the given block.\n"
"    block\n"
"    The block in which the FigGroup is created.\n"
"    ordered\n"
"    A Boolean value of true if this FigGroup is ordered, or false, if this FigGroup is not ordered.\n"
"    oacFigGroupNameExists\n"
;

static PyObject*
oaFigGroup_static_create(PyObject* ob, PyObject *args)
{
  try {
    // Case: (oaBlock,oaSimpleName)
    {
        PyParamoaBlock p1;
        PyParamoaSimpleName p2;
        if (PyArg_ParseTuple(args,"O&O&",
              &PyoaBlock_Convert,&p1,
              &PyoaSimpleName_Convert,&p2)) {
            if (!PyValidateDbObject(p1.Data(),1)) return NULL;
            oaFigGroupp result= (oaFigGroup::create(p1.Data(),p2.Data()));
            return PyoaFigGroup_FromoaFigGroup(result);
        }
    }
    PyErr_Clear();
    // Case: (oaBlock,oaSimpleName,oaBoolean)
    {
        PyParamoaBlock p1;
        PyParamoaSimpleName p2;
        PyParamoaBoolean p3;
        if (PyArg_ParseTuple(args,"O&O&O&",
              &PyoaBlock_Convert,&p1,
              &PyoaSimpleName_Convert,&p2,
              &PyoaBoolean_Convert,&p3)) {
            if (!PyValidateDbObject(p1.Data(),1)) return NULL;
            oaFigGroupp result= (oaFigGroup::create(p1.Data(),p2.Data(),p3.Data()));
            return PyoaFigGroup_FromoaFigGroup(result);
        }
    }
    PyErr_Clear();
    // Case: (oaBlock)
    {
        PyParamoaBlock p1;
        if (PyArg_ParseTuple(args,"O&",
              &PyoaBlock_Convert,&p1)) {
            if (!PyValidateDbObject(p1.Data(),1)) return NULL;
            oaFigGroupp result= (oaFigGroup::create(p1.Data()));
            return PyoaFigGroup_FromoaFigGroup(result);
        }
    }
    PyErr_Clear();
    // Case: (oaBlock,oaBoolean)
    {
        PyParamoaBlock p1;
        PyParamoaBoolean p2;
        if (PyArg_ParseTuple(args,"O&O&",
              &PyoaBlock_Convert,&p1,
              &PyoaBoolean_Convert,&p2)) {
            if (!PyValidateDbObject(p1.Data(),1)) return NULL;
            oaFigGroupp result= (oaFigGroup::create(p1.Data(),p2.Data()));
            return PyoaFigGroup_FromoaFigGroup(result);
        }
    }
    PyErr_Clear();
    PyErr_SetString(PyExc_TypeError,
        "No Arg-Matching Function found for class: oaFigGroup, function: create, Choices are:\n"
        "    (oaBlock,oaSimpleName)\n"
        "    (oaBlock,oaSimpleName,oaBoolean)\n"
        "    (oaBlock)\n"
        "    (oaBlock,oaBoolean)\n"
    );
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaFigGroup_static_find_doc[] = 
"Class: oaFigGroup, Function: find\n"
"  Paramegers: (oaBlock,oaSimpleName)\n"
"    Calls: oaFigGroup* find(const oaBlock* block,const oaSimpleName& name)\n"
"    Signature: find|ptr-oaFigGroup|cptr-oaBlock,cref-oaSimpleName,\n"
"    This function finds the oaFigGroup in the given block with the given name.\n"
"    block\n"
"    The block to search for the specified FigGroup.\n"
"    name\n"
"    The name of the FigGroup to find.\n"
;

static PyObject*
oaFigGroup_static_find(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaBlock p1;
    PyParamoaSimpleName p2;
    if (PyArg_ParseTuple(args,"O&O&",
          &PyoaBlock_Convert,&p1,
          &PyoaSimpleName_Convert,&p2)) {
        if (!PyValidateDbObject(p1.Data(),1)) return NULL;
        oaFigGroupp result= (oaFigGroup::find(p1.Data(),p2.Data()));
        return PyoaFigGroup_FromoaFigGroup(result);
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static PyMethodDef oaFigGroup_staticmethodlist[] = {
    {"static_create",(PyCFunction)oaFigGroup_static_create,METH_VARARGS,oaFigGroup_static_create_doc},
    {"static_find",(PyCFunction)oaFigGroup_static_find,METH_VARARGS,oaFigGroup_static_find_doc},
   {NULL,NULL,0,NULL}
};


// ------------------------------------------------------------------
//  Type Init:
// ------------------------------------------------------------------

int
PyoaFigGroup_TypeInit(PyObject* mod_dict)
{
    if (PyType_Ready(&PyoaFigGroup_Type)<0) {
      printf("** PyType_Ready failed for: oaFigGroup\n");
      return -1;
    }

    if (PyDict_SetItemString(mod_dict,"oaFigGroup",
           (PyObject*)(&PyoaFigGroup_Type))<0) {
       printf("** Failed to add type name to module dictionary for: oaFigGroup\n");
       return -1;
    }

    PyObject *dict, *value;
    PyMethodDef *method;
    dict=PyoaFigGroup_Type.tp_dict;
    for(method=oaFigGroup_staticmethodlist;method->ml_name!=NULL;method++) {
        value=PyCFunction_New(method,NULL);
    if (value==NULL) return -1;
        if (PyDict_SetItemString(dict,method->ml_name,value)!=0) {
        Py_DECREF(value);
            printf("** Failed to add static function to module dictionary for: %s\n",
                method->ml_name);
            return -1;
        }
        Py_DECREF(value);
    }
    return 0;
}


/********************************************************************
 *   Copyright 2002-2008  LSI Corporation
 *
 *   Licensed under the Apache License, Version 2.0 (the "License");
 *   you may not use this file except in compliance with the License.
 *   You may obtain a copy of the License at
 *
 *       http://www.apache.org/licenses/LICENSE-2.0
 *
 *   Unless required by applicable law or agreed to in writing, software
 *   distributed under the License is distributed on an "AS IS" BASIS,
 *   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *   See the License for the specific language governing permissions and
 *   limitations under the License.
 *
 *******************************************************************/

#include "pyoa_header.h"


// ==================================================================
// Wrapper Implementation for Class: oaFigGroupMem
// ==================================================================


// ==================================================================
// Alloc/Dealloc Routines
// ==================================================================

// ------------------------------------------------------------------
static PyObject*
oaFigGroupMem_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
  try {
    int is_raw=(type==&PyoaFigGroupMem_Type);
    PyObject* bself = type->tp_alloc(type,0);
    if (bself == NULL) return bself;
    PyoaFigGroupMemObject* self = (PyoaFigGroupMemObject*)bself;
    self->locks = NULL;
    self->borrow = 0;
    static char *kwlist [] = { NULL } ;
    // Case: (oaFigGroupMem)
    {
        PyParamoaFigGroupMem p1;
        if (PyArg_ParseTuple(args,(char*)"O&",
              &PyoaFigGroupMem_Convert,&p1)) {
            self->data=p1.Data();
            self->value=&(self->data);
            return bself;
        }
    }
    PyErr_Clear();
    // Case: ()
    {
        if (PyArg_ParseTuple(args,(char*)"")) {
          self->data=NULL;
          self->value=&(self->data);
          return bself;
        }
    }
    PyErr_Clear();
    PyErr_SetString(PyExc_TypeError,
        "No Arg-Matching Constructor found for class: oaFigGroupMem, Choices are:\n"
        "    (oaFigGroupMem)\n"
    );
    Py_DECREF(self);
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static void
oaFigGroupMem_tp_dealloc(PyoaFigGroupMemObject* self)
{
    self->ob_type->tp_free((PyObject*)self);
}

// ------------------------------------------------------------------
static PyObject*
oaFigGroupMem_tp_repr(PyObject *ob)
{
    PyParamoaFigGroupMem value;
    int convert_status=PyoaFigGroupMem_Convert(ob,&value);
    assert(convert_status!=0);
    PyObject* result;

    char buffer[35];
    sprintf(buffer,"<oaFigGroupMem::" DISPLAY_FORMAT ">",POINTER_AS_DISPLAY(value.DataCall()));
    result=PyString_FromString(buffer);
    return result;
}
        
// ------------------------------------------------------------------
static int
oaFigGroupMem_tp_compare(PyObject *ob1,PyObject* ob2)
{
    PyParamoaFigGroupMem v1;
    PyParamoaFigGroupMem v2;
    int convert_status1=PyoaFigGroupMem_Convert(ob1,&v1);
    int convert_status2=PyoaFigGroupMem_Convert(ob2,&v2);
    assert(convert_status1!=0);
    assert(convert_status2!=0);
    if (v1.DataCall()==v2.DataCall()) return 0;
    return 1;
}
        
// ------------------------------------------------------------------
int
PyoaFigGroupMem_Convert(PyObject* ob,PyParamoaFigGroupMem* result)
{
    if (ob == NULL) return 1;
    if (PyoaFigGroupMem_Check(ob)) {
        result->SetData( (oaFigGroupMem**) ((PyoaFigGroupMemObject*)ob)->value);
        return 1;
    }
    PyErr_SetString(PyExc_TypeError,
        "Convertion of parameter to class: oaFigGroupMem Failed");
    return 0;
}
// ------------------------------------------------------------------
PyObject* PyoaFigGroupMem_FromoaFigGroupMem(oaFigGroupMem** value,int borrow,PyObject* lock)
{
    if (value && *value) {
        oaFigGroupMem* data=*value;
        PyObject* bself = PyoaFigGroupMem_Type.tp_alloc(&PyoaFigGroupMem_Type,0);
        if (bself == NULL) return bself;
        PyoaFigGroupMemObject* self = (PyoaFigGroupMemObject*)bself;
        self->value = (oaObject**) value;
        self->data = NULL;
        self->locks = NULL;
        self->borrow = 0; // Ignore borrow flag, since we copied
       if (lock) PyoaLockObject(self->locks,lock);
        return bself;
    }
    Py_INCREF(Py_None);
    return Py_None;
}
// ------------------------------------------------------------------
PyObject* PyoaFigGroupMem_FromoaFigGroupMem(oaFigGroupMem* data)
{
    if (data) {
       PyObject* bself = PyoaFigGroupMem_Type.tp_alloc(&PyoaFigGroupMem_Type,0);
       if (bself == NULL) return bself;
       PyoaFigGroupMemObject* self = (PyoaFigGroupMemObject*)bself;
       self->data = (oaObject*) data;
       self->value = &(self->data);
       self->borrow = 0; 
       self->locks = NULL;
       return bself;
    }
    Py_INCREF(Py_None);
    return Py_None;
}

// ------------------------------------------------------------------
// FunctionMethods:
// ------------------------------------------------------------------

// ------------------------------------------------------------------
static char oaFigGroupMem_destroy_doc[] = 
"Class: oaFigGroupMem, Function: destroy\n"
"  Paramegers: ()\n"
"    Calls: void destroy()\n"
"    Signature: destroy|void-void|\n"
"    BrowseData: 0\n"
"    This function destroys the oaFigGroupMem thereby removing its oaFig from its FigGroup. It does not destroy the Figure.\n"
;

static PyObject*
oaFigGroupMem_destroy(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaFigGroupMem data;
    int convert_status=PyoaFigGroupMem_Convert(ob,&data);
    assert(convert_status!=0);
    PyoaFigGroupMemObject* self=(PyoaFigGroupMemObject*)ob;
    if (!PyValidateDbObject(data.Data(),0)) return NULL;

    if (PyArg_ParseTuple(args,"")) {
        data.DataCall()->destroy();
        Py_INCREF(Py_None);
        return Py_None;
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaFigGroupMem_getFig_doc[] = 
"Class: oaFigGroupMem, Function: getFig\n"
"  Paramegers: ()\n"
"    Calls: oaFig* getFig() const\n"
"    Signature: getFig|ptr-oaFig|\n"
"    BrowseData: 1\n"
"    This function returns the oaFig that this oaFigGroupMem encapsulates.\n"
;

static PyObject*
oaFigGroupMem_getFig(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaFigGroupMem data;
    int convert_status=PyoaFigGroupMem_Convert(ob,&data);
    assert(convert_status!=0);
    PyoaFigGroupMemObject* self=(PyoaFigGroupMemObject*)ob;
    if (!PyValidateDbObject(data.Data(),0)) return NULL;

    if (PyArg_ParseTuple(args,"")) {
        oaFigp result= (data.DataCall()->getFig());
        return PyoaFig_FromoaFig(result);
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaFigGroupMem_getFigGroup_doc[] = 
"Class: oaFigGroupMem, Function: getFigGroup\n"
"  Paramegers: ()\n"
"    Calls: oaFigGroup* getFigGroup() const\n"
"    Signature: getFigGroup|ptr-oaFigGroup|\n"
"    BrowseData: 1\n"
"    This function returns the oaFigGroup to which this oaFigGroupMem belongs.\n"
;

static PyObject*
oaFigGroupMem_getFigGroup(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaFigGroupMem data;
    int convert_status=PyoaFigGroupMem_Convert(ob,&data);
    assert(convert_status!=0);
    PyoaFigGroupMemObject* self=(PyoaFigGroupMemObject*)ob;
    if (!PyValidateDbObject(data.Data(),0)) return NULL;

    if (PyArg_ParseTuple(args,"")) {
        oaFigGroupp result= (data.DataCall()->getFigGroup());
        return PyoaFigGroup_FromoaFigGroup(result);
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaFigGroupMem_moveAfter_doc[] = 
"Class: oaFigGroupMem, Function: moveAfter\n"
"  Paramegers: (oaFigGroupMem)\n"
"    Calls: void moveAfter(oaFigGroupMem* mem)\n"
"    Signature: moveAfter|void-void|ptr-oaFigGroupMem,\n"
"    oaFigGroupMem::moveAfter\n"
"    This function moves this oaFigGroupMem in the oaFigGroup's ordering and positions this oaFigGroupMem after the specified member.\n"
"    mem\n"
"    The member after which the oaFigGroupMem is positioned.\n"
"    oacInvalidFigGroupTypeForMemberMove\n"
"    oacFigGroupMemberNotInSameDB\n"
"    oacFigGroupMemberNotInSameFigGroup\n"
;

static PyObject*
oaFigGroupMem_moveAfter(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaFigGroupMem data;
    int convert_status=PyoaFigGroupMem_Convert(ob,&data);
    assert(convert_status!=0);
    PyoaFigGroupMemObject* self=(PyoaFigGroupMemObject*)ob;
    if (!PyValidateDbObject(data.Data(),0)) return NULL;

    PyParamoaFigGroupMem p1;
    if (PyArg_ParseTuple(args,"O&",
          &PyoaFigGroupMem_Convert,&p1)) {
        if (!PyValidateDbObject(p1.Data(),1)) return NULL;
        data.DataCall()->moveAfter(p1.Data());
        Py_INCREF(Py_None);
        return Py_None;
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaFigGroupMem_moveToFirst_doc[] = 
"Class: oaFigGroupMem, Function: moveToFirst\n"
"  Paramegers: ()\n"
"    Calls: void moveToFirst()\n"
"    Signature: moveToFirst|void-void|\n"
"    BrowseData: 0\n"
"    oaFigGroupMem::moveToFirst\n"
"    This function moves this oaFigGroupMem to the first position in the oaFigGroup's ordering.\n"
"    oacInvalidFigGroupTypeForMemberMove\n"
;

static PyObject*
oaFigGroupMem_moveToFirst(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaFigGroupMem data;
    int convert_status=PyoaFigGroupMem_Convert(ob,&data);
    assert(convert_status!=0);
    PyoaFigGroupMemObject* self=(PyoaFigGroupMemObject*)ob;
    if (!PyValidateDbObject(data.Data(),0)) return NULL;

    if (PyArg_ParseTuple(args,"")) {
        data.DataCall()->moveToFirst();
        Py_INCREF(Py_None);
        return Py_None;
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaFigGroupMem_isNull_doc[] =
"Class: oaFigGroupMem, Function: isNull\n"
"  Parameters: () \n"
"    This functions returns 1 if the DbPointer is NULL, and 0 otherwise.\n"
;

static PyObject*
oaFigGroupMem_tp_isNull(PyObject* ob, PyObject *args)
{
    PyParamoaFigGroupMem data;
    int convert_status=PyoaFigGroupMem_Convert(ob,&data);
    assert(convert_status!=0);
    if (data.DataCall()==NULL)
        return PyInt_FromLong(1);
    else
        return PyInt_FromLong(0);
}
static char oaFigGroupMem_assign_doc[] = 
"Class: oaFigGroupMem, Function: set\n"
"  Paramegers: (oaDouble)\n"
"    This function sets the current value.\n"
;

static PyObject*
oaFigGroupMem_tp_assign(PyObject* ob, PyObject *args)
{
  PyParamoaFigGroupMem data;
  int convert_status=PyoaFigGroupMem_Convert(ob,&data);
  assert(convert_status!=0);
  try {
    PyParamoaFigGroupMem p1;
    if (PyArg_ParseTuple(args,(char*)"O&",
          &PyoaFigGroupMem_Convert,&p1)) {
        data.Data()=p1.Data();
        Py_INCREF(ob);
        return ob;
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}


// ------------------------------------------------------------------
//  Function Methods Table:
// ------------------------------------------------------------------

static PyMethodDef oaFigGroupMem_methodlist[] = {
    {"destroy",(PyCFunction)oaFigGroupMem_destroy,METH_VARARGS,oaFigGroupMem_destroy_doc},
    {"getFig",(PyCFunction)oaFigGroupMem_getFig,METH_VARARGS,oaFigGroupMem_getFig_doc},
    {"getFigGroup",(PyCFunction)oaFigGroupMem_getFigGroup,METH_VARARGS,oaFigGroupMem_getFigGroup_doc},
    {"moveAfter",(PyCFunction)oaFigGroupMem_moveAfter,METH_VARARGS,oaFigGroupMem_moveAfter_doc},
    {"moveToFirst",(PyCFunction)oaFigGroupMem_moveToFirst,METH_VARARGS,oaFigGroupMem_moveToFirst_doc},
    {"isNull",(PyCFunction)oaFigGroupMem_tp_isNull,METH_VARARGS,oaFigGroupMem_isNull_doc},
    {"assign",(PyCFunction)oaFigGroupMem_tp_assign,METH_VARARGS,oaFigGroupMem_assign_doc},
   {NULL,NULL,0,NULL}
};


// ------------------------------------------------------------------
//  Type Object:
// ------------------------------------------------------------------

// ------------------------------------------------------------------
static char oaFigGroupMem_doc[] = 
"Class: oaFigGroupMem\n"
"  An oaFigGroupMem represents the membership of an oaFig in an oaFigGroup . A figure is placed in a FigGroup by creating an oaFigGroupMem that references the oaFig and the oaFigGroup that it will be a member of. A figure is removed from a FigGroup by destroying its FigGroupMem. This class provides functions for manipulating the order in which the members of a FigGroup appear, if that FigGroup is ordered.\n"
"Constructors:\n"
"  Paramegers: (oaFigGroupMem)\n"
"    Calls: (const oaFigGroupMem&)\n"
"    Signature: oaFigGroupMem||cref-oaFigGroupMem,\n"
;

// ------------------------------------------------------------------
PyTypeObject PyoaFigGroupMem_Type = {
    PyObject_HEAD_INIT(&PyType_Type)
    0,
    "oaFigGroupMem",
    sizeof(PyoaFigGroupMemObject),
    0,
    (destructor)oaFigGroupMem_tp_dealloc,	/* tp_dealloc */
    0,	/* tp_print */
    0,					/* tp_getattr */
    0,					/* tp_setattr */
    (cmpfunc)oaFigGroupMem_tp_compare,	/* tp_compare */
    (reprfunc)oaFigGroupMem_tp_repr,	/* tp_repr */
    0,					/* tp_as_number */
    0,					/* tp_as_sequence */
    0,					/* tp_as_mapping */
    0,					/* tp_as_hash */
    0,					/* tp_as_call */
    0,					/* tp_str */
    0,					/* tp_getattro */
    0,					/* tp_setattro */
    0,					/* tp_as_buffer */
    Py_TPFLAGS_DEFAULT|Py_TPFLAGS_BASETYPE, /* tp_flags */
    oaFigGroupMem_doc,	/* tp_doc */
    0,					/* tp_traverse */
    0,					/* tp_clear */
    0,					/* tp_richcompre */
    0,					/* tp_weaklistoffset */
    0,					/* tp_iter */
    0,					/* tp_iternext */
    oaFigGroupMem_methodlist,	/* tp_methods */
    0,					/* tp_members */
    0,					/* tp_getset */
    &PyoaBlockObject_Type,	/* tp_base */
    0,					/* tp_dict */
    0,					/* tp_descr_get */
    0,					/* tp_descr_set */
    0,					/* tp_dictoffset */
    0,					/* tp_init */
    PyType_GenericAlloc,	/* tp_alloc */
    oaFigGroupMem_new,	/* tp_new */
    _PyObject_Del,	/* tp_free */
};


// ------------------------------------------------------------------
// Static FunctionMethods:
// ------------------------------------------------------------------

// ------------------------------------------------------------------
static char oaFigGroupMem_static_create_doc[] = 
"Class: oaFigGroupMem, Function: create\n"
"  Paramegers: (oaFigGroup,oaFig)\n"
"    Calls: oaFigGroupMem* create(oaFigGroup* figGroup,oaFig* fig)\n"
"    Signature: create|ptr-oaFigGroupMem|ptr-oaFigGroup,ptr-oaFig,\n"
"    This function creates a new oaFigGroupMem object making the Figure a member of the FigGroup.\n"
"    figGroup\n"
"    The oaFigGroup in which the fig is added.\n"
"    fig\n"
"    The fig to add.\n"
"    oacFigGroupMemberNotInSameDB\n"
"    oacFigAlreadyInFigGroup\n"
;

static PyObject*
oaFigGroupMem_static_create(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaFigGroup p1;
    PyParamoaFig p2;
    if (PyArg_ParseTuple(args,"O&O&",
          &PyoaFigGroup_Convert,&p1,
          &PyoaFig_Convert,&p2)) {
        if (!PyValidateDbObject(p1.Data(),1)) return NULL;
        if (!PyValidateDbObject(p2.Data(),2)) return NULL;
        oaFigGroupMemp result= (oaFigGroupMem::create(p1.Data(),p2.Data()));
        return PyoaFigGroupMem_FromoaFigGroupMem(result);
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static PyMethodDef oaFigGroupMem_staticmethodlist[] = {
    {"static_create",(PyCFunction)oaFigGroupMem_static_create,METH_VARARGS,oaFigGroupMem_static_create_doc},
   {NULL,NULL,0,NULL}
};


// ------------------------------------------------------------------
//  Type Init:
// ------------------------------------------------------------------

int
PyoaFigGroupMem_TypeInit(PyObject* mod_dict)
{
    if (PyType_Ready(&PyoaFigGroupMem_Type)<0) {
      printf("** PyType_Ready failed for: oaFigGroupMem\n");
      return -1;
    }

    if (PyDict_SetItemString(mod_dict,"oaFigGroupMem",
           (PyObject*)(&PyoaFigGroupMem_Type))<0) {
       printf("** Failed to add type name to module dictionary for: oaFigGroupMem\n");
       return -1;
    }

    PyObject *dict, *value;
    PyMethodDef *method;
    dict=PyoaFigGroupMem_Type.tp_dict;
    for(method=oaFigGroupMem_staticmethodlist;method->ml_name!=NULL;method++) {
        value=PyCFunction_New(method,NULL);
    if (value==NULL) return -1;
        if (PyDict_SetItemString(dict,method->ml_name,value)!=0) {
        Py_DECREF(value);
            printf("** Failed to add static function to module dictionary for: %s\n",
                method->ml_name);
            return -1;
        }
        Py_DECREF(value);
    }
    return 0;
}


/********************************************************************
 *   Copyright 2002-2008  LSI Corporation
 *
 *   Licensed under the Apache License, Version 2.0 (the "License");
 *   you may not use this file except in compliance with the License.
 *   You may obtain a copy of the License at
 *
 *       http://www.apache.org/licenses/LICENSE-2.0
 *
 *   Unless required by applicable law or agreed to in writing, software
 *   distributed under the License is distributed on an "AS IS" BASIS,
 *   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *   See the License for the specific language governing permissions and
 *   limitations under the License.
 *
 *******************************************************************/

#include "pyoa_header.h"


// ==================================================================
// Wrapper Implementation for Class: oaFigGroupMemModTypeEnum
// ==================================================================

// ------------------------------------------------------------------

int
PyoaFigGroupMemModTypeEnum_Convert(PyObject* ob,PyParamoaFigGroupMemModTypeEnum* result)
{
    if (ob == NULL) return 1;
    if (PyString_Check(ob)) {
        char* str=PyString_AsString(ob);
    }            
    if (PyInt_Check(ob)) {
        long val=PyInt_AsLong(ob);
        result->SetData((oaFigGroupMemModTypeEnum)val);
        return 1;
    }
    PyErr_SetString(PyExc_TypeError,
        "Convertion of parameter to class: oaFigGroupMemModTypeEnum Failed");
    return 0;
}
// ------------------------------------------------------------------

PyObject* PyoaFigGroupMemModTypeEnum_FromoaFigGroupMemModTypeEnum(oaFigGroupMemModTypeEnum ob)
{

    Py_INCREF(Py_None);
    return Py_None;
}

// ------------------------------------------------------------------
//  Enum Typecast function:
// ------------------------------------------------------------------

static PyObject*
PyoaFigGroupMemModTypeEnum_TypeFunction(PyObject* mod,PyObject* args)
{
    int v;
    oaFigGroupMemModTypeEnum e;
    if (PyArg_ParseTuple(args,(char*)"i",&v)) {
       return PyoaFigGroupMemModTypeEnum_FromoaFigGroupMemModTypeEnum(oaFigGroupMemModTypeEnum(v));
    }
    PyErr_Clear();
    if (PyArg_ParseTuple(args,(char*)"O&",&PyoaFigGroupMemModTypeEnum_Convert,&e)) {
       return PyInt_FromLong(long(e));
    }
    return NULL;
}
static char oaFigGroupMemModTypeEnum_doc[] =
"Type convert function for enum: oaFigGroupMemModTypeEnum";
                               
static PyMethodDef PyoaFigGroupMemModTypeEnum_method =
  {"oaFigGroupMemModTypeEnum",(PyCFunction)PyoaFigGroupMemModTypeEnum_TypeFunction,METH_VARARGS,oaFigGroupMemModTypeEnum_doc};
  

// ------------------------------------------------------------------
//  Enum Init:
// ------------------------------------------------------------------

int
PyoaFigGroupMemModTypeEnum_TypeInit(PyObject* mod_dict)
{
    // Put Enum values in Dictionary
    PyObject* value;

    // Put Enum name function in Dictionary
    value=PyCFunction_New(&PyoaFigGroupMemModTypeEnum_method,NULL);
    if (PyDict_SetItemString(mod_dict,"oaFigGroupMemModTypeEnum",value)!=0) {
    Py_DECREF(value);
        printf("** Failed to add enum function to module dictionary for: oaFigGroupMemModTypeEnum\n");
        return -1;
    }
    Py_DECREF(value);
    return 0;
}

/********************************************************************
 *   Copyright 2002-2008  LSI Corporation
 *
 *   Licensed under the Apache License, Version 2.0 (the "License");
 *   you may not use this file except in compliance with the License.
 *   You may obtain a copy of the License at
 *
 *       http://www.apache.org/licenses/LICENSE-2.0
 *
 *   Unless required by applicable law or agreed to in writing, software
 *   distributed under the License is distributed on an "AS IS" BASIS,
 *   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *   See the License for the specific language governing permissions and
 *   limitations under the License.
 *
 *******************************************************************/

#include "pyoa_header.h"


// ==================================================================
// Wrapper Implementation for Class: oaFigGroupModTypeEnum
// ==================================================================

// ------------------------------------------------------------------

int
PyoaFigGroupModTypeEnum_Convert(PyObject* ob,PyParamoaFigGroupModTypeEnum* result)
{
    if (ob == NULL) return 1;
    if (PyString_Check(ob)) {
        char* str=PyString_AsString(ob);
        if (strcasecmp(str,"oacSetNameFigGroupModType")==0) { result->SetData(oacSetNameFigGroupModType); return 1;}
        if (strcasecmp(str,"oacSetTransformFigGroupModType")==0) { result->SetData(oacSetTransformFigGroupModType); return 1;}
        if (strcasecmp(str,"oacSetStatusFigGroupModType")==0) { result->SetData(oacSetStatusFigGroupModType); return 1;}
        if (strcasecmp(str,"oacSetOrderedFigGroupModType")==0) { result->SetData(oacSetOrderedFigGroupModType); return 1;}
        if (strcasecmp(str,"oacMoveFigGroupModType")==0) { result->SetData(oacMoveFigGroupModType); return 1;}
        if (strcasecmp(str,"oacAddToFigGroupFigGroupModType")==0) { result->SetData(oacAddToFigGroupFigGroupModType); return 1;}
        if (strcasecmp(str,"oacRemoveFromFigGroupFigGroupModType")==0) { result->SetData(oacRemoveFromFigGroupFigGroupModType); return 1;}
        if (strcasecmp(str,"oacAddFigFigGroupModType")==0) { result->SetData(oacAddFigFigGroupModType); return 1;}
        if (strcasecmp(str,"oacRemoveFigFigGroupModType")==0) { result->SetData(oacRemoveFigFigGroupModType); return 1;}
    }            
    if (PyInt_Check(ob)) {
        long val=PyInt_AsLong(ob);
        result->SetData((oaFigGroupModTypeEnum)val);
        return 1;
    }
    PyErr_SetString(PyExc_TypeError,
        "Convertion of parameter to class: oaFigGroupModTypeEnum Failed");
    return 0;
}
// ------------------------------------------------------------------

PyObject* PyoaFigGroupModTypeEnum_FromoaFigGroupModTypeEnum(oaFigGroupModTypeEnum ob)
{
    if (ob==oacSetNameFigGroupModType) return PyString_FromString("oacSetNameFigGroupModType");
    if (ob==oacSetTransformFigGroupModType) return PyString_FromString("oacSetTransformFigGroupModType");
    if (ob==oacSetStatusFigGroupModType) return PyString_FromString("oacSetStatusFigGroupModType");
    if (ob==oacSetOrderedFigGroupModType) return PyString_FromString("oacSetOrderedFigGroupModType");
    if (ob==oacMoveFigGroupModType) return PyString_FromString("oacMoveFigGroupModType");
    if (ob==oacAddToFigGroupFigGroupModType) return PyString_FromString("oacAddToFigGroupFigGroupModType");
    if (ob==oacRemoveFromFigGroupFigGroupModType) return PyString_FromString("oacRemoveFromFigGroupFigGroupModType");
    if (ob==oacAddFigFigGroupModType) return PyString_FromString("oacAddFigFigGroupModType");
    if (ob==oacRemoveFigFigGroupModType) return PyString_FromString("oacRemoveFigFigGroupModType");

    Py_INCREF(Py_None);
    return Py_None;
}

// ------------------------------------------------------------------
//  Enum Typecast function:
// ------------------------------------------------------------------

static PyObject*
PyoaFigGroupModTypeEnum_TypeFunction(PyObject* mod,PyObject* args)
{
    int v;
    oaFigGroupModTypeEnum e;
    if (PyArg_ParseTuple(args,(char*)"i",&v)) {
       return PyoaFigGroupModTypeEnum_FromoaFigGroupModTypeEnum(oaFigGroupModTypeEnum(v));
    }
    PyErr_Clear();
    if (PyArg_ParseTuple(args,(char*)"O&",&PyoaFigGroupModTypeEnum_Convert,&e)) {
       return PyInt_FromLong(long(e));
    }
    return NULL;
}
static char oaFigGroupModTypeEnum_doc[] =
"Type convert function for enum: oaFigGroupModTypeEnum";
                               
static PyMethodDef PyoaFigGroupModTypeEnum_method =
  {"oaFigGroupModTypeEnum",(PyCFunction)PyoaFigGroupModTypeEnum_TypeFunction,METH_VARARGS,oaFigGroupModTypeEnum_doc};
  

// ------------------------------------------------------------------
//  Enum Init:
// ------------------------------------------------------------------

int
PyoaFigGroupModTypeEnum_TypeInit(PyObject* mod_dict)
{
    // Put Enum values in Dictionary
    PyObject* value;
    value=PyString_FromString("oacSetNameFigGroupModType");
    PyDict_SetItemString(mod_dict,"oacSetNameFigGroupModType",value);
    Py_DECREF(value);
    value=PyString_FromString("oacSetTransformFigGroupModType");
    PyDict_SetItemString(mod_dict,"oacSetTransformFigGroupModType",value);
    Py_DECREF(value);
    value=PyString_FromString("oacSetStatusFigGroupModType");
    PyDict_SetItemString(mod_dict,"oacSetStatusFigGroupModType",value);
    Py_DECREF(value);
    value=PyString_FromString("oacSetOrderedFigGroupModType");
    PyDict_SetItemString(mod_dict,"oacSetOrderedFigGroupModType",value);
    Py_DECREF(value);
    value=PyString_FromString("oacMoveFigGroupModType");
    PyDict_SetItemString(mod_dict,"oacMoveFigGroupModType",value);
    Py_DECREF(value);
    value=PyString_FromString("oacAddToFigGroupFigGroupModType");
    PyDict_SetItemString(mod_dict,"oacAddToFigGroupFigGroupModType",value);
    Py_DECREF(value);
    value=PyString_FromString("oacRemoveFromFigGroupFigGroupModType");
    PyDict_SetItemString(mod_dict,"oacRemoveFromFigGroupFigGroupModType",value);
    Py_DECREF(value);
    value=PyString_FromString("oacAddFigFigGroupModType");
    PyDict_SetItemString(mod_dict,"oacAddFigFigGroupModType",value);
    Py_DECREF(value);
    value=PyString_FromString("oacRemoveFigFigGroupModType");
    PyDict_SetItemString(mod_dict,"oacRemoveFigFigGroupModType",value);
    Py_DECREF(value);

    // Put Enum name function in Dictionary
    value=PyCFunction_New(&PyoaFigGroupModTypeEnum_method,NULL);
    if (PyDict_SetItemString(mod_dict,"oaFigGroupModTypeEnum",value)!=0) {
    Py_DECREF(value);
        printf("** Failed to add enum function to module dictionary for: oaFigGroupModTypeEnum\n");
        return -1;
    }
    Py_DECREF(value);
    return 0;
}

/********************************************************************
 *   Copyright 2002-2008  LSI Corporation
 *
 *   Licensed under the Apache License, Version 2.0 (the "License");
 *   you may not use this file except in compliance with the License.
 *   You may obtain a copy of the License at
 *
 *       http://www.apache.org/licenses/LICENSE-2.0
 *
 *   Unless required by applicable law or agreed to in writing, software
 *   distributed under the License is distributed on an "AS IS" BASIS,
 *   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *   See the License for the specific language governing permissions and
 *   limitations under the License.
 *
 *******************************************************************/

#include "pyoa_header.h"


// ==================================================================
// Wrapper Implementation for Class: oaFigGroupQuery
// ==================================================================


// ==================================================================
// Alloc/Dealloc Routines
// ==================================================================

// ------------------------------------------------------------------
static PyObject*
oaFigGroupQuery_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
  try {
    int is_raw=(type==&PyoaFigGroupQuery_Type);
    PyObject* bself = type->tp_alloc(type,0);
    if (bself == NULL) return bself;
    PyoaFigGroupQueryObject* self = (PyoaFigGroupQueryObject*)bself;
    self->locks = NULL;
    self->borrow = 0;
    static char *kwlist [] = { NULL } ;
    if (is_raw) {
        PyErr_SetString(PyExc_TypeError,
            "No Constructor for pure-virtual class: oaFigGroupQuery");
    }
    else {
        pyv_oaFigGroupQuery* p = new pyv_oaFigGroupQuery();
        p->pyob=self;
        self->value= (oaRegionQuery*)  p;
        return bself;
    }
    Py_DECREF(self);
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static void
oaFigGroupQuery_tp_dealloc(PyoaFigGroupQueryObject* self)
{
    self->ob_type->tp_free((PyObject*)self);
}

// ------------------------------------------------------------------
static PyObject*
oaFigGroupQuery_tp_repr(PyObject *ob)
{
    PyParamoaFigGroupQuery value;
    int convert_status=PyoaFigGroupQuery_Convert(ob,&value);
    assert(convert_status!=0);
    PyObject* result;

    char buffer[37];
    sprintf(buffer,"<oaFigGroupQuery::" DISPLAY_FORMAT ">",POINTER_AS_DISPLAY(value.DataCall()));
    result=PyString_FromString(buffer);
    return result;
}
        
// ------------------------------------------------------------------
static int
oaFigGroupQuery_tp_compare(PyObject *ob1,PyObject* ob2)
{
    PyParamoaFigGroupQuery v1;
    PyParamoaFigGroupQuery v2;
    int convert_status1=PyoaFigGroupQuery_Convert(ob1,&v1);
    int convert_status2=PyoaFigGroupQuery_Convert(ob2,&v2);
    assert(convert_status1!=0);
    assert(convert_status2!=0);
    if (v1.DataCall()==v2.DataCall()) return 0;
    return 1;
}
        
// ------------------------------------------------------------------
int
PyoaFigGroupQuery_Convert(PyObject* ob,PyParamoaFigGroupQuery* result)
{
    if (ob == NULL) return 1;
    if (PyoaFigGroupQuery_Check(ob)) {
        result->SetData( (oaFigGroupQuery*) ((PyoaFigGroupQueryObject*)ob)->value);
        return 1;
    }
    PyErr_SetString(PyExc_TypeError,
        "Convertion of parameter to class: oaFigGroupQuery Failed");
    return 0;
}
// ------------------------------------------------------------------
PyObject* PyoaFigGroupQuery_FromoaFigGroupQuery(oaFigGroupQuery* data,int borrow,PyObject* lock)
{
    if (data) {
        PyObject* bself = PyoaFigGroupQuery_Type.tp_alloc(&PyoaFigGroupQuery_Type,0);
        if (bself == NULL) return bself;
        PyoaFigGroupQueryObject* self = (PyoaFigGroupQueryObject*)bself;
        self->value = (oaRegionQuery*)  data;
        self->locks = NULL;
        self->borrow = borrow;
        if (lock) PyoaLockObject(self->locks,lock);
        return bself;
    }
    Py_INCREF(Py_None);
    return Py_None;
}

// ------------------------------------------------------------------
// Virtual Functions:
// ------------------------------------------------------------------

// ------------------------------------------------------------------
pyv_oaFigGroupQuery::pyv_oaFigGroupQuery()
 : pyob(NULL),
   oaFigGroupQuery()
{
}

// ------------------------------------------------------------------
pyv_oaFigGroupQuery::pyv_oaFigGroupQuery(const oaFigGroupQuery& p)
 : pyob(NULL),
   oaFigGroupQuery(p)
{
}

// ------------------------------------------------------------------
void pyv_oaFigGroupQuery::queryFigGroup(oaFigGroup* p1)
{
    PyObject* md=PyObject_GetAttrString((PyObject*)pyob,"queryFigGroup");
    if (!PyCallable_Check(md)) {
        Py_DECREF(md);
        throw oaPythonException("Python Virtual Function oaFigGroupQuery::queryFigGroup was unable to find a callable python routine.");
    }
    PyObject* args=PyTuple_New(1);
    PyTuple_SetItem(args,0,PyoaFigGroup_FromoaFigGroup(p1));
    PyObject* result=PyObject_CallObject(md,args);
    Py_DECREF(md);
    Py_DECREF(args);
    if (result==NULL) {
        throw oaPythonException("Python Virtual Function oaFigGroupQuery::queryFigGroup had an error.");
    }
    Py_DECREF(result);
}

// ------------------------------------------------------------------
void pyv_oaFigGroupQuery::endRef(oaRef* p1)
{
    PyObject* md=PyObject_GetAttrString((PyObject*)pyob,"endRef");
    if (!PyCallable_Check(md)) {
        Py_DECREF(md);
        throw oaPythonException("Python Virtual Function oaFigGroupQuery::endRef was unable to find a callable python routine.");
    }
    PyObject* args=PyTuple_New(1);
    PyTuple_SetItem(args,0,PyoaRef_FromoaRef(p1));
    PyObject* result=PyObject_CallObject(md,args);
    Py_DECREF(md);
    Py_DECREF(args);
    if (result==NULL) {
        throw oaPythonException("Python Virtual Function oaFigGroupQuery::endRef had an error.");
    }
    Py_DECREF(result);
}

// ------------------------------------------------------------------
void pyv_oaFigGroupQuery::endRef(oaRef* p1,oaUInt4 p2)
{
    PyObject* md=PyObject_GetAttrString((PyObject*)pyob,"endRef");
    if (!PyCallable_Check(md)) {
        Py_DECREF(md);
        throw oaPythonException("Python Virtual Function oaFigGroupQuery::endRef was unable to find a callable python routine.");
    }
    PyObject* args=PyTuple_New(2);
    PyTuple_SetItem(args,0,PyoaRef_FromoaRef(p1));
    PyTuple_SetItem(args,1,PyoaUInt4_FromoaUInt4(p2));
    PyObject* result=PyObject_CallObject(md,args);
    Py_DECREF(md);
    Py_DECREF(args);
    if (result==NULL) {
        throw oaPythonException("Python Virtual Function oaFigGroupQuery::endRef had an error.");
    }
    Py_DECREF(result);
}

// ------------------------------------------------------------------
void pyv_oaFigGroupQuery::endRef(oaRef* p1,oaUInt4 p2,oaUInt4 p3)
{
    PyObject* md=PyObject_GetAttrString((PyObject*)pyob,"endRef");
    if (!PyCallable_Check(md)) {
        Py_DECREF(md);
        throw oaPythonException("Python Virtual Function oaFigGroupQuery::endRef was unable to find a callable python routine.");
    }
    PyObject* args=PyTuple_New(3);
    PyTuple_SetItem(args,0,PyoaRef_FromoaRef(p1));
    PyTuple_SetItem(args,1,PyoaUInt4_FromoaUInt4(p2));
    PyTuple_SetItem(args,2,PyoaUInt4_FromoaUInt4(p3));
    PyObject* result=PyObject_CallObject(md,args);
    Py_DECREF(md);
    Py_DECREF(args);
    if (result==NULL) {
        throw oaPythonException("Python Virtual Function oaFigGroupQuery::endRef had an error.");
    }
    Py_DECREF(result);
}

// ------------------------------------------------------------------
oaBoolean pyv_oaFigGroupQuery::startRef(oaRef* p1)
{
    PyObject* md=PyObject_GetAttrString((PyObject*)pyob,"startRef");
    if (!PyCallable_Check(md)) {
        Py_DECREF(md);
        throw oaPythonException("Python Virtual Function oaFigGroupQuery::startRef was unable to find a callable python routine.");
    }
    PyObject* args=PyTuple_New(1);
    PyTuple_SetItem(args,0,PyoaRef_FromoaRef(p1));
    PyObject* result=PyObject_CallObject(md,args);
    Py_DECREF(md);
    Py_DECREF(args);
    if (result==NULL) {
        throw oaPythonException("Python Virtual Function oaFigGroupQuery::startRef had an error.");
    }
    PyParamoaBoolean rv;
    if (PyoaBoolean_Convert(result,&rv)==0) {
        throw oaPythonException("Python Virtual Function oaBoolean::startRef has incorrect return type.");
    }
    Py_DECREF(result);
    return rv.Data();
}

// ------------------------------------------------------------------
oaBoolean pyv_oaFigGroupQuery::startRef(oaRef* p1,oaUInt4 p2)
{
    PyObject* md=PyObject_GetAttrString((PyObject*)pyob,"startRef");
    if (!PyCallable_Check(md)) {
        Py_DECREF(md);
        throw oaPythonException("Python Virtual Function oaFigGroupQuery::startRef was unable to find a callable python routine.");
    }
    PyObject* args=PyTuple_New(2);
    PyTuple_SetItem(args,0,PyoaRef_FromoaRef(p1));
    PyTuple_SetItem(args,1,PyoaUInt4_FromoaUInt4(p2));
    PyObject* result=PyObject_CallObject(md,args);
    Py_DECREF(md);
    Py_DECREF(args);
    if (result==NULL) {
        throw oaPythonException("Python Virtual Function oaFigGroupQuery::startRef had an error.");
    }
    PyParamoaBoolean rv;
    if (PyoaBoolean_Convert(result,&rv)==0) {
        throw oaPythonException("Python Virtual Function oaBoolean::startRef has incorrect return type.");
    }
    Py_DECREF(result);
    return rv.Data();
}

// ------------------------------------------------------------------
oaBoolean pyv_oaFigGroupQuery::startRef(oaRef* p1,oaUInt4 p2,oaUInt4 p3)
{
    PyObject* md=PyObject_GetAttrString((PyObject*)pyob,"startRef");
    if (!PyCallable_Check(md)) {
        Py_DECREF(md);
        throw oaPythonException("Python Virtual Function oaFigGroupQuery::startRef was unable to find a callable python routine.");
    }
    PyObject* args=PyTuple_New(3);
    PyTuple_SetItem(args,0,PyoaRef_FromoaRef(p1));
    PyTuple_SetItem(args,1,PyoaUInt4_FromoaUInt4(p2));
    PyTuple_SetItem(args,2,PyoaUInt4_FromoaUInt4(p3));
    PyObject* result=PyObject_CallObject(md,args);
    Py_DECREF(md);
    Py_DECREF(args);
    if (result==NULL) {
        throw oaPythonException("Python Virtual Function oaFigGroupQuery::startRef had an error.");
    }
    PyParamoaBoolean rv;
    if (PyoaBoolean_Convert(result,&rv)==0) {
        throw oaPythonException("Python Virtual Function oaBoolean::startRef has incorrect return type.");
    }
    Py_DECREF(result);
    return rv.Data();
}


// ------------------------------------------------------------------
// FunctionMethods:
// ------------------------------------------------------------------

// ------------------------------------------------------------------
static char oaFigGroupQuery_query_doc[] = 
"Class: oaFigGroupQuery, Function: query\n"
"  Paramegers: (oaDesign,oaBox)\n"
"    Calls: void query(oaDesign* topDesign,const oaBox& region)\n"
"    Signature: query|void-void|ptr-oaDesign,cref-oaBox,simple-oaDist,simple-oaUInt4,simple-oaUInt4,\n"
"    This function begins the query process to start generating figGroups in the specified region of the specified design hierarchy.\n"
"    topDesign\n"
"    A pointer to the top design.\n"
"    region\n"
"    The region in which to perform the query.\n"
"    filterSize\n"
"    Specifies query objects with a size equal to or larger than this value.\n"
"    startLevel\n"
"    The level of the block hierarchy to start the query.\n"
"    stopLevel\n"
"    The level of the block hierarchy to stop the query.\n"
"    Todo\n"
"    Check description of member function and parameters.\n"
"  Paramegers: (oaDesign,oaBox,oaDist)\n"
"    Calls: void query(oaDesign* topDesign,const oaBox& region,oaDist filterSize)\n"
"    Signature: query|void-void|ptr-oaDesign,cref-oaBox,simple-oaDist,simple-oaUInt4,simple-oaUInt4,\n"
"    This function begins the query process to start generating figGroups in the specified region of the specified design hierarchy.\n"
"    topDesign\n"
"    A pointer to the top design.\n"
"    region\n"
"    The region in which to perform the query.\n"
"    filterSize\n"
"    Specifies query objects with a size equal to or larger than this value.\n"
"    startLevel\n"
"    The level of the block hierarchy to start the query.\n"
"    stopLevel\n"
"    The level of the block hierarchy to stop the query.\n"
"    Todo\n"
"    Check description of member function and parameters.\n"
"  Paramegers: (oaDesign,oaBox,oaDist,oaUInt4)\n"
"    Calls: void query(oaDesign* topDesign,const oaBox& region,oaDist filterSize,oaUInt4 startLevel)\n"
"    Signature: query|void-void|ptr-oaDesign,cref-oaBox,simple-oaDist,simple-oaUInt4,simple-oaUInt4,\n"
"    This function begins the query process to start generating figGroups in the specified region of the specified design hierarchy.\n"
"    topDesign\n"
"    A pointer to the top design.\n"
"    region\n"
"    The region in which to perform the query.\n"
"    filterSize\n"
"    Specifies query objects with a size equal to or larger than this value.\n"
"    startLevel\n"
"    The level of the block hierarchy to start the query.\n"
"    stopLevel\n"
"    The level of the block hierarchy to stop the query.\n"
"    Todo\n"
"    Check description of member function and parameters.\n"
"  Paramegers: (oaDesign,oaBox,oaDist,oaUInt4,oaUInt4)\n"
"    Calls: void query(oaDesign* topDesign,const oaBox& region,oaDist filterSize,oaUInt4 startLevel,oaUInt4 stopLevel)\n"
"    Signature: query|void-void|ptr-oaDesign,cref-oaBox,simple-oaDist,simple-oaUInt4,simple-oaUInt4,\n"
"    This function begins the query process to start generating figGroups in the specified region of the specified design hierarchy.\n"
"    topDesign\n"
"    A pointer to the top design.\n"
"    region\n"
"    The region in which to perform the query.\n"
"    filterSize\n"
"    Specifies query objects with a size equal to or larger than this value.\n"
"    startLevel\n"
"    The level of the block hierarchy to start the query.\n"
"    stopLevel\n"
"    The level of the block hierarchy to stop the query.\n"
"    Todo\n"
"    Check description of member function and parameters.\n"
"  Paramegers: (oaDesign,oaBox,oaTransform)\n"
"    Calls: void query(oaDesign* topDesign,const oaBox& region,const oaTransform& xform)\n"
"    Signature: query|void-void|ptr-oaDesign,cref-oaBox,cref-oaTransform,simple-oaDist,simple-oaUInt4,simple-oaUInt4,\n"
"    This function begins the query process to start generating figGroups in the specified region of the specified design hierarchy.\n"
"    topDesign\n"
"    A pointer to the top design.\n"
"    region\n"
"    The region in which to perform the query.\n"
"    xform\n"
"    The current transform that is applied to the design.\n"
"    filterSize\n"
"    Specifies query objects with a size equal to or larger than this value.\n"
"    startLevel\n"
"    The level of the block hierarchy to start the query.\n"
"    stopLevel\n"
"    The level of the block hierarchy to stop the query.\n"
"    Todo\n"
"    Check description of member function and parameters.\n"
"  Paramegers: (oaDesign,oaBox,oaTransform,oaDist)\n"
"    Calls: void query(oaDesign* topDesign,const oaBox& region,const oaTransform& xform,oaDist filterSize)\n"
"    Signature: query|void-void|ptr-oaDesign,cref-oaBox,cref-oaTransform,simple-oaDist,simple-oaUInt4,simple-oaUInt4,\n"
"    This function begins the query process to start generating figGroups in the specified region of the specified design hierarchy.\n"
"    topDesign\n"
"    A pointer to the top design.\n"
"    region\n"
"    The region in which to perform the query.\n"
"    xform\n"
"    The current transform that is applied to the design.\n"
"    filterSize\n"
"    Specifies query objects with a size equal to or larger than this value.\n"
"    startLevel\n"
"    The level of the block hierarchy to start the query.\n"
"    stopLevel\n"
"    The level of the block hierarchy to stop the query.\n"
"    Todo\n"
"    Check description of member function and parameters.\n"
"  Paramegers: (oaDesign,oaBox,oaTransform,oaDist,oaUInt4)\n"
"    Calls: void query(oaDesign* topDesign,const oaBox& region,const oaTransform& xform,oaDist filterSize,oaUInt4 startLevel)\n"
"    Signature: query|void-void|ptr-oaDesign,cref-oaBox,cref-oaTransform,simple-oaDist,simple-oaUInt4,simple-oaUInt4,\n"
"    This function begins the query process to start generating figGroups in the specified region of the specified design hierarchy.\n"
"    topDesign\n"
"    A pointer to the top design.\n"
"    region\n"
"    The region in which to perform the query.\n"
"    xform\n"
"    The current transform that is applied to the design.\n"
"    filterSize\n"
"    Specifies query objects with a size equal to or larger than this value.\n"
"    startLevel\n"
"    The level of the block hierarchy to start the query.\n"
"    stopLevel\n"
"    The level of the block hierarchy to stop the query.\n"
"    Todo\n"
"    Check description of member function and parameters.\n"
"  Paramegers: (oaDesign,oaBox,oaTransform,oaDist,oaUInt4,oaUInt4)\n"
"    Calls: void query(oaDesign* topDesign,const oaBox& region,const oaTransform& xform,oaDist filterSize,oaUInt4 startLevel,oaUInt4 stopLevel)\n"
"    Signature: query|void-void|ptr-oaDesign,cref-oaBox,cref-oaTransform,simple-oaDist,simple-oaUInt4,simple-oaUInt4,\n"
"    This function begins the query process to start generating figGroups in the specified region of the specified design hierarchy.\n"
"    topDesign\n"
"    A pointer to the top design.\n"
"    region\n"
"    The region in which to perform the query.\n"
"    xform\n"
"    The current transform that is applied to the design.\n"
"    filterSize\n"
"    Specifies query objects with a size equal to or larger than this value.\n"
"    startLevel\n"
"    The level of the block hierarchy to start the query.\n"
"    stopLevel\n"
"    The level of the block hierarchy to stop the query.\n"
"    Todo\n"
"    Check description of member function and parameters.\n"
;

static PyObject*
oaFigGroupQuery_query(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaFigGroupQuery data;
    int convert_status=PyoaFigGroupQuery_Convert(ob,&data);
    assert(convert_status!=0);
    PyoaFigGroupQueryObject* self=(PyoaFigGroupQueryObject*)ob;

    // Case: (oaDesign,oaBox)
    {
        PyParamoaDesign p1;
        PyParamoaBox p2;
        if (PyArg_ParseTuple(args,"O&O&",
              &PyoaDesign_Convert,&p1,
              &PyoaBox_Convert,&p2)) {
            if (!PyValidateDbObject(p1.Data(),1)) return NULL;
            data.DataCall()->query(p1.Data(),p2.Data());
            Py_INCREF(Py_None);
            return Py_None;
        }
    }
    PyErr_Clear();
    // Case: (oaDesign,oaBox,oaDist)
    {
        PyParamoaDesign p1;
        PyParamoaBox p2;
        PyParamoaDist p3;
        if (PyArg_ParseTuple(args,"O&O&O&",
              &PyoaDesign_Convert,&p1,
              &PyoaBox_Convert,&p2,
              &PyoaDist_Convert,&p3)) {
            if (!PyValidateDbObject(p1.Data(),1)) return NULL;
            data.DataCall()->query(p1.Data(),p2.Data(),p3.Data());
            Py_INCREF(Py_None);
            return Py_None;
        }
    }
    PyErr_Clear();
    // Case: (oaDesign,oaBox,oaDist,oaUInt4)
    {
        PyParamoaDesign p1;
        PyParamoaBox p2;
        PyParamoaDist p3;
        PyParamoaUInt4 p4;
        if (PyArg_ParseTuple(args,"O&O&O&O&",
              &PyoaDesign_Convert,&p1,
              &PyoaBox_Convert,&p2,
              &PyoaDist_Convert,&p3,
              &PyoaUInt4_Convert,&p4)) {
            if (!PyValidateDbObject(p1.Data(),1)) return NULL;
            data.DataCall()->query(p1.Data(),p2.Data(),p3.Data(),p4.Data());
            Py_INCREF(Py_None);
            return Py_None;
        }
    }
    PyErr_Clear();
    // Case: (oaDesign,oaBox,oaDist,oaUInt4,oaUInt4)
    {
        PyParamoaDesign p1;
        PyParamoaBox p2;
        PyParamoaDist p3;
        PyParamoaUInt4 p4;
        PyParamoaUInt4 p5;
        if (PyArg_ParseTuple(args,"O&O&O&O&O&",
              &PyoaDesign_Convert,&p1,
              &PyoaBox_Convert,&p2,
              &PyoaDist_Convert,&p3,
              &PyoaUInt4_Convert,&p4,
              &PyoaUInt4_Convert,&p5)) {
            if (!PyValidateDbObject(p1.Data(),1)) return NULL;
            data.DataCall()->query(p1.Data(),p2.Data(),p3.Data(),p4.Data(),p5.Data());
            Py_INCREF(Py_None);
            return Py_None;
        }
    }
    PyErr_Clear();
    // Case: (oaDesign,oaBox,oaTransform)
    {
        PyParamoaDesign p1;
        PyParamoaBox p2;
        PyParamoaTransform p3;
        if (PyArg_ParseTuple(args,"O&O&O&",
              &PyoaDesign_Convert,&p1,
              &PyoaBox_Convert,&p2,
              &PyoaTransform_Convert,&p3)) {
            if (!PyValidateDbObject(p1.Data(),1)) return NULL;
            data.DataCall()->query(p1.Data(),p2.Data(),p3.Data());
            Py_INCREF(Py_None);
            return Py_None;
        }
    }
    PyErr_Clear();
    // Case: (oaDesign,oaBox,oaTransform,oaDist)
    {
        PyParamoaDesign p1;
        PyParamoaBox p2;
        PyParamoaTransform p3;
        PyParamoaDist p4;
        if (PyArg_ParseTuple(args,"O&O&O&O&",
              &PyoaDesign_Convert,&p1,
              &PyoaBox_Convert,&p2,
              &PyoaTransform_Convert,&p3,
              &PyoaDist_Convert,&p4)) {
            if (!PyValidateDbObject(p1.Data(),1)) return NULL;
            data.DataCall()->query(p1.Data(),p2.Data(),p3.Data(),p4.Data());
            Py_INCREF(Py_None);
            return Py_None;
        }
    }
    PyErr_Clear();
    // Case: (oaDesign,oaBox,oaTransform,oaDist,oaUInt4)
    {
        PyParamoaDesign p1;
        PyParamoaBox p2;
        PyParamoaTransform p3;
        PyParamoaDist p4;
        PyParamoaUInt4 p5;
        if (PyArg_ParseTuple(args,"O&O&O&O&O&",
              &PyoaDesign_Convert,&p1,
              &PyoaBox_Convert,&p2,
              &PyoaTransform_Convert,&p3,
              &PyoaDist_Convert,&p4,
              &PyoaUInt4_Convert,&p5)) {
            if (!PyValidateDbObject(p1.Data(),1)) return NULL;
            data.DataCall()->query(p1.Data(),p2.Data(),p3.Data(),p4.Data(),p5.Data());
            Py_INCREF(Py_None);
            return Py_None;
        }
    }
    PyErr_Clear();
    // Case: (oaDesign,oaBox,oaTransform,oaDist,oaUInt4,oaUInt4)
    {
        PyParamoaDesign p1;
        PyParamoaBox p2;
        PyParamoaTransform p3;
        PyParamoaDist p4;
        PyParamoaUInt4 p5;
        PyParamoaUInt4 p6;
        if (PyArg_ParseTuple(args,"O&O&O&O&O&O&",
              &PyoaDesign_Convert,&p1,
              &PyoaBox_Convert,&p2,
              &PyoaTransform_Convert,&p3,
              &PyoaDist_Convert,&p4,
              &PyoaUInt4_Convert,&p5,
              &PyoaUInt4_Convert,&p6)) {
            if (!PyValidateDbObject(p1.Data(),1)) return NULL;
            data.DataCall()->query(p1.Data(),p2.Data(),p3.Data(),p4.Data(),p5.Data(),p6.Data());
            Py_INCREF(Py_None);
            return Py_None;
        }
    }
    PyErr_Clear();
    PyErr_SetString(PyExc_TypeError,
        "No Arg-Matching Function found for class: oaFigGroupQuery, function: query, Choices are:\n"
        "    (oaDesign,oaBox)\n"
        "    (oaDesign,oaBox,oaDist)\n"
        "    (oaDesign,oaBox,oaDist,oaUInt4)\n"
        "    (oaDesign,oaBox,oaDist,oaUInt4,oaUInt4)\n"
        "    (oaDesign,oaBox,oaTransform)\n"
        "    (oaDesign,oaBox,oaTransform,oaDist)\n"
        "    (oaDesign,oaBox,oaTransform,oaDist,oaUInt4)\n"
        "    (oaDesign,oaBox,oaTransform,oaDist,oaUInt4,oaUInt4)\n"
    );
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaFigGroupQuery_queryFigGroup_doc[] = 
"Class: oaFigGroupQuery, Function: queryFigGroup\n"
"  Paramegers: (oaFigGroup)\n"
"    Calls: virtual void queryFigGroup(oaFigGroup* figGroup)\n"
"    Signature: queryFigGroup|void-void|ptr-oaFigGroup,\n"
"    This function processes each result of the figGroup query.\n"
"    figGroup\n"
"    The pointer to the oaFigGroup that is queried.\n"
"    Todo\n"
"    Check function and parameter descriptions.\n"
;

static PyObject*
oaFigGroupQuery_queryFigGroup(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaFigGroupQuery data;
    int convert_status=PyoaFigGroupQuery_Convert(ob,&data);
    assert(convert_status!=0);
    PyoaFigGroupQueryObject* self=(PyoaFigGroupQueryObject*)ob;

    PyParamoaFigGroup p1;
    if (PyArg_ParseTuple(args,"O&",
          &PyoaFigGroup_Convert,&p1)) {
        if (!PyValidateDbObject(p1.Data(),1)) return NULL;
        PyErr_SetString(PyExc_TypeError,
            "Call to Pure-Virtual Function class: oaFigGroupQuery, function: queryFigGroup");
            return NULL;
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

static char oaFigGroupQuery_assign_doc[] = 
"Class: oaFigGroupQuery, Function: set\n"
"  Paramegers: (oaDouble)\n"
"    This function sets the current value.\n"
;

static PyObject*
oaFigGroupQuery_tp_assign(PyObject* ob, PyObject *args)
{
  PyParamoaFigGroupQuery data;
  int convert_status=PyoaFigGroupQuery_Convert(ob,&data);
  assert(convert_status!=0);
  try {
    PyParamoaFigGroupQuery p1;
    if (PyArg_ParseTuple(args,(char*)"O&",
          &PyoaFigGroupQuery_Convert,&p1)) {
        data.Data()=p1.Data();
        Py_INCREF(ob);
        return ob;
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}


// ------------------------------------------------------------------
//  Function Methods Table:
// ------------------------------------------------------------------

static PyMethodDef oaFigGroupQuery_methodlist[] = {
    {"query",(PyCFunction)oaFigGroupQuery_query,METH_VARARGS,oaFigGroupQuery_query_doc},
    {"queryFigGroup",(PyCFunction)oaFigGroupQuery_queryFigGroup,METH_VARARGS,oaFigGroupQuery_queryFigGroup_doc},
    {"assign",(PyCFunction)oaFigGroupQuery_tp_assign,METH_VARARGS,oaFigGroupQuery_assign_doc},
   {NULL,NULL,0,NULL}
};


// ------------------------------------------------------------------
//  Type Object:
// ------------------------------------------------------------------

// ------------------------------------------------------------------
static char oaFigGroupQuery_doc[] = 
"Class: oaFigGroupQuery\n"
"  The oaFigGroupQuery class implements functionality to query a specified region in a design hierarchy and quickly return all oaFigGroups that overlap the region. This class is abstract, and an application must derive its own sub-class.\n"
"  Todo\n"
"  Check detailed description of class.\n"
"Constructors:\n"
"  Paramegers: ()\n"
"    Calls: oaFigGroupQuery()\n"
"    Signature: oaFigGroupQuery||\n"
"    This is the constructor for the oaFigGroupQuery class.\n"
"    Todo\n"
"    Check description of member function.\n"
"  Paramegers: (oaFigGroupQuery)\n"
"    Calls: (const oaFigGroupQuery&)\n"
"    Signature: oaFigGroupQuery||cref-oaFigGroupQuery,\n"
;

// ------------------------------------------------------------------
PyTypeObject PyoaFigGroupQuery_Type = {
    PyObject_HEAD_INIT(&PyType_Type)
    0,
    "oaFigGroupQuery",
    sizeof(PyoaFigGroupQueryObject),
    0,
    (destructor)oaFigGroupQuery_tp_dealloc,	/* tp_dealloc */
    0,	/* tp_print */
    0,					/* tp_getattr */
    0,					/* tp_setattr */
    (cmpfunc)oaFigGroupQuery_tp_compare,	/* tp_compare */
    (reprfunc)oaFigGroupQuery_tp_repr,	/* tp_repr */
    0,					/* tp_as_number */
    0,					/* tp_as_sequence */
    0,					/* tp_as_mapping */
    0,					/* tp_as_hash */
    0,					/* tp_as_call */
    0,					/* tp_str */
    0,					/* tp_getattro */
    0,					/* tp_setattro */
    0,					/* tp_as_buffer */
    Py_TPFLAGS_DEFAULT|Py_TPFLAGS_BASETYPE, /* tp_flags */
    oaFigGroupQuery_doc,	/* tp_doc */
    0,					/* tp_traverse */
    0,					/* tp_clear */
    0,					/* tp_richcompre */
    0,					/* tp_weaklistoffset */
    0,					/* tp_iter */
    0,					/* tp_iternext */
    oaFigGroupQuery_methodlist,	/* tp_methods */
    0,					/* tp_members */
    0,					/* tp_getset */
    &PyoaRegionQuery_Type,	/* tp_base */
    0,					/* tp_dict */
    0,					/* tp_descr_get */
    0,					/* tp_descr_set */
    0,					/* tp_dictoffset */
    0,					/* tp_init */
    PyType_GenericAlloc,	/* tp_alloc */
    oaFigGroupQuery_new,	/* tp_new */
    _PyObject_Del,	/* tp_free */
};


// ------------------------------------------------------------------
//  Type Init:
// ------------------------------------------------------------------

int
PyoaFigGroupQuery_TypeInit(PyObject* mod_dict)
{
    if (PyType_Ready(&PyoaFigGroupQuery_Type)<0) {
      printf("** PyType_Ready failed for: oaFigGroupQuery\n");
      return -1;
    }

    if (PyDict_SetItemString(mod_dict,"oaFigGroupQuery",
           (PyObject*)(&PyoaFigGroupQuery_Type))<0) {
       printf("** Failed to add type name to module dictionary for: oaFigGroupQuery\n");
       return -1;
    }
    return 0;
}


/********************************************************************
 *   Copyright 2002-2008  LSI Corporation
 *
 *   Licensed under the Apache License, Version 2.0 (the "License");
 *   you may not use this file except in compliance with the License.
 *   You may obtain a copy of the License at
 *
 *       http://www.apache.org/licenses/LICENSE-2.0
 *
 *   Unless required by applicable law or agreed to in writing, software
 *   distributed under the License is distributed on an "AS IS" BASIS,
 *   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *   See the License for the specific language governing permissions and
 *   limitations under the License.
 *
 *******************************************************************/

#include "pyoa_header.h"


// ==================================================================
// Wrapper Implementation for Class: oaFigGroupStatus
// ==================================================================


// ==================================================================
// Alloc/Dealloc Routines
// ==================================================================

// ------------------------------------------------------------------
static PyObject*
oaFigGroupStatus_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
  try {
    int is_raw=(type==&PyoaFigGroupStatus_Type);
    PyObject* bself = type->tp_alloc(type,0);
    if (bself == NULL) return bself;
    PyoaFigGroupStatusObject* self = (PyoaFigGroupStatusObject*)bself;
    self->locks = NULL;
    self->borrow = 0;
    static char *kwlist [] = { NULL } ;
    // Case: (oaFigGroupStatusEnum)
    {
        PyParamoaFigGroupStatusEnum p1;
        if (PyArg_ParseTuple(args,"O&",
              &PyoaFigGroupStatusEnum_Convert,&p1)) {
            self->value =  new oaFigGroupStatus(p1.Data());
            return bself;
        }
    }
    PyErr_Clear();
    // Case: (oaString)
    {
        PyParamoaString p1;
        if (PyArg_ParseTuple(args,"O&",
              &PyoaString_Convert,&p1)) {
            self->value =  new oaFigGroupStatus(p1.Data());
            return bself;
        }
    }
    PyErr_Clear();
    // Case: (oaFigGroupStatus)
    {
        PyParamoaFigGroupStatus p1;
        if (PyArg_ParseTuple(args,(char*)"O&",
              &PyoaFigGroupStatus_Convert,&p1)) {
            self->value= new oaFigGroupStatus(p1.Data());
            return bself;
        }
    }
    PyErr_Clear();
    PyErr_SetString(PyExc_TypeError,
        "No Arg-Matching Constructor found for class: oaFigGroupStatus, Choices are:\n"
        "    (oaFigGroupStatusEnum)\n"
        "    (oaString)\n"
        "    (oaFigGroupStatus)\n"
    );
    Py_DECREF(self);
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static void
oaFigGroupStatus_tp_dealloc(PyoaFigGroupStatusObject* self)
{
    if (!self->borrow) {
        delete (self->value);
    }
    Py_XDECREF(self->locks);
    self->ob_type->tp_free((PyObject*)self);
}

// ------------------------------------------------------------------
static PyObject*
oaFigGroupStatus_tp_repr(PyObject *ob)
{
    PyParamoaFigGroupStatus value;
    int convert_status=PyoaFigGroupStatus_Convert(ob,&value);
    assert(convert_status!=0);
    PyObject* result;
    oaString sresult(value.DataCall()->getName());

    char addr[38];
    sprintf(addr,DISPLAY_FORMAT,POINTER_AS_DISPLAY(value.DataCall()));
    oaString buffer;
    buffer+=oaString("<oaFigGroupStatus::");
    buffer+=oaString(addr);
    buffer+=oaString("::");
    buffer+=oaString(sresult);
    buffer+=oaString(">");
    result=PyString_FromString((char*)(const char*)buffer);
    return result;
}
        
// ------------------------------------------------------------------
static int
oaFigGroupStatus_tp_compare(PyObject *ob1,PyObject* ob2)
{
    PyParamoaFigGroupStatus v1;
    PyParamoaFigGroupStatus v2;
    int convert_status1=PyoaFigGroupStatus_Convert(ob1,&v1);
    int convert_status2=PyoaFigGroupStatus_Convert(ob2,&v2);
    assert(convert_status1!=0);
    assert(convert_status2!=0);
    if (v1.DataCall()==v2.DataCall()) return 0;
    return 1;
}
        
// ------------------------------------------------------------------
int
PyoaFigGroupStatus_Convert(PyObject* ob,PyParamoaFigGroupStatus* result)
{
    if (ob == NULL) return 1;
    if (PyoaFigGroupStatus_Check(ob)) {
        result->SetData(  ((PyoaFigGroupStatusObject*)ob)->value);
        return 1;
    }
    PyErr_SetString(PyExc_TypeError,
        "Convertion of parameter to class: oaFigGroupStatus Failed");
    return 0;
}
// ------------------------------------------------------------------
PyObject* PyoaFigGroupStatus_FromoaFigGroupStatus(oaFigGroupStatus* data,int borrow,PyObject* lock)
{
    if (data) {
        PyObject* bself = PyoaFigGroupStatus_Type.tp_alloc(&PyoaFigGroupStatus_Type,0);
        if (bself == NULL) return bself;
        PyoaFigGroupStatusObject* self = (PyoaFigGroupStatusObject*)bself;
        self->value =  data;
        self->locks = NULL;
        self->borrow = borrow;
        if (lock) PyoaLockObject(self->locks,lock);
        return bself;
    }
    Py_INCREF(Py_None);
    return Py_None;
}

// ------------------------------------------------------------------
// FunctionMethods:
// ------------------------------------------------------------------

// ------------------------------------------------------------------
static char oaFigGroupStatus_getName_doc[] = 
"Class: oaFigGroupStatus, Function: getName\n"
"  Paramegers: ()\n"
"    Calls: const oaString& getName() const\n"
"    Signature: getName|cref-oaString|\n"
"    BrowseData: 1\n"
"    This function returns the string name that corresponds to the oaFigGroupStatusEnum value represented by this oaFigGroupStatus object.\n"
;

static PyObject*
oaFigGroupStatus_getName(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaFigGroupStatus data;
    int convert_status=PyoaFigGroupStatus_Convert(ob,&data);
    assert(convert_status!=0);
    PyoaFigGroupStatusObject* self=(PyoaFigGroupStatusObject*)ob;

    if (PyArg_ParseTuple(args,"")) {
        oaString result= (data.DataCall()->getName());
        return PyoaString_FromoaString(result);
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaFigGroupStatus_oaFigGroupStatusEnum_doc[] = 
"Class: oaFigGroupStatus, Function: oaFigGroupStatusEnum\n"
"  Paramegers: ()\n"
"    Calls: oaFigGroupStatusEnum oaFigGroupStatusEnum() const\n"
"    Signature: operator oaFigGroupStatusEnum|simple-oaFigGroupStatusEnum|\n"
"    BrowseData: 1\n"
"    This operator returns the oaFigGroupStatusEnum value that this oaFigGroupStatus object represents.\n"
;

static PyObject*
oaFigGroupStatus_oaFigGroupStatusEnum(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaFigGroupStatus data;
    int convert_status=PyoaFigGroupStatus_Convert(ob,&data);
    assert(convert_status!=0);
    PyoaFigGroupStatusObject* self=(PyoaFigGroupStatusObject*)ob;

    if (PyArg_ParseTuple(args,"")) {
        oaFigGroupStatusEnum result= (data.DataCall()->operator oaFigGroupStatusEnum());
        return PyoaFigGroupStatusEnum_FromoaFigGroupStatusEnum(result);
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

static char oaFigGroupStatus_assign_doc[] = 
"Class: oaFigGroupStatus, Function: set\n"
"  Paramegers: (oaDouble)\n"
"    This function sets the current value.\n"
;

static PyObject*
oaFigGroupStatus_tp_assign(PyObject* ob, PyObject *args)
{
  PyParamoaFigGroupStatus data;
  int convert_status=PyoaFigGroupStatus_Convert(ob,&data);
  assert(convert_status!=0);
  try {
    PyParamoaFigGroupStatus p1;
    if (PyArg_ParseTuple(args,(char*)"O&",
          &PyoaFigGroupStatus_Convert,&p1)) {
        data.Data()=p1.Data();
        Py_INCREF(ob);
        return ob;
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}


// ------------------------------------------------------------------
//  Function Methods Table:
// ------------------------------------------------------------------

static PyMethodDef oaFigGroupStatus_methodlist[] = {
    {"getName",(PyCFunction)oaFigGroupStatus_getName,METH_VARARGS,oaFigGroupStatus_getName_doc},
    {"oaFigGroupStatusEnum",(PyCFunction)oaFigGroupStatus_oaFigGroupStatusEnum,METH_VARARGS,oaFigGroupStatus_oaFigGroupStatusEnum_doc},
    {"assign",(PyCFunction)oaFigGroupStatus_tp_assign,METH_VARARGS,oaFigGroupStatus_assign_doc},
   {NULL,NULL,0,NULL}
};


// ------------------------------------------------------------------
//  Type Object:
// ------------------------------------------------------------------

// ------------------------------------------------------------------
static char oaFigGroupStatus_doc[] = 
"Class: oaFigGroupStatus\n"
"  The oaFigGroupStatus class is an enum wrapper for the values that describe whether a FigGroup's content may be changed by manual editing, automatic layout tools, or both. See oaFigGroup::getFigGroupStatus for usage information.\n"
"  OpenAccess does not enforce these settings. Tools that modify FigGroups, or figures that belong to FigGroups, must enforce them.\n"
"  See Enum Wrappers in the Programmers Guide for a discussion of enum wrappers.\n"
"  oaFigGroupStatusEnum\n"
"Constructors:\n"
"  Paramegers: (oaFigGroupStatusEnum)\n"
"    Calls: oaFigGroupStatus(oaFigGroupStatusEnum valueIn)\n"
"    Signature: oaFigGroupStatus||simple-oaFigGroupStatusEnum,\n"
"    This oaFigGroupStatus constructor takes an oaFigGroupStatusEnum as input.\n"
"    valueIn\n"
"    An oaFigGroupStatusEnum value.\n"
"  Paramegers: (oaString)\n"
"    Calls: oaFigGroupStatus(const oaString& name)\n"
"    Signature: oaFigGroupStatus||cref-oaString,\n"
"    This constructor creates an oaFigGroupStatus object based on the specified constant string, which is the name associated with an oaFigGroupStatusEnum value.\n"
"    name\n"
"    A reference to a constant oaString associated with an oaFigGroupStatusEnum value.\n"
"    oacInvalidFigGroupStatusTypeName\n"
"  Paramegers: (oaFigGroupStatus)\n"
"    Calls: (const oaFigGroupStatus&)\n"
"    Signature: oaFigGroupStatus||cref-oaFigGroupStatus,\n"
;

// ------------------------------------------------------------------
PyTypeObject PyoaFigGroupStatus_Type = {
    PyObject_HEAD_INIT(&PyType_Type)
    0,
    "oaFigGroupStatus",
    sizeof(PyoaFigGroupStatusObject),
    0,
    (destructor)oaFigGroupStatus_tp_dealloc,	/* tp_dealloc */
    0,	/* tp_print */
    0,					/* tp_getattr */
    0,					/* tp_setattr */
    (cmpfunc)oaFigGroupStatus_tp_compare,	/* tp_compare */
    (reprfunc)oaFigGroupStatus_tp_repr,	/* tp_repr */
    0,					/* tp_as_number */
    0,					/* tp_as_sequence */
    0,					/* tp_as_mapping */
    0,					/* tp_as_hash */
    0,					/* tp_as_call */
    0,					/* tp_str */
    0,					/* tp_getattro */
    0,					/* tp_setattro */
    0,					/* tp_as_buffer */
    Py_TPFLAGS_DEFAULT|Py_TPFLAGS_BASETYPE, /* tp_flags */
    oaFigGroupStatus_doc,	/* tp_doc */
    0,					/* tp_traverse */
    0,					/* tp_clear */
    0,					/* tp_richcompre */
    0,					/* tp_weaklistoffset */
    0,					/* tp_iter */
    0,					/* tp_iternext */
    oaFigGroupStatus_methodlist,	/* tp_methods */
    0,					/* tp_members */
    0,					/* tp_getset */
    0,					/* tp_base */
    0,					/* tp_dict */
    0,					/* tp_descr_get */
    0,					/* tp_descr_set */
    0,					/* tp_dictoffset */
    0,					/* tp_init */
    PyType_GenericAlloc,	/* tp_alloc */
    oaFigGroupStatus_new,	/* tp_new */
    _PyObject_Del,	/* tp_free */
};


// ------------------------------------------------------------------
//  Type Init:
// ------------------------------------------------------------------

int
PyoaFigGroupStatus_TypeInit(PyObject* mod_dict)
{
    if (PyType_Ready(&PyoaFigGroupStatus_Type)<0) {
      printf("** PyType_Ready failed for: oaFigGroupStatus\n");
      return -1;
    }

    if (PyDict_SetItemString(mod_dict,"oaFigGroupStatus",
           (PyObject*)(&PyoaFigGroupStatus_Type))<0) {
       printf("** Failed to add type name to module dictionary for: oaFigGroupStatus\n");
       return -1;
    }
    return 0;
}


/********************************************************************
 *   Copyright 2002-2008  LSI Corporation
 *
 *   Licensed under the Apache License, Version 2.0 (the "License");
 *   you may not use this file except in compliance with the License.
 *   You may obtain a copy of the License at
 *
 *       http://www.apache.org/licenses/LICENSE-2.0
 *
 *   Unless required by applicable law or agreed to in writing, software
 *   distributed under the License is distributed on an "AS IS" BASIS,
 *   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *   See the License for the specific language governing permissions and
 *   limitations under the License.
 *
 *******************************************************************/

#include "pyoa_header.h"


// ==================================================================
// Wrapper Implementation for Class: oaFigGroupStatusEnum
// ==================================================================

// ------------------------------------------------------------------

int
PyoaFigGroupStatusEnum_Convert(PyObject* ob,PyParamoaFigGroupStatusEnum* result)
{
    if (ob == NULL) return 1;
    if (PyString_Check(ob)) {
        char* str=PyString_AsString(ob);
        if (strcasecmp(str,"oacNormalFigGroupStatus")==0) { result->SetData(oacNormalFigGroupStatus); return 1;}
        if (strcasecmp(str,"oacFixedFigGroupStatus")==0) { result->SetData(oacFixedFigGroupStatus); return 1;}
        if (strcasecmp(str,"oacLockedFigGroupStatus")==0) { result->SetData(oacLockedFigGroupStatus); return 1;}
    }            
    if (PyInt_Check(ob)) {
        long val=PyInt_AsLong(ob);
        result->SetData((oaFigGroupStatusEnum)val);
        return 1;
    }
    PyErr_SetString(PyExc_TypeError,
        "Convertion of parameter to class: oaFigGroupStatusEnum Failed");
    return 0;
}
// ------------------------------------------------------------------

PyObject* PyoaFigGroupStatusEnum_FromoaFigGroupStatusEnum(oaFigGroupStatusEnum ob)
{
    if (ob==oacNormalFigGroupStatus) return PyString_FromString("oacNormalFigGroupStatus");
    if (ob==oacFixedFigGroupStatus) return PyString_FromString("oacFixedFigGroupStatus");
    if (ob==oacLockedFigGroupStatus) return PyString_FromString("oacLockedFigGroupStatus");

    Py_INCREF(Py_None);
    return Py_None;
}

// ------------------------------------------------------------------
//  Enum Typecast function:
// ------------------------------------------------------------------

static PyObject*
PyoaFigGroupStatusEnum_TypeFunction(PyObject* mod,PyObject* args)
{
    int v;
    oaFigGroupStatusEnum e;
    if (PyArg_ParseTuple(args,(char*)"i",&v)) {
       return PyoaFigGroupStatusEnum_FromoaFigGroupStatusEnum(oaFigGroupStatusEnum(v));
    }
    PyErr_Clear();
    if (PyArg_ParseTuple(args,(char*)"O&",&PyoaFigGroupStatusEnum_Convert,&e)) {
       return PyInt_FromLong(long(e));
    }
    return NULL;
}
static char oaFigGroupStatusEnum_doc[] =
"Type convert function for enum: oaFigGroupStatusEnum";
                               
static PyMethodDef PyoaFigGroupStatusEnum_method =
  {"oaFigGroupStatusEnum",(PyCFunction)PyoaFigGroupStatusEnum_TypeFunction,METH_VARARGS,oaFigGroupStatusEnum_doc};
  

// ------------------------------------------------------------------
//  Enum Init:
// ------------------------------------------------------------------

int
PyoaFigGroupStatusEnum_TypeInit(PyObject* mod_dict)
{
    // Put Enum values in Dictionary
    PyObject* value;
    value=PyString_FromString("oacNormalFigGroupStatus");
    PyDict_SetItemString(mod_dict,"oacNormalFigGroupStatus",value);
    Py_DECREF(value);
    value=PyString_FromString("oacFixedFigGroupStatus");
    PyDict_SetItemString(mod_dict,"oacFixedFigGroupStatus",value);
    Py_DECREF(value);
    value=PyString_FromString("oacLockedFigGroupStatus");
    PyDict_SetItemString(mod_dict,"oacLockedFigGroupStatus",value);
    Py_DECREF(value);

    // Put Enum name function in Dictionary
    value=PyCFunction_New(&PyoaFigGroupStatusEnum_method,NULL);
    if (PyDict_SetItemString(mod_dict,"oaFigGroupStatusEnum",value)!=0) {
    Py_DECREF(value);
        printf("** Failed to add enum function to module dictionary for: oaFigGroupStatusEnum\n");
        return -1;
    }
    Py_DECREF(value);
    return 0;
}

/********************************************************************
 *   Copyright 2002-2008  LSI Corporation
 *
 *   Licensed under the Apache License, Version 2.0 (the "License");
 *   you may not use this file except in compliance with the License.
 *   You may obtain a copy of the License at
 *
 *       http://www.apache.org/licenses/LICENSE-2.0
 *
 *   Unless required by applicable law or agreed to in writing, software
 *   distributed under the License is distributed on an "AS IS" BASIS,
 *   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *   See the License for the specific language governing permissions and
 *   limitations under the License.
 *
 *******************************************************************/

#include "pyoa_header.h"


// ==================================================================
// Wrapper Implementation for Class: oaFile
// ==================================================================


// ==================================================================
// Alloc/Dealloc Routines
// ==================================================================

// ------------------------------------------------------------------
static PyObject*
oaFile_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
  try {
    int is_raw=(type==&PyoaFile_Type);
    PyObject* bself = type->tp_alloc(type,0);
    if (bself == NULL) return bself;
    PyoaFileObject* self = (PyoaFileObject*)bself;
    self->locks = NULL;
    self->borrow = 0;
    static char *kwlist [] = { NULL } ;
    // Case: (oaString)
    {
        PyParamoaString p1;
        if (PyArg_ParseTuple(args,"O&",
              &PyoaString_Convert,&p1)) {
            self->value = (oaFSComponent*)  new oaFile(p1.Data());
            return bself;
        }
    }
    PyErr_Clear();
    // Case: (oaFile)
    {
        PyParamoaFile p1;
        if (PyArg_ParseTuple(args,(char*)"O&",
              &PyoaFile_Convert,&p1)) {
            self->value=(oaFSComponent*)  new oaFile(p1.Data());
            return bself;
        }
    }
    PyErr_Clear();
    PyErr_SetString(PyExc_TypeError,
        "No Arg-Matching Constructor found for class: oaFile, Choices are:\n"
        "    (oaString)\n"
        "    (oaFile)\n"
    );
    Py_DECREF(self);
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static void
oaFile_tp_dealloc(PyoaFileObject* self)
{
    if (!self->borrow) {
        delete (oaFile*)(self->value);
    }
    Py_XDECREF(self->locks);
    self->ob_type->tp_free((PyObject*)self);
}

// ------------------------------------------------------------------
static PyObject*
oaFile_tp_repr(PyObject *ob)
{
    PyParamoaFile value;
    int convert_status=PyoaFile_Convert(ob,&value);
    assert(convert_status!=0);
    PyObject* result;

    char buffer[28];
    sprintf(buffer,"<oaFile::" DISPLAY_FORMAT ">",POINTER_AS_DISPLAY(value.DataCall()));
    result=PyString_FromString(buffer);
    return result;
}
        
// ------------------------------------------------------------------
static int
oaFile_tp_compare(PyObject *ob1,PyObject* ob2)
{
    PyParamoaFile v1;
    PyParamoaFile v2;
    int convert_status1=PyoaFile_Convert(ob1,&v1);
    int convert_status2=PyoaFile_Convert(ob2,&v2);
    assert(convert_status1!=0);
    assert(convert_status2!=0);
    if (v1.DataCall()==v2.DataCall()) return 0;
    return 1;
}
        
// ------------------------------------------------------------------
int
PyoaFile_Convert(PyObject* ob,PyParamoaFile* result)
{
    if (ob == NULL) return 1;
    if (PyoaFile_Check(ob)) {
        result->SetData( (oaFile*) ((PyoaFileObject*)ob)->value);
        return 1;
    }
    PyErr_SetString(PyExc_TypeError,
        "Convertion of parameter to class: oaFile Failed");
    return 0;
}
// ------------------------------------------------------------------
PyObject* PyoaFile_FromoaFile(oaFile* data,int borrow,PyObject* lock)
{
    if (data) {
        PyObject* bself = PyoaFile_Type.tp_alloc(&PyoaFile_Type,0);
        if (bself == NULL) return bself;
        PyoaFileObject* self = (PyoaFileObject*)bself;
        self->value = (oaFSComponent*)  data;
        self->locks = NULL;
        self->borrow = borrow;
        if (lock) PyoaLockObject(self->locks,lock);
        return bself;
    }
    Py_INCREF(Py_None);
    return Py_None;
}

// ------------------------------------------------------------------
// FunctionMethods:
// ------------------------------------------------------------------

// ------------------------------------------------------------------
static char oaFile_close_doc[] = 
"Class: oaFile, Function: close\n"
"  Paramegers: ()\n"
"    Calls: void close()\n"
"    Signature: close|void-void|\n"
"    BrowseData: 0\n"
"    This function closes the file.\n"
"    oacFileCloseFailed\n"
;

static PyObject*
oaFile_close(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaFile data;
    int convert_status=PyoaFile_Convert(ob,&data);
    assert(convert_status!=0);
    PyoaFileObject* self=(PyoaFileObject*)ob;

    if (PyArg_ParseTuple(args,"")) {
        data.DataCall()->close();
        Py_INCREF(Py_None);
        return Py_None;
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaFile_exists_doc[] = 
"Class: oaFile, Function: exists\n"
"  Paramegers: ()\n"
"    Calls: oaBoolean exists() const\n"
"    Signature: exists|simple-oaBoolean|\n"
"    BrowseData: 1\n"
"    This function returns a boolean value that indicates if this file exists on disk.\n"
;

static PyObject*
oaFile_exists(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaFile data;
    int convert_status=PyoaFile_Convert(ob,&data);
    assert(convert_status!=0);
    PyoaFileObject* self=(PyoaFileObject*)ob;

    if (PyArg_ParseTuple(args,"")) {
        oaBoolean result= (data.DataCall()->exists());
        return PyoaBoolean_FromoaBoolean(result);
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaFile_flush_doc[] = 
"Class: oaFile, Function: flush\n"
"  Paramegers: ()\n"
"    Calls: void flush()\n"
"    Signature: flush|void-void|\n"
"    BrowseData: 0\n"
"    This function flushes any buffered output to disk.\n"
;

static PyObject*
oaFile_flush(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaFile data;
    int convert_status=PyoaFile_Convert(ob,&data);
    assert(convert_status!=0);
    PyoaFileObject* self=(PyoaFileObject*)ob;

    if (PyArg_ParseTuple(args,"")) {
        data.DataCall()->flush();
        Py_INCREF(Py_None);
        return Py_None;
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaFile_getCreateTime_doc[] = 
"Class: oaFile, Function: getCreateTime\n"
"  Paramegers: ()\n"
"    Calls: oaTime getCreateTime() const\n"
"    Signature: getCreateTime|simple-oaTime|\n"
"    BrowseData: 1\n"
"    oaFile::getCreateTime\n"
"    This function returns the creation time of the file on the disk. The format of the time is unit of seconds from Jan, 1, 1970, 0 hour, 0 min, 0 sec.\n"
"    oacFileGetInfoFailed\n"
;

static PyObject*
oaFile_getCreateTime(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaFile data;
    int convert_status=PyoaFile_Convert(ob,&data);
    assert(convert_status!=0);
    PyoaFileObject* self=(PyoaFileObject*)ob;

    if (PyArg_ParseTuple(args,"")) {
        oaTime result= (data.DataCall()->getCreateTime());
        return PyoaTime_FromoaTime(result);
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaFile_getLastWriteTime_doc[] = 
"Class: oaFile, Function: getLastWriteTime\n"
"  Paramegers: ()\n"
"    Calls: oaTime getLastWriteTime() const\n"
"    Signature: getLastWriteTime|simple-oaTime|\n"
"    BrowseData: 1\n"
"    This function returns the last modified time of the file of the file on the disk (the last time the file was written).\n"
"    oacFileGetInfoFailed\n"
;

static PyObject*
oaFile_getLastWriteTime(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaFile data;
    int convert_status=PyoaFile_Convert(ob,&data);
    assert(convert_status!=0);
    PyoaFileObject* self=(PyoaFileObject*)ob;

    if (PyArg_ParseTuple(args,"")) {
        oaTime result= (data.DataCall()->getLastWriteTime());
        return PyoaTime_FromoaTime(result);
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaFile_getMode_doc[] = 
"Class: oaFile, Function: getMode\n"
"  Paramegers: ()\n"
"    Calls: oaChar getMode() const\n"
"    Signature: getMode|simple-oaChar|\n"
"    BrowseData: 1\n"
"    This function returns a string containing the current mode used to access this file.\n"
;

static PyObject*
oaFile_getMode(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaFile data;
    int convert_status=PyoaFile_Convert(ob,&data);
    assert(convert_status!=0);
    PyoaFileObject* self=(PyoaFileObject*)ob;

    if (PyArg_ParseTuple(args,"")) {
        oaChar result= (data.DataCall()->getMode());
        return PyoaChar_FromoaChar(result);
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaFile_getSize_doc[] = 
"Class: oaFile, Function: getSize\n"
"  Paramegers: ()\n"
"    Calls: oaUInt8 getSize() const\n"
"    Signature: getSize|simple-oaUInt8|\n"
"    BrowseData: 1\n"
"    This function returns the size of this file, in bytes.\n"
"    oacFileGetInfoFailed\n"
;

static PyObject*
oaFile_getSize(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaFile data;
    int convert_status=PyoaFile_Convert(ob,&data);
    assert(convert_status!=0);
    PyoaFileObject* self=(PyoaFileObject*)ob;

    if (PyArg_ParseTuple(args,"")) {
        oaUInt8 result= (data.DataCall()->getSize());
        return PyoaUInt8_FromoaUInt8(result);
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaFile_isNonEmpty_doc[] = 
"Class: oaFile, Function: isNonEmpty\n"
"  Paramegers: ()\n"
"    Calls: oaBoolean isNonEmpty() const\n"
"    Signature: isNonEmpty|simple-oaBoolean|\n"
"    BrowseData: 1\n"
"    This function returns true if this file exists on disk and the size is > 0. This function is provided for efficiency so that the file does not have to be looked up twice.\n"
;

static PyObject*
oaFile_isNonEmpty(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaFile data;
    int convert_status=PyoaFile_Convert(ob,&data);
    assert(convert_status!=0);
    PyoaFileObject* self=(PyoaFileObject*)ob;

    if (PyArg_ParseTuple(args,"")) {
        oaBoolean result= (data.DataCall()->isNonEmpty());
        return PyoaBoolean_FromoaBoolean(result);
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaFile_isOpen_doc[] = 
"Class: oaFile, Function: isOpen\n"
"  Paramegers: ()\n"
"    Calls: oaBoolean isOpen() const\n"
"    Signature: isOpen|simple-oaBoolean|\n"
"    BrowseData: 1\n"
"    This function returns true if this file is open.\n"
;

static PyObject*
oaFile_isOpen(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaFile data;
    int convert_status=PyoaFile_Convert(ob,&data);
    assert(convert_status!=0);
    PyoaFileObject* self=(PyoaFileObject*)ob;

    if (PyArg_ParseTuple(args,"")) {
        oaBoolean result= (data.DataCall()->isOpen());
        return PyoaBoolean_FromoaBoolean(result);
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaFile_open_doc[] = 
"Class: oaFile, Function: open\n"
"  Paramegers: (oaChar)\n"
"    Calls: void open(oaChar modeIn)\n"
"    Signature: open|void-void|simple-oaChar,\n"
"    This function opens this file using the specified access mode.\n"
"    modeIn\n"
"    The mode in which to open the file\n"
"    'r' for read\n"
"    'w' for write\n"
"    'a' for append\n"
"    oacInvalidFileAccessMode\n"
"    oacFileOpenFailed\n"
;

static PyObject*
oaFile_open(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaFile data;
    int convert_status=PyoaFile_Convert(ob,&data);
    assert(convert_status!=0);
    PyoaFileObject* self=(PyoaFileObject*)ob;

    PyParamoaChar p1;
    if (PyArg_ParseTuple(args,"O&",
          &PyoaChar_Convert,&p1)) {
        data.DataCall()->open(p1.Data());
        Py_INCREF(Py_None);
        return Py_None;
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaFile_read_doc[] = 
"Class: oaFile, Function: read\n"
"  Paramegers: ([oaByte])\n"
"    Calls: oaUInt4 read(oaByte* data)\n"
"    Signature: read|simple-oaUInt4|ptr-oaByte,simple-oaUInt4,\n"
"    This function reads data from the file. The file must be open in a readable mode. The function returns the actual number of bytes read, which may be less than the number of bytes requested. An exception will be thrown if any IO error occurs.\n"
"    data\n"
"    The buffer that this function will fill in with the bytes read\n"
"    numBytes\n"
"    The number of bytes requested\n"
"    oacFileReadFailed\n"
;

static PyObject*
oaFile_read(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaFile data;
    int convert_status=PyoaFile_Convert(ob,&data);
    assert(convert_status!=0);
    PyoaFileObject* self=(PyoaFileObject*)ob;

    PyParamoaByte_Array p1;
    if (PyArg_ParseTuple(args,"O&",
          &PyoaByte_Array_Convert,&p1)) {
        oaUInt4 result= (data.DataCall()->read(p1.Data(),p1.Len()));
        return PyoaUInt4_FromoaUInt4(result);
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaFile_write_doc[] = 
"Class: oaFile, Function: write\n"
"  Paramegers: ([oaByte])\n"
"    Calls: oaUInt4 write(oaByte* data)\n"
"    Signature: write|simple-oaUInt4|ptr-oaByte,simple-oaUInt4,\n"
"    This function writes the data to the file. The file must be open in a writable mode. An exception will be thrown if any IO error occurs.\n"
"    data\n"
"    The buffer containing the bytes to be written\n"
"    numBytes\n"
"    The number of bytes to write\n"
"    oacFileWriteFailed\n"
;

static PyObject*
oaFile_write(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaFile data;
    int convert_status=PyoaFile_Convert(ob,&data);
    assert(convert_status!=0);
    PyoaFileObject* self=(PyoaFileObject*)ob;

    PyParamoaByte_Array p1;
    if (PyArg_ParseTuple(args,"O&",
          &PyoaByte_Array_Convert,&p1)) {
        oaUInt4 result= (data.DataCall()->write(p1.Data(),p1.Len()));
        return PyoaUInt4_FromoaUInt4(result);
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

static char oaFile_assign_doc[] = 
"Class: oaFile, Function: set\n"
"  Paramegers: (oaDouble)\n"
"    This function sets the current value.\n"
;

static PyObject*
oaFile_tp_assign(PyObject* ob, PyObject *args)
{
  PyParamoaFile data;
  int convert_status=PyoaFile_Convert(ob,&data);
  assert(convert_status!=0);
  try {
    PyParamoaFile p1;
    if (PyArg_ParseTuple(args,(char*)"O&",
          &PyoaFile_Convert,&p1)) {
        data.Data()=p1.Data();
        Py_INCREF(ob);
        return ob;
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}


// ------------------------------------------------------------------
//  Function Methods Table:
// ------------------------------------------------------------------

static PyMethodDef oaFile_methodlist[] = {
    {"close",(PyCFunction)oaFile_close,METH_VARARGS,oaFile_close_doc},
    {"exists",(PyCFunction)oaFile_exists,METH_VARARGS,oaFile_exists_doc},
    {"flush",(PyCFunction)oaFile_flush,METH_VARARGS,oaFile_flush_doc},
    {"getCreateTime",(PyCFunction)oaFile_getCreateTime,METH_VARARGS,oaFile_getCreateTime_doc},
    {"getLastWriteTime",(PyCFunction)oaFile_getLastWriteTime,METH_VARARGS,oaFile_getLastWriteTime_doc},
    {"getMode",(PyCFunction)oaFile_getMode,METH_VARARGS,oaFile_getMode_doc},
    {"getSize",(PyCFunction)oaFile_getSize,METH_VARARGS,oaFile_getSize_doc},
    {"isNonEmpty",(PyCFunction)oaFile_isNonEmpty,METH_VARARGS,oaFile_isNonEmpty_doc},
    {"isOpen",(PyCFunction)oaFile_isOpen,METH_VARARGS,oaFile_isOpen_doc},
    {"open",(PyCFunction)oaFile_open,METH_VARARGS,oaFile_open_doc},
    {"read",(PyCFunction)oaFile_read,METH_VARARGS,oaFile_read_doc},
    {"write",(PyCFunction)oaFile_write,METH_VARARGS,oaFile_write_doc},
    {"assign",(PyCFunction)oaFile_tp_assign,METH_VARARGS,oaFile_assign_doc},
   {NULL,NULL,0,NULL}
};


// ------------------------------------------------------------------
//  Type Object:
// ------------------------------------------------------------------

// ------------------------------------------------------------------
static char oaFile_doc[] = 
"Class: oaFile\n"
"  The oaFile utility class implements an object for managing a disk file, including functions for getting system information about, locking, and removing a file.\n"
"Constructors:\n"
"  Paramegers: (oaString)\n"
"    Calls: oaFile(const oaString& nameIn)\n"
"    Signature: oaFile||cref-oaString,\n"
"    This function constructs an oaFile object associated with the given file name, but does not open the file.\n"
"    nameIn\n"
"    Path to the file (either a path relative to the current working directory, or an absolute path name).\n"
"  Paramegers: (oaFile)\n"
"    Calls: (const oaFile&)\n"
"    Signature: oaFile||cref-oaFile,\n"
;

// ------------------------------------------------------------------
PyTypeObject PyoaFile_Type = {
    PyObject_HEAD_INIT(&PyType_Type)
    0,
    "oaFile",
    sizeof(PyoaFileObject),
    0,
    (destructor)oaFile_tp_dealloc,	/* tp_dealloc */
    0,	/* tp_print */
    0,					/* tp_getattr */
    0,					/* tp_setattr */
    (cmpfunc)oaFile_tp_compare,	/* tp_compare */
    (reprfunc)oaFile_tp_repr,	/* tp_repr */
    0,					/* tp_as_number */
    0,					/* tp_as_sequence */
    0,					/* tp_as_mapping */
    0,					/* tp_as_hash */
    0,					/* tp_as_call */
    0,					/* tp_str */
    0,					/* tp_getattro */
    0,					/* tp_setattro */
    0,					/* tp_as_buffer */
    Py_TPFLAGS_DEFAULT|Py_TPFLAGS_BASETYPE, /* tp_flags */
    oaFile_doc,	/* tp_doc */
    0,					/* tp_traverse */
    0,					/* tp_clear */
    0,					/* tp_richcompre */
    0,					/* tp_weaklistoffset */
    0,					/* tp_iter */
    0,					/* tp_iternext */
    oaFile_methodlist,	/* tp_methods */
    0,					/* tp_members */
    0,					/* tp_getset */
    &PyoaFSComponent_Type,	/* tp_base */
    0,					/* tp_dict */
    0,					/* tp_descr_get */
    0,					/* tp_descr_set */
    0,					/* tp_dictoffset */
    0,					/* tp_init */
    PyType_GenericAlloc,	/* tp_alloc */
    oaFile_new,	/* tp_new */
    _PyObject_Del,	/* tp_free */
};


// ------------------------------------------------------------------
// Static FunctionMethods:
// ------------------------------------------------------------------

// ------------------------------------------------------------------
static char oaFile_static_copyFile_doc[] = 
"Class: oaFile, Function: copyFile\n"
"  Paramegers: (oaString,oaString)\n"
"    Calls: void copyFile(const oaString& srcPath,const oaString& dstPath)\n"
"    Signature: copyFile|void-void|cref-oaString,cref-oaString,\n"
"    This function copies the source file to the destination file. The source file must be readable, and the destination file must be writable. If the destination file exists, it will be overwritten.\n"
"    srcPath\n"
"    absolute or relative path, including file name, of the source file\n"
"    dstPath\n"
"    absolute or relative path, including file name, of the destination file\n"
"    oacFileCopyFailed\n"
"    oacFileSetAttrFailed\n"
;

static PyObject*
oaFile_static_copyFile(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaString p1;
    PyParamoaString p2;
    if (PyArg_ParseTuple(args,"O&O&",
          &PyoaString_Convert,&p1,
          &PyoaString_Convert,&p2)) {
        oaFile::copyFile(p1.Data(),p2.Data());
        Py_INCREF(Py_None);
        return Py_None;
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static PyMethodDef oaFile_staticmethodlist[] = {
    {"static_copyFile",(PyCFunction)oaFile_static_copyFile,METH_VARARGS,oaFile_static_copyFile_doc},
   {NULL,NULL,0,NULL}
};


// ------------------------------------------------------------------
//  Type Init:
// ------------------------------------------------------------------

int
PyoaFile_TypeInit(PyObject* mod_dict)
{
    if (PyType_Ready(&PyoaFile_Type)<0) {
      printf("** PyType_Ready failed for: oaFile\n");
      return -1;
    }

    if (PyDict_SetItemString(mod_dict,"oaFile",
           (PyObject*)(&PyoaFile_Type))<0) {
       printf("** Failed to add type name to module dictionary for: oaFile\n");
       return -1;
    }

    PyObject *dict, *value;
    PyMethodDef *method;
    dict=PyoaFile_Type.tp_dict;
    for(method=oaFile_staticmethodlist;method->ml_name!=NULL;method++) {
        value=PyCFunction_New(method,NULL);
    if (value==NULL) return -1;
        if (PyDict_SetItemString(dict,method->ml_name,value)!=0) {
        Py_DECREF(value);
            printf("** Failed to add static function to module dictionary for: %s\n",
                method->ml_name);
            return -1;
        }
        Py_DECREF(value);
    }
    return 0;
}


/********************************************************************
 *   Copyright 2002-2008  LSI Corporation
 *
 *   Licensed under the Apache License, Version 2.0 (the "License");
 *   you may not use this file except in compliance with the License.
 *   You may obtain a copy of the License at
 *
 *       http://www.apache.org/licenses/LICENSE-2.0
 *
 *   Unless required by applicable law or agreed to in writing, software
 *   distributed under the License is distributed on an "AS IS" BASIS,
 *   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *   See the License for the specific language governing permissions and
 *   limitations under the License.
 *
 *******************************************************************/

#include "pyoa_header.h"


// ==================================================================
// Wrapper Implementation for Class: oaFloatAppDef_oaAnalysisOpPoint
// ==================================================================


// ==================================================================
// Alloc/Dealloc Routines
// ==================================================================

// ------------------------------------------------------------------
static PyObject*
oaFloatAppDef_oaAnalysisOpPoint_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
  try {
    int is_raw=(type==&PyoaFloatAppDef_oaAnalysisOpPoint_Type);
    PyObject* bself = type->tp_alloc(type,0);
    if (bself == NULL) return bself;
    PyoaFloatAppDef_oaAnalysisOpPointObject* self = (PyoaFloatAppDef_oaAnalysisOpPointObject*)bself;
    self->locks = NULL;
    self->borrow = 0;
    static char *kwlist [] = { NULL } ;
    // Case: (oaFloatAppDef_oaAnalysisOpPoint)
    {
        PyParamoaFloatAppDef_oaAnalysisOpPoint p1;
        if (PyArg_ParseTuple(args,(char*)"O&",
              &PyoaFloatAppDef_oaAnalysisOpPoint_Convert,&p1)) {
            self->data=p1.Data();
            self->value=&(self->data);
            return bself;
        }
    }
    PyErr_Clear();
    // Case: ()
    {
        if (PyArg_ParseTuple(args,(char*)"")) {
          self->data=NULL;
          self->value=&(self->data);
          return bself;
        }
    }
    PyErr_Clear();
    PyErr_SetString(PyExc_TypeError,
        "No Arg-Matching Constructor found for class: oaFloatAppDef_oaAnalysisOpPoint, Choices are:\n"
        "    (oaFloatAppDef_oaAnalysisOpPoint)\n"
    );
    Py_DECREF(self);
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static void
oaFloatAppDef_oaAnalysisOpPoint_tp_dealloc(PyoaFloatAppDef_oaAnalysisOpPointObject* self)
{
    self->ob_type->tp_free((PyObject*)self);
}

// ------------------------------------------------------------------
static PyObject*
oaFloatAppDef_oaAnalysisOpPoint_tp_repr(PyObject *ob)
{
    PyParamoaFloatAppDef_oaAnalysisOpPoint value;
    int convert_status=PyoaFloatAppDef_oaAnalysisOpPoint_Convert(ob,&value);
    assert(convert_status!=0);
    PyObject* result;

    char buffer[53];
    sprintf(buffer,"<oaFloatAppDef_oaAnalysisOpPoint::" DISPLAY_FORMAT ">",POINTER_AS_DISPLAY(value.DataCall()));
    result=PyString_FromString(buffer);
    return result;
}
        
// ------------------------------------------------------------------
static int
oaFloatAppDef_oaAnalysisOpPoint_tp_compare(PyObject *ob1,PyObject* ob2)
{
    PyParamoaFloatAppDef_oaAnalysisOpPoint v1;
    PyParamoaFloatAppDef_oaAnalysisOpPoint v2;
    int convert_status1=PyoaFloatAppDef_oaAnalysisOpPoint_Convert(ob1,&v1);
    int convert_status2=PyoaFloatAppDef_oaAnalysisOpPoint_Convert(ob2,&v2);
    assert(convert_status1!=0);
    assert(convert_status2!=0);
    if (v1.DataCall()==v2.DataCall()) return 0;
    return 1;
}
        
// ------------------------------------------------------------------
int
PyoaFloatAppDef_oaAnalysisOpPoint_Convert(PyObject* ob,PyParamoaFloatAppDef_oaAnalysisOpPoint* result)
{
    if (ob == NULL) return 1;
    if (PyoaFloatAppDef_oaAnalysisOpPoint_Check(ob)) {
        result->SetData( (oaFloatAppDef_oaAnalysisOpPoint**) ((PyoaFloatAppDef_oaAnalysisOpPointObject*)ob)->value);
        return 1;
    }
    PyErr_SetString(PyExc_TypeError,
        "Convertion of parameter to class: oaFloatAppDef_oaAnalysisOpPoint Failed");
    return 0;
}
// ------------------------------------------------------------------
PyObject* PyoaFloatAppDef_oaAnalysisOpPoint_FromoaFloatAppDef_oaAnalysisOpPoint(oaFloatAppDef_oaAnalysisOpPoint** value,int borrow,PyObject* lock)
{
    if (value && *value) {
        oaFloatAppDef_oaAnalysisOpPoint* data=*value;
        PyObject* bself = PyoaFloatAppDef_oaAnalysisOpPoint_Type.tp_alloc(&PyoaFloatAppDef_oaAnalysisOpPoint_Type,0);
        if (bself == NULL) return bself;
        PyoaFloatAppDef_oaAnalysisOpPointObject* self = (PyoaFloatAppDef_oaAnalysisOpPointObject*)bself;
        self->value = (oaObject**) value;
        self->data = NULL;
        self->locks = NULL;
        self->borrow = 0; // Ignore borrow flag, since we copied
       if (lock) PyoaLockObject(self->locks,lock);
        return bself;
    }
    Py_INCREF(Py_None);
    return Py_None;
}
// ------------------------------------------------------------------
PyObject* PyoaFloatAppDef_oaAnalysisOpPoint_FromoaFloatAppDef_oaAnalysisOpPoint(oaFloatAppDef_oaAnalysisOpPoint* data)
{
    if (data) {
       PyObject* bself = PyoaFloatAppDef_oaAnalysisOpPoint_Type.tp_alloc(&PyoaFloatAppDef_oaAnalysisOpPoint_Type,0);
       if (bself == NULL) return bself;
       PyoaFloatAppDef_oaAnalysisOpPointObject* self = (PyoaFloatAppDef_oaAnalysisOpPointObject*)bself;
       self->data = (oaObject*) data;
       self->value = &(self->data);
       self->borrow = 0; 
       self->locks = NULL;
       return bself;
    }
    Py_INCREF(Py_None);
    return Py_None;
}

// ------------------------------------------------------------------
// FunctionMethods:
// ------------------------------------------------------------------

// ------------------------------------------------------------------
static char oaFloatAppDef_oaAnalysisOpPoint_get_doc[] = 
"Class: oaFloatAppDef_oaAnalysisOpPoint, Function: get\n"
"  Paramegers: (oaAnalysisOpPoint)\n"
"    Calls: oaFloat get(const oaAnalysisOpPoint* object)\n"
"    Signature: get|simple-oaFloat|cptr-oaAnalysisOpPoint,\n"
"    This function returns the value of this float extension.\n"
;

static PyObject*
oaFloatAppDef_oaAnalysisOpPoint_get(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaFloatAppDef_oaAnalysisOpPoint data;
    int convert_status=PyoaFloatAppDef_oaAnalysisOpPoint_Convert(ob,&data);
    assert(convert_status!=0);
    PyoaFloatAppDef_oaAnalysisOpPointObject* self=(PyoaFloatAppDef_oaAnalysisOpPointObject*)ob;
    if (!PyValidateDbObject(data.Data(),0)) return NULL;

    PyParamoaAnalysisOpPoint p1;
    if (PyArg_ParseTuple(args,"O&",
          &PyoaAnalysisOpPoint_Convert,&p1)) {
        if (!PyValidateDbObject(p1.Data(),1)) return NULL;
        oaFloat result= (data.DataCall()->get(p1.Data()));
        return PyoaFloat_FromoaFloat(result);
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaFloatAppDef_oaAnalysisOpPoint_getDefault_doc[] = 
"Class: oaFloatAppDef_oaAnalysisOpPoint, Function: getDefault\n"
"  Paramegers: ()\n"
"    Calls: oaFloat getDefault() const\n"
"    Signature: getDefault|simple-oaFloat|\n"
"    BrowseData: 1\n"
"    This function returns the default value for this float extension.\n"
;

static PyObject*
oaFloatAppDef_oaAnalysisOpPoint_getDefault(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaFloatAppDef_oaAnalysisOpPoint data;
    int convert_status=PyoaFloatAppDef_oaAnalysisOpPoint_Convert(ob,&data);
    assert(convert_status!=0);
    PyoaFloatAppDef_oaAnalysisOpPointObject* self=(PyoaFloatAppDef_oaAnalysisOpPointObject*)ob;
    if (!PyValidateDbObject(data.Data(),0)) return NULL;

    if (PyArg_ParseTuple(args,"")) {
        oaFloat result= (data.DataCall()->getDefault());
        return PyoaFloat_FromoaFloat(result);
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaFloatAppDef_oaAnalysisOpPoint_set_doc[] = 
"Class: oaFloatAppDef_oaAnalysisOpPoint, Function: set\n"
"  Paramegers: (oaAnalysisOpPoint,oaFloat)\n"
"    Calls: void set(oaAnalysisOpPoint* object,oaFloat value)\n"
"    Signature: set|void-void|ptr-oaAnalysisOpPoint,simple-oaFloat,\n"
"    This function sets the value of this string extension.\n"
"    oacInvalidDesignObjectForAppDef\n"
;

static PyObject*
oaFloatAppDef_oaAnalysisOpPoint_set(PyObject* ob, PyObject *args)
{
  try {
    PyParamoaFloatAppDef_oaAnalysisOpPoint data;
    int convert_status=PyoaFloatAppDef_oaAnalysisOpPoint_Convert(ob,&data);
    assert(convert_status!=0);
    PyoaFloatAppDef_oaAnalysisOpPointObject* self=(PyoaFloatAppDef_oaAnalysisOpPointObject*)ob;
    if (!PyValidateDbObject(data.Data(),0)) return NULL;

    PyParamoaAnalysisOpPoint p1;
    PyParamoaFloat p2;
    if (PyArg_ParseTuple(args,"O&O&",
          &PyoaAnalysisOpPoint_Convert,&p1,
          &PyoaFloat_Convert,&p2)) {
        if (!PyValidateDbObject(p1.Data(),1)) return NULL;
        data.DataCall()->set(p1.Data(),p2.Data());
        Py_INCREF(Py_None);
        return Py_None;
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaFloatAppDef_oaAnalysisOpPoint_isNull_doc[] =
"Class: oaFloatAppDef_oaAnalysisOpPoint, Function: isNull\n"
"  Parameters: () \n"
"    This functions returns 1 if the DbPointer is NULL, and 0 otherwise.\n"
;

static PyObject*
oaFloatAppDef_oaAnalysisOpPoint_tp_isNull(PyObject* ob, PyObject *args)
{
    PyParamoaFloatAppDef_oaAnalysisOpPoint data;
    int convert_status=PyoaFloatAppDef_oaAnalysisOpPoint_Convert(ob,&data);
    assert(convert_status!=0);
    if (data.DataCall()==NULL)
        return PyInt_FromLong(1);
    else
        return PyInt_FromLong(0);
}
static char oaFloatAppDef_oaAnalysisOpPoint_assign_doc[] = 
"Class: oaFloatAppDef_oaAnalysisOpPoint, Function: set\n"
"  Paramegers: (oaDouble)\n"
"    This function sets the current value.\n"
;

static PyObject*
oaFloatAppDef_oaAnalysisOpPoint_tp_assign(PyObject* ob, PyObject *args)
{
  PyParamoaFloatAppDef_oaAnalysisOpPoint data;
  int convert_status=PyoaFloatAppDef_oaAnalysisOpPoint_Convert(ob,&data);
  assert(convert_status!=0);
  try {
    PyParamoaFloatAppDef_oaAnalysisOpPoint p1;
    if (PyArg_ParseTuple(args,(char*)"O&",
          &PyoaFloatAppDef_oaAnalysisOpPoint_Convert,&p1)) {
        data.Data()=p1.Data();
        Py_INCREF(ob);
        return ob;
    }
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}


// ------------------------------------------------------------------
//  Function Methods Table:
// ------------------------------------------------------------------

static PyMethodDef oaFloatAppDef_oaAnalysisOpPoint_methodlist[] = {
    {"get",(PyCFunction)oaFloatAppDef_oaAnalysisOpPoint_get,METH_VARARGS,oaFloatAppDef_oaAnalysisOpPoint_get_doc},
    {"getDefault",(PyCFunction)oaFloatAppDef_oaAnalysisOpPoint_getDefault,METH_VARARGS,oaFloatAppDef_oaAnalysisOpPoint_getDefault_doc},
    {"set",(PyCFunction)oaFloatAppDef_oaAnalysisOpPoint_set,METH_VARARGS,oaFloatAppDef_oaAnalysisOpPoint_set_doc},
    {"isNull",(PyCFunction)oaFloatAppDef_oaAnalysisOpPoint_tp_isNull,METH_VARARGS,oaFloatAppDef_oaAnalysisOpPoint_isNull_doc},
    {"assign",(PyCFunction)oaFloatAppDef_oaAnalysisOpPoint_tp_assign,METH_VARARGS,oaFloatAppDef_oaAnalysisOpPoint_assign_doc},
   {NULL,NULL,0,NULL}
};


// ------------------------------------------------------------------
//  Type Object:
// ------------------------------------------------------------------

// ------------------------------------------------------------------
static char oaFloatAppDef_oaAnalysisOpPoint_doc[] = 
"Class: oaFloatAppDef_oaAnalysisOpPoint\n"
"  The oaFloatAppDef class implements an application-specific extension to a particular type of data in a database.\n"
"  Once created, a float field is added to each object of the specified dataType. The default value for this extension is FLT_MAX. Applications can use the new field for whatever purpose is necessary.\n"
"  For additional information on defining and using AppDefs, see oaAppDef and Extending the Database in the Programmer's Guide.\n"
"Constructors:\n"
"  Paramegers: (oaFloatAppDef_oaAnalysisOpPoint)\n"
"    Calls: (const oaFloatAppDef_oaAnalysisOpPoint&)\n"
"    Signature: oaFloatAppDef_oaAnalysisOpPoint||cref-oaFloatAppDef_oaAnalysisOpPoint,\n"
;

// ------------------------------------------------------------------
PyTypeObject PyoaFloatAppDef_oaAnalysisOpPoint_Type = {
    PyObject_HEAD_INIT(&PyType_Type)
    0,
    "oaFloatAppDef_oaAnalysisOpPoint",
    sizeof(PyoaFloatAppDef_oaAnalysisOpPointObject),
    0,
    (destructor)oaFloatAppDef_oaAnalysisOpPoint_tp_dealloc,	/* tp_dealloc */
    0,	/* tp_print */
    0,					/* tp_getattr */
    0,					/* tp_setattr */
    (cmpfunc)oaFloatAppDef_oaAnalysisOpPoint_tp_compare,	/* tp_compare */
    (reprfunc)oaFloatAppDef_oaAnalysisOpPoint_tp_repr,	/* tp_repr */
    0,					/* tp_as_number */
    0,					/* tp_as_sequence */
    0,					/* tp_as_mapping */
    0,					/* tp_as_hash */
    0,					/* tp_as_call */
    0,					/* tp_str */
    0,					/* tp_getattro */
    0,					/* tp_setattro */
    0,					/* tp_as_buffer */
    Py_TPFLAGS_DEFAULT|Py_TPFLAGS_BASETYPE, /* tp_flags */
    oaFloatAppDef_oaAnalysisOpPoint_doc,	/* tp_doc */
    0,					/* tp_traverse */
    0,					/* tp_clear */
    0,					/* tp_richcompre */
    0,					/* tp_weaklistoffset */
    0,					/* tp_iter */
    0,					/* tp_iternext */
    oaFloatAppDef_oaAnalysisOpPoint_methodlist,	/* tp_methods */
    0,					/* tp_members */
    0,					/* tp_getset */
    &PyoaAppDef_Type,	/* tp_base */
    0,					/* tp_dict */
    0,					/* tp_descr_get */
    0,					/* tp_descr_set */
    0,					/* tp_dictoffset */
    0,					/* tp_init */
    PyType_GenericAlloc,	/* tp_alloc */
    oaFloatAppDef_oaAnalysisOpPoint_new,	/* tp_new */
    _PyObject_Del,	/* tp_free */
};


// ------------------------------------------------------------------
// Static FunctionMethods:
// ------------------------------------------------------------------

// ------------------------------------------------------------------
static char oaFloatAppDef_oaAnalysisOpPoint_static_find_doc[] = 
"Class: oaFloatAppDef_oaAnalysisOpPoint, Function: find\n"
"  Paramegers: (oaString)\n"
"    Calls: oaFloatAppDef_oaAnalysisOpPoint* find(const oaString& name)\n"
"    Signature: find|ptr-oaFloatAppDef_oaAnalysisOpPoint|cref-oaString,\n"
"    This function returns an oaFloatAppDef object with this dataType and the specified 'name' if it exists.\n"
"    name\n"
"    The name of the oaAppDef object to look for\n"
"  Paramegers: (oaString,oaAppObjectDef)\n"
"    Calls: oaFloatAppDef_oaAnalysisOpPoint* find(const oaString& name,const oaAppObjectDef* objDef)\n"
"    Signature: find|ptr-oaFloatAppDef_oaAnalysisOpPoint|cref-oaString,cptr-oaAppObjectDef,\n"
"    This function returns an oaFloatAppDef object with this dataType and the specified 'name' that is associated with the specified object extension 'objDef'.\n"
"    name\n"
"    The name of the oaAppDef object to look for\n"
"    objDef\n"
"    A constant pointer to the object extension\n"
;

static PyObject*
oaFloatAppDef_oaAnalysisOpPoint_static_find(PyObject* ob, PyObject *args)
{
  try {
    // Case: (oaString)
    {
        PyParamoaString p1;
        if (PyArg_ParseTuple(args,"O&",
              &PyoaString_Convert,&p1)) {
            oaFloatAppDef_oaAnalysisOpPointp result= (oaFloatAppDef_oaAnalysisOpPoint::find(p1.Data()));
            return PyoaFloatAppDef_oaAnalysisOpPoint_FromoaFloatAppDef_oaAnalysisOpPoint(result);
        }
    }
    PyErr_Clear();
    // Case: (oaString,oaAppObjectDef)
    {
        PyParamoaString p1;
        PyParamoaAppObjectDef p2;
        if (PyArg_ParseTuple(args,"O&O&",
              &PyoaString_Convert,&p1,
              &PyoaAppObjectDef_Convert,&p2)) {
            if (!PyValidateDbObject(p2.Data(),2)) return NULL;
            oaFloatAppDef_oaAnalysisOpPointp result= (oaFloatAppDef_oaAnalysisOpPoint::find(p1.Data(),p2.Data()));
            return PyoaFloatAppDef_oaAnalysisOpPoint_FromoaFloatAppDef_oaAnalysisOpPoint(result);
        }
    }
    PyErr_Clear();
    PyErr_SetString(PyExc_TypeError,
        "No Arg-Matching Function found for class: oaFloatAppDef_oaAnalysisOpPoint, function: find, Choices are:\n"
        "    (oaString)\n"
        "    (oaString,oaAppObjectDef)\n"
    );
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static char oaFloatAppDef_oaAnalysisOpPoint_static_get_doc[] = 
"Class: oaFloatAppDef_oaAnalysisOpPoint, Function: get\n"
"  Paramegers: (oaString)\n"
"    Calls: oaFloatAppDef_oaAnalysisOpPoint* get(const oaString& name)\n"
"    Signature: get|ptr-oaFloatAppDef_oaAnalysisOpPoint|cref-oaString,simple-oaFloat,simple-oaBoolean,\n"
"    This function constructs an oaFloatAppDef object, creating a float extension with the specified name . You can create a float extension on any object except another extension.\n"
"    name\n"
"    The name given to the oaFloatAppDef object\n"
"    defValue\n"
"    An optional default value\n"
"    persist\n"
"    Saves the oaFloatAppDef data in the database\n"
"    oacAppDefExists\n"
"  Paramegers: (oaString,oaFloat)\n"
"    Calls: oaFloatAppDef_oaAnalysisOpPoint* get(const oaString& name,oaFloat defValue)\n"
"    Signature: get|ptr-oaFloatAppDef_oaAnalysisOpPoint|cref-oaString,simple-oaFloat,simple-oaBoolean,\n"
"    This function constructs an oaFloatAppDef object, creating a float extension with the specified name . You can create a float extension on any object except another extension.\n"
"    name\n"
"    The name given to the oaFloatAppDef object\n"
"    defValue\n"
"    An optional default value\n"
"    persist\n"
"    Saves the oaFloatAppDef data in the database\n"
"    oacAppDefExists\n"
"  Paramegers: (oaString,oaFloat,oaBoolean)\n"
"    Calls: oaFloatAppDef_oaAnalysisOpPoint* get(const oaString& name,oaFloat defValue,oaBoolean persist)\n"
"    Signature: get|ptr-oaFloatAppDef_oaAnalysisOpPoint|cref-oaString,simple-oaFloat,simple-oaBoolean,\n"
"    This function constructs an oaFloatAppDef object, creating a float extension with the specified name . You can create a float extension on any object except another extension.\n"
"    name\n"
"    The name given to the oaFloatAppDef object\n"
"    defValue\n"
"    An optional default value\n"
"    persist\n"
"    Saves the oaFloatAppDef data in the database\n"
"    oacAppDefExists\n"
"  Paramegers: (oaString,oaAppObjectDef)\n"
"    Calls: oaFloatAppDef_oaAnalysisOpPoint* get(const oaString& name,const oaAppObjectDef* objDef)\n"
"    Signature: get|ptr-oaFloatAppDef_oaAnalysisOpPoint|cref-oaString,cptr-oaAppObjectDef,simple-oaFloat,simple-oaBoolean,\n"
"    This function constructs an oaFloatAppDef object, creating a float extension with the specified name for an object extension.\n"
"    name\n"
"    The name given to the oaFloatAppDef object\n"
"    objDef\n"
"    The object extension with which to associate the extension\n"
"    defValue\n"
"    An optional default value\n"
"    persist\n"
"    Saves the oaFloatAppDef data in the database\n"
"    oacAppDefExists\n"
"  Paramegers: (oaString,oaAppObjectDef,oaFloat)\n"
"    Calls: oaFloatAppDef_oaAnalysisOpPoint* get(const oaString& name,const oaAppObjectDef* objDef,oaFloat defValue)\n"
"    Signature: get|ptr-oaFloatAppDef_oaAnalysisOpPoint|cref-oaString,cptr-oaAppObjectDef,simple-oaFloat,simple-oaBoolean,\n"
"    This function constructs an oaFloatAppDef object, creating a float extension with the specified name for an object extension.\n"
"    name\n"
"    The name given to the oaFloatAppDef object\n"
"    objDef\n"
"    The object extension with which to associate the extension\n"
"    defValue\n"
"    An optional default value\n"
"    persist\n"
"    Saves the oaFloatAppDef data in the database\n"
"    oacAppDefExists\n"
"  Paramegers: (oaString,oaAppObjectDef,oaFloat,oaBoolean)\n"
"    Calls: oaFloatAppDef_oaAnalysisOpPoint* get(const oaString& name,const oaAppObjectDef* objDef,oaFloat defValue,oaBoolean persist)\n"
"    Signature: get|ptr-oaFloatAppDef_oaAnalysisOpPoint|cref-oaString,cptr-oaAppObjectDef,simple-oaFloat,simple-oaBoolean,\n"
"    This function constructs an oaFloatAppDef object, creating a float extension with the specified name for an object extension.\n"
"    name\n"
"    The name given to the oaFloatAppDef object\n"
"    objDef\n"
"    The object extension with which to associate the extension\n"
"    defValue\n"
"    An optional default value\n"
"    persist\n"
"    Saves the oaFloatAppDef data in the database\n"
"    oacAppDefExists\n"
;

static PyObject*
oaFloatAppDef_oaAnalysisOpPoint_static_get(PyObject* ob, PyObject *args)
{
  try {
    // Case: (oaString)
    {
        PyParamoaString p1;
        if (PyArg_ParseTuple(args,"O&",
              &PyoaString_Convert,&p1)) {
            oaFloatAppDef_oaAnalysisOpPointp result= (oaFloatAppDef_oaAnalysisOpPoint::get(p1.Data()));
            return PyoaFloatAppDef_oaAnalysisOpPoint_FromoaFloatAppDef_oaAnalysisOpPoint(result);
        }
    }
    PyErr_Clear();
    // Case: (oaString,oaFloat)
    {
        PyParamoaString p1;
        PyParamoaFloat p2;
        if (PyArg_ParseTuple(args,"O&O&",
              &PyoaString_Convert,&p1,
              &PyoaFloat_Convert,&p2)) {
            oaFloatAppDef_oaAnalysisOpPointp result= (oaFloatAppDef_oaAnalysisOpPoint::get(p1.Data(),p2.Data()));
            return PyoaFloatAppDef_oaAnalysisOpPoint_FromoaFloatAppDef_oaAnalysisOpPoint(result);
        }
    }
    PyErr_Clear();
    // Case: (oaString,oaFloat,oaBoolean)
    {
        PyParamoaString p1;
        PyParamoaFloat p2;
        PyParamoaBoolean p3;
        if (PyArg_ParseTuple(args,"O&O&O&",
              &PyoaString_Convert,&p1,
              &PyoaFloat_Convert,&p2,
              &PyoaBoolean_Convert,&p3)) {
            oaFloatAppDef_oaAnalysisOpPointp result= (oaFloatAppDef_oaAnalysisOpPoint::get(p1.Data(),p2.Data(),p3.Data()));
            return PyoaFloatAppDef_oaAnalysisOpPoint_FromoaFloatAppDef_oaAnalysisOpPoint(result);
        }
    }
    PyErr_Clear();
    // Case: (oaString,oaAppObjectDef)
    {
        PyParamoaString p1;
        PyParamoaAppObjectDef p2;
        if (PyArg_ParseTuple(args,"O&O&",
              &PyoaString_Convert,&p1,
              &PyoaAppObjectDef_Convert,&p2)) {
            if (!PyValidateDbObject(p2.Data(),2)) return NULL;
            oaFloatAppDef_oaAnalysisOpPointp result= (oaFloatAppDef_oaAnalysisOpPoint::get(p1.Data(),p2.Data()));
            return PyoaFloatAppDef_oaAnalysisOpPoint_FromoaFloatAppDef_oaAnalysisOpPoint(result);
        }
    }
    PyErr_Clear();
    // Case: (oaString,oaAppObjectDef,oaFloat)
    {
        PyParamoaString p1;
        PyParamoaAppObjectDef p2;
        PyParamoaFloat p3;
        if (PyArg_ParseTuple(args,"O&O&O&",
              &PyoaString_Convert,&p1,
              &PyoaAppObjectDef_Convert,&p2,
              &PyoaFloat_Convert,&p3)) {
            if (!PyValidateDbObject(p2.Data(),2)) return NULL;
            oaFloatAppDef_oaAnalysisOpPointp result= (oaFloatAppDef_oaAnalysisOpPoint::get(p1.Data(),p2.Data(),p3.Data()));
            return PyoaFloatAppDef_oaAnalysisOpPoint_FromoaFloatAppDef_oaAnalysisOpPoint(result);
        }
    }
    PyErr_Clear();
    // Case: (oaString,oaAppObjectDef,oaFloat,oaBoolean)
    {
        PyParamoaString p1;
        PyParamoaAppObjectDef p2;
        PyParamoaFloat p3;
        PyParamoaBoolean p4;
        if (PyArg_ParseTuple(args,"O&O&O&O&",
              &PyoaString_Convert,&p1,
              &PyoaAppObjectDef_Convert,&p2,
              &PyoaFloat_Convert,&p3,
              &PyoaBoolean_Convert,&p4)) {
            if (!PyValidateDbObject(p2.Data(),2)) return NULL;
            oaFloatAppDef_oaAnalysisOpPointp result= (oaFloatAppDef_oaAnalysisOpPoint::get(p1.Data(),p2.Data(),p3.Data(),p4.Data()));
            return PyoaFloatAppDef_oaAnalysisOpPoint_FromoaFloatAppDef_oaAnalysisOpPoint(result);
        }
    }
    PyErr_Clear();
    PyErr_SetString(PyExc_TypeError,
        "No Arg-Matching Function found for class: oaFloatAppDef_oaAnalysisOpPoint, function: get, Choices are:\n"
        "    (oaString)\n"
        "    (oaString,oaFloat)\n"
        "    (oaString,oaFloat,oaBoolean)\n"
        "    (oaString,oaAppObjectDef)\n"
        "    (oaString,oaAppObjectDef,oaFloat)\n"
        "    (oaString,oaAppObjectDef,oaFloat,oaBoolean)\n"
    );
    return NULL;
  }
  catch (oaException &excp) {
    PyErr_OpenAccess(excp);
    return NULL;
  }
}

// ------------------------------------------------------------------
static PyMethodDef oaFloatAppDef_oaAnalysisOpPoint_staticmethodlist[] = {
    {"static_find",(PyCFunction)oaFloatAppDef_oaAnalysisOpPoint_static_find,METH_VARARGS,oaFloatAppDef_oaAnalysisOpPoint_static_find_doc},
    {"static_get",(PyCFunction)oaFloatAppDef_oaAnalysisOpPoint_static_get,METH_VARARGS,oaFloatAppDef_oaAnalysisOpPoint_static_get_doc},
   {NULL,NULL,0,NULL}
};


// ------------------------------------------------------------------
//  Type Init:
// ------------------------------------------------------------------

int
PyoaFloatAppDef_oaAnalysisOpPoint_TypeInit(PyObject* mod_dict)
{
    if (PyType_Ready(&PyoaFloatAppDef_oaAnalysisOpPoint_Type)<0) {
      printf("** PyType_Ready failed for: oaFloatAppDef_oaAnalysisOpPoint\n");
      return -1;
    }

    if (PyDict_SetItemString(mod_dict,"oaFloatAppDef_oaAnalysisOpPoint",
           (PyObject*)(&PyoaFloatAppDef_oaAnalysisOpPoint_Type))<0) {
       printf("** Failed to add type name to module dictionary for: oaFloatAppDef_oaAnalysisOpPoint\n");
       return -1;
    }

    PyObject *dict, *value;
    PyMethodDef *method;
    dict=PyoaFloatAppDef_oaAnalysisOpPoint_Type.tp_dict;
    for(method=oaFloatAppDef_oaAnalysisOpPoint_staticmethodlist;method->ml_name!=NULL;method++) {
        value=PyCFunction_New(method,NULL);
    if (value==NULL) return -1;
        if (PyDict_SetItemString(dict,method->ml_name,value)!=0) {
        Py_DECREF(value);
            printf("** Failed to add static function to module dictionary for: %s\n",
                method->ml_name);
            return -1;
        }
        Py_DECREF(value);
    }
    return 0;
}
