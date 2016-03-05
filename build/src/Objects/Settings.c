/* Settings.c generated by valac 0.28.1, the Vala compiler
 * generated from Settings.vala, do not modify */


#include <glib.h>
#include <glib-object.h>
#include <granite.h>


#define TELEFAX_COMMON_TYPE_SETTINGS (telefax_common_settings_get_type ())
#define TELEFAX_COMMON_SETTINGS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TELEFAX_COMMON_TYPE_SETTINGS, TelefaxCommonSettings))
#define TELEFAX_COMMON_SETTINGS_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TELEFAX_COMMON_TYPE_SETTINGS, TelefaxCommonSettingsClass))
#define TELEFAX_COMMON_IS_SETTINGS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TELEFAX_COMMON_TYPE_SETTINGS))
#define TELEFAX_COMMON_IS_SETTINGS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TELEFAX_COMMON_TYPE_SETTINGS))
#define TELEFAX_COMMON_SETTINGS_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TELEFAX_COMMON_TYPE_SETTINGS, TelefaxCommonSettingsClass))

typedef struct _TelefaxCommonSettings TelefaxCommonSettings;
typedef struct _TelefaxCommonSettingsClass TelefaxCommonSettingsClass;
typedef struct _TelefaxCommonSettingsPrivate TelefaxCommonSettingsPrivate;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

struct _TelefaxCommonSettings {
	GraniteServicesSettings parent_instance;
	TelefaxCommonSettingsPrivate * priv;
};

struct _TelefaxCommonSettingsClass {
	GraniteServicesSettingsClass parent_class;
};


static gpointer telefax_common_settings_parent_class = NULL;
static TelefaxCommonSettings* telefax_common_settings_settings;
static TelefaxCommonSettings* telefax_common_settings_settings = NULL;

GType telefax_common_settings_get_type (void) G_GNUC_CONST;
enum  {
	TELEFAX_COMMON_SETTINGS_DUMMY_PROPERTY
};
static TelefaxCommonSettings* telefax_common_settings_new (void);
static TelefaxCommonSettings* telefax_common_settings_construct (GType object_type);
TelefaxCommonSettings* telefax_common_settings_get_default (void);
static void telefax_common_settings_finalize (GObject* obj);


static TelefaxCommonSettings* telefax_common_settings_construct (GType object_type) {
	TelefaxCommonSettings * self = NULL;
	self = (TelefaxCommonSettings*) granite_services_settings_construct (object_type, "org.pantheon.telefax.settings");
	return self;
}


static TelefaxCommonSettings* telefax_common_settings_new (void) {
	return telefax_common_settings_construct (TELEFAX_COMMON_TYPE_SETTINGS);
}


static gpointer _g_object_ref0 (gpointer self) {
	return self ? g_object_ref (self) : NULL;
}


TelefaxCommonSettings* telefax_common_settings_get_default (void) {
	TelefaxCommonSettings* result = NULL;
	TelefaxCommonSettings* _tmp0_ = NULL;
	TelefaxCommonSettings* _tmp2_ = NULL;
	TelefaxCommonSettings* _tmp3_ = NULL;
	_tmp0_ = telefax_common_settings_settings;
	if (_tmp0_ == NULL) {
		TelefaxCommonSettings* _tmp1_ = NULL;
		_tmp1_ = telefax_common_settings_new ();
		_g_object_unref0 (telefax_common_settings_settings);
		telefax_common_settings_settings = _tmp1_;
	}
	_tmp2_ = telefax_common_settings_settings;
	_tmp3_ = _g_object_ref0 (_tmp2_);
	result = _tmp3_;
	return result;
}


static void telefax_common_settings_class_init (TelefaxCommonSettingsClass * klass) {
	telefax_common_settings_parent_class = g_type_class_peek_parent (klass);
	G_OBJECT_CLASS (klass)->finalize = telefax_common_settings_finalize;
}


static void telefax_common_settings_instance_init (TelefaxCommonSettings * self) {
}


static void telefax_common_settings_finalize (GObject* obj) {
	TelefaxCommonSettings * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, TELEFAX_COMMON_TYPE_SETTINGS, TelefaxCommonSettings);
	G_OBJECT_CLASS (telefax_common_settings_parent_class)->finalize (obj);
}


GType telefax_common_settings_get_type (void) {
	static volatile gsize telefax_common_settings_type_id__volatile = 0;
	if (g_once_init_enter (&telefax_common_settings_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (TelefaxCommonSettingsClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) telefax_common_settings_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (TelefaxCommonSettings), 0, (GInstanceInitFunc) telefax_common_settings_instance_init, NULL };
		GType telefax_common_settings_type_id;
		telefax_common_settings_type_id = g_type_register_static (GRANITE_SERVICES_TYPE_SETTINGS, "TelefaxCommonSettings", &g_define_type_info, 0);
		g_once_init_leave (&telefax_common_settings_type_id__volatile, telefax_common_settings_type_id);
	}
	return telefax_common_settings_type_id__volatile;
}



