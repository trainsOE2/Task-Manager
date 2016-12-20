from django.db import models

class Job(models.Model):
    label = models.CharField(max_length = 200)
    date_assigned = models.CharField(max_length = 12)
    due_date = models.CharField(max_length = 12)
    priority_level = models.CharField(max_length = 2)
    status = models.CharField(max_length = 8)

    def __str__(self):
        return self.label+'__'+self.status

class Goal(models.Model):
    identity = models.ForeignKey(Job, on_delete = models.CASCADE)
    illustrate = models.CharField(max_length = 400)

    def __str__(self):
        return self.illustrate



