
/* This file was generated automatically by Zephir do not modify it! */

#ifndef PHP_SNAILCONTAINER_H
#define PHP_SNAILCONTAINER_H 1

#ifdef PHP_WIN32
#define ZEPHIR_RELEASE 1
#endif

#include "kernel/globals.h"

#define PHP_SNAILCONTAINER_NAME        "snailcontainer"
#define PHP_SNAILCONTAINER_VERSION     "0.0.1"
#define PHP_SNAILCONTAINER_EXTNAME     "snailcontainer"
#define PHP_SNAILCONTAINER_AUTHOR      ""
#define PHP_SNAILCONTAINER_ZEPVERSION  "0.9.4a-dev-7e304ba18c"
#define PHP_SNAILCONTAINER_DESCRIPTION ""



ZEND_BEGIN_MODULE_GLOBALS(snailcontainer)

	int initialized;

	/* Memory */
	zephir_memory_entry *start_memory; /**< The first preallocated frame */
	zephir_memory_entry *end_memory; /**< The last preallocate frame */
	zephir_memory_entry *active_memory; /**< The current memory frame */

	/* Virtual Symbol Tables */
	zephir_symbol_table *active_symbol_table;

	/** Function cache */
	HashTable *fcache;

	zephir_fcall_cache_entry *scache[ZEPHIR_MAX_CACHE_SLOTS];

	/* Cache enabled */
	unsigned int cache_enabled;

	/* Max recursion control */
	unsigned int recursive_lock;

	/* Global constants */
	zval *global_true;
	zval *global_false;
	zval *global_null;
	
ZEND_END_MODULE_GLOBALS(snailcontainer)

#ifdef ZTS
#include "TSRM.h"
#endif

ZEND_EXTERN_MODULE_GLOBALS(snailcontainer)

#ifdef ZTS
	#define ZEPHIR_GLOBAL(v) TSRMG(snailcontainer_globals_id, zend_snailcontainer_globals *, v)
#else
	#define ZEPHIR_GLOBAL(v) (snailcontainer_globals.v)
#endif

#ifdef ZTS
	#define ZEPHIR_VGLOBAL ((zend_snailcontainer_globals *) (*((void ***) tsrm_ls))[TSRM_UNSHUFFLE_RSRC_ID(snailcontainer_globals_id)])
#else
	#define ZEPHIR_VGLOBAL &(snailcontainer_globals)
#endif

#define ZEPHIR_API ZEND_API

#define zephir_globals_def snailcontainer_globals
#define zend_zephir_globals_def zend_snailcontainer_globals

extern zend_module_entry snailcontainer_module_entry;
#define phpext_snailcontainer_ptr &snailcontainer_module_entry

#endif
