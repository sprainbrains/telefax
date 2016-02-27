/* controller.c generated by valac 0.30.0, the Vala compiler
 * generated from controller.vala, do not modify */


#include <glib.h>
#include <glib-object.h>
#include <stdlib.h>
#include <string.h>
#include <gobject/gvaluecollector.h>


#define TELEFAX_COMMON_INTERFACES_TYPE_ICONTROLLER (telefax_common_interfaces_icontroller_get_type ())
#define TELEFAX_COMMON_INTERFACES_ICONTROLLER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TELEFAX_COMMON_INTERFACES_TYPE_ICONTROLLER, telefaxcommoninterfacesIController))
#define TELEFAX_COMMON_INTERFACES_IS_ICONTROLLER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TELEFAX_COMMON_INTERFACES_TYPE_ICONTROLLER))
#define TELEFAX_COMMON_INTERFACES_ICONTROLLER_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), TELEFAX_COMMON_INTERFACES_TYPE_ICONTROLLER, telefaxcommoninterfacesIControllerIface))

typedef struct _telefaxcommoninterfacesIController telefaxcommoninterfacesIController;
typedef struct _telefaxcommoninterfacesIControllerIface telefaxcommoninterfacesIControllerIface;

#define TELEFAX_COMMON_TYPE_BASE_CONTROLLER (telefax_common_base_controller_get_type ())
#define TELEFAX_COMMON_BASE_CONTROLLER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TELEFAX_COMMON_TYPE_BASE_CONTROLLER, telefaxcommonBaseController))
#define TELEFAX_COMMON_BASE_CONTROLLER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TELEFAX_COMMON_TYPE_BASE_CONTROLLER, telefaxcommonBaseControllerClass))
#define TELEFAX_COMMON_IS_BASE_CONTROLLER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TELEFAX_COMMON_TYPE_BASE_CONTROLLER))
#define TELEFAX_COMMON_IS_BASE_CONTROLLER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TELEFAX_COMMON_TYPE_BASE_CONTROLLER))
#define TELEFAX_COMMON_BASE_CONTROLLER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TELEFAX_COMMON_TYPE_BASE_CONTROLLER, telefaxcommonBaseControllerClass))

typedef struct _telefaxcommonBaseController telefaxcommonBaseController;
typedef struct _telefaxcommonBaseControllerClass telefaxcommonBaseControllerClass;
typedef struct _telefaxcommonBaseControllerPrivate telefaxcommonBaseControllerPrivate;
typedef struct _telefaxcommonParamSpecBaseController telefaxcommonParamSpecBaseController;

struct _telefaxcommoninterfacesIControllerIface {
	GTypeInterface parent_iface;
	const gchar* (*get_Guid) (telefaxcommoninterfacesIController* self);
};

struct _telefaxcommonBaseController {
	GTypeInstance parent_instance;
	volatile int ref_count;
	telefaxcommonBaseControllerPrivate * priv;
};

struct _telefaxcommonBaseControllerClass {
	GTypeClass parent_class;
	void (*finalize) (telefaxcommonBaseController *self);
};

struct _telefaxcommonParamSpecBaseController {
	GParamSpec parent_instance;
};


static gpointer telefax_common_base_controller_parent_class = NULL;
static telefaxcommoninterfacesIControllerIface* telefax_common_base_controller_telefax_common_interfaces_icontroller_parent_iface = NULL;

GType telefax_common_interfaces_icontroller_get_type (void) G_GNUC_CONST;
gpointer telefax_common_base_controller_ref (gpointer instance);
void telefax_common_base_controller_unref (gpointer instance);
GParamSpec* telefax_common_param_spec_base_controller (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void telefax_common_value_set_base_controller (GValue* value, gpointer v_object);
void telefax_common_value_take_base_controller (GValue* value, gpointer v_object);
gpointer telefax_common_value_get_base_controller (const GValue* value);
GType telefax_common_base_controller_get_type (void) G_GNUC_CONST;
enum  {
	TELEFAX_COMMON_BASE_CONTROLLER_DUMMY_PROPERTY
};
telefaxcommonBaseController* telefax_common_base_controller_construct (GType object_type);
static void telefax_common_base_controller_finalize (telefaxcommonBaseController* obj);


telefaxcommonBaseController* telefax_common_base_controller_construct (GType object_type) {
	telefaxcommonBaseController* self = NULL;
	self = (telefaxcommonBaseController*) g_type_create_instance (object_type);
	return self;
}


static const gchar* telefax_common_base_controller_real_get_Guid (telefaxcommoninterfacesIController* base) {
	const gchar* result;
	telefaxcommonBaseController* self;
	self = (telefaxcommonBaseController*) base;
	result = "22323";
	return result;
}


static void telefax_common_value_base_controller_init (GValue* value) {
	value->data[0].v_pointer = NULL;
}


static void telefax_common_value_base_controller_free_value (GValue* value) {
	if (value->data[0].v_pointer) {
		telefax_common_base_controller_unref (value->data[0].v_pointer);
	}
}


static void telefax_common_value_base_controller_copy_value (const GValue* src_value, GValue* dest_value) {
	if (src_value->data[0].v_pointer) {
		dest_value->data[0].v_pointer = telefax_common_base_controller_ref (src_value->data[0].v_pointer);
	} else {
		dest_value->data[0].v_pointer = NULL;
	}
}


static gpointer telefax_common_value_base_controller_peek_pointer (const GValue* value) {
	return value->data[0].v_pointer;
}


static gchar* telefax_common_value_base_controller_collect_value (GValue* value, guint n_collect_values, GTypeCValue* collect_values, guint collect_flags) {
	if (collect_values[0].v_pointer) {
		telefaxcommonBaseController* object;
		object = collect_values[0].v_pointer;
		if (object->parent_instance.g_class == NULL) {
			return g_strconcat ("invalid unclassed object pointer for value type `", G_VALUE_TYPE_NAME (value), "'", NULL);
		} else if (!g_value_type_compatible (G_TYPE_FROM_INSTANCE (object), G_VALUE_TYPE (value))) {
			return g_strconcat ("invalid object type `", g_type_name (G_TYPE_FROM_INSTANCE (object)), "' for value type `", G_VALUE_TYPE_NAME (value), "'", NULL);
		}
		value->data[0].v_pointer = telefax_common_base_controller_ref (object);
	} else {
		value->data[0].v_pointer = NULL;
	}
	return NULL;
}


static gchar* telefax_common_value_base_controller_lcopy_value (const GValue* value, guint n_collect_values, GTypeCValue* collect_values, guint collect_flags) {
	telefaxcommonBaseController** object_p;
	object_p = collect_values[0].v_pointer;
	if (!object_p) {
		return g_strdup_printf ("value location for `%s' passed as NULL", G_VALUE_TYPE_NAME (value));
	}
	if (!value->data[0].v_pointer) {
		*object_p = NULL;
	} else if (collect_flags & G_VALUE_NOCOPY_CONTENTS) {
		*object_p = value->data[0].v_pointer;
	} else {
		*object_p = telefax_common_base_controller_ref (value->data[0].v_pointer);
	}
	return NULL;
}


GParamSpec* telefax_common_param_spec_base_controller (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags) {
	telefaxcommonParamSpecBaseController* spec;
	g_return_val_if_fail (g_type_is_a (object_type, TELEFAX_COMMON_TYPE_BASE_CONTROLLER), NULL);
	spec = g_param_spec_internal (G_TYPE_PARAM_OBJECT, name, nick, blurb, flags);
	G_PARAM_SPEC (spec)->value_type = object_type;
	return G_PARAM_SPEC (spec);
}


gpointer telefax_common_value_get_base_controller (const GValue* value) {
	g_return_val_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, TELEFAX_COMMON_TYPE_BASE_CONTROLLER), NULL);
	return value->data[0].v_pointer;
}


void telefax_common_value_set_base_controller (GValue* value, gpointer v_object) {
	telefaxcommonBaseController* old;
	g_return_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, TELEFAX_COMMON_TYPE_BASE_CONTROLLER));
	old = value->data[0].v_pointer;
	if (v_object) {
		g_return_if_fail (G_TYPE_CHECK_INSTANCE_TYPE (v_object, TELEFAX_COMMON_TYPE_BASE_CONTROLLER));
		g_return_if_fail (g_value_type_compatible (G_TYPE_FROM_INSTANCE (v_object), G_VALUE_TYPE (value)));
		value->data[0].v_pointer = v_object;
		telefax_common_base_controller_ref (value->data[0].v_pointer);
	} else {
		value->data[0].v_pointer = NULL;
	}
	if (old) {
		telefax_common_base_controller_unref (old);
	}
}


void telefax_common_value_take_base_controller (GValue* value, gpointer v_object) {
	telefaxcommonBaseController* old;
	g_return_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, TELEFAX_COMMON_TYPE_BASE_CONTROLLER));
	old = value->data[0].v_pointer;
	if (v_object) {
		g_return_if_fail (G_TYPE_CHECK_INSTANCE_TYPE (v_object, TELEFAX_COMMON_TYPE_BASE_CONTROLLER));
		g_return_if_fail (g_value_type_compatible (G_TYPE_FROM_INSTANCE (v_object), G_VALUE_TYPE (value)));
		value->data[0].v_pointer = v_object;
	} else {
		value->data[0].v_pointer = NULL;
	}
	if (old) {
		telefax_common_base_controller_unref (old);
	}
}


static void telefax_common_base_controller_class_init (telefaxcommonBaseControllerClass * klass) {
	telefax_common_base_controller_parent_class = g_type_class_peek_parent (klass);
	((telefaxcommonBaseControllerClass *) klass)->finalize = telefax_common_base_controller_finalize;
}


static void telefax_common_base_controller_telefax_common_interfaces_icontroller_interface_init (telefaxcommoninterfacesIControllerIface * iface) {
	telefax_common_base_controller_telefax_common_interfaces_icontroller_parent_iface = g_type_interface_peek_parent (iface);
	iface->get_Guid = telefax_common_base_controller_real_get_Guid;
}


static void telefax_common_base_controller_instance_init (telefaxcommonBaseController * self) {
	self->ref_count = 1;
}


static void telefax_common_base_controller_finalize (telefaxcommonBaseController* obj) {
	telefaxcommonBaseController * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, TELEFAX_COMMON_TYPE_BASE_CONTROLLER, telefaxcommonBaseController);
	g_signal_handlers_destroy (self);
}


GType telefax_common_base_controller_get_type (void) {
	static volatile gsize telefax_common_base_controller_type_id__volatile = 0;
	if (g_once_init_enter (&telefax_common_base_controller_type_id__volatile)) {
		static const GTypeValueTable g_define_type_value_table = { telefax_common_value_base_controller_init, telefax_common_value_base_controller_free_value, telefax_common_value_base_controller_copy_value, telefax_common_value_base_controller_peek_pointer, "p", telefax_common_value_base_controller_collect_value, "p", telefax_common_value_base_controller_lcopy_value };
		static const GTypeInfo g_define_type_info = { sizeof (telefaxcommonBaseControllerClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) telefax_common_base_controller_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (telefaxcommonBaseController), 0, (GInstanceInitFunc) telefax_common_base_controller_instance_init, &g_define_type_value_table };
		static const GTypeFundamentalInfo g_define_type_fundamental_info = { (G_TYPE_FLAG_CLASSED | G_TYPE_FLAG_INSTANTIATABLE | G_TYPE_FLAG_DERIVABLE | G_TYPE_FLAG_DEEP_DERIVABLE) };
		static const GInterfaceInfo telefax_common_interfaces_icontroller_info = { (GInterfaceInitFunc) telefax_common_base_controller_telefax_common_interfaces_icontroller_interface_init, (GInterfaceFinalizeFunc) NULL, NULL};
		GType telefax_common_base_controller_type_id;
		telefax_common_base_controller_type_id = g_type_register_fundamental (g_type_fundamental_next (), "telefaxcommonBaseController", &g_define_type_info, &g_define_type_fundamental_info, G_TYPE_FLAG_ABSTRACT);
		g_type_add_interface_static (telefax_common_base_controller_type_id, TELEFAX_COMMON_INTERFACES_TYPE_ICONTROLLER, &telefax_common_interfaces_icontroller_info);
		g_once_init_leave (&telefax_common_base_controller_type_id__volatile, telefax_common_base_controller_type_id);
	}
	return telefax_common_base_controller_type_id__volatile;
}


gpointer telefax_common_base_controller_ref (gpointer instance) {
	telefaxcommonBaseController* self;
	self = instance;
	g_atomic_int_inc (&self->ref_count);
	return instance;
}


void telefax_common_base_controller_unref (gpointer instance) {
	telefaxcommonBaseController* self;
	self = instance;
	if (g_atomic_int_dec_and_test (&self->ref_count)) {
		TELEFAX_COMMON_BASE_CONTROLLER_GET_CLASS (self)->finalize (self);
		g_type_free_instance ((GTypeInstance *) self);
	}
}



