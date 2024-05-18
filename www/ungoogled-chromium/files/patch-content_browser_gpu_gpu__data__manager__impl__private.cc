--- content/browser/gpu/gpu_data_manager_impl_private.cc.orig	2023-09-17 07:59:53 UTC
+++ content/browser/gpu/gpu_data_manager_impl_private.cc
@@ -1753,7 +1753,7 @@ void GpuDataManagerImplPrivate::RecordCompositingMode(
   UMA_HISTOGRAM_ENUMERATION("GPU.CompositingMode", compositing_mode);
 }
 
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
 bool GpuDataManagerImplPrivate::IsGpuMemoryBufferNV12Supported() {
   return is_gpu_memory_buffer_NV12_supported_;
 }