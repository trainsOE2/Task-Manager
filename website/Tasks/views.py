from django.http import Http404
from django.shortcuts import render, get_object_or_404
from .models import Job, Goal

def index(request):
    all_jobs = Job.objects.all()
    return render(request,'Tasks/index.html', {'all_jobs' : all_jobs})

def detail(request, job_id):
    job = get_object_or_404(Job, pk=job_id)
    return render(request, 'Tasks/detail.html', {'job' : job})

def achieved(request, job_id) :
    job = get_object_or_404(Job, pk=job_id)
    try:
        selected_goal = job.goal_set.get(pk = request.POST['goals'])
    except(KeyError, Goal.DoesNotExist):
        return render(request, 'Tasks/detail.html',{
            'job' : job,
            'error message' : "Invalid choice",
        })
    else:
        selected_goal.achieved = True
        selected_goal.save()
        return render(request, 'Tasks/detail.html', {'job': job})
