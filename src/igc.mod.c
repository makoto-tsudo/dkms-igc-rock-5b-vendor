#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/export-internal.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;
BUILD_LTO_INFO;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif


static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x23666d59, "__tracepoint_xdp_exception" },
	{ 0x6e1e2bad, "alloc_etherdev_mqs" },
	{ 0x3ec4f48d, "pci_save_state" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0x56a8944b, "device_set_wakeup_enable" },
	{ 0x3963323e, "pcie_capability_read_word" },
	{ 0xaf579ee7, "__skb_pad" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x58b04ee7, "pcie_capability_write_word" },
	{ 0x3b11c15d, "bpf_prog_put" },
	{ 0x5ef7d643, "skb_copy_bits" },
	{ 0x77d7ffb5, "pci_request_selected_regions" },
	{ 0xc6af4f42, "pci_release_selected_regions" },
	{ 0xaf7be46d, "pci_wake_from_d3" },
	{ 0x36538be7, "skb_put" },
	{ 0xe2d467c4, "gic_pmr_sync" },
	{ 0x961c3ca4, "skb_tstamp_tx" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0xd3b35168, "__napi_alloc_skb" },
	{ 0x86185bdc, "pci_enable_device_mem" },
	{ 0x856fa238, "consume_skb" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0xbb7195a5, "xdp_warn" },
	{ 0x5d2ac3cf, "netif_napi_add_weight" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x85980903, "bpf_warn_invalid_xdp_action" },
	{ 0x7bfd624b, "unregister_netdev" },
	{ 0x592335f1, "xdp_convert_zc_to_xdp_frame" },
	{ 0xda24ef4a, "dma_unmap_page_attrs" },
	{ 0x96848186, "scnprintf" },
	{ 0xf7370f56, "system_state" },
	{ 0xaa2448f6, "__pci_register_driver" },
	{ 0x74241365, "dma_sync_single_for_device" },
	{ 0xedc03953, "iounmap" },
	{ 0xaf56600a, "arm64_use_ng_mappings" },
	{ 0x592385e1, "skb_add_rx_frag" },
	{ 0x5cbae83, "dev_trans_start" },
	{ 0x4dcf619, "pci_disable_msi" },
	{ 0xa8d68dd9, "ptp_clock_index" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0xc0826011, "xdp_do_redirect" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xdf7031e7, "netdev_warn" },
	{ 0x82ee90dc, "timer_delete_sync" },
	{ 0x183b1d32, "pci_set_power_state" },
	{ 0x2aaffa8f, "xdp_rxq_info_unreg_mem_model" },
	{ 0x20e574d3, "__netif_napi_del" },
	{ 0xb537cd72, "__dynamic_dev_dbg" },
	{ 0x5d112304, "__memcpy_fromio" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x842626ba, "pci_unregister_driver" },
	{ 0x467df16d, "netdev_rss_key_fill" },
	{ 0x1e2b5295, "netdev_err" },
	{ 0x5990102e, "pskb_expand_head" },
	{ 0x30ebc1c6, "dev_driver_string" },
	{ 0x85fe8738, "dev_addr_mod" },
	{ 0xdf147524, "xdp_rxq_info_reg_mem_model" },
	{ 0xcdc86b55, "sched_clock" },
	{ 0x1d77190c, "ptp_find_pin" },
	{ 0x7b263016, "eth_type_trans" },
	{ 0xa8e5905b, "dma_map_page_attrs" },
	{ 0xb127d9fc, "napi_complete_done" },
	{ 0x92997ed8, "_printk" },
	{ 0x41aebeac, "pm_schedule_suspend" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0x9246313b, "skb_checksum_help" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x9c1e5bf5, "queued_spin_lock_slowpath" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0xe1e32bcb, "__napi_schedule" },
	{ 0xc02b5285, "pci_enable_msix_range" },
	{ 0x7fa62461, "__alloc_skb" },
	{ 0x78c0069b, "netif_device_detach" },
	{ 0xf09f4aa1, "__free_pages" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x6081d6fc, "_dev_info" },
	{ 0x1d2f1678, "napi_gro_receive" },
	{ 0x187fd804, "netif_device_attach" },
	{ 0x97b2fb43, "pci_select_bars" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x68384364, "eth_get_headlen" },
	{ 0x17ec2f64, "xdp_rxq_info_is_reg" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x89992e, "pci_clear_master" },
	{ 0xf348ff41, "bpf_stats_enabled_key" },
	{ 0x2fd7b81b, "pci_enable_msi" },
	{ 0xbb66e125, "_dev_err" },
	{ 0x8516bd99, "softnet_data" },
	{ 0x7f0cb271, "xdp_return_frame" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x9857e5a7, "ptp_clock_register" },
	{ 0xad6486d9, "__traceiter_xdp_exception" },
	{ 0xd1ff2735, "netif_set_real_num_tx_queues" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x2a27a566, "netif_set_real_num_rx_queues" },
	{ 0x4b1189f2, "netdev_printk" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x233e3a2b, "pci_device_is_present" },
	{ 0x56f59252, "dma_alloc_attrs" },
	{ 0xb711e6c0, "pci_read_config_word" },
	{ 0x38a38ad, "napi_enable" },
	{ 0x365acda7, "set_normalized_timespec64" },
	{ 0x5fd2394e, "register_netdev" },
	{ 0x3b7adf47, "free_netdev" },
	{ 0xa00aca2a, "dql_completed" },
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0x16624d6e, "__cpu_online_mask" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xa404bbb3, "eth_platform_get_mac_address" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xb41bc2a, "pci_iounmap" },
	{ 0xdcfe7735, "netif_tx_stop_all_queues" },
	{ 0x4461eb55, "gic_nonsecure_priorities" },
	{ 0x7d62b540, "pci_restore_state" },
	{ 0x7087ae7e, "netif_tx_wake_queue" },
	{ 0x65929cae, "ns_to_timespec64" },
	{ 0xd25d73f0, "dma_sync_single_for_cpu" },
	{ 0x5338184f, "ethtool_sprintf" },
	{ 0xdcb764ad, "memset" },
	{ 0x40b40a78, "_dev_warn" },
	{ 0x46ae52bc, "ptp_clock_event" },
	{ 0xc555cc3, "netif_schedule_queue" },
	{ 0xd1507f03, "__alloc_pages" },
	{ 0x4aea6d6, "pci_set_master" },
	{ 0x14ab60c7, "ptp_clock_unregister" },
	{ 0xb112e7db, "netif_rx" },
	{ 0xba4b1932, "__netdev_alloc_skb" },
	{ 0xe4b758ef, "__dynamic_netdev_dbg" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x5cdbd8de, "dma_set_coherent_mask" },
	{ 0x8585c58a, "__page_frag_cache_drain" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xeee5fe32, "bpf_master_redirect_enabled_key" },
	{ 0xdd64e639, "strscpy" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0x87e24f08, "dma_free_attrs" },
	{ 0x999e8297, "vfree" },
	{ 0x6f7626eb, "pci_enable_wake" },
	{ 0xf7bb1136, "__pm_runtime_resume" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xa34366ad, "__dev_kfree_skb_any" },
	{ 0x571da554, "pcie_print_link_status" },
	{ 0x3aa68642, "xdp_rxq_info_unreg" },
	{ 0x36f19cff, "napi_build_skb" },
	{ 0xe84ec50d, "__xdp_rxq_info_reg" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x56470118, "__warn_printk" },
	{ 0xef7912b4, "netif_carrier_off" },
	{ 0xa29bafa9, "__hw_addr_sync_dev" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x74be498e, "netif_carrier_on" },
	{ 0x4ea25709, "dql_reset" },
	{ 0x3b814ca, "bpf_dispatcher_xdp_func" },
	{ 0x5dfb29a3, "pci_disable_msix" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xb28bfd38, "pci_disable_device" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0x164e0900, "dma_set_mask" },
	{ 0x2f8c8bad, "kmalloc_trace" },
	{ 0xc3ec9088, "xdp_master_redirect" },
	{ 0x63993db3, "napi_schedule_prep" },
	{ 0x667a4df7, "napi_consume_skb" },
	{ 0xd4216b72, "napi_disable" },
	{ 0x91eb9b4, "round_jiffies" },
	{ 0xc15d87c2, "param_ops_int" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x27a4cf19, "pci_write_config_word" },
	{ 0x40863ba1, "ioremap_prot" },
	{ 0xe79b548b, "skb_clone_tx_timestamp" },
	{ 0xf98ec40, "__pm_runtime_idle" },
	{ 0x862258db, "timecounter_init" },
	{ 0xf9a482f9, "msleep" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xae07a155, "kmalloc_caches" },
	{ 0x34b3e41, "netdev_info" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xb9681621, "xdp_do_flush" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0xe7dc8449, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00008086d000015F2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015F3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015F8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015F7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003100sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003101sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003102sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00005502sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00005503sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000D9Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000125Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000125Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000125Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000125Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000125Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015FDsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "3A417A020DB1F15913692FB");
