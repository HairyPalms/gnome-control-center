
#ifndef __cc_shell_marshal_MARSHAL_H__
#define __cc_shell_marshal_MARSHAL_H__

#include	<glib-object.h>

G_BEGIN_DECLS

/* VOID:STRING,STRING,STRING (cc-shell-marshal.list:1) */
extern void cc_shell_marshal_VOID__STRING_STRING_STRING (GClosure     *closure,
                                                         GValue       *return_value,
                                                         guint         n_param_values,
                                                         const GValue *param_values,
                                                         gpointer      invocation_hint,
                                                         gpointer      marshal_data);

/* VOID:VOID (cc-shell-marshal.list:2) */
#define cc_shell_marshal_VOID__VOID	g_cclosure_marshal_VOID__VOID

G_END_DECLS

#endif /* __cc_shell_marshal_MARSHAL_H__ */

