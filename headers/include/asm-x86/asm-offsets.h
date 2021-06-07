#ifndef __ASM_OFFSETS_H__
#define __ASM_OFFSETS_H__
/*
 * DO NOT MODIFY.
 *
 * This file was generated by Kbuild
 *
 */

#define IA32_SIGCONTEXT_ax 44 /* offsetof(struct sigcontext, ax)	# */
#define IA32_SIGCONTEXT_bx 32 /* offsetof(struct sigcontext, bx)	# */
#define IA32_SIGCONTEXT_cx 40 /* offsetof(struct sigcontext, cx)	# */
#define IA32_SIGCONTEXT_dx 36 /* offsetof(struct sigcontext, dx)	# */
#define IA32_SIGCONTEXT_si 20 /* offsetof(struct sigcontext, si)	# */
#define IA32_SIGCONTEXT_di 16 /* offsetof(struct sigcontext, di)	# */
#define IA32_SIGCONTEXT_bp 24 /* offsetof(struct sigcontext, bp)	# */
#define IA32_SIGCONTEXT_sp 28 /* offsetof(struct sigcontext, sp)	# */
#define IA32_SIGCONTEXT_ip 56 /* offsetof(struct sigcontext, ip)	# */

#define CPUINFO_x86 0 /* offsetof(struct cpuinfo_x86, x86)	# */
#define CPUINFO_x86_vendor 1 /* offsetof(struct cpuinfo_x86, x86_vendor)	# */
#define CPUINFO_x86_model 2 /* offsetof(struct cpuinfo_x86, x86_model)	# */
#define CPUINFO_x86_mask 3 /* offsetof(struct cpuinfo_x86, x86_mask)	# */
#define CPUINFO_hard_math 6 /* offsetof(struct cpuinfo_x86, hard_math)	# */
#define CPUINFO_cpuid_level 20 /* offsetof(struct cpuinfo_x86, cpuid_level)	# */
#define CPUINFO_x86_capability 24 /* offsetof(struct cpuinfo_x86, x86_capability)	# */
#define CPUINFO_x86_vendor_id 60 /* offsetof(struct cpuinfo_x86, x86_vendor_id)	# */

#define TI_task 0 /* offsetof(struct thread_info, task)	# */
#define TI_exec_domain 4 /* offsetof(struct thread_info, exec_domain)	# */
#define TI_flags 8 /* offsetof(struct thread_info, flags)	# */
#define TI_status 12 /* offsetof(struct thread_info, status)	# */
#define TI_preempt_count 20 /* offsetof(struct thread_info, preempt_count)	# */
#define TI_addr_limit 24 /* offsetof(struct thread_info, addr_limit)	# */
#define TI_restart_block 28 /* offsetof(struct thread_info, restart_block)	# */
#define TI_sysenter_return 60 /* offsetof(struct thread_info, sysenter_return)	# */
#define TI_cpu 16 /* offsetof(struct thread_info, cpu)	# */

#define GDS_size 0 /* offsetof(struct desc_ptr, size)	# */
#define GDS_address 2 /* offsetof(struct desc_ptr, address)	# */

#define PT_EBX 0 /* offsetof(struct pt_regs, bx)	# */
#define PT_ECX 4 /* offsetof(struct pt_regs, cx)	# */
#define PT_EDX 8 /* offsetof(struct pt_regs, dx)	# */
#define PT_ESI 12 /* offsetof(struct pt_regs, si)	# */
#define PT_EDI 16 /* offsetof(struct pt_regs, di)	# */
#define PT_EBP 20 /* offsetof(struct pt_regs, bp)	# */
#define PT_EAX 24 /* offsetof(struct pt_regs, ax)	# */
#define PT_DS 28 /* offsetof(struct pt_regs, ds)	# */
#define PT_ES 32 /* offsetof(struct pt_regs, es)	# */
#define PT_FS 36 /* offsetof(struct pt_regs, fs)	# */
#define PT_GS 40 /* offsetof(struct pt_regs, gs)	# */
#define PT_ORIG_EAX 44 /* offsetof(struct pt_regs, orig_ax)	# */
#define PT_EIP 48 /* offsetof(struct pt_regs, ip)	# */
#define PT_CS 52 /* offsetof(struct pt_regs, cs)	# */
#define PT_EFLAGS 56 /* offsetof(struct pt_regs, flags)	# */
#define PT_OLDESP 60 /* offsetof(struct pt_regs, sp)	# */
#define PT_OLDSS 64 /* offsetof(struct pt_regs, ss)	# */

#define EXEC_DOMAIN_handler 4 /* offsetof(struct exec_domain, handler)	# */
#define IA32_RT_SIGFRAME_sigcontext 164 /* offsetof(struct rt_sigframe, uc.uc_mcontext)	# */

#define pbe_address 0 /* offsetof(struct pbe, address)	# */
#define pbe_orig_address 4 /* offsetof(struct pbe, orig_address)	# */
#define pbe_next 8 /* offsetof(struct pbe, next)	# */
#define TSS_sysenter_sp0 -8572 /* offsetof(struct tss_struct, x86_tss.sp0) - sizeof(struct tss_struct)	# */
#define PAGE_SIZE_asm 4096 /* PAGE_SIZE	# */
#define PAGE_SHIFT_asm 12 /* PAGE_SHIFT	# */
#define PTRS_PER_PTE 1024 /* PTRS_PER_PTE	# */
#define PTRS_PER_PMD 1 /* PTRS_PER_PMD	# */
#define PTRS_PER_PGD 1024 /* PTRS_PER_PGD	# */
#define crypto_tfm_ctx_offset 48 /* offsetof(struct crypto_tfm, __crt_ctx)	# */

#define BP_scratch 484 /* offsetof(struct boot_params, scratch)	# */
#define BP_loadflags 529 /* offsetof(struct boot_params, hdr.loadflags)	# */
#define BP_hardware_subarch 572 /* offsetof(struct boot_params, hdr.hardware_subarch)	# */
#define BP_version 518 /* offsetof(struct boot_params, hdr.version)	# */
#define BP_kernel_alignment 560 /* offsetof(struct boot_params, hdr.kernel_alignment)	# */

#endif
