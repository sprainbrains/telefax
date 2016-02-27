/* controller_factory.c generated by valac 0.30.0, the Vala compiler
 * generated from controller_factory.vala, do not modify */


#include <glib.h>
#include <glib-object.h>
#include <gee.h>
#include <stdlib.h>
#include <string.h>


#define TELEFAX_COMMON_INTERFACES_TYPE_ICONTROLLER (telefax_common_interfaces_icontroller_get_type ())
#define TELEFAX_COMMON_INTERFACES_ICONTROLLER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TELEFAX_COMMON_INTERFACES_TYPE_ICONTROLLER, telefaxcommoninterfacesIController))
#define TELEFAX_COMMON_INTERFACES_IS_ICONTROLLER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TELEFAX_COMMON_INTERFACES_TYPE_ICONTROLLER))
#define TELEFAX_COMMON_INTERFACES_ICONTROLLER_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), TELEFAX_COMMON_INTERFACES_TYPE_ICONTROLLER, telefaxcommoninterfacesIControllerIface))

typedef struct _telefaxcommoninterfacesIController telefaxcommoninterfacesIController;
typedef struct _telefaxcommoninterfacesIControllerIface telefaxcommoninterfacesIControllerIface;

#define TELEFAX_COMMON_TYPE_CONTROLLER_FACTORY (telefax_common_controller_factory_get_type ())
#define TELEFAX_COMMON_CONTROLLER_FACTORY(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TELEFAX_COMMON_TYPE_CONTROLLER_FACTORY, telefaxcommonControllerFactory))
#define TELEFAX_COMMON_CONTROLLER_FACTORY_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TELEFAX_COMMON_TYPE_CONTROLLER_FACTORY, telefaxcommonControllerFactoryClass))
#define TELEFAX_COMMON_IS_CONTROLLER_FACTORY(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TELEFAX_COMMON_TYPE_CONTROLLER_FACTORY))
#define TELEFAX_COMMON_IS_CONTROLLER_FACTORY_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TELEFAX_COMMON_TYPE_CONTROLLER_FACTORY))
#define TELEFAX_COMMON_CONTROLLER_FACTORY_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TELEFAX_COMMON_TYPE_CONTROLLER_FACTORY, telefaxcommonControllerFactoryClass))

typedef struct _telefaxcommonControllerFactory telefaxcommonControllerFactory;
typedef struct _telefaxcommonControllerFactoryClass telefaxcommonControllerFactoryClass;
typedef struct _telefaxcommonControllerFactoryPrivate telefaxcommonControllerFactoryPrivate;

#define TELEFAX_COMMON_TYPE_BASE_CONTROLLER (telefax_common_base_controller_get_type ())
#define TELEFAX_COMMON_BASE_CONTROLLER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TELEFAX_COMMON_TYPE_BASE_CONTROLLER, telefaxcommonBaseController))
#define TELEFAX_COMMON_BASE_CONTROLLER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TELEFAX_COMMON_TYPE_BASE_CONTROLLER, telefaxcommonBaseControllerClass))
#define TELEFAX_COMMON_IS_BASE_CONTROLLER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TELEFAX_COMMON_TYPE_BASE_CONTROLLER))
#define TELEFAX_COMMON_IS_BASE_CONTROLLER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TELEFAX_COMMON_TYPE_BASE_CONTROLLER))
#define TELEFAX_COMMON_BASE_CONTROLLER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TELEFAX_COMMON_TYPE_BASE_CONTROLLER, telefaxcommonBaseControllerClass))

typedef struct _telefaxcommonBaseController telefaxcommonBaseController;
typedef struct _telefaxcommonBaseControllerClass telefaxcommonBaseControllerClass;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

struct _telefaxcommoninterfacesIControllerIface {
	GTypeInterface parent_iface;
	const gchar* (*get_Guid) (telefaxcommoninterfacesIController* self);
};

struct _telefaxcommonControllerFactory {
	GObject parent_instance;
	telefaxcommonControllerFactoryPrivate * priv;
};

struct _telefaxcommonControllerFactoryClass {
	GObjectClass parent_class;
};


extern GeeArrayList* telefax_common_controllers;
GeeArrayList* telefax_common_controllers = NULL;
static gpointer telefax_common_controller_factory_parent_class = NULL;

GType telefax_common_interfaces_icontroller_get_type (void) G_GNUC_CONST;
GType telefax_common_controller_factory_get_type (void) G_GNUC_CONST;
enum  {
	TELEFAX_COMMON_CONTROLLER_FACTORY_DUMMY_PROPERTY
};
telefaxcommonControllerFactory* telefax_common_controller_factory_new (void);
telefaxcommonControllerFactory* telefax_common_controller_factory_construct (GType object_type);
gpointer telefax_common_base_controller_ref (gpointer instance);
void telefax_common_base_controller_unref (gpointer instance);
GParamSpec* telefax_common_param_spec_base_controller (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void telefax_common_value_set_base_controller (GValue* value, gpointer v_object);
void telefax_common_value_take_base_controller (GValue* value, gpointer v_object);
gpointer telefax_common_value_get_base_controller (const GValue* value);
GType telefax_common_base_controller_get_type (void) G_GNUC_CONST;
gpointer telefax_common_controller_factory_Get (telefaxcommonControllerFactory* self, GType t_type, GBoxedCopyFunc t_dup_func, GDestroyNotify t_destroy_func);


telefaxcommonControllerFactory* telefax_common_controller_factory_construct (GType object_type) {
	telefaxcommonControllerFactory * self = NULL;
	GeeArrayList* _tmp0_ = NULL;
	self = (telefaxcommonControllerFactory*) g_object_new (object_type, NULL);
	_tmp0_ = telefax_common_controllers;
	if (_tmp0_ == NULL) {
		GeeArrayList* _tmp1_ = NULL;
		_tmp1_ = gee_array_list_new (TELEFAX_COMMON_TYPE_BASE_CONTROLLER, (GBoxedCopyFunc) telefax_common_base_controller_ref, telefax_common_base_controller_unref, NULL, NULL, NULL);
		_g_object_unref0 (telefax_common_controllers);
		telefax_common_controllers = _tmp1_;
	}
	return self;
}


telefaxcommonControllerFactory* telefax_common_controller_factory_new (void) {
	return telefax_common_controller_factory_construct (TELEFAX_COMMON_TYPE_CONTROLLER_FACTORY);
}


gpointer telefax_common_controller_factory_Get (telefaxcommonControllerFactory* self, GType t_type, GBoxedCopyFunc t_dup_func, GDestroyNotify t_destroy_func) {
	gpointer result = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	result = NULL;
	return result;
}


static void telefax_common_controller_factory_class_init (telefaxcommonControllerFactoryClass * klass) {
	telefax_common_controller_factory_parent_class = g_type_class_peek_parent (klass);
}


static void telefax_common_controller_factory_instance_init (telefaxcommonControllerFactory * self) {
}


GType telefax_common_controller_factory_get_type (void) {
	static volatile gsize telefax_common_controller_factory_type_id__volatile = 0;
	if (g_once_init_enter (&telefax_common_controller_factory_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (telefaxcommonControllerFactoryClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) telefax_common_controller_factory_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (telefaxcommonControllerFactory), 0, (GInstanceInitFunc) telefax_common_controller_factory_instance_init, NULL };
		GType telefax_common_controller_factory_type_id;
		telefax_common_controller_factory_type_id = g_type_register_static (G_TYPE_OBJECT, "telefaxcommonControllerFactory", &g_define_type_info, 0);
		g_once_init_leave (&telefax_common_controller_factory_type_id__volatile, telefax_common_controller_factory_type_id);
	}
	return telefax_common_controller_factory_type_id__volatile;
}



