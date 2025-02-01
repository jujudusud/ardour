// Generated by gmmproc 2.45.3 -- DO NOT MODIFY!


#include <glibmm.h>

#include <ytkmm/filechooserbutton.h>
#include <ytkmm/private/filechooserbutton_p.h>


// -*- c++ -*-
/* $Id: filechooserbutton.ccg,v 1.2 2005/01/09 12:42:07 murrayc Exp $ */

/*
 *
 * Copyright 2003 The gtkmm Development Team
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

#include <ytk/ytk.h>

namespace Gtk
{

FileChooserButton::FileChooserButton(FileChooserAction action)
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(0),
  Gtk::HBox(Glib::ConstructParams(filechooserbutton_class_.init(), "action",action, static_cast<char*>(0)))
{
}
  

} // namespace Gtk


namespace
{


static const Glib::SignalProxyInfo FileChooserButton_signal_file_set_info =
{
  "file-set",
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback,
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback
};


} // anonymous namespace


namespace Glib
{

Gtk::FileChooserButton* wrap(GtkFileChooserButton* object, bool take_copy)
{
  return dynamic_cast<Gtk::FileChooserButton *> (Glib::wrap_auto ((GObject*)(object), take_copy));
}

} /* namespace Glib */

namespace Gtk
{


/* The *_Class implementation: */

const Glib::Class& FileChooserButton_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &FileChooserButton_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gtk_file_chooser_button_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:
  FileChooser::add_interface(get_type());

  }

  return *this;
}


void FileChooserButton_Class::class_init_function(void* g_class, void* class_data)
{
  BaseClassType *const klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


}


Glib::ObjectBase* FileChooserButton_Class::wrap_new(GObject* o)
{
  return manage(new FileChooserButton((GtkFileChooserButton*)(o)));

}


/* The implementation: */

FileChooserButton::FileChooserButton(const Glib::ConstructParams& construct_params)
:
  Gtk::HBox(construct_params)
{
  }

FileChooserButton::FileChooserButton(GtkFileChooserButton* castitem)
:
  Gtk::HBox((GtkHBox*)(castitem))
{
  }

FileChooserButton::~FileChooserButton()
{
  destroy_();
}

FileChooserButton::CppClassType FileChooserButton::filechooserbutton_class_; // initialize static member

GType FileChooserButton::get_type()
{
  return filechooserbutton_class_.init().get_type();
}


GType FileChooserButton::get_base_type()
{
  return gtk_file_chooser_button_get_type();
}


FileChooserButton::FileChooserButton(const Glib::ustring& title, FileChooserAction action)
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(0),
  Gtk::HBox(Glib::ConstructParams(filechooserbutton_class_.init(), "title", title.c_str(), "action", ((GtkFileChooserAction)(action)), static_cast<char*>(0)))
{
  

}

FileChooserButton::FileChooserButton(const Glib::ustring& title, FileChooserAction action, const Glib::ustring& backend)
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(0),
  Gtk::HBox(Glib::ConstructParams(filechooserbutton_class_.init(), "title", title.c_str(), "action", ((GtkFileChooserAction)(action)), "backend", backend.c_str(), static_cast<char*>(0)))
{
  

}

FileChooserButton::FileChooserButton(FileChooserDialog& dialog)
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(0),
  Gtk::HBox(Glib::ConstructParams(filechooserbutton_class_.init(), "dialog", (dialog).Gtk::Widget::gobj(), static_cast<char*>(0)))
{
  

}

Glib::ustring FileChooserButton::get_title() const
{
  return Glib::convert_const_gchar_ptr_to_ustring(gtk_file_chooser_button_get_title(const_cast<GtkFileChooserButton*>(gobj())));
}

void FileChooserButton::set_title(const Glib::ustring& title)
{
  gtk_file_chooser_button_set_title(gobj(), title.c_str());
}

int FileChooserButton::get_width_chars() const
{
  return gtk_file_chooser_button_get_width_chars(const_cast<GtkFileChooserButton*>(gobj()));
}

void FileChooserButton::set_width_chars(int n_chars)
{
  gtk_file_chooser_button_set_width_chars(gobj(), n_chars);
}

bool FileChooserButton::get_focus_on_click() const
{
  return gtk_file_chooser_button_get_focus_on_click(const_cast<GtkFileChooserButton*>(gobj()));
}

void FileChooserButton::set_focus_on_click(gboolean focus_on_click)
{
  gtk_file_chooser_button_set_focus_on_click(gobj(), focus_on_click);
}


Glib::SignalProxy0< void > FileChooserButton::signal_file_set()
{
  return Glib::SignalProxy0< void >(this, &FileChooserButton_signal_file_set_info);
}


Glib::PropertyProxy< bool > FileChooserButton::property_focus_on_click() 
{
  return Glib::PropertyProxy< bool >(this, "focus-on-click");
}

Glib::PropertyProxy_ReadOnly< bool > FileChooserButton::property_focus_on_click() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "focus-on-click");
}

Glib::PropertyProxy< Glib::ustring > FileChooserButton::property_title() 
{
  return Glib::PropertyProxy< Glib::ustring >(this, "title");
}

Glib::PropertyProxy_ReadOnly< Glib::ustring > FileChooserButton::property_title() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::ustring >(this, "title");
}

Glib::PropertyProxy< int > FileChooserButton::property_width_chars() 
{
  return Glib::PropertyProxy< int >(this, "width-chars");
}

Glib::PropertyProxy_ReadOnly< int > FileChooserButton::property_width_chars() const
{
  return Glib::PropertyProxy_ReadOnly< int >(this, "width-chars");
}


} // namespace Gtk


