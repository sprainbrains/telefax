/* SavedState.c generated by valac 0.28.1, the Vala compiler
 * generated from SavedState.vala, do not modify */


#include <glib.h>
#include <glib-object.h>
#include <granite.h>


#define TELEFAX_COMMON_TYPE_SAVED_STATE (telefax_common_saved_state_get_type ())
#define TELEFAX_COMMON_SAVED_STATE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TELEFAX_COMMON_TYPE_SAVED_STATE, TelefaxCommonSavedState))
#define TELEFAX_COMMON_SAVED_STATE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TELEFAX_COMMON_TYPE_SAVED_STATE, TelefaxCommonSavedStateClass))
#define TELEFAX_COMMON_IS_SAVED_STATE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TELEFAX_COMMON_TYPE_SAVED_STATE))
#define TELEFAX_COMMON_IS_SAVED_STATE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TELEFAX_COMMON_TYPE_SAVED_STATE))
#define TELEFAX_COMMON_SAVED_STATE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TELEFAX_COMMON_TYPE_SAVED_STATE, TelefaxCommonSavedStateClass))

typedef struct _TelefaxCommonSavedState TelefaxCommonSavedState;
typedef struct _TelefaxCommonSavedStateClass TelefaxCommonSavedStateClass;
typedef struct _TelefaxCommonSavedStatePrivate TelefaxCommonSavedStatePrivate;

#define TELEFAX_COMMON_TYPE_WINDOW_STATE (telefax_common_window_state_get_type ())
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

struct _TelefaxCommonSavedState {
	GraniteServicesSettings parent_instance;
	TelefaxCommonSavedStatePrivate * priv;
};

struct _TelefaxCommonSavedStateClass {
	GraniteServicesSettingsClass parent_class;
};

typedef enum  {
	TELEFAX_COMMON_WINDOW_STATE_NORMAL,
	TELEFAX_COMMON_WINDOW_STATE_MAXIMIZED,
	TELEFAX_COMMON_WINDOW_STATE_FULLSCREEN
} TelefaxCommonWindowState;

struct _TelefaxCommonSavedStatePrivate {
	gint _window_width;
	gint _window_height;
	TelefaxCommonWindowState _window_state;
};


static gpointer telefax_common_saved_state_parent_class = NULL;
static TelefaxCommonSavedState* telefax_common_saved_state_saved_state;
static TelefaxCommonSavedState* telefax_common_saved_state_saved_state = NULL;

GType telefax_common_saved_state_get_type (void) G_GNUC_CONST;
GType telefax_common_window_state_get_type (void) G_GNUC_CONST;
#define TELEFAX_COMMON_SAVED_STATE_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), TELEFAX_COMMON_TYPE_SAVED_STATE, TelefaxCommonSavedStatePrivate))
enum  {
	TELEFAX_COMMON_SAVED_STATE_DUMMY_PROPERTY,
	TELEFAX_COMMON_SAVED_STATE_WINDOW_WIDTH,
	TELEFAX_COMMON_SAVED_STATE_WINDOW_HEIGHT,
	TELEFAX_COMMON_SAVED_STATE_WINDOW_STATE
};
TelefaxCommonSavedState* telefax_common_saved_state_get_default (void);
static TelefaxCommonSavedState* telefax_common_saved_state_new (void);
static TelefaxCommonSavedState* telefax_common_saved_state_construct (GType object_type);
gint telefax_common_saved_state_get_window_width (TelefaxCommonSavedState* self);
void telefax_common_saved_state_set_window_width (TelefaxCommonSavedState* self, gint value);
gint telefax_common_saved_state_get_window_height (TelefaxCommonSavedState* self);
void telefax_common_saved_state_set_window_height (TelefaxCommonSavedState* self, gint value);
TelefaxCommonWindowState telefax_common_saved_state_get_window_state (TelefaxCommonSavedState* self);
void telefax_common_saved_state_set_window_state (TelefaxCommonSavedState* self, TelefaxCommonWindowState value);
static void telefax_common_saved_state_finalize (GObject* obj);
static void _vala_telefax_common_saved_state_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec);
static void _vala_telefax_common_saved_state_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec);


static gpointer _g_object_ref0 (gpointer self) {
	return self ? g_object_ref (self) : NULL;
}


TelefaxCommonSavedState* telefax_common_saved_state_get_default (void) {
	TelefaxCommonSavedState* result = NULL;
	TelefaxCommonSavedState* _tmp0_ = NULL;
	TelefaxCommonSavedState* _tmp2_ = NULL;
	TelefaxCommonSavedState* _tmp3_ = NULL;
	_tmp0_ = telefax_common_saved_state_saved_state;
	if (_tmp0_ == NULL) {
		TelefaxCommonSavedState* _tmp1_ = NULL;
		_tmp1_ = telefax_common_saved_state_new ();
		_g_object_unref0 (telefax_common_saved_state_saved_state);
		telefax_common_saved_state_saved_state = _tmp1_;
	}
	_tmp2_ = telefax_common_saved_state_saved_state;
	_tmp3_ = _g_object_ref0 (_tmp2_);
	result = _tmp3_;
	return result;
}


static TelefaxCommonSavedState* telefax_common_saved_state_construct (GType object_type) {
	TelefaxCommonSavedState * self = NULL;
	self = (TelefaxCommonSavedState*) granite_services_settings_construct (object_type, "org.pantheon.telefax.saved-state");
	return self;
}


static TelefaxCommonSavedState* telefax_common_saved_state_new (void) {
	return telefax_common_saved_state_construct (TELEFAX_COMMON_TYPE_SAVED_STATE);
}


gint telefax_common_saved_state_get_window_width (TelefaxCommonSavedState* self) {
	gint result;
	gint _tmp0_ = 0;
	g_return_val_if_fail (self != NULL, 0);
	_tmp0_ = self->priv->_window_width;
	result = _tmp0_;
	return result;
}


void telefax_common_saved_state_set_window_width (TelefaxCommonSavedState* self, gint value) {
	gint _tmp0_ = 0;
	g_return_if_fail (self != NULL);
	_tmp0_ = value;
	self->priv->_window_width = _tmp0_;
	g_object_notify ((GObject *) self, "window-width");
}


gint telefax_common_saved_state_get_window_height (TelefaxCommonSavedState* self) {
	gint result;
	gint _tmp0_ = 0;
	g_return_val_if_fail (self != NULL, 0);
	_tmp0_ = self->priv->_window_height;
	result = _tmp0_;
	return result;
}


void telefax_common_saved_state_set_window_height (TelefaxCommonSavedState* self, gint value) {
	gint _tmp0_ = 0;
	g_return_if_fail (self != NULL);
	_tmp0_ = value;
	self->priv->_window_height = _tmp0_;
	g_object_notify ((GObject *) self, "window-height");
}


TelefaxCommonWindowState telefax_common_saved_state_get_window_state (TelefaxCommonSavedState* self) {
	TelefaxCommonWindowState result;
	TelefaxCommonWindowState _tmp0_ = 0;
	g_return_val_if_fail (self != NULL, 0);
	_tmp0_ = self->priv->_window_state;
	result = _tmp0_;
	return result;
}


void telefax_common_saved_state_set_window_state (TelefaxCommonSavedState* self, TelefaxCommonWindowState value) {
	TelefaxCommonWindowState _tmp0_ = 0;
	g_return_if_fail (self != NULL);
	_tmp0_ = value;
	self->priv->_window_state = _tmp0_;
	g_object_notify ((GObject *) self, "window-state");
}


static void telefax_common_saved_state_class_init (TelefaxCommonSavedStateClass * klass) {
	telefax_common_saved_state_parent_class = g_type_class_peek_parent (klass);
	g_type_class_add_private (klass, sizeof (TelefaxCommonSavedStatePrivate));
	G_OBJECT_CLASS (klass)->get_property = _vala_telefax_common_saved_state_get_property;
	G_OBJECT_CLASS (klass)->set_property = _vala_telefax_common_saved_state_set_property;
	G_OBJECT_CLASS (klass)->finalize = telefax_common_saved_state_finalize;
	g_object_class_install_property (G_OBJECT_CLASS (klass), TELEFAX_COMMON_SAVED_STATE_WINDOW_WIDTH, g_param_spec_int ("window-width", "window-width", "window-width", G_MININT, G_MAXINT, 0, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
	g_object_class_install_property (G_OBJECT_CLASS (klass), TELEFAX_COMMON_SAVED_STATE_WINDOW_HEIGHT, g_param_spec_int ("window-height", "window-height", "window-height", G_MININT, G_MAXINT, 0, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
	g_object_class_install_property (G_OBJECT_CLASS (klass), TELEFAX_COMMON_SAVED_STATE_WINDOW_STATE, g_param_spec_enum ("window-state", "window-state", "window-state", TELEFAX_COMMON_TYPE_WINDOW_STATE, 0, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
}


static void telefax_common_saved_state_instance_init (TelefaxCommonSavedState * self) {
	self->priv = TELEFAX_COMMON_SAVED_STATE_GET_PRIVATE (self);
}


static void telefax_common_saved_state_finalize (GObject* obj) {
	TelefaxCommonSavedState * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, TELEFAX_COMMON_TYPE_SAVED_STATE, TelefaxCommonSavedState);
	G_OBJECT_CLASS (telefax_common_saved_state_parent_class)->finalize (obj);
}


GType telefax_common_saved_state_get_type (void) {
	static volatile gsize telefax_common_saved_state_type_id__volatile = 0;
	if (g_once_init_enter (&telefax_common_saved_state_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (TelefaxCommonSavedStateClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) telefax_common_saved_state_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (TelefaxCommonSavedState), 0, (GInstanceInitFunc) telefax_common_saved_state_instance_init, NULL };
		GType telefax_common_saved_state_type_id;
		telefax_common_saved_state_type_id = g_type_register_static (GRANITE_SERVICES_TYPE_SETTINGS, "TelefaxCommonSavedState", &g_define_type_info, 0);
		g_once_init_leave (&telefax_common_saved_state_type_id__volatile, telefax_common_saved_state_type_id);
	}
	return telefax_common_saved_state_type_id__volatile;
}


static void _vala_telefax_common_saved_state_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec) {
	TelefaxCommonSavedState * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, TELEFAX_COMMON_TYPE_SAVED_STATE, TelefaxCommonSavedState);
	switch (property_id) {
		case TELEFAX_COMMON_SAVED_STATE_WINDOW_WIDTH:
		g_value_set_int (value, telefax_common_saved_state_get_window_width (self));
		break;
		case TELEFAX_COMMON_SAVED_STATE_WINDOW_HEIGHT:
		g_value_set_int (value, telefax_common_saved_state_get_window_height (self));
		break;
		case TELEFAX_COMMON_SAVED_STATE_WINDOW_STATE:
		g_value_set_enum (value, telefax_common_saved_state_get_window_state (self));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}


static void _vala_telefax_common_saved_state_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec) {
	TelefaxCommonSavedState * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, TELEFAX_COMMON_TYPE_SAVED_STATE, TelefaxCommonSavedState);
	switch (property_id) {
		case TELEFAX_COMMON_SAVED_STATE_WINDOW_WIDTH:
		telefax_common_saved_state_set_window_width (self, g_value_get_int (value));
		break;
		case TELEFAX_COMMON_SAVED_STATE_WINDOW_HEIGHT:
		telefax_common_saved_state_set_window_height (self, g_value_get_int (value));
		break;
		case TELEFAX_COMMON_SAVED_STATE_WINDOW_STATE:
		telefax_common_saved_state_set_window_state (self, g_value_get_enum (value));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}


GType telefax_common_window_state_get_type (void) {
	static volatile gsize telefax_common_window_state_type_id__volatile = 0;
	if (g_once_init_enter (&telefax_common_window_state_type_id__volatile)) {
		static const GEnumValue values[] = {{TELEFAX_COMMON_WINDOW_STATE_NORMAL, "TELEFAX_COMMON_WINDOW_STATE_NORMAL", "normal"}, {TELEFAX_COMMON_WINDOW_STATE_MAXIMIZED, "TELEFAX_COMMON_WINDOW_STATE_MAXIMIZED", "maximized"}, {TELEFAX_COMMON_WINDOW_STATE_FULLSCREEN, "TELEFAX_COMMON_WINDOW_STATE_FULLSCREEN", "fullscreen"}, {0, NULL, NULL}};
		GType telefax_common_window_state_type_id;
		telefax_common_window_state_type_id = g_enum_register_static ("TelefaxCommonWindowState", values);
		g_once_init_leave (&telefax_common_window_state_type_id__volatile, telefax_common_window_state_type_id);
	}
	return telefax_common_window_state_type_id__volatile;
}



