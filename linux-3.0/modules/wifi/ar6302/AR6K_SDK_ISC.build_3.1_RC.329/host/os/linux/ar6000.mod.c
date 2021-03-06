#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
 .name = KBUILD_MODNAME,
 .init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
 .exit = cleanup_module,
#endif
 .arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xb11e775, "module_layout" },
	{ 0x16efe651, "skb_queue_head" },
	{ 0x6d26bb71, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xf88c3301, "sg_init_table" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0x2b688622, "complete_and_exit" },
	{ 0xfbc74f64, "__copy_from_user" },
	{ 0xaede6cea, "dev_change_flags" },
	{ 0xfdd8457d, "sysfs_remove_bin_file" },
	{ 0x4456513f, "mem_map" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x555e1fba, "mmc_detect_change" },
	{ 0x3ec8886f, "param_ops_int" },
	{ 0x67c2fa54, "__copy_to_user" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xd1671060, "del_timer" },
	{ 0x97255bdf, "strlen" },
	{ 0x89177421, "wake_lock_destroy" },
	{ 0x58b9ccb6, "dev_set_drvdata" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0x454bf58d, "sdio_writesb" },
	{ 0x5ab68df7, "sdio_enable_func" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x2d9cb533, "sdio_claim_irq" },
	{ 0x6556d86c, "eth_change_mtu" },
	{ 0xd4a178de, "mmc_wait_for_cmd" },
	{ 0x9f87d1a3, "netif_carrier_on" },
	{ 0xbed60566, "sub_preempt_count" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xbdf4397f, "skb_copy" },
	{ 0xb0bb9c02, "down_interruptible" },
	{ 0x24d7fc5b, "netif_carrier_off" },
	{ 0x353e3fa5, "__get_user_4" },
	{ 0xdda9e423, "wake_lock" },
	{ 0x97723e02, "filp_close" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x3028e855, "init_timer_key" },
	{ 0x999e8297, "vfree" },
	{ 0x28118cb6, "__get_user_1" },
	{ 0x55b74b46, "wake_unlock" },
	{ 0x3c2c5af5, "sprintf" },
	{ 0x7a9b45d2, "kthread_create_on_node" },
	{ 0x7d11c268, "jiffies" },
	{ 0x71aad278, "skb_trim" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x1732525b, "sunximmc_check_r1_ready" },
	{ 0x810b3618, "param_ops_string" },
	{ 0x6427e2d8, "netif_rx" },
	{ 0xf6288e02, "__init_waitqueue_head" },
	{ 0x6208bc77, "mmc_wait_for_req" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x5baaba0, "wait_for_completion" },
	{ 0xfa2a45e, "__memzero" },
	{ 0xb5eeb329, "register_early_suspend" },
	{ 0x5f754e5a, "memset" },
	{ 0x73b86fe4, "netif_rx_ni" },
	{ 0x3583f1dd, "dev_alloc_skb" },
	{ 0xb86e4ab9, "random32" },
	{ 0x27e1a049, "printk" },
	{ 0x42224298, "sscanf" },
	{ 0x71c90087, "memcmp" },
	{ 0xe52592a, "panic" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0x328a05f1, "strncpy" },
	{ 0xebbe1d21, "register_netdev" },
	{ 0xe6ce03b9, "mmc_set_data_timeout" },
	{ 0x74526fee, "wireless_send_event" },
	{ 0x84b183ae, "strncmp" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xe483e8ab, "skb_push" },
	{ 0x4c6ff041, "add_preempt_count" },
	{ 0x1298ac43, "mod_timer" },
	{ 0xf0f1246c, "kvasprintf" },
	{ 0xc2fa0a8, "platform_driver_register" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0xbae1172d, "skb_pull" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x57525adb, "sdio_readsb" },
	{ 0x23ce93ff, "sdio_unregister_driver" },
	{ 0x70d90d87, "skb_queue_tail" },
	{ 0x3ff62317, "local_bh_disable" },
	{ 0x80f82a09, "kmem_cache_alloc" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0x99d8a28e, "__alloc_skb" },
	{ 0x93fca811, "__get_free_pages" },
	{ 0x18195c80, "sdio_release_irq" },
	{ 0xf045cd70, "wake_lock_timeout" },
	{ 0xd62c833f, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0x2b43f8b, "kfree_skb" },
	{ 0x2aa0e4fc, "strncasecmp" },
	{ 0x8a7d1c31, "high_memory" },
	{ 0x799aca4, "local_bh_enable" },
	{ 0x6a64f14f, "eth_type_trans" },
	{ 0xc27487dd, "__bug" },
	{ 0x78dea7a8, "wake_up_process" },
	{ 0x9df825c9, "ether_setup" },
	{ 0xb9e52429, "__wake_up" },
	{ 0xd723ef9c, "sdio_memcpy_toio" },
	{ 0x9c55cec, "schedule_timeout_interruptible" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xde5d1761, "wake_lock_init" },
	{ 0x75a17bed, "prepare_to_wait" },
	{ 0xf59f197, "param_array_ops" },
	{ 0x10bb624, "sysfs_create_bin_file" },
	{ 0x8cf51d15, "up" },
	{ 0x8893fa5d, "finish_wait" },
	{ 0xb227ae83, "unregister_early_suspend" },
	{ 0xeb0d2f24, "skb_dequeue" },
	{ 0x7af6fcad, "unregister_netdev" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x701d0ebd, "snprintf" },
	{ 0x86f5cf52, "__netif_schedule" },
	{ 0xf39c5744, "sdio_register_driver" },
	{ 0x45700a96, "consume_skb" },
	{ 0x94b68fa4, "sdio_memcpy_fromio" },
	{ 0xdcc6a8ab, "sdio_claim_host" },
	{ 0xb0285735, "platform_driver_unregister" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xac8dec7, "skb_put" },
	{ 0xc3fe87c8, "param_ops_uint" },
	{ 0x6084aa40, "dev_get_drvdata" },
	{ 0x3b81e9f3, "sdio_set_block_size" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x51d45f, "sdio_disable_func" },
	{ 0x2ba7bcb2, "sdio_release_host" },
	{ 0xe914e41e, "strcpy" },
	{ 0x84119e45, "filp_open" },
	{ 0x6048df44, "alloc_etherdev_mqs" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("sdio:c*v0271d0300*");
MODULE_ALIAS("sdio:c*v0271d0301*");
