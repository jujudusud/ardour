// -*- c++ -*-
// Generated by gmmproc 2.45.3 -- DO NOT MODIFY!
#ifndef _GTKMM_TARGETLIST_H
#define _GTKMM_TARGETLIST_H


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

/* Copyright(C) 2002 The gtkmm Development Team
 *
 * This library is free software, ) you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation, ) either
 * version 2.1 of the License, or(at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY, ) without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library, ) if not, write to the Free
 * Software Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */


#include <gtkmm/enums.h>
#include <gtkmm/targetentry.h>
#include <ydkmm/types.h>


namespace Gtk
{

class TargetList
{
  public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  typedef TargetList CppObjectType;
  typedef GtkTargetList BaseObjectType;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


  /** Increment the reference count for this object.
   * You should never need to do this manually - use the object via a RefPtr instead.
   */
  void reference()   const;

  /** Decrement the reference count for this object.
   * You should never need to do this manually - use the object via a RefPtr instead.
   */
  void unreference() const;

  ///Provides access to the underlying C instance.
  GtkTargetList*       gobj();

  ///Provides access to the underlying C instance.
  const GtkTargetList* gobj() const;

  ///Provides access to the underlying C instance. The caller is responsible for unrefing it. Use when directly setting fields in structs.
  GtkTargetList* gobj_copy() const;

protected:
  // Do not derive this.  Gtk::TargetList can neither be constructed nor deleted.
  TargetList();
  void operator delete(void*, std::size_t);

private:
  // noncopyable
  TargetList(const TargetList&);
  TargetList& operator=(const TargetList&);


public:
  static Glib::RefPtr<Gtk::TargetList> create(const ArrayHandle_TargetEntry& targets);
  
 
  /** Appends another target to a Gtk::TargetList.
   * 
   * @param target The interned atom representing the target.
   * @param flags The flags for this target.
   * @param info An ID that will be passed back to the application.
   */
  void add(const Glib::ustring& target, TargetFlags flags =  TargetFlags(0), guint info =  0);
  void add(const ArrayHandle_TargetEntry& targets);
  
  /** Removes a target from a target list.
   * 
   * @param target The interned atom representing the target.
   */
  void remove(const Glib::ustring& target);
  
  /** Looks up a given target in a Gtk::TargetList.
   * 
   * @param target An interned atom representing the target to search for.
   * @param info A pointer to the location to store application info for target,
   * or <tt>0</tt>.
   * @return <tt>true</tt> if the target was found, otherwise <tt>false</tt>.
   */
  bool find(const Glib::ustring& target, guint* info) const;


};

} // namespace Gtk


namespace Glib
{

  /** A Glib::wrap() method for this object.
   * 
   * @param object The C instance.
   * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
   * @result A C++ instance that wraps this C instance.
   *
   * @relates Gtk::TargetList
   */
  Glib::RefPtr<Gtk::TargetList> wrap(GtkTargetList* object, bool take_copy = false);

} // namespace Glib


#endif /* _GTKMM_TARGETLIST_H */

