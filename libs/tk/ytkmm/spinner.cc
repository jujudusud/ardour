// Generated by gmmproc 2.45.3 -- DO NOT MODIFY!


#include <glibmm.h>

#include <ytkmm/spinner.h>
#include <ytkmm/private/spinner_p.h>

#include <ytk/ytk.h>

// -*- c++ -*-

/*
 *
 * Copyright 2009 The gtkmm Development Team
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free
 * Software Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */

namespace
{
} // anonymous namespace


namespace Glib
{

Gtk::Spinner* wrap(GtkSpinner* object, bool take_copy)
{
  return dynamic_cast<Gtk::Spinner *> (Glib::wrap_auto ((GObject*)(object), take_copy));
}

} /* namespace Glib */

namespace Gtk
{


/* The *_Class implementation: */

const Glib::Class& Spinner_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &Spinner_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gtk_spinner_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void Spinner_Class::class_init_function(void* g_class, void* class_data)
{
  BaseClassType *const klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


}


Glib::ObjectBase* Spinner_Class::wrap_new(GObject* o)
{
  return manage(new Spinner((GtkSpinner*)(o)));

}


/* The implementation: */

Spinner::Spinner(const Glib::ConstructParams& construct_params)
:
  Gtk::DrawingArea(construct_params)
{
  }

Spinner::Spinner(GtkSpinner* castitem)
:
  Gtk::DrawingArea((GtkDrawingArea*)(castitem))
{
  }

Spinner::~Spinner()
{
  destroy_();
}

Spinner::CppClassType Spinner::spinner_class_; // initialize static member

GType Spinner::get_type()
{
  return spinner_class_.init().get_type();
}


GType Spinner::get_base_type()
{
  return gtk_spinner_get_type();
}


Spinner::Spinner()
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(0),
  Gtk::DrawingArea(Glib::ConstructParams(spinner_class_.init()))
{
  

}

void Spinner::start()
{
  gtk_spinner_start(gobj());
}

void Spinner::stop()
{
  gtk_spinner_stop(gobj());
}


Glib::PropertyProxy< bool > Spinner::property_active() 
{
  return Glib::PropertyProxy< bool >(this, "active");
}

Glib::PropertyProxy_ReadOnly< bool > Spinner::property_active() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "active");
}


} // namespace Gtk


