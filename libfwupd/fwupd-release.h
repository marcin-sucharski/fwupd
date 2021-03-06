/*
 * Copyright (C) 2015-2018 Richard Hughes <richard@hughsie.com>
 *
 * SPDX-License-Identifier: LGPL-2.1+
 */

#pragma once

#include <glib-object.h>

#include "fwupd-enums.h"

G_BEGIN_DECLS

#define FWUPD_TYPE_RELEASE (fwupd_release_get_type ())
G_DECLARE_DERIVABLE_TYPE (FwupdRelease, fwupd_release, FWUPD, RELEASE, GObject)

struct _FwupdReleaseClass
{
	GObjectClass			 parent_class;
	/*< private >*/
	void (*_fwupd_reserved1)	(void);
	void (*_fwupd_reserved2)	(void);
	void (*_fwupd_reserved3)	(void);
	void (*_fwupd_reserved4)	(void);
	void (*_fwupd_reserved5)	(void);
	void (*_fwupd_reserved6)	(void);
	void (*_fwupd_reserved7)	(void);
};

FwupdRelease	*fwupd_release_new			(void);
gchar		*fwupd_release_to_string		(FwupdRelease	*release);

const gchar	*fwupd_release_get_version		(FwupdRelease	*release);
void		 fwupd_release_set_version		(FwupdRelease	*release,
							 const gchar	*version);
const gchar	*fwupd_release_get_uri			(FwupdRelease	*release);
void		 fwupd_release_set_uri			(FwupdRelease	*release,
							 const gchar	*uri);
GPtrArray	*fwupd_release_get_checksums		(FwupdRelease	*release);
void		 fwupd_release_add_checksum		(FwupdRelease	*release,
							 const gchar	*checksum);

GHashTable	*fwupd_release_get_metadata		(FwupdRelease	*release);
void		 fwupd_release_add_metadata		(FwupdRelease	*release,
							 GHashTable	*hash);
void		 fwupd_release_add_metadata_item	(FwupdRelease	*release,
							 const gchar	*key,
							 const gchar	*value);
const gchar	*fwupd_release_get_metadata_item	(FwupdRelease	*release,
							 const gchar	*key);

const gchar	*fwupd_release_get_filename		(FwupdRelease	*release);
void		 fwupd_release_set_filename		(FwupdRelease	*release,
							 const gchar	*filename);
const gchar	*fwupd_release_get_protocol		(FwupdRelease	*release);
void		 fwupd_release_set_protocol		(FwupdRelease	*release,
							 const gchar	*protocol);
const gchar	*fwupd_release_get_appstream_id		(FwupdRelease	*release);
void		 fwupd_release_set_appstream_id		(FwupdRelease	*release,
							 const gchar	*appstream_id);
const gchar	*fwupd_release_get_remote_id		(FwupdRelease	*release);
void		 fwupd_release_set_remote_id		(FwupdRelease	*release,
							 const gchar	*remote_id);
const gchar	*fwupd_release_get_vendor		(FwupdRelease	*release);
void		 fwupd_release_set_vendor		(FwupdRelease	*release,
							 const gchar	*vendor);
const gchar	*fwupd_release_get_name			(FwupdRelease	*release);
void		 fwupd_release_set_name			(FwupdRelease	*release,
							 const gchar	*name);
const gchar	*fwupd_release_get_summary		(FwupdRelease	*release);
void		 fwupd_release_set_summary		(FwupdRelease	*release,
							 const gchar	*summary);
const gchar	*fwupd_release_get_description		(FwupdRelease	*release);
void		 fwupd_release_set_description		(FwupdRelease	*release,
							 const gchar	*description);
const gchar	*fwupd_release_get_homepage		(FwupdRelease	*release);
void		 fwupd_release_set_homepage		(FwupdRelease	*release,
							 const gchar	*homepage);
const gchar	*fwupd_release_get_details_url		(FwupdRelease	*release);
void		 fwupd_release_set_details_url		(FwupdRelease	*release,
							 const gchar	*details_url);
const gchar	*fwupd_release_get_source_url		(FwupdRelease	*release);
void		 fwupd_release_set_source_url		(FwupdRelease	*release,
							 const gchar	*source_url);
guint64		 fwupd_release_get_size			(FwupdRelease	*release);
void		 fwupd_release_set_size			(FwupdRelease	*release,
							 guint64	 size);
const gchar	*fwupd_release_get_license		(FwupdRelease	*release);
void		 fwupd_release_set_license		(FwupdRelease	*release,
							 const gchar	*license);
FwupdTrustFlags	 fwupd_release_get_trust_flags		(FwupdRelease	*release);
void		 fwupd_release_set_trust_flags		(FwupdRelease	*release,
							 FwupdTrustFlags trust_flags);
guint32		 fwupd_release_get_install_duration	(FwupdRelease	*release);
void		 fwupd_release_set_install_duration	(FwupdRelease	*release,
							 guint32	 duration);
const gchar	*fwupd_release_get_update_message	(FwupdRelease	*release);
void		 fwupd_release_set_update_message	(FwupdRelease	*release,
							 const gchar	*update_message);

G_END_DECLS
